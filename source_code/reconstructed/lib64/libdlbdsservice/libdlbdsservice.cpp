/*
 * Reverse-Engineered Source for: libdlbdsservice.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libdlbdsservice"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libdlbdsservice.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(int, dolby::Endpoint, dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpointC2EiNS_8EndpointENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby15ProfileEndpointC2EiNS_8EndpointENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: dolby::DapContext::setProfileEndpoint(dolby::Port, dolby::ProfileEndpoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContext18setProfileEndpointENS_4PortERNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby10DapContext18setProfileEndpointENS_4PortERNS_15ProfileEndpointE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: dolby::TagIterator::parseNodeWithName(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator17parseNodeWithNameERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEERSA_(void) {
    ALOGD("_ZN5dolby11TagIterator17parseNodeWithNameERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEERSA_() called");
    return 0;
}

/* Demangled: dolby::IeqValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14IeqValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby14IeqValueSetter11getNodeNameEv() called");
    return 0;
}

/* Exported Object: dolby::ProfileParameters::kValidParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby17ProfileParameters12kValidParamsE = NULL;

/* Demangled: dolby::DeviceParameters::~DeviceParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParametersD1Ev(void) {
    ALOGD("_ZN5dolby16DeviceParametersD1Ev() called");
    return 0;
}

/* Exported Object: vtable for dolby::AudioOptimizerValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby25AudioOptimizerValueSetterE = NULL;

/* Demangled: dolby::DsManager::~DsManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManagerD0Ev(void) {
    ALOGD("_ZN5dolby9DsManagerD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE = NULL;

/* Demangled: dolby::IeqValueSetter::IeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14IeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby14IeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: dolby::SimpleValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17SimpleValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby17SimpleValueSetter11getNodeNameEv() called");
    return 0;
}

/* Demangled: dolby::VirtualBassValueSetter::VirtualBassValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22VirtualBassValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby22VirtualBassValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: dolby::DsManager::setSelectedTuning(dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby9DsManager17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::isSpeakerPortraitMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService21isSpeakerPortraitModeEv(void) {
    ALOGD("_ZN7android19DolbyManagerService21isSpeakerPortraitModeEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::hasDecCP() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService8hasDecCPEv(void) {
    ALOGD("_ZN7android19DolbyManagerService8hasDecCPEv() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::getIeqPreset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters12getIeqPresetEv(void) {
    ALOGD("_ZN5dolby16DeviceParameters12getIeqPresetEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::setSelectedProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext18setSelectedProfileEi(void) {
    ALOGD("_ZN5dolby9DsContext18setSelectedProfileEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::DsManager(dolby::DapController*, dolby::DsContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManagerC1EPNS_13DapControllerEPNS_9DsContextE(void) {
    ALOGD("_ZN5dolby9DsManagerC1EPNS_13DapControllerEPNS_9DsContextE() called");
    return 0;
}

/* Demangled: dolby::DsManager::DsManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManagerC1Ev(void) {
    ALOGD("_ZN5dolby9DsManagerC1Ev() called");
    return 0;
}

/* Demangled: dolby::DsContext::getSelectedTuning(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext17getSelectedTuningENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsContext17getSelectedTuningENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::DsContext::~DsContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContextD1Ev(void) {
    ALOGD("_ZN5dolby9DsContextD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData12setSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby10DeviceData12setSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::registerObserver(dolby::OnDsContextChange*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable16registerObserverEPNS_17OnDsContextChangeE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable16registerObserverEPNS_17OnDsContextChangeE() called");
    return 0;
}

/* Demangled: dolby::Provider::create(dolby::IeqPreset*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider6createEPNS_9IeqPresetE(void) {
    ALOGD("_ZN5dolby8Provider6createEPNS_9IeqPresetE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: dolby::DeAmountTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeAmountTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby18DeAmountTranslator12getSrcParamsEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::VirtualBassTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby21VirtualBassTranslatorE = NULL;

/* Demangled: dolby::DapContext::setIeqPreset(dolby::Port, dolby::IeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContext12setIeqPresetENS_4PortERNS_9IeqPresetE(void) {
    ALOGD("_ZN5dolby10DapContext12setIeqPresetENS_4PortERNS_9IeqPresetE() called");
    return 0;
}

/* Demangled: dolby::GeqValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14GeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby14GeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::NodeParseUtils::parseDataRow(dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14NodeParseUtils12parseDataRowERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby14NodeParseUtils12parseDataRowERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::SimpleValueSetter::SimpleValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17SimpleValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby17SimpleValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getDialogEnhancerAmount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService23getDialogEnhancerAmountEv(void) {
    ALOGD("_ZN7android19DolbyManagerService23getDialogEnhancerAmountEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::ValueSetter*, std::__1::less<dolby::ValueSetter*>, std::__1::allocator<dolby::ValueSetter*> >::destroy(std::__1::__tree_node<dolby::ValueSetter*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby11ValueSetterENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby11ValueSetterENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::ParameterAdapter::ProfileParameterStrategy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16ParameterAdapter24ProfileParameterStrategyE = NULL;

/* Demangled: android::DolbyManagerService::EventHandler::~EventHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandlerD0Ev(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandlerD0Ev() called");
    return 0;
}

/* Demangled: dolby::OutputModeTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20OutputModeTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby20OutputModeTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::VirtualBassTranslator::VirtualBassTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby21VirtualBassTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby21VirtualBassTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::DsContext::getSelectedTuningDevice(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext23getSelectedTuningDeviceENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsContext23getSelectedTuningDeviceENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryProfileNames(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper17queryProfileNamesERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEES8_(void) {
    ALOGD("_ZN5dolby14DatabaseHelper17queryProfileNamesERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEES8_() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::~DatabaseHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelperD2Ev(void) {
    ALOGD("_ZN5dolby14DatabaseHelperD2Ev() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getFormatVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData16getFormatVersionEv(void) {
    ALOGD("_ZN5dolby10DeviceData16getFormatVersionEv() called");
    return 0;
}

/* Demangled: dolby::SetterCollection::SetterCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16SetterCollectionC1Ev(void) {
    ALOGD("_ZN5dolby16SetterCollectionC1Ev() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::unregisterAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable13unregisterAllEv(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable13unregisterAllEv() called");
    return 0;
}

/* Demangled: dolby::TagIterator::clearAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator8clearAllEv(void) {
    ALOGD("_ZN5dolby11TagIterator8clearAllEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIPN5dolby16ParameterAdapter17ParameterStrategyENS_9allocatorIS4_EEE6assignIPKS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5dolby16ParameterAdapter17ParameterStrategyENS_9allocatorIS4_EEE6assignIPKS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIPN5dolby16ParameterAdapter17ParameterStrategyENS_9allocatorIS4_EEE6assignIPKS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::BassMbdrcTranslator::BassMbdrcTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19BassMbdrcTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby19BassMbdrcTranslatorC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<unsigned long>(unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJmEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJmEEEvDpOT_() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onLoad(dolby::DsContext&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable6onLoadERNS_9DsContextE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable6onLoadERNS_9DsContextE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryIeqValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::IeqPreset*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper13queryIeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9IeqPresetE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper13queryIeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9IeqPresetE() called");
    return 0;
}

/* Demangled: dolby::RowDataValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18RowDataValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby18RowDataValueSetter11getNodeNameEv() called");
    return 0;
}

/* Demangled: dolby::DeAmountTranslator::DeAmountTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeAmountTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby18DeAmountTranslatorC1Ev() called");
    return 0;
}

/* Exported Object: dolby::VirtualBassTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby21VirtualBassTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommand3addENS_12DapParameterEi(void) {
    ALOGD("_ZN5dolby15SetParamCommand3addENS_12DapParameterEi() called");
    return 0;
}

/* Demangled: dolby::Provider::loadProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider11loadProfileEi(void) {
    ALOGD("_ZN5dolby8Provider11loadProfileEi() called");
    return 0;
}

/* Demangled: dolby::Provider::commitTransaction() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider17commitTransactionEv(void) {
    ALOGD("_ZN5dolby8Provider17commitTransactionEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >::__find_equal<dolby::DeviceTuning*>(std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, dolby::DeviceTuning* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_() called");
    return 0;
}

/* Demangled: dolby::DrcRowDataValueSetter::DrcRowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby21DrcRowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby21DrcRowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::getParameterLength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter18getParameterLengthEi(void) {
    ALOGD("_ZN5dolby16ParameterAdapter18getParameterLengthEi() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::getValidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPreset14getValidParamsEv(void) {
    ALOGD("_ZN5dolby9GeqPreset14getValidParamsEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::getNumOfProfiles() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext16getNumOfProfilesEv(void) {
    ALOGD("_ZN5dolby9DsContext16getNumOfProfilesEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::destroy(std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: dolby::VirtualBassSubgainValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby29VirtualBassSubgainValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby29VirtualBassSubgainValueSetter11getNodeNameEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::setParam(audio_devices_t, dolby::DapParameterId, int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService8setParamE15audio_devices_tN5dolby14DapParameterIdEPKij(void) {
    ALOGD("_ZN7android19DolbyManagerService8setParamE15audio_devices_tN5dolby14DapParameterIdEPKij() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::~DolbyManagerService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerServiceD2Ev(void) {
    ALOGD("_ZN7android19DolbyManagerServiceD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::Provider::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider4initEv(void) {
    ALOGD("_ZN5dolby8Provider4initEv() called");
    return 0;
}

/* Exported Object: dolby::ComplexEqualizerTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby26ComplexEqualizerTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::ProfileContext::getId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext5getIdEv(void) {
    ALOGD("_ZN5dolby14ProfileContext5getIdEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::AudioOptimizerTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby24AudioOptimizerTranslatorE = NULL;

/* Demangled: dolby::DatabaseHelper::insertValue(dolby::ProfileEndpoint*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11insertValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11insertValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::beginTransaction() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper16beginTransactionEv(void) {
    ALOGD("_ZN5dolby14DatabaseHelper16beginTransactionEv() called");
    return 0;
}

/* Demangled: dolby::GeqTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13GeqTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby13GeqTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::DapContext::setProfile(dolby::Profile&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContext10setProfileERNS_7ProfileE(void) {
    ALOGD("_ZN5dolby10DapContext10setProfileERNS_7ProfileE() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::loadOemTuningLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager19loadOemTuningLockedEv(void) {
    ALOGD("_ZN5dolby16DsContextManager19loadOemTuningLockedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_() called");
    return 0;
}

/* Demangled: dolby::TagIterator::~TagIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIteratorD1Ev(void) {
    ALOGD("_ZN5dolby11TagIteratorD1Ev() called");
    return 0;
}

/* Exported Object: vtable for dolby::DsManager */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby9DsManagerE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::TagIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIteratorC2Ev(void) {
    ALOGD("_ZN5dolby11TagIteratorC2Ev() called");
    return 0;
}

/* Demangled: dolby::MixMatrixValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20MixMatrixValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby20MixMatrixValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Exported Object: android::Singleton<dolby::DsContextManager>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5dolby16DsContextManagerEE9sInstanceE = NULL;

/* Demangled: dolby::DatabaseHelper::updateSelectedProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper21updateSelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void) {
    ALOGD("_ZN5dolby14DatabaseHelper21updateSelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerValueSetter::AudioOptimizerValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25AudioOptimizerValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby25AudioOptimizerValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: dolby::DsManager::getProfileNameLen(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager17getProfileNameLenEi(void) {
    ALOGD("_ZN5dolby9DsManager17getProfileNameLenEi() called");
    return 0;
}

/* Demangled: dolby::VirtualBassSubgainValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby29VirtualBassSubgainValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby29VirtualBassSubgainValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::DsManager::getDsOn() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager7getDsOnEv(void) {
    ALOGD("_ZN5dolby9DsManager7getDsOnEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandler4stopEv(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandler4stopEv() called");
    return 0;
}

/* Exported Object: vtable for android::DolbyManagerService::EventHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android19DolbyManagerService12EventHandlerE = NULL;

/* Demangled: dolby::ProfileContext::isGeqModified() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext13isGeqModifiedEv(void) {
    ALOGD("_ZN5dolby14ProfileContext13isGeqModifiedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::ProfileContext*, std::__1::less<dolby::ProfileContext*>, std::__1::allocator<dolby::ProfileContext*> >::destroy(std::__1::__tree_node<dolby::ProfileContext*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby14ProfileContextENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby14ProfileContextENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: dolby::Tuning::Tuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6TuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby6TuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Tuning*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11queryTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_6TuningE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11queryTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_6TuningE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::~DeviceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceDataD0Ev(void) {
    ALOGD("_ZN5dolby10DeviceDataD0Ev() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::TuningFileParser(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParserC2ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16TuningFileParserC2ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ProfileGeqParameterStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::getParameter(dolby::DsContext*, int, dolby::Endpoint) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEiNS_8EndpointE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEiNS_8EndpointE() called");
    return 0;
}

/* Demangled: dolby::DsManager::setParameter(int, int, std::__1::vector<int, std::__1::allocator<int> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager12setParameterEiiNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DsManager12setParameterEiiNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::DsContext::setProfileParameter(int, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext19setProfileParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DsContext19setProfileParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::DsContext::load() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext4loadEv(void) {
    ALOGD("_ZN5dolby9DsContext4loadEv() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::getChangedSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Provider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager19getChangedSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE(void) {
    ALOGD("_ZN5dolby16DsContextManager19getChangedSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE() called");
    return 0;
}

/* Demangled: dolby::Provider::reset(dolby::GeqPreset*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider5resetEPNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby8Provider5resetEPNS_9GeqPresetE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getSignature() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData12getSignatureEv(void) {
    ALOGD("_ZN5dolby10DeviceData12getSignatureEv() called");
    return 0;
}

/* Demangled: dolby::DeviceData::DeviceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceDataC1Ev(void) {
    ALOGD("_ZN5dolby10DeviceDataC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::DolbyManagerService::NotificationClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android19DolbyManagerService18NotificationClientE = NULL;

/* Demangled: dolby::DsContext::isSelected(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext10isSelectedEi(void) {
    ALOGD("_ZN5dolby9DsContext10isSelectedEi() called");
    return 0;
}

/* Exported Object: dolby::Provider::kDefaultName */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby8Provider12kDefaultNameE = NULL;

