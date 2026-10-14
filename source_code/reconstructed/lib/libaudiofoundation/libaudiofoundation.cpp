/*
 * Reverse-Engineered Source for: libaudiofoundation.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaudiofoundation"

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
#include "libaudiofoundation.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::AudioPortConfig::hasGainController(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15AudioPortConfig17hasGainControllerEb(void) {
    ALOGD("_ZNK7android15AudioPortConfig17hasGainControllerEb() called");
    return 0;
}

/* Exported Object: vtable for android::AudioProfileVector */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android18AudioProfileVectorE = NULL;

/* Demangled: android::getAudioDeviceInAllSet() */
extern "C" __attribute__((visibility("default"))) int _ZN7android22getAudioDeviceInAllSetEv(void) {
    ALOGD("_ZN7android22getAudioDeviceInAllSetEv() called");
    return 0;
}

/* Exported Object: VTT for android::AudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android9AudioPortE = NULL;

/* Demangled: android::DeviceDescriptorBase::toAudioPortConfig(audio_port_config*, audio_port_config const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_(void) {
    ALOGD("_ZNK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::AudioGain::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioGain14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android9AudioGain14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZNK7android18AudioProfileVector4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfileC2E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_(void) {
    ALOGD("_ZN7android12AudioProfileC2E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<android::AudioProfile>, std::__1::allocator<android::sp<android::AudioProfile> > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::AudioPort-in-android::DeviceDescriptorBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android20DeviceDescriptorBaseE0_NS_9AudioPortE = NULL;

/* Demangled: virtual thunk to android::DeviceDescriptorBase::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZTv0_n16_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioGains::equals(android::AudioGains const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10AudioGains6equalsERKS0_(void) {
    ALOGD("_ZNK7android10AudioGains6equalsERKS0_() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::hasDynamicProfile() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector17hasDynamicProfileEv(void) {
    ALOGD("_ZNK7android18AudioProfileVector17hasDynamicProfileEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >::__push_back_slow_path<audio_format_t>(audio_format_t&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::DeviceDescriptorBase::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn56_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZThn56_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioGain::getDefaultConfig(audio_gain_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioGain16getDefaultConfigEP17audio_gain_config(void) {
    ALOGD("_ZN7android9AudioGain16getDefaultConfigEP17audio_gain_config() called");
    return 0;
}

/* Demangled: android::AudioGains::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10AudioGains13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android10AudioGains13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Exported Object: vtable for android::AudioPortConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android15AudioPortConfigE = NULL;

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(android::AudioDeviceTypeAddr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBaseC1ERKNS_19AudioDeviceTypeAddrE(void) {
    ALOGD("_ZN7android20DeviceDescriptorBaseC1ERKNS_19AudioDeviceTypeAddrE() called");
    return 0;
}

/* Demangled: android::AudioGain::checkConfig(audio_gain_config const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioGain11checkConfigEPK17audio_gain_config(void) {
    ALOGD("_ZN7android9AudioGain11checkConfigEPK17audio_gain_config() called");
    return 0;
}

/* Demangled: android::operator==(android::AudioProfile const&, android::AudioProfile const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7androideqERKNS_12AudioProfileES2_(void) {
    ALOGD("_ZN7androideqERKNS_12AudioProfileES2_() called");
    return 0;
}

/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfileC1E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_(void) {
    ALOGD("_ZN7android12AudioProfileC1E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_() called");
    return 0;
}

/* Exported Object: vtable for android::AudioProfile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12AudioProfileE = NULL;

/* Demangled: android::toString(std::__1::vector<android::sp<android::DeviceDescriptorBase>, std::__1::allocator<android::sp<android::DeviceDescriptorBase> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8toStringERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN7android8toStringERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: VTT for android::AudioPortConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android15AudioPortConfigE = NULL;

/* Demangled: android::DeviceDescriptorBase::setEncapsulationModes(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBase21setEncapsulationModesEj(void) {
    ALOGD("_ZN7android20DeviceDescriptorBase21setEncapsulationModesEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::AudioPortConfig-in-android::DeviceDescriptorBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android20DeviceDescriptorBaseE56_NS_15AudioPortConfigE = NULL;

/* Demangled: virtual thunk to android::DeviceDescriptorBase::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZTv0_n20_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioDeviceTypeAddr::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19AudioDeviceTypeAddr14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android19AudioDeviceTypeAddr14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::AudioGain::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7android9AudioGain14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZThn8_N7android9AudioGain14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioPortConfig::equals(android::sp<android::AudioPortConfig> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15AudioPortConfig6equalsERKNS_2spIS0_EE(void) {
    ALOGD("_ZNK7android15AudioPortConfig6equalsERKNS_2spIS0_EE() called");
    return 0;
}

/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfileC1E14audio_format_tjj(void) {
    ALOGD("_ZN7android12AudioProfileC1E14audio_format_tjj() called");
    return 0;
}

/* Demangled: android::getAudioDeviceInAllUsbSet() */
extern "C" __attribute__((visibility("default"))) int _ZN7android25getAudioDeviceInAllUsbSetEv(void) {
    ALOGD("_ZN7android25getAudioDeviceInAllUsbSetEv() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::hasDynamicFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector16hasDynamicFormatEv(void) {
    ALOGD("_ZNK7android18AudioProfileVector16hasDynamicFormatEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::AudioDeviceTypeAddr::equals(android::AudioDeviceTypeAddr const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android19AudioDeviceTypeAddr6equalsERKS0_(void) {
    ALOGD("_ZNK7android19AudioDeviceTypeAddr6equalsERKS0_() called");
    return 0;
}

/* Demangled: android::AudioPort::log(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioPort3logEPKc(void) {
    ALOGD("_ZNK7android9AudioPort3logEPKc() called");
    return 0;
}

/* Exported Object: vtable for android::AudioPort */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9AudioPortE = NULL;

/* Demangled: android::AudioProfileVector::hasDynamicRateFor(audio_format_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector17hasDynamicRateForE14audio_format_t(void) {
    ALOGD("_ZNK7android18AudioProfileVector17hasDynamicRateForE14audio_format_t() called");
    return 0;
}

/* Demangled: android::AudioDeviceTypeAddr::operator<(android::AudioDeviceTypeAddr const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android19AudioDeviceTypeAddrltERKS0_(void) {
    ALOGD("_ZNK7android19AudioDeviceTypeAddrltERKS0_() called");
    return 0;
}

/* Demangled: android::AudioPortConfig::applyAudioPortConfig(audio_port_config const*, audio_port_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15AudioPortConfig20applyAudioPortConfigEPK17audio_port_configPS1_(void) {
    ALOGD("_ZN7android15AudioPortConfig20applyAudioPortConfigEPK17audio_port_configPS1_() called");
    return 0;
}

/* Demangled: android::AudioPort::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioPort14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android9AudioPort14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioPort::importAudioPort(android::sp<android::AudioPort> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioPort15importAudioPortERKNS_2spIS0_EEb(void) {
    ALOGD("_ZN7android9AudioPort15importAudioPortERKNS_2spIS0_EEb() called");
    return 0;
}

/* Demangled: android::AudioProfile::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfile14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android12AudioProfile14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::getFirstValidProfile() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector20getFirstValidProfileEv(void) {
    ALOGD("_ZNK7android18AudioProfileVector20getFirstValidProfileEv() called");
    return 0;
}

/* Demangled: android::deviceTypeAddrsFromDescriptors(std::__1::vector<android::sp<android::DeviceDescriptorBase>, std::__1::allocator<android::sp<android::DeviceDescriptorBase> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android30deviceTypeAddrsFromDescriptorsERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN7android30deviceTypeAddrsFromDescriptorsERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::DeviceDescriptorBase::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZThn56_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Exported Object: vtable for android::AudioGain */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9AudioGainE = NULL;

/* Demangled: android::AudioProfileVector::equals(android::AudioProfileVector const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector6equalsERKS0_(void) {
    ALOGD("_ZNK7android18AudioProfileVector6equalsERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<audio_format_t, std::__1::less<audio_format_t>, std::__1::allocator<audio_format_t> >::destroy(std::__1::__tree_node<audio_format_t, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI14audio_format_tNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE(void) {
    ALOGD("_ZNSt3__16__treeI14audio_format_tNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE() called");
    return 0;
}

/* Demangled: android::AudioProfile::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfile5clearEv(void) {
    ALOGD("_ZN7android12AudioProfile5clearEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::AudioProfile::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7android12AudioProfile14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZThn8_N7android12AudioProfile14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIjPNS_11__tree_nodeIjS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIjPNS_11__tree_nodeIjS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: non-virtual thunk to android::AudioGain::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK7android9AudioGain13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZThn8_NK7android9AudioGain13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioPort::equals(android::sp<android::AudioPort> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioPort6equalsERKNS_2spIS0_EE(void) {
    ALOGD("_ZNK7android9AudioPort6equalsERKNS_2spIS0_EE() called");
    return 0;
}

/* Demangled: android::AudioProfile::equals(android::sp<android::AudioProfile> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12AudioProfile6equalsERKNS_2spIS0_EE(void) {
    ALOGD("_ZNK7android12AudioProfile6equalsERKNS_2spIS0_EE() called");
    return 0;
}

/* Demangled: void std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__assign_multi<std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int> >(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>, std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE14__assign_multiINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEEvT_SD_(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE14__assign_multiINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEEvT_SD_() called");
    return 0;
}

/* Demangled: android::AudioProfile::createFullDynamic(audio_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfile17createFullDynamicE14audio_format_t(void) {
    ALOGD("_ZN7android12AudioProfile17createFullDynamicE14audio_format_t() called");
    return 0;
}

/* Demangled: android::AudioDeviceTypeAddr::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android19AudioDeviceTypeAddr13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android19AudioDeviceTypeAddr13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioPortConfig::toAudioPortConfig(audio_port_config*, audio_port_config const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15AudioPortConfig17toAudioPortConfigEP17audio_port_configPKS1_(void) {
    ALOGD("_ZNK7android15AudioPortConfig17toAudioPortConfigEP17audio_port_configPKS1_() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android20DeviceDescriptorBase8toStringEv(void) {
    ALOGD("_ZNK7android20DeviceDescriptorBase8toStringEv() called");
    return 0;
}

/* Demangled: android::AudioGains::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AudioGains14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android10AudioGains14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::AudioDeviceTypeAddr::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19AudioDeviceTypeAddr5resetEv(void) {
    ALOGD("_ZN7android19AudioDeviceTypeAddr5resetEv() called");
    return 0;
}

/* Demangled: android::AudioDeviceTypeAddr::getAddress() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android19AudioDeviceTypeAddr10getAddressEv(void) {
    ALOGD("_ZNK7android19AudioDeviceTypeAddr10getAddressEv() called");
    return 0;
}

/* Exported Object: vtable for android::AudioGains */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10AudioGainsE = NULL;

/* Demangled: void std::__1::vector<android::sp<android::AudioProfile>, std::__1::allocator<android::sp<android::AudioProfile> > >::__push_back_slow_path<android::sp<android::AudioProfile> const&>(android::sp<android::AudioProfile> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: android::AudioGain::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioGain13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android9AudioGain13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioPort::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioPort13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android9AudioPort13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::toString(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8toStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN7android8toStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::AudioPort::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N7android9AudioPort14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZTv0_n20_N7android9AudioPort14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfileC2E14audio_format_tjj(void) {
    ALOGD("_ZN7android12AudioProfileC2E14audio_format_tjj() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::hasDynamicChannelsFor(audio_format_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector21hasDynamicChannelsForE14audio_format_t(void) {
    ALOGD("_ZNK7android18AudioProfileVector21hasDynamicChannelsForE14audio_format_t() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBaseC2EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android20DeviceDescriptorBaseC2EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::AudioGain::equals(android::sp<android::AudioGain> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioGain6equalsERKNS_2spIS0_EE(void) {
    ALOGD("_ZNK7android9AudioGain6equalsERKNS_2spIS0_EE() called");
    return 0;
}

/* Demangled: android::AudioProfile::setChannels(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfile11setChannelsERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE(void) {
    ALOGD("_ZN7android12AudioProfile11setChannelsERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::equals(android::sp<android::DeviceDescriptorBase> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android20DeviceDescriptorBase6equalsERKNS_2spIS0_EE(void) {
    ALOGD("_ZNK7android20DeviceDescriptorBase6equalsERKNS_2spIS0_EE() called");
    return 0;
}

/* Demangled: android::getAudioDeviceOutAllScoSet() */
extern "C" __attribute__((visibility("default"))) int _ZN7android26getAudioDeviceOutAllScoSetEv(void) {
    ALOGD("_ZN7android26getAudioDeviceOutAllScoSetEv() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::setEncapsulationMetadataTypes(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBase29setEncapsulationMetadataTypesEj(void) {
    ALOGD("_ZN7android20DeviceDescriptorBase29setEncapsulationMetadataTypesEj() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBaseC1EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android20DeviceDescriptorBaseC1EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::AudioPortConfig::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioPort::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioPort4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEib(void) {
    ALOGD("_ZNK7android9AudioPort4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEib() called");
    return 0;
}

/* Demangled: virtual thunk to android::AudioPortConfig::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZTv0_n20_N7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::getSupportedFormats() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector19getSupportedFormatsEv(void) {
    ALOGD("_ZNK7android18AudioProfileVector19getSupportedFormatsEv() called");
    return 0;
}

/* Demangled: android::getAudioDeviceOutAllUsbSet() */
extern "C" __attribute__((visibility("default"))) int _ZN7android26getAudioDeviceOutAllUsbSetEv(void) {
    ALOGD("_ZN7android26getAudioDeviceOutAllUsbSetEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: vtable for android::AudioDeviceTypeAddr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android19AudioDeviceTypeAddrE = NULL;

/* Demangled: void std::__1::vector<android::AudioDeviceTypeAddr, std::__1::allocator<android::AudioDeviceTypeAddr> >::__push_back_slow_path<android::AudioDeviceTypeAddr const&>(android::AudioDeviceTypeAddr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android19AudioDeviceTypeAddrENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android19AudioDeviceTypeAddrENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: android::AudioPort::toAudioPort(audio_port*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioPort11toAudioPortEP10audio_port(void) {
    ALOGD("_ZNK7android9AudioPort11toAudioPortEP10audio_port() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBaseC1Ej(void) {
    ALOGD("_ZN7android20DeviceDescriptorBaseC1Ej() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Exported Object: vtable for android::DeviceDescriptorBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android20DeviceDescriptorBaseE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: android::AudioProfile::setSampleRates(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AudioProfile14setSampleRatesERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE(void) {
    ALOGD("_ZN7android12AudioProfile14setSampleRatesERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android18AudioProfileVector13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::getFirstValidProfileFor(audio_format_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android18AudioProfileVector23getFirstValidProfileForE14audio_format_t(void) {
    ALOGD("_ZNK7android18AudioProfileVector23getFirstValidProfileForE14audio_format_t() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBaseC2Ej(void) {
    ALOGD("_ZN7android20DeviceDescriptorBaseC2Ej() called");
    return 0;
}

/* Demangled: android::getAudioDeviceTypes(std::__1::vector<android::AudioDeviceTypeAddr, std::__1::allocator<android::AudioDeviceTypeAddr> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19getAudioDeviceTypesERKNSt3__16vectorINS_19AudioDeviceTypeAddrENS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN7android19getAudioDeviceTypesERKNSt3__16vectorINS_19AudioDeviceTypeAddrENS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: android::AudioGain::AudioGain(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioGainC2Eib(void) {
    ALOGD("_ZN7android9AudioGainC2Eib() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int> std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__emplace_hint_unique_impl<int&>(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE26__emplace_hint_unique_implIJRiEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEEiEENS_21__tree_const_iteratorIjSC_iEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE26__emplace_hint_unique_implIJRiEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEEiEENS_21__tree_const_iteratorIjSC_iEEDpOT_() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::toAudioPort(audio_port*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android20DeviceDescriptorBase11toAudioPortEP10audio_port(void) {
    ALOGD("_ZNK7android20DeviceDescriptorBase11toAudioPortEP10audio_port() called");
    return 0;
}

/* Demangled: android::deviceTypesToString(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19deviceTypesToStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEERNS0_12basic_stringIcNS0_11char_traitsIcEENS4_IcEEEE(void) {
    ALOGD("_ZN7android19deviceTypesToStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEERNS0_12basic_stringIcNS0_11char_traitsIcEENS4_IcEEEE() called");
    return 0;
}

/* Demangled: android::AudioGain::AudioGain(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioGainC1Eib(void) {
    ALOGD("_ZN7android9AudioGainC1Eib() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<android::AudioGain>, std::__1::allocator<android::sp<android::AudioGain> > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_9AudioGainEEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_9AudioGainEEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: virtual thunk to android::AudioPort::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_NK7android9AudioPort13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZTv0_n16_NK7android9AudioPort13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::AudioProfile::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK7android12AudioProfile13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZThn8_NK7android12AudioProfile13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::clearProfiles() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18AudioProfileVector13clearProfilesEv(void) {
    ALOGD("_ZN7android18AudioProfileVector13clearProfilesEv() called");
    return 0;
}

/* Demangled: android::AudioProfileVector::readFromParcel(android::Parcel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18AudioProfileVector14readFromParcelEPKNS_6ParcelE(void) {
    ALOGD("_ZN7android18AudioProfileVector14readFromParcelEPKNS_6ParcelE() called");
    return 0;
}

/* Exported Object: vtable for android::Parcelable */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10ParcelableE = NULL;

/* Demangled: android::getAudioDeviceOutAllA2dpSet() */
extern "C" __attribute__((visibility("default"))) int _ZN7android27getAudioDeviceOutAllA2dpSetEv(void) {
    ALOGD("_ZN7android27getAudioDeviceOutAllA2dpSetEv() called");
    return 0;
}

/* Demangled: android::AudioGain::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9AudioGain4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEii(void) {
    ALOGD("_ZNK7android9AudioGain4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEii() called");
    return 0;
}

/* Demangled: android::AudioPortConfig::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::getAudioDeviceOutAllSet() */
extern "C" __attribute__((visibility("default"))) int _ZN7android23getAudioDeviceOutAllSetEv(void) {
    ALOGD("_ZN7android23getAudioDeviceOutAllSetEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(android::AudioDeviceTypeAddr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20DeviceDescriptorBaseC2ERKNS_19AudioDeviceTypeAddrE(void) {
    ALOGD("_ZN7android20DeviceDescriptorBaseC2ERKNS_19AudioDeviceTypeAddrE() called");
    return 0;
}

/* Exported Object: VTT for android::DeviceDescriptorBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android20DeviceDescriptorBaseE = NULL;

/* Demangled: android::AudioProfileVector::add(android::sp<android::AudioProfile> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18AudioProfileVector3addERKNS_2spINS_12AudioProfileEEE(void) {
    ALOGD("_ZN7android18AudioProfileVector3addERKNS_2spINS_12AudioProfileEEE() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int, int, char const*, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android20DeviceDescriptorBase4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiPKcb(void) {
    ALOGD("_ZNK7android20DeviceDescriptorBase4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiPKcb() called");
    return 0;
}

/* Demangled: android::dumpDeviceTypes(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15dumpDeviceTypesERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN7android15dumpDeviceTypesERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::AudioPortConfig::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_NK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZTv0_n16_NK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfile::writeToParcel(android::Parcel*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12AudioProfile13writeToParcelEPNS_6ParcelE(void) {
    ALOGD("_ZNK7android12AudioProfile13writeToParcelEPNS_6ParcelE() called");
    return 0;
}

/* Demangled: android::AudioProfile::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12AudioProfile4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZNK7android12AudioProfile4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2INS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISB_EE5valuesr16is_constructibleIiNS_15iterator_traitsISB_E9referenceEEE5valueESB_E4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2INS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISB_EE5valuesr16is_constructibleIiNS_15iterator_traitsISB_E9referenceEEE5valueESB_E4typeE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEEC2INS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISB_EE5valuesr16is_constructibleIiNS_15iterator_traitsISB_E9referenceEEE5valueESB_E4typeE() called");
    return 0;
}

/* Demangled: android::DeviceDescriptorBase::log() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android20DeviceDescriptorBase3logEv(void) {
    ALOGD("_ZNK7android20DeviceDescriptorBase3logEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::DeviceDescriptorBase::toAudioPortConfig(audio_port_config*, audio_port_config const*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn56_NK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_(void) {
    ALOGD("_ZThn56_NK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_() called");
    return 0;
}