/* Demangled: dolby::DeviceData::getToolVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData14getToolVersionEv(void) {
    ALOGD("_ZN5dolby10DeviceData14getToolVersionEv() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::DeviceTuning(long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuningC1ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void) {
    ALOGD("_ZN5dolby12DeviceTuningC1ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_() called");
    return 0;
}

/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, int, std::initializer_list<std::__1::vector<int, std::__1::allocator<int> >*>) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommand3addENS_12DapParameterEiSt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE(void) {
    ALOGD("_ZN5dolby15SetParamCommand3addENS_12DapParameterEiSt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long>, std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_() called");
    return 0;
}

/* Demangled: dolby::GeqValueSetter::GeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14GeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby14GeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: dolby::VirtualBassValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22VirtualBassValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby22VirtualBassValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandler5startEv(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandler5startEv() called");
    return 0;
}

/* Demangled: dolby::IeqTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13IeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby13IeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DsContextManager>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby16DsContextManagerEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby16DsContextManagerEEC1Ev() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::DsContextManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManagerC1Ev(void) {
    ALOGD("_ZN5dolby16DsContextManagerC1Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::create(dolby::DeviceTuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider6createEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby8Provider6createEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::set<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >, std::__1::allocator<std::__1::set<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_3setIPN5dolby15ProfileEndpointENS_4lessIS4_EENS_9allocatorIS4_EEEENS7_IS9_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_3setIPN5dolby15ProfileEndpointENS_4lessIS4_EENS_9allocatorIS4_EEEENS7_IS9_EEE8__appendEm() called");
    return 0;
}

/* Demangled: dolby::DsManager::createDapEffect(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager15createDapEffectEi(void) {
    ALOGD("_ZN5dolby9DsManager15createDapEffectEi() called");
    return 0;
}

/* Demangled: dolby::GeqTranslator::GeqTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13GeqTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby13GeqTranslatorC2Ev() called");
    return 0;
}

/* Exported Object: dolby::Provider::kOemName */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby8Provider8kOemNameE = NULL;

/* Demangled: dolby::NodeParseUtils::parseValue(dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14NodeParseUtils10parseValueERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby14NodeParseUtils10parseValueERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::RegulatorTuningValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26RegulatorTuningValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby26RegulatorTuningValueSetter11getNodeNameEv() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::TuningFileParser(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParserC1ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16TuningFileParserC1ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Provider::loadProfileEndpoints(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider20loadProfileEndpointsEi(void) {
    ALOGD("_ZN5dolby8Provider20loadProfileEndpointsEi() called");
    return 0;
}

/* Demangled: dolby::DrcRowDataValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby21DrcRowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby21DrcRowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Exported Object: vtable for dolby::Profile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby7ProfileE = NULL;

/* Demangled: dolby::DsContext::getSelectedProfileIeq(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext21getSelectedProfileIeqENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsContext21getSelectedProfileIeqENS_4PortE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService10onFirstRefEv(void) {
    ALOGD("_ZN7android19DolbyManagerService10onFirstRefEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::NotificationClient::~NotificationClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18NotificationClientD0Ev(void) {
    ALOGD("_ZN7android19DolbyManagerService18NotificationClientD0Ev() called");
    return 0;
}

/* Demangled: dolby::DsManager::restoreCurrentProfiles() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager22restoreCurrentProfilesEv(void) {
    ALOGD("_ZN5dolby9DsManager22restoreCurrentProfilesEv() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::setProfile(dolby::Profile&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParameters10setProfileERNS_7ProfileE(void) {
    ALOGD("_ZN5dolby17ProfileParameters10setProfileERNS_7ProfileE() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::setGeqPreset(dolby::GeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParameters12setGeqPresetERNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby17ProfileParameters12setGeqPresetERNS_9GeqPresetE() called");
    return 0;
}

/* Demangled: dolby::SetParamCommand::setDeviceId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommand11setDeviceIdEi(void) {
    ALOGD("_ZN5dolby15SetParamCommand11setDeviceIdEi() called");
    return 0;
}

/* Demangled: dolby::Provider::loadIeqPreset(dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider13loadIeqPresetENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby8Provider13loadIeqPresetENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::isParsed() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser8isParsedEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser8isParsedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::getDefaultXmlFormatVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager26getDefaultXmlFormatVersionEv(void) {
    ALOGD("_ZN5dolby16DsContextManager26getDefaultXmlFormatVersionEv() called");
    return 0;
}

/* Demangled: dolby::Provider::create(dolby::GeqPreset*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider6createEPNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby8Provider6createEPNS_9GeqPresetE() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::~TuningFileParser() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParserD1Ev(void) {
    ALOGD("_ZN5dolby16TuningFileParserD1Ev() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::getProfileId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPreset12getProfileIdEv(void) {
    ALOGD("_ZN5dolby9GeqPreset12getProfileIdEv() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::DeviceParameters(dolby::ParamChangeObserver*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParametersC1EPNS_19ParamChangeObserverE(void) {
    ALOGD("_ZN5dolby16DeviceParametersC1EPNS_19ParamChangeObserverE() called");
    return 0;
}

/* Exported Object: dolby::Provider::kCustomName */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby8Provider11kCustomNameE = NULL;

/* Exported Object: vtable for dolby::Provider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby8ProviderE = NULL;

/* Demangled: dolby::TranslatorCollection::getTranslator(dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20TranslatorCollection13getTranslatorENS_9ParameterE(void) {
    ALOGD("_ZN5dolby20TranslatorCollection13getTranslatorENS_9ParameterE() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::AndroidDevice, std::__1::less<dolby::AndroidDevice>, std::__1::allocator<dolby::AndroidDevice> >::destroy(std::__1::__tree_node<dolby::AndroidDevice, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5dolby13AndroidDeviceENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN5dolby13AndroidDeviceENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::insertValue(dolby::IeqPreset*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11insertValueEPNS_9IeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11insertValueEPNS_9IeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::TuningFileParser() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParserC2Ev(void) {
    ALOGD("_ZN5dolby16TuningFileParserC2Ev() called");
    return 0;
}

/* Demangled: dolby::DsManager::isSpeakerPortraitMode() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager21isSpeakerPortraitModeEv(void) {
    ALOGD("_ZN5dolby9DsManager21isSpeakerPortraitModeEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getProfileName(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService14getProfileNameEi(void) {
    ALOGD("_ZN7android19DolbyManagerService14getProfileNameEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEEE = NULL;

/* Demangled: dolby::DsContextChangeObservable::DsContextChangeObservable() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservableC1Ev(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservableC1Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::updateDapStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper15updateDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5dolby14DatabaseHelper15updateDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: dolby::VirtualBassValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22VirtualBassValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby22VirtualBassValueSetter11getNodeNameEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::unregisterClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService16unregisterClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void) {
    ALOGD("_ZN7android19DolbyManagerService16unregisterClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: dolby::Profile::getValidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile14getValidParamsEv(void) {
    ALOGD("_ZN5dolby7Profile14getValidParamsEv() called");
    return 0;
}

/* Demangled: dolby::DapController::onSelectedProfileParameterChanged(dolby::DsContext&, dolby::Profile&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE(void) {
    ALOGD("_ZN5dolby13DapController33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::OnDsContextChange*, std::__1::less<dolby::OnDsContextChange*>, std::__1::allocator<dolby::OnDsContextChange*> >::destroy(std::__1::__tree_node<dolby::OnDsContextChange*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby17OnDsContextChangeENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby17OnDsContextChangeENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setProfileEndPoints(std::__1::set<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData19setProfileEndPointsERNSt3__13setIPNS_15ProfileEndpointENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN5dolby10DeviceData19setProfileEndPointsERNSt3__13setIPNS_15ProfileEndpointENS1_4lessIS4_EENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::isChildrenValid() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator15isChildrenValidEv(void) {
    ALOGD("_ZN5dolby11TagIterator15isChildrenValidEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::getParameter(dolby::DsContext*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEi(void) {
    ALOGD("_ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEi() called");
    return 0;
}

/* Exported Object: vtable for dolby::DeviceData */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby10DeviceDataE = NULL;

/* Demangled: android::DolbyManagerService::EventHandler::EventHandler(dolby::DsManager*, android::DolbyManagerService*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandlerC1EPN5dolby9DsManagerEPS0_(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandlerC1EPN5dolby9DsManagerEPS0_() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::getId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuning5getIdEv(void) {
    ALOGD("_ZN5dolby12DeviceTuning5getIdEv() called");
    return 0;
}

/* Demangled: dolby::Profile::getId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile5getIdEv(void) {
    ALOGD("_ZN5dolby7Profile5getIdEv() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::unregisterObserver(dolby::OnDsContextChange*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable18unregisterObserverEPNS_17OnDsContextChangeE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable18unregisterObserverEPNS_17OnDsContextChangeE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setFormatVersion(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData16setFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby10DeviceData16setFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Tuning::toString() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning8toStringEv(void) {
    ALOGD("_ZN5dolby6Tuning8toStringEv() called");
    return 0;
}

/* Demangled: dolby::VirtualBassEnableTranslator::VirtualBassEnableTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby27VirtualBassEnableTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby27VirtualBassEnableTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::~Provider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8ProviderD1Ev(void) {
    ALOGD("_ZN5dolby8ProviderD1Ev() called");
    return 0;
}

/* Demangled: dolby::VirtualBassSubgainValueSetter::VirtualBassSubgainValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby29VirtualBassSubgainValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby29VirtualBassSubgainValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getVolumeLevelerAount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService21getVolumeLevelerAountEv(void) {
    ALOGD("_ZN7android19DolbyManagerService21getVolumeLevelerAountEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::DsContext::getProfileParameter(int, dolby::Endpoint, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext19getProfileParameterEiNS_8EndpointENS_9ParameterE(void) {
    ALOGD("_ZN5dolby9DsContext19getProfileParameterEiNS_8EndpointENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::Provider::setDapOn(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider8setDapOnEb(void) {
    ALOGD("_ZN5dolby8Provider8setDapOnEb() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::getProfileId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint12getProfileIdEv(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint12getProfileIdEv() called");
    return 0;
}

/* Exported Object: dolby::DapContext::kPortForDevice */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby10DapContext14kPortForDeviceE = NULL;

/* Demangled: dolby::DapController::~DapController() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapControllerD0Ev(void) {
    ALOGD("_ZN5dolby13DapControllerD0Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::Provider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8ProviderC2Ev(void) {
    ALOGD("_ZN5dolby8ProviderC2Ev() called");
    return 0;
}

/* Demangled: dolby::DapEffect::~DapEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffectD2Ev(void) {
    ALOGD("_ZN5dolby9DapEffectD2Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::insertConfigurationValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper24insertConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void) {
    ALOGD("_ZN5dolby14DatabaseHelper24insertConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: dolby::Provider::loadDefaultProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider18loadDefaultProfileEi(void) {
    ALOGD("_ZN5dolby8Provider18loadDefaultProfileEi() called");
    return 0;
}

/* Demangled: dolby::GeqValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14GeqValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby14GeqValueSetter11getNodeNameEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::setSelectedTuning(dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5dolby9DsContext17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getDapParam(void*, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService11getDapParamEPvjS1_j(void) {
    ALOGD("_ZN7android19DolbyManagerService11getDapParamEPvjS1_j() called");
    return 0;
}

/* Exported Object: vtable for dolby::Tuning */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby6TuningE = NULL;

/* Demangled: dolby::DatabaseHelper::createTable(dolby::TableType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11createTableENS_9TableTypeE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11createTableENS_9TableTypeE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::insertValue(dolby::Tuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11insertValueEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11insertValueEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Provider::isDapOn() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider7isDapOnEv(void) {
    ALOGD("_ZN5dolby8Provider7isDapOnEv() called");
    return 0;
}

/* Demangled: dolby::TagIterator::isElementNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator13isElementNodeEv(void) {
    ALOGD("_ZN5dolby11TagIterator13isElementNodeEv() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::ProfileParameters(dolby::ParamChangeObserver*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParametersC2EPNS_19ParamChangeObserverE(void) {
    ALOGD("_ZN5dolby17ProfileParametersC2EPNS_19ParamChangeObserverE() called");
    return 0;
}

/* Demangled: dolby::DsContext::selectDefaultTuning(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext19selectDefaultTuningENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsContext19selectDefaultTuningENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::DsContext::isProfileGeqModified(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext20isProfileGeqModifiedEi(void) {
    ALOGD("_ZN5dolby9DsContext20isProfileGeqModifiedEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::getSelectedProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager18getSelectedProfileEv(void) {
    ALOGD("_ZN5dolby9DsManager18getSelectedProfileEv() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::getTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters9getTuningEv(void) {
    ALOGD("_ZN5dolby16DeviceParameters9getTuningEv() called");
    return 0;
}

/* Demangled: dolby::RowDataValueSetter::RowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18RowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby18RowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::DatabaseHelper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelperC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelperC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Tuning::getValidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning14getValidParamsEv(void) {
    ALOGD("_ZN5dolby6Tuning14getValidParamsEv() called");
    return 0;
}

/* Exported Object: dolby::Provider::kSignature */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby8Provider10kSignatureE = NULL;

/* Demangled: dolby::ProfileParameters::~ProfileParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParametersD1Ev(void) {
    ALOGD("_ZN5dolby17ProfileParametersD1Ev() called");
    return 0;
}

/* Exported Object: dolby::IeqTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13IeqTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::ParameterTranslator::ParameterTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19ParameterTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby19ParameterTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::DapContext::~DapContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContextD2Ev(void) {
    ALOGD("_ZN5dolby10DapContextD2Ev() called");
    return 0;
}

/* Demangled: dolby::IeqValueSetter::IeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14IeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby14IeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::DeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void) {
    ALOGD("_ZN5dolby12DeviceTuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::setIeqPreset(dolby::IeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters12setIeqPresetERNS_9IeqPresetE(void) {
    ALOGD("_ZN5dolby16DeviceParameters12setIeqPresetERNS_9IeqPresetE() called");
    return 0;
}

/* Demangled: void std::__1::__tree<dolby::Tuning*, std::__1::less<dolby::Tuning*>, std::__1::allocator<dolby::Tuning*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::Tuning*, std::__1::__tree_node<dolby::Tuning*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::Tuning*, std::__1::__tree_node<dolby::Tuning*, void*>*, long>, std::__1::__tree_const_iterator<dolby::Tuning*, std::__1::__tree_node<dolby::Tuning*, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::getProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParameters10getProfileEv(void) {
    ALOGD("_ZN5dolby17ProfileParameters10getProfileEv() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::getGeqPreset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParameters12getGeqPresetEv(void) {
    ALOGD("_ZN5dolby17ProfileParameters12getGeqPresetEv() called");
    return 0;
}

/* Exported Object: dolby::DapContext::kDeviceForPort */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby10DapContext14kDeviceForPortE = NULL;

/* Demangled: dolby::Provider::reset(dolby::ProfileEndpoint*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider5resetEPNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby8Provider5resetEPNS_15ProfileEndpointE() called");
    return 0;
}

/* Exported Object: dolby::DeAmountTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby18DeAmountTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::CustomDRCTranslator::CustomDRCTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19CustomDRCTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby19CustomDRCTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::TranslatorCollection::TranslatorCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20TranslatorCollectionC1Ev(void) {
    ALOGD("_ZN5dolby20TranslatorCollectionC1Ev() called");
    return 0;
}

/* Demangled: dolby::DapEffect::receive(int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffect7receiveEiRNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DapEffect7receiveEiRNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::ParameterAdapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16ParameterAdapterE = NULL;

/* Demangled: dolby::DapController::onDapOnChanged(dolby::DsContext&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController14onDapOnChangedERNS_9DsContextEb(void) {
    ALOGD("_ZN5dolby13DapController14onDapOnChangedERNS_9DsContextEb() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onDapOnChanged(dolby::DsContext&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable14onDapOnChangedERNS_9DsContextEb(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable14onDapOnChangedERNS_9DsContextEb() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryProfileValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Profile*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper17queryProfileValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_7ProfileE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper17queryProfileValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_7ProfileE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::DatabaseHelper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelperC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelperC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Provider::reloadCachedDeviceTunings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider25reloadCachedDeviceTuningsEv(void) {
    ALOGD("_ZN5dolby8Provider25reloadCachedDeviceTuningsEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::getTuningParamDHSA(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager18getTuningParamDHSAENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsManager18getTuningParamDHSAENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::Profile::Profile(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7ProfileC2EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5dolby7ProfileC2EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: dolby::DsManager::saveDsStateAndSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager22saveDsStateAndSettingsEv(void) {
    ALOGD("_ZN5dolby9DsManager22saveDsStateAndSettingsEv() called");
    return 0;
}

/* Demangled: dolby::Tuning::isReadonly() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning10isReadonlyEv(void) {
    ALOGD("_ZN5dolby6Tuning10isReadonlyEv() called");
    return 0;
}

/* Demangled: dolby::SimpleTranslator::SimpleTranslator(dolby::DapParameter, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16SimpleTranslatorC1ENS_12DapParameterENS_9ParameterE(void) {
    ALOGD("_ZN5dolby16SimpleTranslatorC1ENS_12DapParameterENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::getProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext10getProfileEv(void) {
    ALOGD("_ZN5dolby14ProfileContext10getProfileEv() called");
    return 0;
}

/* Demangled: dolby::Provider::loadProfileEndpoint(int, dolby::Endpoint) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider19loadProfileEndpointEiNS_8EndpointE(void) {
    ALOGD("_ZN5dolby8Provider19loadProfileEndpointEiNS_8EndpointE() called");
    return 0;
}

/* Exported Object: dolby::Provider::kDapState */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby8Provider9kDapStateE = NULL;

/* Demangled: dolby::ParameterAdapter::VirtualizerStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter19VirtualizerStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter19VirtualizerStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getDeviceTunings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData16getDeviceTuningsEv(void) {
    ALOGD("_ZN5dolby10DeviceData16getDeviceTuningsEv() called");
    return 0;
}

/* Demangled: dolby::Tuning::getEndpoint() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning11getEndpointEv(void) {
    ALOGD("_ZN5dolby6Tuning11getEndpointEv() called");
    return 0;
}

/* Demangled: dolby::TagIterator::parseNodeIntVector(std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator18parseNodeIntVectorERNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby11TagIterator18parseNodeIntVectorERNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getTuningParamDSA() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService17getTuningParamDSAEv(void) {
    ALOGD("_ZN7android19DolbyManagerService17getTuningParamDSAEv() called");
    return 0;
}

/* Demangled: dolby::DapEffect::sendSharedStore(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffect15sendSharedStoreEPvj(void) {
    ALOGD("_ZN5dolby9DapEffect15sendSharedStoreEPvj() called");
    return 0;
}

/* Demangled: dolby::DsContext::reloadAllProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext16reloadAllProfileEv(void) {
    ALOGD("_ZN5dolby9DsContext16reloadAllProfileEv() called");
    return 0;
}

/* Demangled: dolby::Provider::save(dolby::ProfileEndpoint*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider4saveEPNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby8Provider4saveEPNS_15ProfileEndpointE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getTunings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData10getTuningsEv(void) {
    ALOGD("_ZN5dolby10DeviceData10getTuningsEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<dolby::RowData, std::__1::allocator<dolby::RowData> >::__emplace_back_slow_path<dolby::RowData&>(dolby::RowData&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5dolby7RowDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5dolby7RowDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25AudioOptimizerValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby25AudioOptimizerValueSetter11getNodeNameEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getAvailableTuningDevicesLen(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService28getAvailableTuningDevicesLenEi(void) {
    ALOGD("_ZN7android19DolbyManagerService28getAvailableTuningDevicesLenEi() called");
    return 0;
}

/* Demangled: dolby::Tuning::isMono() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning6isMonoEv(void) {
    ALOGD("_ZN5dolby6Tuning6isMonoEv() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(long, int, dolby::Endpoint, dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpointC2EliNS_8EndpointENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby15ProfileEndpointC2EliNS_8EndpointENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::~DeviceParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParametersD2Ev(void) {
    ALOGD("_ZN5dolby16DeviceParametersD2Ev() called");
    return 0;
}

/* Demangled: dolby::ParameterTranslator::translatePending(dolby::SetParamCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19ParameterTranslator16translatePendingERNS_15SetParamCommandE(void) {
    ALOGD("_ZN5dolby19ParameterTranslator16translatePendingERNS_15SetParamCommandE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertINS_11__wrap_iterIPiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKiEES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertINS_11__wrap_iterIPiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKiEES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6insertINS_11__wrap_iterIPiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKiEES9_S9_() called");
    return 0;
}

/* Demangled: dolby::DsContext::getProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext10getProfileEi(void) {
    ALOGD("_ZN5dolby9DsContext10getProfileEi() called");
    return 0;
}

/* Exported Object: vtable for dolby::DrcRowDataValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby21DrcRowDataValueSetterE = NULL;

/* Demangled: dolby::DsManager::setSelectedProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager18setSelectedProfileEi(void) {
    ALOGD("_ZN5dolby9DsManager18setSelectedProfileEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::~DsManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManagerD1Ev(void) {
    ALOGD("_ZN5dolby9DsManagerD1Ev() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::GeqPreset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPresetC1Ei(void) {
    ALOGD("_ZN5dolby9GeqPresetC1Ei() called");
    return 0;
}

/* Demangled: dolby::Provider::loadGeqPreset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider13loadGeqPresetEi(void) {
    ALOGD("_ZN5dolby8Provider13loadGeqPresetEi() called");
    return 0;
}

/* Exported Object: dolby::Provider::kFormatVersion */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby8Provider14kFormatVersionE = NULL;

/* Demangled: void std::__1::__tree<dolby::IeqPreset*, std::__1::less<dolby::IeqPreset*>, std::__1::allocator<dolby::IeqPreset*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::IeqPreset*, std::__1::__tree_node<dolby::IeqPreset*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::IeqPreset*, std::__1::__tree_node<dolby::IeqPreset*, void*>*, long>, std::__1::__tree_const_iterator<dolby::IeqPreset*, std::__1::__tree_node<dolby::IeqPreset*, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: android::Singleton<dolby::DsContextManager>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby16DsContextManagerEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5dolby16DsContextManagerEE11hasInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::~ParameterAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapterD0Ev(void) {
    ALOGD("_ZN5dolby16ParameterAdapterD0Ev() called");
    return 0;
}

/* Demangled: dolby::DsManager::DsManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManagerC2Ev(void) {
    ALOGD("_ZN5dolby9DsManagerC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: dolby::IeqPreset::IeqPreset(long long, dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPresetC1ExNS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby9IeqPresetC1ExNS_10PresetTypeE() called");
    return 0;
}

/* Exported Object: dolby::BassMbdrcTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby19BassMbdrcTranslator10kSrcParamsE = NULL;

/* Exported Object: dolby::OutputModeTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby20OutputModeTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::AudioRegulatorTranslator::AudioRegulatorTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioRegulatorTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby24AudioRegulatorTranslatorC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Parameter, dolby::Translator*>, std::__1::__map_value_compare<dolby::Parameter, std::__1::__value_type<dolby::Parameter, dolby::Translator*>, std::__1::less<dolby::Parameter>, true>, std::__1::allocator<std::__1::__value_type<dolby::Parameter, dolby::Translator*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Parameter, dolby::Translator*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterEPNS2_10TranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterEPNS2_10TranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: dolby::DsContext::~DsContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContextD2Ev(void) {
    ALOGD("_ZN5dolby9DsContextD2Ev() called");
    return 0;
}

/* Demangled: dolby::DsContext::getProfileGeqParameter(int, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext22getProfileGeqParameterEiNS_9ParameterE(void) {
    ALOGD("_ZN5dolby9DsContext22getProfileGeqParameterEiNS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::populateDatabase(dolby::DeviceData*, dolby::Provider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager16populateDatabaseEPNS_10DeviceDataEPNS_8ProviderE(void) {
    ALOGD("_ZN5dolby16DsContextManager16populateDatabaseEPNS_10DeviceDataEPNS_8ProviderE() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ProfileParameterStrategy::getParameter(dolby::DsContext*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter24ProfileParameterStrategy12getParameterEPNS_9DsContextEi(void) {
    ALOGD("_ZN5dolby16ParameterAdapter24ProfileParameterStrategy12getParameterEPNS_9DsContextEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::getAvailableTuningDevices(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager25getAvailableTuningDevicesENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsManager25getAvailableTuningDevicesENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::getProfileEndpoint(dolby::Endpoint) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext18getProfileEndpointENS_8EndpointE(void) {
    ALOGD("_ZN5dolby14ProfileContext18getProfileEndpointENS_8EndpointE() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::setSelectedIeqPreset(dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint20setSelectedIeqPresetENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint20setSelectedIeqPresetENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::~EventHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandlerD1Ev(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandlerD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**>&>::push_back(_xmlNode**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: dolby::SetterCollection::SetterCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16SetterCollectionC2Ev(void) {
    ALOGD("_ZN5dolby16SetterCollectionC2Ev() called");
    return 0;
}

/* Exported Object: vtable for dolby::BassMbdrcTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby19BassMbdrcTranslatorE = NULL;

/* Demangled: dolby::DeviceData::setProfiles(std::__1::set<dolby::Profile*, std::__1::less<dolby::Profile*>, std::__1::allocator<dolby::Profile*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData11setProfilesERNSt3__13setIPNS_7ProfileENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN5dolby10DeviceData11setProfilesERNSt3__13setIPNS_7ProfileENS1_4lessIS4_EENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__append(unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEmRKS6_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEmRKS6_() called");
    return 0;
}

/* Exported Object: dolby::TuningFileParser::sSetterCollection */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby16TuningFileParser17sSetterCollectionE = NULL;

/* Demangled: dolby::BassMbdrcTranslator::BassMbdrcTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19BassMbdrcTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby19BassMbdrcTranslatorC2Ev() called");
    return 0;
}

/* Exported Object: vtable for dolby::SetParamCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby15SetParamCommandE = NULL;

/* Demangled: dolby::Provider::getDefaultXmlSignature() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider22getDefaultXmlSignatureEv(void) {
    ALOGD("_ZN5dolby8Provider22getDefaultXmlSignatureEv() called");
    return 0;
}

/* Demangled: dolby::Provider::create(dolby::Profile*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider6createEPNS_7ProfileE(void) {
    ALOGD("_ZN5dolby8Provider6createEPNS_7ProfileE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**> >::push_back(_xmlNode**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::parseVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser12parseVersionEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser12parseVersionEv() called");
    return 0;
}

/* Demangled: dolby::DeAmountTranslator::DeAmountTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeAmountTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby18DeAmountTranslatorC2Ev() called");
    return 0;
}

/* Exported Object: vtable for dolby::OutputModeTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby20OutputModeTranslatorE = NULL;

/* Demangled: dolby::DsManager::getSelectedTuningName(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager21getSelectedTuningNameENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsManager21getSelectedTuningNameENS_4PortE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::packAndReceiveParam(void*, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService19packAndReceiveParamEPvjS1_j(void) {
    ALOGD("_ZN7android19DolbyManagerService19packAndReceiveParamEPvjS1_j() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: dolby::DatabaseHelper::insertValue(dolby::DeviceTuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11insertValueEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11insertValueEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerValueSetter::AudioOptimizerValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25AudioOptimizerValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby25AudioOptimizerValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_SJ_EElEERPNS_15__tree_end_nodeISL_EESM_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_SJ_EElEERPNS_15__tree_end_nodeISL_EESM_RKT_() called");
    return 0;
}

/* Exported Object: dolby::Profile::kValidParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby7Profile12kValidParamsE = NULL;

/* Demangled: dolby::DapController::onSelectedProfileChanged(dolby::DsContext&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController24onSelectedProfileChangedERNS_9DsContextE(void) {
    ALOGD("_ZN5dolby13DapController24onSelectedProfileChangedERNS_9DsContextE() called");
    return 0;
}

/* Demangled: dolby::DsContext::resetProfileGeq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext15resetProfileGeqEi(void) {
    ALOGD("_ZN5dolby9DsContext15resetProfileGeqEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::validateDsEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager16validateDsEffectEv(void) {
    ALOGD("_ZN5dolby9DsManager16validateDsEffectEv() called");
    return 0;
}

/* Demangled: dolby::SetParamCommand::SetParamCommand(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommandC1Ei(void) {
    ALOGD("_ZN5dolby15SetParamCommandC1Ei() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: dolby::TuningFileParser::parsePreset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser11parsePresetEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser11parsePresetEv() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ProfileGeqParameterStrategy::getParameter(dolby::DsContext*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12getParameterEPNS_9DsContextEi(void) {
    ALOGD("_ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12getParameterEPNS_9DsContextEi() called");
    return 0;
}

/* Demangled: dolby::Tuning::Tuning(long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6TuningC2ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb(void) {
    ALOGD("_ZN5dolby6TuningC2ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb() called");
    return 0;
}

/* Demangled: dolby::DsContext::saveDsState() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext11saveDsStateEv(void) {
    ALOGD("_ZN5dolby9DsContext11saveDsStateEv() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::clearOemTunings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper15clearOemTuningsEv(void) {
    ALOGD("_ZN5dolby14DatabaseHelper15clearOemTuningsEv() called");
    return 0;
}

/* Demangled: dolby::GeqValueSetter::GeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14GeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby14GeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: dolby::MixMatrixValueSetter::MixMatrixValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20MixMatrixValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby20MixMatrixValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Exported Object: vtable for dolby::GeqValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby14GeqValueSetterE = NULL;

/* Demangled: dolby::Profile::Profile(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7ProfileC1EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5dolby7ProfileC1EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(long, int, dolby::Endpoint, dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpointC1EliNS_8EndpointENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby15ProfileEndpointC1EliNS_8EndpointENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: dolby::DsContext::getProfileGeq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext13getProfileGeqEi(void) {
    ALOGD("_ZN5dolby9DsContext13getProfileGeqEi() called");
    return 0;
}

/* Exported Object: dolby::IeqValueSetter::kAttrNames */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby14IeqValueSetter10kAttrNamesE = NULL;

/* Demangled: dolby::DatabaseHelper::querySelectedProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper20querySelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper20querySelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::~TagIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIteratorD2Ev(void) {
    ALOGD("_ZN5dolby11TagIteratorD2Ev() called");
    return 0;
}

/* Demangled: dolby::DsManager::isProfileModified(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager17isProfileModifiedEi(void) {
    ALOGD("_ZN5dolby9DsManager17isProfileModifiedEi() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::getPort() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuning7getPortEv(void) {
    ALOGD("_ZN5dolby12DeviceTuning7getPortEv() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::Defaults::Defaults(dolby::Provider*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext8DefaultsC2EPNS_8ProviderEi(void) {
    ALOGD("_ZN5dolby14ProfileContext8DefaultsC2EPNS_8ProviderEi() called");
    return 0;
}

/* Exported Object: dolby::VirtualBassValueSetter::kAttrNames */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby22VirtualBassValueSetter10kAttrNamesE = NULL;

/* Demangled: dolby::DeviceTuning::DeviceTuning(long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuningC2ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void) {
    ALOGD("_ZN5dolby12DeviceTuningC2ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_() called");
    return 0;
}

/* Demangled: dolby::DeAmountTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeAmountTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby18DeAmountTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::DsContext::getSelectedProfileGeq() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext21getSelectedProfileGeqEv(void) {
    ALOGD("_ZN5dolby9DsContext21getSelectedProfileGeqEv() called");
    return 0;
}

/* Demangled: dolby::TagIterator::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator11getNodeNameEv(void) {
    ALOGD("_ZN5dolby11TagIterator11getNodeNameEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::SimpleValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby17SimpleValueSetterE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: dolby::AudioRegulatorTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioRegulatorTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby24AudioRegulatorTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::save() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext4saveEv(void) {
    ALOGD("_ZN5dolby14ProfileContext4saveEv() called");
    return 0;
}

/* Demangled: dolby::DeEnableTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeEnableTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby18DeEnableTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::DapEffect::send(int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffect4sendEiRNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DapEffect4sendEiRNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::Port, std::__1::less<dolby::Port>, std::__1::allocator<dolby::Port> >::destroy(std::__1::__tree_node<dolby::Port, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5dolby4PortENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN5dolby4PortENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::~DatabaseHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelperD0Ev(void) {
    ALOGD("_ZN5dolby14DatabaseHelperD0Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider5clearEv(void) {
    ALOGD("_ZN5dolby8Provider5clearEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::sendMessage(void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjj(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjj() called");
    return 0;
}

/* Exported Object: VTT for android::DolbyManagerService::NotificationClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android19DolbyManagerService18NotificationClientE = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: void std::__1::__tree<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long>, std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_() called");
    return 0;
}

/* Demangled: dolby::DapContext::getDeviceParameters(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContext19getDeviceParametersENS_4PortE(void) {
    ALOGD("_ZN5dolby10DapContext19getDeviceParametersENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::~DeviceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceDataD1Ev(void) {
    ALOGD("_ZN5dolby10DeviceDataD1Ev() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::getParameter(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter12getParameterEii(void) {
    ALOGD("_ZN5dolby16ParameterAdapter12getParameterEii() called");
    return 0;
}

/* Demangled: dolby::VirtualBassEnableTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby27VirtualBassEnableTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby27VirtualBassEnableTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::getDefaultProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext17getDefaultProfileEi(void) {
    ALOGD("_ZN5dolby9DsContext17getDefaultProfileEi() called");
    return 0;
}

/* Demangled: dolby::DeviceData::DeviceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceDataC2Ev(void) {
    ALOGD("_ZN5dolby10DeviceDataC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::GeqPreset*, std::__1::less<dolby::GeqPreset*>, std::__1::allocator<dolby::GeqPreset*> >::destroy(std::__1::__tree_node<dolby::GeqPreset*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::~DolbyManagerService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerServiceD0Ev(void) {
    ALOGD("_ZN7android19DolbyManagerServiceD0Ev() called");
    return 0;
}

/* Demangled: dolby::IeqPreset::getId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPreset5getIdEv(void) {
    ALOGD("_ZN5dolby9IeqPreset5getIdEv() called");
    return 0;
}

/* Demangled: dolby::DapController::onSelectedProfileEndpointChanged(dolby::DsContext&, dolby::Port, dolby::ProfileEndpoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby13DapController32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE() called");
    return 0;
}

/* Demangled: dolby::DapController::DapController(int, dolby::DapEffect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapControllerC1EiRNS_9DapEffectE(void) {
    ALOGD("_ZN5dolby13DapControllerC1EiRNS_9DapEffectE() called");
    return 0;
}

/* Demangled: dolby::DsContext::setParameter(dolby::ParameterValues&, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext12setParameterERNS_15ParameterValuesENS_9ParameterERNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DsContext12setParameterERNS_15ParameterValuesENS_9ParameterERNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DsContextManager>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby16DsContextManagerEED1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby16DsContextManagerEED1Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::getDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider15getDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby8Provider15getDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<dolby::GeqPreset*, std::__1::allocator<dolby::GeqPreset*> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5dolby9GeqPresetENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIPN5dolby9GeqPresetENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**>&>::push_front(_xmlNode** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: dolby::SetParamCommand::execute(dolby::DapEffect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommand7executeERNS_9DapEffectE(void) {
    ALOGD("_ZN5dolby15SetParamCommand7executeERNS_9DapEffectE() called");
    return 0;
}

/* Demangled: dolby::DsContext::setProfileGeqParameter(int, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext22setProfileGeqParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DsContext22setProfileGeqParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::~DsContextManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManagerD1Ev(void) {
    ALOGD("_ZN5dolby16DsContextManagerD1Ev() called");
    return 0;
}

/* Demangled: dolby::IeqValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14IeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby14IeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::setIntParam(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService11setIntParamEjl(void) {
    ALOGD("_ZN7android19DolbyManagerService11setIntParamEjl() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::DolbyManagerService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerServiceC1Ev(void) {
    ALOGD("_ZN7android19DolbyManagerServiceC1Ev() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::setProfileEndpoint(dolby::ProfileEndpoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters18setProfileEndpointERNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby16DeviceParameters18setProfileEndpointERNS_15ProfileEndpointE() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DsContextManager>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby16DsContextManagerEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby16DsContextManagerEEC2Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::save(dolby::GeqPreset*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider4saveEPNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby8Provider4saveEPNS_9GeqPresetE() called");
    return 0;
}

/* Exported Object: vtable for dolby::TuningFileParser */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16TuningFileParserE = NULL;

/* Demangled: dolby::ParameterAdapter::ParameterAdapter(dolby::DsContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapterC2EPNS_9DsContextE(void) {
    ALOGD("_ZN5dolby16ParameterAdapterC2EPNS_9DsContextE() called");
    return 0;
}

/* Demangled: dolby::DsManager::getDsVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager12getDsVersionEv(void) {
    ALOGD("_ZN5dolby9DsManager12getDsVersionEv() called");
    return 0;
}

/* Demangled: dolby::DapEffect::DapEffect(int, android::String16) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffectC1EiN7android8String16E(void) {
    ALOGD("_ZN5dolby9DapEffectC1EiN7android8String16E() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::DsContextManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManagerC2Ev(void) {
    ALOGD("_ZN5dolby16DsContextManagerC2Ev() called");
    return 0;
}

/* Demangled: dolby::DsManager::getAvailableTuningDevicesLen(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager28getAvailableTuningDevicesLenENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsManager28getAvailableTuningDevicesLenENS_4PortE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::dumpPermissionDenial(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService20dumpPermissionDenialEi(void) {
    ALOGD("_ZN7android19DolbyManagerService20dumpPermissionDenialEi() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::removeNotificationClient(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService24removeNotificationClientEj(void) {
    ALOGD("_ZN7android19DolbyManagerService24removeNotificationClientEj() called");
    return 0;
}

/* Exported Object: dolby::DeEnableTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby18DeEnableTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::DsContextManager::getSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager12getSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16DsContextManager12getSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::parseNodeAll(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator12parseNodeAllERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void) {
    ALOGD("_ZN5dolby11TagIterator12parseNodeAllERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE() called");
    return 0;
}

/* Demangled: dolby::SimpleValueSetter::SimpleValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17SimpleValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby17SimpleValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::OutputModeTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20OutputModeTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby20OutputModeTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::AndroidDevice, dolby::Port>, std::__1::__map_value_compare<dolby::AndroidDevice, std::__1::__value_type<dolby::AndroidDevice, dolby::Port>, std::__1::less<dolby::AndroidDevice>, true>, std::__1::allocator<std::__1::__value_type<dolby::AndroidDevice, dolby::Port> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::AndroidDevice, dolby::Port>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceENS2_4PortEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceENS2_4PortEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::insertValue(dolby::GeqPreset*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11insertValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11insertValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::NotificationClient::onDapParamUpdate(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18NotificationClient16onDapParamUpdateEPvj(void) {
    ALOGD("_ZN7android19DolbyManagerService18NotificationClient16onDapParamUpdateEPvj() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::NotificationClient::~NotificationClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18NotificationClientD1Ev(void) {
    ALOGD("_ZN7android19DolbyManagerService18NotificationClientD1Ev() called");
    return 0;
}

/* Demangled: dolby::BassMbdrcTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19BassMbdrcTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby19BassMbdrcTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: std::__1::vector<dolby::ProfileEndpoint*, std::__1::allocator<dolby::ProfileEndpoint*> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5dolby15ProfileEndpointENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIPN5dolby15ProfileEndpointENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getActiveDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService15getActiveDeviceEv(void) {
    ALOGD("_ZN7android19DolbyManagerService15getActiveDeviceEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::dump(int, android::Vector<android::String16> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService4dumpEiRKNS_6VectorINS_8String16EEE(void) {
    ALOGD("_ZN7android19DolbyManagerService4dumpEiRKNS_6VectorINS_8String16EEE() called");
    return 0;
}

/* Demangled: dolby::Profile::getName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile7getNameEv(void) {
    ALOGD("_ZN5dolby7Profile7getNameEv() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerTranslator::AudioOptimizerTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioOptimizerTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby24AudioOptimizerTranslatorC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*>, std::__1::__map_value_compare<dolby::AndroidDevice, std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*>, std::__1::less<dolby::AndroidDevice>, true>, std::__1::allocator<std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_16DeviceParametersEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_16DeviceParametersEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::getDsContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager12getDsContextEv(void) {
    ALOGD("_ZN5dolby16DsContextManager12getDsContextEv() called");
    return 0;
}

/* Demangled: dolby::DrcRowDataValueSetter::DrcRowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby21DrcRowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby21DrcRowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::~TuningFileParser() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParserD2Ev(void) {
    ALOGD("_ZN5dolby16TuningFileParserD2Ev() called");
    return 0;
}

/* Demangled: dolby::DsManager::getProfileName(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager14getProfileNameEi(void) {
    ALOGD("_ZN5dolby9DsManager14getProfileNameEi() called");
    return 0;
}

/* Demangled: dolby::Profile::setMobility(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile11setMobilityEb(void) {
    ALOGD("_ZN5dolby7Profile11setMobilityEb() called");
    return 0;
}

/* Demangled: void std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >::__emplace_back_slow_path<dolby::Parameter&>(dolby::Parameter&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onSelectedTuningChanged(dolby::DsContext&, dolby::Port, dolby::Tuning&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE() called");
    return 0;
}

/* Exported Object: vtable for dolby::ComplexEqualizerTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby26ComplexEqualizerTranslatorE = NULL;

/* Demangled: dolby::TagIterator::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator4initERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby11TagIterator4initERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: vtable for dolby::IeqPreset */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby9IeqPresetE = NULL;

/* Demangled: dolby::DsContextChangeObservable::DsContextChangeObservable() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservableC2Ev(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservableC2Ev() called");
    return 0;
}

/* Demangled: dolby::DsContext::unregisterObserver(dolby::OnDsContextChange*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext18unregisterObserverEPNS_17OnDsContextChangeE(void) {
    ALOGD("_ZN5dolby9DsContext18unregisterObserverEPNS_17OnDsContextChangeE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<_xmlNode*, std::__1::allocator<_xmlNode*> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIP8_xmlNodeNS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIP8_xmlNodeNS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::Defaults::Defaults(dolby::Provider*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext8DefaultsC1EPNS_8ProviderEi(void) {
    ALOGD("_ZN5dolby14ProfileContext8DefaultsC1EPNS_8ProviderEi() called");
    return 0;
}

/* Demangled: dolby::DapController::onLoad(dolby::DsContext&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController6onLoadERNS_9DsContextE(void) {
    ALOGD("_ZN5dolby13DapController6onLoadERNS_9DsContextE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: dolby::IeqPreset::kValidParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby9IeqPreset12kValidParamsE = NULL;

/* Demangled: dolby::DeviceData::validateData() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData12validateDataEv(void) {
    ALOGD("_ZN5dolby10DeviceData12validateDataEv() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::toString() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPreset8toStringEv(void) {
    ALOGD("_ZN5dolby9GeqPreset8toStringEv() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::getProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters10getProfileEv(void) {
    ALOGD("_ZN5dolby16DeviceParameters10getProfileEv() called");
    return 0;
}

/* Demangled: dolby::DapController::setDapEffect(dolby::DapEffect&, dolby::DsContext&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController12setDapEffectERNS_9DapEffectERNS_9DsContextE(void) {
    ALOGD("_ZN5dolby13DapController12setDapEffectERNS_9DapEffectERNS_9DsContextE() called");
    return 0;
}

/* Exported Object: android::Singleton<dolby::DsContextManager>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5dolby16DsContextManagerEE5sLockE = NULL;

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: dolby::TagIterator::pushNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator8pushNodeEv(void) {
    ALOGD("_ZN5dolby11TagIterator8pushNodeEv() called");
    return 0;
}

/* Demangled: dolby::RowDataValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18RowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby18RowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::registerClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService14registerClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void) {
    ALOGD("_ZN7android19DolbyManagerService14registerClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: dolby::VirtualBassEnableTranslator::VirtualBassEnableTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby27VirtualBassEnableTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby27VirtualBassEnableTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::DapEffect::hasControl() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffect10hasControlEv(void) {
    ALOGD("_ZN5dolby9DapEffect10hasControlEv() called");
    return 0;
}

/* Demangled: dolby::Provider::~Provider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8ProviderD2Ev(void) {
    ALOGD("_ZN5dolby8ProviderD2Ev() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::getNumOfProfiles() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser16getNumOfProfilesEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser16getNumOfProfilesEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::getTuningParamDFSA(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager18getTuningParamDFSAENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsManager18getTuningParamDFSAENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::DsManager::getVolumeLevelerAount(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager21getVolumeLevelerAountENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsManager21getVolumeLevelerAountENS_4PortE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getIntParam(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService11getIntParamEj(void) {
    ALOGD("_ZN7android19DolbyManagerService11getIntParamEj() called");
    return 0;
}

/* Demangled: dolby::ComplexEqualizerTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26ComplexEqualizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby26ComplexEqualizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::ComplexEqualizerTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26ComplexEqualizerTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby26ComplexEqualizerTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::DapController::~DapController() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapControllerD1Ev(void) {
    ALOGD("_ZN5dolby13DapControllerD1Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryGeqValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::GeqPreset*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper13queryGeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper13queryGeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9GeqPresetE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::getEndpoint() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint11getEndpointEv(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint11getEndpointEv() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::updateParams(dolby::ParameterValues&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters12updateParamsERNS_15ParameterValuesE(void) {
    ALOGD("_ZN5dolby16DeviceParameters12updateParamsERNS_15ParameterValuesE() called");
    return 0;
}

/* Demangled: dolby::DsContext::getAvailableTuningDevice(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext24getAvailableTuningDeviceENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsContext24getAvailableTuningDeviceENS_4PortE() called");
    return 0;
}

/* Demangled: void std::__1::__tree<dolby::Profile*, std::__1::less<dolby::Profile*>, std::__1::allocator<dolby::Profile*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::Profile*, std::__1::__tree_node<dolby::Profile*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::Profile*, std::__1::__tree_node<dolby::Profile*, void*>*, long>, std::__1::__tree_const_iterator<dolby::Profile*, std::__1::__tree_node<dolby::Profile*, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ProfileParameterStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter24ProfileParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter24ProfileParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::GeqTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13GeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby13GeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::OutputModeTranslator::OutputModeTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20OutputModeTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby20OutputModeTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::DsContext::resetProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext12resetProfileEi(void) {
    ALOGD("_ZN5dolby9DsContext12resetProfileEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::recreateDsEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager16recreateDsEffectEv(void) {
    ALOGD("_ZN5dolby9DsManager16recreateDsEffectEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: dolby::DsContext::save() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext4saveEv(void) {
    ALOGD("_ZN5dolby9DsContext4saveEv() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::ProfileContext(dolby::Provider*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContextC2EPNS_8ProviderEi(void) {
    ALOGD("_ZN5dolby14ProfileContextC2EPNS_8ProviderEi() called");
    return 0;
}

/* Demangled: dolby::Provider::getSelectedProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider18getSelectedProfileEv(void) {
    ALOGD("_ZN5dolby8Provider18getSelectedProfileEv() called");
    return 0;
}

/* Demangled: dolby::RegulatorTuningValueSetter::RegulatorTuningValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26RegulatorTuningValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby26RegulatorTuningValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: dolby::SimpleTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16SimpleTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby16SimpleTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::Provider::getNumOfProfiles() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider16getNumOfProfilesEv(void) {
    ALOGD("_ZN5dolby8Provider16getNumOfProfilesEv() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getProfileEndpoints() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData19getProfileEndpointsEv(void) {
    ALOGD("_ZN5dolby10DeviceData19getProfileEndpointsEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::DeEnableTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby18DeEnableTranslatorE = NULL;

/* Exported Object: dolby::Tuning::kValidParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby6Tuning12kValidParamsE = NULL;

/* Demangled: dolby::DatabaseHelper::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper5clearEv(void) {
    ALOGD("_ZN5dolby14DatabaseHelper5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: dolby::IeqPreset::getValidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPreset14getValidParamsEv(void) {
    ALOGD("_ZN5dolby9IeqPreset14getValidParamsEv() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::ProfileParameters(dolby::ParamChangeObserver*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParametersC1EPNS_19ParamChangeObserverE(void) {
    ALOGD("_ZN5dolby17ProfileParametersC1EPNS_19ParamChangeObserverE() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::~ProfileParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParametersD2Ev(void) {
    ALOGD("_ZN5dolby17ProfileParametersD2Ev() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioOptimizerTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby24AudioOptimizerTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ParameterAdapter(dolby::DsContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapterC1EPNS_9DsContextE(void) {
    ALOGD("_ZN5dolby16ParameterAdapterC1EPNS_9DsContextE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::NotificationClient::NotificationClient(android::sp<android::DolbyManagerService> const&, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18NotificationClientC1ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void) {
    ALOGD("_ZN7android19DolbyManagerService18NotificationClientC1ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::getValidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint14getValidParamsEv(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint14getValidParamsEv() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::getProfileEndpoint() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters18getProfileEndpointEv(void) {
    ALOGD("_ZN5dolby16DeviceParameters18getProfileEndpointEv() called");
    return 0;
}

/* Demangled: dolby::TranslatorCollection::~TranslatorCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20TranslatorCollectionD1Ev(void) {
    ALOGD("_ZN5dolby20TranslatorCollectionD1Ev() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileGeqChanged(dolby::DsContext&, dolby::GeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::updateProfileEndpointValue(dolby::ProfileEndpoint*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper26updateProfileEndpointValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper26updateProfileEndpointValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, dolby::AndroidDevice>, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, dolby::AndroidDevice>, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, dolby::AndroidDevice> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, dolby::AndroidDevice>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS2_13AndroidDeviceEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS2_13AndroidDeviceEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::ParameterAdapter::ProfileGeqParameterStrategy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16ParameterAdapter27ProfileGeqParameterStrategyE = NULL;

/* Demangled: dolby::CustomDRCTranslator::CustomDRCTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19CustomDRCTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby19CustomDRCTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::TranslatorCollection::TranslatorCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20TranslatorCollectionC2Ev(void) {
    ALOGD("_ZN5dolby20TranslatorCollectionC2Ev() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::~ProfileContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContextD1Ev(void) {
    ALOGD("_ZN5dolby14ProfileContextD1Ev() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::getDeviceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser13getDeviceDataEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser13getDeviceDataEv() called");
    return 0;
}

/* Demangled: dolby::Provider::save(dolby::Profile*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider4saveEPNS_7ProfileE(void) {
    ALOGD("_ZN5dolby8Provider4saveEPNS_7ProfileE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: dolby::CustomDRCTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19CustomDRCTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby19CustomDRCTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Exported Object: vtable for dolby::ParameterTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby19ParameterTranslatorE = NULL;

/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**> >::push_front(_xmlNode**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::getValidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters14getValidParamsEv(void) {
    ALOGD("_ZN5dolby16DeviceParameters14getValidParamsEv() called");
    return 0;
}

/* Demangled: dolby::ComplexEqualizerTranslator::ComplexEqualizerTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26ComplexEqualizerTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby26ComplexEqualizerTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::TagIterator::isCurValid() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator10isCurValidEv(void) {
    ALOGD("_ZN5dolby11TagIterator10isCurValidEv() called");
    return 0;
}

/* Demangled: dolby::IeqPreset::IeqPreset(dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPresetC1ENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby9IeqPresetC1ENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileIeqChanged(dolby::DsContext&, dolby::Port, dolby::IeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, dolby::Tuning*>, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, dolby::Tuning*>, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, dolby::Tuning*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, dolby::Tuning*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortEPNS2_6TuningEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby4PortEPNS2_6TuningEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::insertValue(dolby::Profile*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11insertValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11insertValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx() called");
    return 0;
}

/* Demangled: dolby::CustomDRCTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19CustomDRCTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby19CustomDRCTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::VirtualBassTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby21VirtualBassTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby21VirtualBassTranslator12getSrcParamsEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::AudioRegulatorTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby24AudioRegulatorTranslatorE = NULL;

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPKiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPKiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPKiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: dolby::Provider::setDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider15setDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void) {
    ALOGD("_ZN5dolby8Provider15setDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: dolby::DsManager::setProfilePortParameter(int, int, int, std::__1::vector<int, std::__1::allocator<int> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager23setProfilePortParameterEiiiNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DsManager23setProfilePortParameterEiiiNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::DsManager::setDsOn(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager7setDsOnEb(void) {
    ALOGD("_ZN5dolby9DsManager7setDsOnEb() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::sendMessage(void*, unsigned int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjij(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjij() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getAvailableTuningDevices(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService25getAvailableTuningDevicesEiPvi(void) {
    ALOGD("_ZN7android19DolbyManagerService25getAvailableTuningDevicesEiPvi() called");
    return 0;
}

/* Demangled: dolby::IeqTranslator::IeqTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13IeqTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby13IeqTranslatorC1Ev() called");
    return 0;
}

/* Exported Object: vtable for dolby::DeAmountTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby18DeAmountTranslatorE = NULL;

/* Demangled: dolby::DapController::onSelectedTuningChanged(dolby::DsContext&, dolby::Port, dolby::Tuning&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE(void) {
    ALOGD("_ZN5dolby13DapController23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileChanged(dolby::DsContext&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable24onSelectedProfileChangedERNS_9DsContextE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable24onSelectedProfileChangedERNS_9DsContextE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::commitTransaction() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper17commitTransactionEv(void) {
    ALOGD("_ZN5dolby14DatabaseHelper17commitTransactionEv() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::setDirty(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuning8setDirtyEb(void) {
    ALOGD("_ZN5dolby12DeviceTuning8setDirtyEb() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioOptimizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby24AudioOptimizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::DapContext::setGeqPreset(dolby::GeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContext12setGeqPresetERNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby10DapContext12setGeqPresetERNS_9GeqPresetE() called");
    return 0;
}

/* Demangled: dolby::DsContext::getDefaultTuningDevice(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext22getDefaultTuningDeviceENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsContext22getDefaultTuningDeviceENS_4PortE() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >::destroy(std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper4initEv(void) {
    ALOGD("_ZN5dolby14DatabaseHelper4initEv() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setIeqPresets(std::__1::set<dolby::IeqPreset*, std::__1::less<dolby::IeqPreset*>, std::__1::allocator<dolby::IeqPreset*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData13setIeqPresetsERNSt3__13setIPNS_9IeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN5dolby10DeviceData13setIeqPresetsERNSt3__13setIPNS_9IeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setDeviceTunings(std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData16setDeviceTuningsERNSt3__13setIPNS_12DeviceTuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN5dolby10DeviceData16setDeviceTuningsERNSt3__13setIPNS_12DeviceTuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: dolby::RegulatorTuningValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26RegulatorTuningValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby26RegulatorTuningValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::GeqPreset(long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPresetC1Exi(void) {
    ALOGD("_ZN5dolby9GeqPresetC1Exi() called");
    return 0;
}

/* Demangled: dolby::Provider::setSelectedProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider18setSelectedProfileEi(void) {
    ALOGD("_ZN5dolby8Provider18setSelectedProfileEi() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::Tuning*, std::__1::less<dolby::Tuning*>, std::__1::allocator<dolby::Tuning*> >::destroy(std::__1::__tree_node<dolby::Tuning*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::setParameter(int, int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter12setParameterEiiRNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter12setParameterEiiRNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::DsManager::~DsManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManagerD2Ev(void) {
    ALOGD("_ZN5dolby9DsManagerD2Ev() called");
    return 0;
}

/* Demangled: dolby::Tuning::getName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning7getNameEv(void) {
    ALOGD("_ZN5dolby6Tuning7getNameEv() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::equals(dolby::GeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPreset6equalsERS0_(void) {
    ALOGD("_ZN5dolby9GeqPreset6equalsERS0_() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::GeqPreset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPresetC2Ei(void) {
    ALOGD("_ZN5dolby9GeqPresetC2Ei() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::equals(dolby::ProfileEndpoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint6equalsERS0_(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint6equalsERS0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::Translator*, std::__1::less<dolby::Translator*>, std::__1::allocator<dolby::Translator*> >::destroy(std::__1::__tree_node<dolby::Translator*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby10TranslatorENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby10TranslatorENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::executeInsertCommand(dolby::ParameterValues*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper20executeInsertCommandEPNS_15ParameterValuesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_x(void) {
    ALOGD("_ZN5dolby14DatabaseHelper20executeInsertCommandEPNS_15ParameterValuesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_x() called");
    return 0;
}

/* Exported Object: vtable for dolby::IeqValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby14IeqValueSetterE = NULL;

/* Demangled: dolby::ParameterAdapter::~ParameterAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapterD1Ev(void) {
    ALOGD("_ZN5dolby16ParameterAdapterD1Ev() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::toString() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuning8toStringEv(void) {
    ALOGD("_ZN5dolby12DeviceTuning8toStringEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::DeviceTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby12DeviceTuningE = NULL;

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: dolby::Profile::equals(dolby::Profile&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile6equalsERS0_(void) {
    ALOGD("_ZN5dolby7Profile6equalsERS0_() called");
    return 0;
}

/* Demangled: dolby::AudioRegulatorTranslator::AudioRegulatorTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioRegulatorTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby24AudioRegulatorTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::getSelectedIeqPreset(dolby::Endpoint) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext20getSelectedIeqPresetENS_8EndpointE(void) {
    ALOGD("_ZN5dolby14ProfileContext20getSelectedIeqPresetENS_8EndpointE() called");
    return 0;
}

/* Demangled: dolby::VirtualBassSubgainValueSetter::VirtualBassSubgainValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby29VirtualBassSubgainValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby29VirtualBassSubgainValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::DsManager::getDsSuspended() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager14getDsSuspendedEv(void) {
    ALOGD("_ZN5dolby9DsManager14getDsSuspendedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, std::__1::vector<int, std::__1::allocator<int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommand3addENS_12DapParameterEPNSt3__16vectorIiNS2_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby15SetParamCommand3addENS_12DapParameterEPNSt3__16vectorIiNS2_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::ParameterTranslator::translateAll(dolby::SetParamCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19ParameterTranslator12translateAllERNS_15SetParamCommandE(void) {
    ALOGD("_ZN5dolby19ParameterTranslator12translateAllERNS_15SetParamCommandE() called");
    return 0;
}

/* Demangled: dolby::Provider::create(dolby::ProfileEndpoint*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider6createEPNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby8Provider6createEPNS_15ProfileEndpointE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::doOnDapParamUpdate(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18doOnDapParamUpdateEPvj(void) {
    ALOGD("_ZN7android19DolbyManagerService18doOnDapParamUpdateEPvj() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getSelectedTuningDevice(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService23getSelectedTuningDeviceEi(void) {
    ALOGD("_ZN7android19DolbyManagerService23getSelectedTuningDeviceEi() called");
    return 0;
}

/* Exported Object: vtable for dolby::GeqPreset */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby9GeqPresetE = NULL;

/* Demangled: dolby::DeEnableTranslator::DeEnableTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeEnableTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby18DeEnableTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::updateGeqValue(dolby::GeqPreset*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper14updateGeqValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper14updateGeqValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::updateTuningDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper18updateTuningDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void) {
    ALOGD("_ZN5dolby14DatabaseHelper18updateTuningDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: dolby::Provider::setDefaultXmlSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider22setDefaultXmlSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby8Provider22setDefaultXmlSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::next() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator4nextEv(void) {
    ALOGD("_ZN5dolby11TagIterator4nextEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::isMobilityProfileSelected() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager25isMobilityProfileSelectedEv(void) {
    ALOGD("_ZN5dolby9DsManager25isMobilityProfileSelectedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: dolby::IeqPreset::getType() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPreset7getTypeEv(void) {
    ALOGD("_ZN5dolby9IeqPreset7getTypeEv() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::ProfileContext(dolby::Provider*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContextC1EPNS_8ProviderEi(void) {
    ALOGD("_ZN5dolby14ProfileContextC1EPNS_8ProviderEi() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::IeqPreset*, std::__1::less<dolby::IeqPreset*>, std::__1::allocator<dolby::IeqPreset*> >::destroy(std::__1::__tree_node<dolby::IeqPreset*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::parseTuningFile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser15parseTuningFileEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser15parseTuningFileEv() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::getProfileEndpointParameter(int, dolby::Endpoint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter27getProfileEndpointParameterEiNS_8EndpointEi(void) {
    ALOGD("_ZN5dolby16ParameterAdapter27getProfileEndpointParameterEiNS_8EndpointEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::DsManager(dolby::DapController*, dolby::DsContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManagerC2EPNS_13DapControllerEPNS_9DsContextE(void) {
    ALOGD("_ZN5dolby9DsManagerC2EPNS_13DapControllerEPNS_9DsContextE() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::getValidParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParameters14getValidParamsEv(void) {
    ALOGD("_ZN5dolby17ProfileParameters14getValidParamsEv() called");
    return 0;
}

/* Demangled: dolby::DapEffect::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffect10setEnabledEb(void) {
    ALOGD("_ZN5dolby9DapEffect10setEnabledEb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*>, std::__1::__map_value_compare<dolby::AndroidDevice, std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*>, std::__1::less<dolby::AndroidDevice>, true>, std::__1::allocator<std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_19ParameterTranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_19ParameterTranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: dolby::DsContext::getProfileEndpoint(int, dolby::Endpoint) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext18getProfileEndpointEiNS_8EndpointE(void) {
    ALOGD("_ZN5dolby9DsContext18getProfileEndpointEiNS_8EndpointE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: dolby::TuningFileParser::parseTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser11parseTuningEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser11parseTuningEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::~EventHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandlerD2Ev(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandlerD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::getId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPreset5getIdEv(void) {
    ALOGD("_ZN5dolby9GeqPreset5getIdEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::isModified() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext10isModifiedEv(void) {
    ALOGD("_ZN5dolby14ProfileContext10isModifiedEv() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::updateProfileValue(dolby::Profile*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper18updateProfileValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper18updateProfileValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::DsContext::setDapOn(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext8setDapOnEb(void) {
    ALOGD("_ZN5dolby9DsContext8setDapOnEb() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::buildColumnString(dolby::TableType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper17buildColumnStringENS_9TableTypeE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper17buildColumnStringENS_9TableTypeE() called");
    return 0;
}

/* Demangled: dolby::Provider::loadTuningForDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider19loadTuningForDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby8Provider19loadTuningForDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Provider::reset(dolby::Profile*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider5resetEPNS_7ProfileE(void) {
    ALOGD("_ZN5dolby8Provider5resetEPNS_7ProfileE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getGeqPresets() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData13getGeqPresetsEv(void) {
    ALOGD("_ZN5dolby10DeviceData13getGeqPresetsEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::getDefaultXmlFormatVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager26getDefaultXmlFormatVersionEv(void) {
    ALOGD("_ZN5dolby9DsManager26getDefaultXmlFormatVersionEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getTuningParamDHSA() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18getTuningParamDHSAEv(void) {
    ALOGD("_ZN7android19DolbyManagerService18getTuningParamDHSAEv() called");
    return 0;
}

/* Demangled: virtual thunk to android::DolbyManagerService::NotificationClient::~NotificationClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android19DolbyManagerService18NotificationClientD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android19DolbyManagerService18NotificationClientD0Ev() called");
    return 0;
}

/* Demangled: dolby::DsContext::getDapOn() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext8getDapOnEv(void) {
    ALOGD("_ZN5dolby9DsContext8getDapOnEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::reloadTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext12reloadTuningEv(void) {
    ALOGD("_ZN5dolby9DsContext12reloadTuningEv() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getIeqPresets() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData13getIeqPresetsEv(void) {
    ALOGD("_ZN5dolby10DeviceData13getIeqPresetsEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ValueSetter*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ValueSetter*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ValueSetter*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN5dolby11ValueSetterEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN5dolby11ValueSetterEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: dolby::Tuning::Tuning(long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6TuningC1ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb(void) {
    ALOGD("_ZN5dolby6TuningC1ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb() called");
    return 0;
}

/* Demangled: dolby::Profile::Profile(long long, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7ProfileC1ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5dolby7ProfileC1ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::resetGeq() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext8resetGeqEv(void) {
    ALOGD("_ZN5dolby14ProfileContext8resetGeqEv() called");
    return 0;
}

/* Demangled: dolby::SetterCollection::getValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16SetterCollection14getValueSetterERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16SetterCollection14getValueSetterERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Tuning::Tuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6TuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby6TuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb() called");
    return 0;
}

/* Exported Object: dolby::DeviceParameters::kValidParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby16DeviceParameters12kValidParamsE = NULL;

/* Demangled: dolby::ProfileContext::isProfileSpecificSettingsModified() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext33isProfileSpecificSettingsModifiedEv(void) {
    ALOGD("_ZN5dolby14ProfileContext33isProfileSpecificSettingsModifiedEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::registerObserver(dolby::OnDsContextChange*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext16registerObserverEPNS_17OnDsContextChangeE(void) {
    ALOGD("_ZN5dolby9DsContext16registerObserverEPNS_17OnDsContextChangeE() called");
    return 0;
}

/* Demangled: dolby::Provider::create(dolby::Tuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider6createEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby8Provider6createEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::~DeviceParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParametersD0Ev(void) {
    ALOGD("_ZN5dolby16DeviceParametersD0Ev() called");
    return 0;
}

/* Demangled: dolby::DeEnableTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby18DeEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::SetParamCommand::SetParamCommand(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommandC2Ei(void) {
    ALOGD("_ZN5dolby15SetParamCommandC2Ei() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::loadXmlIfChanged(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Provider*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager16loadXmlIfChangedENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE(void) {
    ALOGD("_ZN5dolby16DsContextManager16loadXmlIfChangedENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE() called");
    return 0;
}

/* Demangled: dolby::DsManager::getParamLength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager14getParamLengthEi(void) {
    ALOGD("_ZN5dolby9DsManager14getParamLengthEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::Profile::Profile(long long, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7ProfileC2ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN5dolby7ProfileC2ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager7releaseEv(void) {
    ALOGD("_ZN5dolby16DsContextManager7releaseEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::resetProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager12resetProfileEi(void) {
    ALOGD("_ZN5dolby9DsManager12resetProfileEi() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: dolby::DsContext::saveDsProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext13saveDsProfileEv(void) {
    ALOGD("_ZN5dolby9DsContext13saveDsProfileEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::saveDsProfileSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext21saveDsProfileSettingsEv(void) {
    ALOGD("_ZN5dolby9DsContext21saveDsProfileSettingsEv() called");
    return 0;
}

/* Exported Object: dolby::Provider::kSelectedProfile */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby8Provider16kSelectedProfileE = NULL;

/* Demangled: android::DolbyManagerService::EventHandler::parseAndSendParam(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandler17parseAndSendParamEPvj(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandler17parseAndSendParamEPvj() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getTuningParamDFSA() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18getTuningParamDFSAEv(void) {
    ALOGD("_ZN7android19DolbyManagerService18getTuningParamDFSAEv() called");
    return 0;
}

/* Demangled: dolby::Profile::setSelectedGeqPreset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile20setSelectedGeqPresetEi(void) {
    ALOGD("_ZN5dolby7Profile20setSelectedGeqPresetEi() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setTunings(std::__1::set<dolby::Tuning*, std::__1::less<dolby::Tuning*>, std::__1::allocator<dolby::Tuning*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData10setTuningsERNSt3__13setIPNS_6TuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN5dolby10DeviceData10setTuningsERNSt3__13setIPNS_6TuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25AudioOptimizerValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby25AudioOptimizerValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::Tuning::getId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning5getIdEv(void) {
    ALOGD("_ZN5dolby6Tuning5getIdEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: dolby::IeqPreset::IeqPreset(long long, dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPresetC2ExNS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby9IeqPresetC2ExNS_10PresetTypeE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > >, std::__1::__map_value_compare<dolby::Parameter, std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > >, std::__1::less<dolby::Parameter>, true>, std::__1::allocator<std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterENS_6vectorIiNS_9allocatorIiEEEEEENS_19__map_value_compareIS3_S8_NS_4lessIS3_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterENS_6vectorIiNS_9allocatorIiEEEEEENS_19__map_value_compareIS3_S8_NS_4lessIS3_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > >, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > >, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_3setIPNS2_12DeviceTuningENS_4lessIS6_EENS_9allocatorIS6_EEEEEENS_19__map_value_compareIS3_SC_NS7_IS3_EELb1EEENS9_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_3setIPNS2_12DeviceTuningENS_4lessIS6_EENS_9allocatorIS6_EEEEEENS_19__map_value_compareIS3_SC_NS7_IS3_EELb1EEENS9_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::RowDataValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby18RowDataValueSetterE = NULL;

/* Demangled: dolby::TuningFileParser::parseProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser12parseProfileEv(void) {
    ALOGD("_ZN5dolby16TuningFileParser12parseProfileEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::getProfileParameter(int, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager19getProfileParameterEiNS_9ParameterE(void) {
    ALOGD("_ZN5dolby9DsManager19getProfileParameterEiNS_9ParameterE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandler17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandler17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: dolby::VirtualBassTranslator::VirtualBassTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby21VirtualBassTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby21VirtualBassTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::clearOemDeviceTunings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper21clearOemDeviceTuningsEv(void) {
    ALOGD("_ZN5dolby14DatabaseHelper21clearOemDeviceTuningsEv() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::~DatabaseHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelperD1Ev(void) {
    ALOGD("_ZN5dolby14DatabaseHelperD1Ev() called");
    return 0;
}

/* Demangled: dolby::VirtualBassTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby21VirtualBassTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby21VirtualBassTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::DapContext::DapContext(std::__1::map<dolby::AndroidDevice, dolby::ParameterTranslator*, std::__1::less<dolby::AndroidDevice>, std::__1::allocator<std::__1::pair<dolby::AndroidDevice const, dolby::ParameterTranslator*> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContextC1ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE(void) {
    ALOGD("_ZN5dolby10DapContextC1ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE() called");
    return 0;
}

/* Demangled: dolby::VirtualBassValueSetter::VirtualBassValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby22VirtualBassValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby22VirtualBassValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::VirtualBassValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby22VirtualBassValueSetterE = NULL;

/* Demangled: dolby::DeviceData::~DeviceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceDataD2Ev(void) {
    ALOGD("_ZN5dolby10DeviceDataD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree<dolby::GeqPreset*, std::__1::less<dolby::GeqPreset*>, std::__1::allocator<dolby::GeqPreset*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::GeqPreset*, std::__1::__tree_node<dolby::GeqPreset*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::GeqPreset*, std::__1::__tree_node<dolby::GeqPreset*, void*>*, long>, std::__1::__tree_const_iterator<dolby::GeqPreset*, std::__1::__tree_node<dolby::GeqPreset*, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_() called");
    return 0;
}

/* Exported Object: vtable for dolby::RegulatorTuningValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby26RegulatorTuningValueSetterE = NULL;

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-android::DolbyManagerService::NotificationClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android19DolbyManagerService18NotificationClientE0_NS_8hardware20hidl_death_recipientE = NULL;

/* Exported Object: dolby::GeqTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13GeqTranslator10kSrcParamsE = NULL;

/* Demangled: android::DolbyManagerService::setDapParam(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService11setDapParamEPvj(void) {
    ALOGD("_ZN7android19DolbyManagerService11setDapParamEPvj() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::~DolbyManagerService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerServiceD1Ev(void) {
    ALOGD("_ZN7android19DolbyManagerServiceD1Ev() called");
    return 0;
}

/* Exported Object: vtable for dolby::ProfileEndpoint */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby15ProfileEndpointE = NULL;

/* Demangled: dolby::SimpleTranslator::SimpleTranslator(dolby::DapParameter, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16SimpleTranslatorC2ENS_12DapParameterENS_9ParameterE(void) {
    ALOGD("_ZN5dolby16SimpleTranslatorC2ENS_12DapParameterENS_9ParameterE() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DsContextManager>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby16DsContextManagerEED2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby16DsContextManagerEED2Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryDapStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper14queryDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper14queryDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::DatabaseHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby14DatabaseHelperE = NULL;

/* Demangled: dolby::TagIterator::childrenNext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator12childrenNextEv(void) {
    ALOGD("_ZN5dolby11TagIterator12childrenNextEv() called");
    return 0;
}

/* Demangled: dolby::NodeParseUtils::parseMixMatrix(dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14NodeParseUtils14parseMixMatrixERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby14NodeParseUtils14parseMixMatrixERNS_11TagIteratorE() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::setParameter(dolby::DsContext*, int, dolby::Endpoint, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiNS_8EndpointERNSt3__16vectorIiNS5_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiNS_8EndpointERNSt3__16vectorIiNS5_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for dolby::GeqTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby13GeqTranslatorE = NULL;

/* Demangled: dolby::DapContext::getParameters(dolby::AndroidDevice) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContext13getParametersENS_13AndroidDeviceE(void) {
    ALOGD("_ZN5dolby10DapContext13getParametersENS_13AndroidDeviceE() called");
    return 0;
}

/* Demangled: dolby::DapController::onSelectedProfileGeqChanged(dolby::DsContext&, dolby::GeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE(void) {
    ALOGD("_ZN5dolby13DapController27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::~DsContextManager() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManagerD2Ev(void) {
    ALOGD("_ZN5dolby16DsContextManagerD2Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::initDatabase() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider12initDatabaseEv(void) {
    ALOGD("_ZN5dolby8Provider12initDatabaseEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::getProfilePortParameter(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager23getProfilePortParameterEiii(void) {
    ALOGD("_ZN5dolby9DsManager23getProfilePortParameterEiii() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::DolbyManagerService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerServiceC2Ev(void) {
    ALOGD("_ZN7android19DolbyManagerServiceC2Ev() called");
    return 0;
}

/* Exported Object: dolby::AudioRegulatorTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby24AudioRegulatorTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::DsContextManager::initDatabase(dolby::Provider*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager12initDatabaseEPNS_8ProviderENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16DsContextManager12initDatabaseEPNS_8ProviderENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::NotificationClient::NotificationClient(android::sp<android::DolbyManagerService> const&, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18NotificationClientC2ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void) {
    ALOGD("_ZN7android19DolbyManagerService18NotificationClientC2ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij() called");
    return 0;
}

/* Demangled: dolby::Provider::updateDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider18updateDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void) {
    ALOGD("_ZN5dolby8Provider18updateDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_() called");
    return 0;
}

/* Demangled: dolby::Provider::loadDeviceTuningsForPort(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider24loadDeviceTuningsForPortENS_4PortE(void) {
    ALOGD("_ZN5dolby8Provider24loadDeviceTuningsForPortENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::~TagIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIteratorD0Ev(void) {
    ALOGD("_ZN5dolby11TagIteratorD0Ev() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::getIeqPresetTypeByName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser22getIeqPresetTypeByNameERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16TuningFileParser22getIeqPresetTypeByNameERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::DsManager::getTuningParamDSA(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager17getTuningParamDSAENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsManager17getTuningParamDSAENS_4PortE() called");
    return 0;
}

/* Exported Object: dolby::Tuning::kEndpNameToEndpoint */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby6Tuning19kEndpNameToEndpointE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: android::DolbyManagerService::commitChange() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12commitChangeEv(void) {
    ALOGD("_ZN7android19DolbyManagerService12commitChangeEv() called");
    return 0;
}

/* Demangled: dolby::DapController::onSelectedProfileIeqChanged(dolby::DsContext&, dolby::Port, dolby::IeqPreset&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE(void) {
    ALOGD("_ZN5dolby13DapController27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::TagIterator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIteratorC1Ev(void) {
    ALOGD("_ZN5dolby11TagIteratorC1Ev() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::NotificationClient::~NotificationClient() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18NotificationClientD2Ev(void) {
    ALOGD("_ZN7android19DolbyManagerService18NotificationClientD2Ev() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::setTuning(dolby::Tuning&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters9setTuningERNS_6TuningE(void) {
    ALOGD("_ZN5dolby16DeviceParameters9setTuningERNS_6TuningE() called");
    return 0;
}

/* Demangled: dolby::DapController::DapController(int, dolby::DapEffect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapControllerC2EiRNS_9DapEffectE(void) {
    ALOGD("_ZN5dolby13DapControllerC2EiRNS_9DapEffectE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryConfigurationValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper23queryConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper23queryConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::NotificationClient::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService18NotificationClient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN7android19DolbyManagerService18NotificationClient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::isDirty() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuning7isDirtyEv(void) {
    ALOGD("_ZN5dolby12DeviceTuning7isDirtyEv() called");
    return 0;
}

/* Demangled: dolby::AudioOptimizerTranslator::AudioOptimizerTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioOptimizerTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby24AudioOptimizerTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::VirtualBassEnableTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby27VirtualBassEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby27VirtualBassEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::getProfileName(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser14getProfileNameEi(void) {
    ALOGD("_ZN5dolby16TuningFileParser14getProfileNameEi() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::getTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuning9getTuningEv(void) {
    ALOGD("_ZN5dolby12DeviceTuning9getTuningEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::isMonoInternalSpeaker() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService21isMonoInternalSpeakerEv(void) {
    ALOGD("_ZN7android19DolbyManagerService21isMonoInternalSpeakerEv() called");
    return 0;
}

/* Exported Object: dolby::TranslatorCollection::kAllTranslators */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby20TranslatorCollection15kAllTranslatorsE = NULL;

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int&>(int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJRiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJRiEEEvDpOT_() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager4initEv(void) {
    ALOGD("_ZN5dolby16DsContextManager4initEv() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::execSQL(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper7execSQLERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper7execSQLERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::RegulatorTuningValueSetter::RegulatorTuningValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26RegulatorTuningValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void) {
    ALOGD("_ZN5dolby26RegulatorTuningValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::EventHandler::EventHandler(dolby::DsManager*, android::DolbyManagerService*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService12EventHandlerC2EPN5dolby9DsManagerEPS0_(void) {
    ALOGD("_ZN7android19DolbyManagerService12EventHandlerC2EPN5dolby9DsManagerEPS0_() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::isMobilityProfileSelected() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService25isMobilityProfileSelectedEv(void) {
    ALOGD("_ZN7android19DolbyManagerService25isMobilityProfileSelectedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::DsContext::DsContext(dolby::Provider*, dolby::DsContextChangeObservable*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContextC2EPNS_8ProviderEPNS_25DsContextChangeObservableE(void) {
    ALOGD("_ZN5dolby9DsContextC2EPNS_8ProviderEPNS_25DsContextChangeObservableE() called");
    return 0;
}

/* Demangled: dolby::Provider::setDefaultXmlFormatVersion(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider26setDefaultXmlFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby8Provider26setDefaultXmlFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::ParameterAdapter::VirtualizerStrategy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16ParameterAdapter19VirtualizerStrategyE = NULL;

/* Demangled: dolby::RowDataValueSetter::RowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18RowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby18RowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::DsManager::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager4initEv(void) {
    ALOGD("_ZN5dolby9DsManager4initEv() called");
    return 0;
}

/* Demangled: dolby::Profile::getProfileId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile12getProfileIdEv(void) {
    ALOGD("_ZN5dolby7Profile12getProfileIdEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::getSelectedProfileEndpoint(dolby::Port) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext26getSelectedProfileEndpointENS_4PortE(void) {
    ALOGD("_ZN5dolby9DsContext26getSelectedProfileEndpointENS_4PortE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::popNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator7popNodeEv(void) {
    ALOGD("_ZN5dolby11TagIterator7popNodeEv() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::parseDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser17parseDeviceTuningERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16TuningFileParser17parseDeviceTuningERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::DsManager::saveDsProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager13saveDsProfileEv(void) {
    ALOGD("_ZN5dolby9DsManager13saveDsProfileEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: dolby::ProfileEndpoint::kValidParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby15ProfileEndpoint12kValidParamsE = NULL;

/* Exported Object: vtable for dolby::VirtualBassEnableTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby27VirtualBassEnableTranslatorE = NULL;

/* Demangled: dolby::Provider::getDefaultXmlFormatVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider26getDefaultXmlFormatVersionEv(void) {
    ALOGD("_ZN5dolby8Provider26getDefaultXmlFormatVersionEv() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setGeqPresets(std::__1::set<dolby::GeqPreset*, std::__1::less<dolby::GeqPreset*>, std::__1::allocator<dolby::GeqPreset*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData13setGeqPresetsERNSt3__13setIPNS_9GeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN5dolby10DeviceData13setGeqPresetsERNSt3__13setIPNS_9GeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: dolby::GeqTranslator::GeqTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13GeqTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby13GeqTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::getAllRows(std::__1::vector<dolby::RowData, std::__1::allocator<dolby::RowData> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper10getAllRowsERNSt3__16vectorINS_7RowDataENS1_9allocatorIS3_EEEERNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper10getAllRowsERNSt3__16vectorINS_7RowDataENS1_9allocatorIS3_EEEERNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::MixMatrixValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby20MixMatrixValueSetterE = NULL;

/* Demangled: dolby::Tuning::setEndpoint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning11setEndpointENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby6Tuning11setEndpointENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::setProfile(dolby::Profile&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParameters10setProfileERNS_7ProfileE(void) {
    ALOGD("_ZN5dolby16DeviceParameters10setProfileERNS_7ProfileE() called");
    return 0;
}

/* Demangled: std::__1::deque<_xmlNode*, std::__1::allocator<_xmlNode*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIP8_xmlNodeNS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIP8_xmlNodeNS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getDefaultXmlFormatVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService26getDefaultXmlFormatVersionEv(void) {
    ALOGD("_ZN7android19DolbyManagerService26getDefaultXmlFormatVersionEv() called");
    return 0;
}

/* Demangled: dolby::DeviceParameters::DeviceParameters(dolby::ParamChangeObserver*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DeviceParametersC2EPNS_19ParamChangeObserverE(void) {
    ALOGD("_ZN5dolby16DeviceParametersC2EPNS_19ParamChangeObserverE() called");
    return 0;
}

/* Demangled: dolby::BassMbdrcTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19BassMbdrcTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby19BassMbdrcTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::DapController::~DapController() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapControllerD2Ev(void) {
    ALOGD("_ZN5dolby13DapControllerD2Ev() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::getSelectedGeqPreset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext20getSelectedGeqPresetEv(void) {
    ALOGD("_ZN5dolby14ProfileContext20getSelectedGeqPresetEv() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::getRowCount(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper11getRowCountERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper11getRowCountERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::parseProfileEndpoint(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser20parseProfileEndpointEi(void) {
    ALOGD("_ZN5dolby16TuningFileParser20parseProfileEndpointEi() called");
    return 0;
}

/* Demangled: dolby::DeviceTuning::getDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuning9getDeviceEv(void) {
    ALOGD("_ZN5dolby12DeviceTuning9getDeviceEv() called");
    return 0;
}

/* Demangled: dolby::IeqTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13IeqTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby13IeqTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::DapEffect::DapEffect(int, android::String16) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffectC2EiN7android8String16E(void) {
    ALOGD("_ZN5dolby9DapEffectC2EiN7android8String16E() called");
    return 0;
}

/* Demangled: dolby::DsManager::saveDsState() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager11saveDsStateEv(void) {
    ALOGD("_ZN5dolby9DsManager11saveDsStateEv() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getDapEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService13getDapEnabledEv(void) {
    ALOGD("_ZN7android19DolbyManagerService13getDapEnabledEv() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::getId() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint5getIdEv(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint5getIdEv() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(int, dolby::Endpoint, dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpointC1EiNS_8EndpointENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby15ProfileEndpointC1EiNS_8EndpointENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: dolby::DsContext::isProfileModified(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext17isProfileModifiedEi(void) {
    ALOGD("_ZN5dolby9DsContext17isProfileModifiedEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::setDsSuspended(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager14setDsSuspendedEb(void) {
    ALOGD("_ZN5dolby9DsManager14setDsSuspendedEb() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::getStoredParams(android::KeyedVector<audio_devices_t, dolby::DapParamCache*>*, bool, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService15getStoredParamsEPNS_11KeyedVectorI15audio_devices_tPN5dolby13DapParamCacheEEEbPi(void) {
    ALOGD("_ZN7android19DolbyManagerService15getStoredParamsEPNS_11KeyedVectorI15audio_devices_tPN5dolby13DapParamCacheEEEbPi() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::Parameter, std::__1::less<dolby::Parameter>, std::__1::allocator<dolby::Parameter> >::destroy(std::__1::__tree_node<dolby::Parameter, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5dolby9ParameterENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN5dolby9ParameterENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: dolby::OutputModeTranslator::OutputModeTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20OutputModeTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby20OutputModeTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::~TuningFileParser() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParserD0Ev(void) {
    ALOGD("_ZN5dolby16TuningFileParserD0Ev() called");
    return 0;
}

/* Demangled: dolby::ProfileEndpoint::toString() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint8toStringEv(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint8toStringEv() called");
    return 0;
}

/* Demangled: dolby::DapContext::setTuning(dolby::Port, dolby::Tuning&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContext9setTuningENS_4PortERNS_6TuningE(void) {
    ALOGD("_ZN5dolby10DapContext9setTuningENS_4PortERNS_6TuningE() called");
    return 0;
}

/* Demangled: dolby::DeviceData::setToolVersion(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData14setToolVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby10DeviceData14setToolVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: dolby::DsContext::getProfileParameter(int, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext19getProfileParameterEiNS_9ParameterE(void) {
    ALOGD("_ZN5dolby9DsContext19getProfileParameterEiNS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::TuningFileParser() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParserC1Ev(void) {
    ALOGD("_ZN5dolby16TuningFileParserC1Ev() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryEndpointValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ProfileEndpoint*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper18queryEndpointValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_PNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper18queryEndpointValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_PNS_15ProfileEndpointE() called");
    return 0;
}

/* Exported Object: vtable for dolby::ParameterValues */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby15ParameterValuesE = NULL;

/* Demangled: dolby::ProfileContext::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext5resetEv(void) {
    ALOGD("_ZN5dolby14ProfileContext5resetEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::isProfileSpecificSettingsModified(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext33isProfileSpecificSettingsModifiedEi(void) {
    ALOGD("_ZN5dolby9DsContext33isProfileSpecificSettingsModifiedEi() called");
    return 0;
}

/* Exported Object: vtable for android::DolbyManagerService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android19DolbyManagerServiceE = NULL;

/* Demangled: dolby::ProfileEndpoint::getSelectedIeqPreset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15ProfileEndpoint20getSelectedIeqPresetEv(void) {
    ALOGD("_ZN5dolby15ProfileEndpoint20getSelectedIeqPresetEv() called");
    return 0;
}

/* Demangled: dolby::DsContextManager::loadOemTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DsContextManager13loadOemTuningEv(void) {
    ALOGD("_ZN5dolby16DsContextManager13loadOemTuningEv() called");
    return 0;
}

/* Exported Object: dolby::GeqValueSetter::kAttrNames */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby14GeqValueSetter10kAttrNamesE = NULL;

/* Demangled: dolby::IeqPreset::toString() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPreset8toStringEv(void) {
    ALOGD("_ZN5dolby9IeqPreset8toStringEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::getParameter(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager12getParameterEii(void) {
    ALOGD("_ZN5dolby9DsManager12getParameterEii() called");
    return 0;
}

/* Demangled: dolby::TranslatorCollection::~TranslatorCollection() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20TranslatorCollectionD2Ev(void) {
    ALOGD("_ZN5dolby20TranslatorCollectionD2Ev() called");
    return 0;
}

/* Demangled: dolby::DsManager::getNumOfProfiles() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager16getNumOfProfilesEv(void) {
    ALOGD("_ZN5dolby9DsManager16getNumOfProfilesEv() called");
    return 0;
}

/* Demangled: dolby::MixMatrixValueSetter::getNodeName() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20MixMatrixValueSetter11getNodeNameEv(void) {
    ALOGD("_ZN5dolby20MixMatrixValueSetter11getNodeNameEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::DsContextChangeObservable */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby25DsContextChangeObservableE = NULL;

/* Demangled: dolby::ProfileContext::~ProfileContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContextD2Ev(void) {
    ALOGD("_ZN5dolby14ProfileContextD2Ev() called");
    return 0;
}

/* Demangled: dolby::TuningFileParser::setTuningFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16TuningFileParser13setTuningFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby16TuningFileParser13setTuningFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: dolby::Provider::~Provider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8ProviderD0Ev(void) {
    ALOGD("_ZN5dolby8ProviderD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
    return 0;
}

/* Demangled: dolby::Profile::isMobility() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile10isMobilityEv(void) {
    ALOGD("_ZN5dolby7Profile10isMobilityEv() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileEndpointChanged(dolby::DsContext&, dolby::Port, dolby::ProfileEndpoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE() called");
    return 0;
}

/* Demangled: dolby::DsContext::getContext(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext10getContextEi(void) {
    ALOGD("_ZN5dolby9DsContext10getContextEi() called");
    return 0;
}

/* Exported Object: vtable for dolby::TagIterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby11TagIteratorE = NULL;

/* Exported Object: dolby::AudioOptimizerValueSetter::kAttrNames */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby25AudioOptimizerValueSetter10kAttrNamesE = NULL;

/* Exported Object: vtable for dolby::ParameterAdapter::ProfileEndpointParameterStrategy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16ParameterAdapter32ProfileEndpointParameterStrategyE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Exported Object: dolby::AudioOptimizerTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby24AudioOptimizerTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::ComplexEqualizerTranslator::ComplexEqualizerTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby26ComplexEqualizerTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby26ComplexEqualizerTranslatorC2Ev() called");
    return 0;
}

/* Exported Object: dolby::VirtualBassEnableTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby27VirtualBassEnableTranslator10kSrcParamsE = NULL;

/* Demangled: dolby::Provider::Provider() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8ProviderC1Ev(void) {
    ALOGD("_ZN5dolby8ProviderC1Ev() called");
    return 0;
}

/* Demangled: dolby::DeviceData::getProfiles() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DeviceData11getProfilesEv(void) {
    ALOGD("_ZN5dolby10DeviceData11getProfilesEv() called");
    return 0;
}

/* Demangled: dolby::DsManager::reloadTuningXml() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager15reloadTuningXmlEv(void) {
    ALOGD("_ZN5dolby9DsManager15reloadTuningXmlEv() called");
    return 0;
}

/* Exported Object: dolby::GeqPreset::kValidParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby9GeqPreset12kValidParamsE = NULL;

/* Exported Object: vtable for dolby::DeviceParameters */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16DeviceParametersE = NULL;

/* Demangled: dolby::DapEffect::~DapEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DapEffectD1Ev(void) {
    ALOGD("_ZN5dolby9DapEffectD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::updateParams(dolby::ParameterValues&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParameters12updateParamsERNS_15ParameterValuesE(void) {
    ALOGD("_ZN5dolby17ProfileParameters12updateParamsERNS_15ParameterValuesE() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >::destroy(std::__1::__tree_node<dolby::DeviceTuning*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Exported Object: dolby::RegulatorTuningValueSetter::kAttrNames */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby26RegulatorTuningValueSetter10kAttrNamesE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::ProfileParameters */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby17ProfileParametersE = NULL;

/* Demangled: dolby::IeqTranslator::IeqTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13IeqTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby13IeqTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::GeqPreset::GeqPreset(long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9GeqPresetC2Exi(void) {
    ALOGD("_ZN5dolby9GeqPresetC2Exi() called");
    return 0;
}

/* Exported Object: dolby::CustomDRCTranslator::kSrcParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby19CustomDRCTranslator10kSrcParamsE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_() called");
    return 0;
}

/* Demangled: dolby::Provider::loadDefaultProfileEndpoints(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider27loadDefaultProfileEndpointsEi(void) {
    ALOGD("_ZN5dolby8Provider27loadDefaultProfileEndpointsEi() called");
    return 0;
}

/* Demangled: dolby::AudioRegulatorTranslator::getSrcParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby24AudioRegulatorTranslator12getSrcParamsEv(void) {
    ALOGD("_ZN5dolby24AudioRegulatorTranslator12getSrcParamsEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::setProfileParameter(int, dolby::Endpoint, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext19setProfileParameterEiNS_8EndpointENS_9ParameterERNSt3__16vectorIiNS3_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby9DsContext19setProfileParameterEiNS_8EndpointENS_9ParameterERNSt3__16vectorIiNS3_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::queryDeviceTunings(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper18queryDeviceTuningsENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS1_3setIPNS_12DeviceTuningENS1_4lessISA_EENS5_ISA_EEEE(void) {
    ALOGD("_ZN5dolby14DatabaseHelper18queryDeviceTuningsENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS1_3setIPNS_12DeviceTuningENS1_4lessISA_EENS5_ISA_EEEE() called");
    return 0;
}

/* Demangled: dolby::TagIterator::isNextValid() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby11TagIterator11isNextValidEv(void) {
    ALOGD("_ZN5dolby11TagIterator11isNextValidEv() called");
    return 0;
}

/* Demangled: dolby::Profile::getSelectedGeqPreset() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile20getSelectedGeqPresetEv(void) {
    ALOGD("_ZN5dolby7Profile20getSelectedGeqPresetEv() called");
    return 0;
}

/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, std::initializer_list<std::__1::vector<int, std::__1::allocator<int> >*>) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby15SetParamCommand3addENS_12DapParameterESt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE(void) {
    ALOGD("_ZN5dolby15SetParamCommand3addENS_12DapParameterESt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::IeqTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby13IeqTranslatorE = NULL;

/* Demangled: dolby::DsContext::getSelectedProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext18getSelectedProfileEv(void) {
    ALOGD("_ZN5dolby9DsContext18getSelectedProfileEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::VirtualBassSubgainValueSetter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby29VirtualBassSubgainValueSetterE = NULL;

/* Demangled: dolby::DeviceTuning::DeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12DeviceTuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void) {
    ALOGD("_ZN5dolby12DeviceTuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_() called");
    return 0;
}

/* Demangled: dolby::ParameterTranslator::onParameterChanged(dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19ParameterTranslator18onParameterChangedENS_9ParameterE(void) {
    ALOGD("_ZN5dolby19ParameterTranslator18onParameterChangedENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::ParameterTranslator::setSource(dolby::ParameterValues*, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19ParameterTranslator9setSourceEPNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby19ParameterTranslator9setSourceEPNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DsContextManager>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby16DsContextManagerEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5dolby16DsContextManagerEE11getInstanceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: dolby::Tuning::setMono(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby6Tuning7setMonoEb(void) {
    ALOGD("_ZN5dolby6Tuning7setMonoEb() called");
    return 0;
}

/* Demangled: dolby::IeqPreset::IeqPreset(dolby::PresetType) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9IeqPresetC2ENS_10PresetTypeE(void) {
    ALOGD("_ZN5dolby9IeqPresetC2ENS_10PresetTypeE() called");
    return 0;
}

/* Demangled: dolby::Profile::toString() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile8toStringEv(void) {
    ALOGD("_ZN5dolby7Profile8toStringEv() called");
    return 0;
}

/* Demangled: dolby::ProfileParameters::~ProfileParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17ProfileParametersD0Ev(void) {
    ALOGD("_ZN5dolby17ProfileParametersD0Ev() called");
    return 0;
}

/* Demangled: dolby::ParameterTranslator::ParameterTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby19ParameterTranslatorC1Ev(void) {
    ALOGD("_ZN5dolby19ParameterTranslatorC1Ev() called");
    return 0;
}

/* Demangled: dolby::DapContext::DapContext(std::__1::map<dolby::AndroidDevice, dolby::ParameterTranslator*, std::__1::less<dolby::AndroidDevice>, std::__1::allocator<std::__1::pair<dolby::AndroidDevice const, dolby::ParameterTranslator*> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContextC2ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE(void) {
    ALOGD("_ZN5dolby10DapContextC2ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE() called");
    return 0;
}

/* Demangled: dolby::DapContext::~DapContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby10DapContextD1Ev(void) {
    ALOGD("_ZN5dolby10DapContextD1Ev() called");
    return 0;
}

/* Demangled: dolby::Provider::beginTransaction() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider16beginTransactionEv(void) {
    ALOGD("_ZN5dolby8Provider16beginTransactionEv() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::~ParameterAdapter() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapterD2Ev(void) {
    ALOGD("_ZN5dolby16ParameterAdapterD2Ev() called");
    return 0;
}

/* Demangled: dolby::Profile::setName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby7Profile7setNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5dolby7Profile7setNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for dolby::SimpleTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16SimpleTranslatorE = NULL;

/* Exported Object: vtable for dolby::CustomDRCTranslator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby19CustomDRCTranslatorE = NULL;

/* Exported Object: vtable for dolby::DapController */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby13DapControllerE = NULL;

/* Exported Object: dolby::SetterCollection::kAllValueSetters */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby16SetterCollection16kAllValueSettersE = NULL;

/* Exported Object: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: dolby::MixMatrixValueSetter::MixMatrixValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby20MixMatrixValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void) {
    ALOGD("_ZN5dolby20MixMatrixValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE() called");
    return 0;
}

/* Demangled: dolby::SimpleTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16SimpleTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void) {
    ALOGD("_ZN5dolby16SimpleTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb() called");
    return 0;
}

/* Demangled: dolby::DeEnableTranslator::DeEnableTranslator() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby18DeEnableTranslatorC2Ev(void) {
    ALOGD("_ZN5dolby18DeEnableTranslatorC2Ev() called");
    return 0;
}

/* Demangled: dolby::DsContext::DsContext(dolby::Provider*, dolby::DsContextChangeObservable*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContextC1EPNS_8ProviderEPNS_25DsContextChangeObservableE(void) {
    ALOGD("_ZN5dolby9DsContextC1EPNS_8ProviderEPNS_25DsContextChangeObservableE() called");
    return 0;
}

/* Demangled: dolby::DatabaseHelper::initParameterNameMap() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DatabaseHelper20initParameterNameMapEv(void) {
    ALOGD("_ZN5dolby14DatabaseHelper20initParameterNameMapEv() called");
    return 0;
}

/* Demangled: std::__1::vector<dolby::Profile*, std::__1::allocator<dolby::Profile*> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5dolby7ProfileENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIPN5dolby7ProfileENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::setProfileEndpointParameter(int, dolby::Endpoint, int, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter27setProfileEndpointParameterEiNS_8EndpointEiRNSt3__16vectorIiNS2_9allocatorIiEEEE(void) {
    ALOGD("_ZN5dolby16ParameterAdapter27setProfileEndpointParameterEiNS_8EndpointEiRNSt3__16vectorIiNS2_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileParameterChanged(dolby::DsContext&, dolby::Profile&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby25DsContextChangeObservable33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE(void) {
    ALOGD("_ZN5dolby25DsContextChangeObservable33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE() called");
    return 0;
}

/* Exported Object: dolby::DsContext::kSupportedPorts */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby9DsContext15kSupportedPortsE = NULL;

/* Demangled: dolby::Provider::loadDefaultGeqPreset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby8Provider20loadDefaultGeqPresetEi(void) {
    ALOGD("_ZN5dolby8Provider20loadDefaultGeqPresetEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >::__find_equal<dolby::ProfileEndpoint*>(std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, dolby::ProfileEndpoint* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_() called");
    return 0;
}

/* Demangled: dolby::ParameterAdapter::VirtualizerStrategy::getParameter(dolby::DsContext*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16ParameterAdapter19VirtualizerStrategy12getParameterEPNS_9DsContextEi(void) {
    ALOGD("_ZN5dolby16ParameterAdapter19VirtualizerStrategy12getParameterEPNS_9DsContextEi() called");
    return 0;
}

/* Demangled: dolby::DsManager::isMonoInternalSpeaker() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager21isMonoInternalSpeakerEv(void) {
    ALOGD("_ZN5dolby9DsManager21isMonoInternalSpeakerEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<dolby::Profile*, std::__1::less<dolby::Profile*>, std::__1::allocator<dolby::Profile*> >::destroy(std::__1::__tree_node<dolby::Profile*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: dolby::DsManager::saveDsProfileSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsManager21saveDsProfileSettingsEv(void) {
    ALOGD("_ZN5dolby9DsManager21saveDsProfileSettingsEv() called");
    return 0;
}

/* Demangled: dolby::DapController::sendParameters(dolby::AndroidDevice) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapController14sendParametersENS_13AndroidDeviceE(void) {
    ALOGD("_ZN5dolby13DapController14sendParametersENS_13AndroidDeviceE() called");
    return 0;
}

/* Demangled: dolby::ProfileContext::load() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14ProfileContext4loadEv(void) {
    ALOGD("_ZN5dolby14ProfileContext4loadEv() called");
    return 0;
}

/* Demangled: dolby::DsContext::getSelectedTuningParameter(dolby::Port, dolby::Parameter) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext26getSelectedTuningParameterENS_4PortENS_9ParameterE(void) {
    ALOGD("_ZN5dolby9DsContext26getSelectedTuningParameterENS_4PortENS_9ParameterE() called");
    return 0;
}

/* Demangled: android::DolbyManagerService::setSelectedTuningDevice(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DolbyManagerService23setSelectedTuningDeviceEiPvi(void) {
    ALOGD("_ZN7android19DolbyManagerService23setSelectedTuningDeviceEiPvi() called");
    return 0;
}

/* Demangled: virtual thunk to android::DolbyManagerService::NotificationClient::~NotificationClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android19DolbyManagerService18NotificationClientD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android19DolbyManagerService18NotificationClientD1Ev() called");
    return 0;
}

/* Exported Object: dolby::ParameterTranslator::sTranslatorCollection */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby19ParameterTranslator21sTranslatorCollectionE = NULL;

/* Demangled: dolby::DsContext::getProfileEndpoint(dolby::Endpoint) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DsContext18getProfileEndpointENS_8EndpointE(void) {
    ALOGD("_ZN5dolby9DsContext18getProfileEndpointENS_8EndpointE() called");
    return 0;
}

/* Demangled: dolby::SimpleValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17SimpleValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void) {
    ALOGD("_ZN5dolby17SimpleValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE() called");
    return 0;
}
