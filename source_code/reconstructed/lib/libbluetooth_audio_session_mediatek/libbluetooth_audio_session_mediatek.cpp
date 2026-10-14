/*
 * Reverse-Engineered Source for: libbluetooth_audio_session_mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libbluetooth_audio_session_mediatek"

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
#include "libbluetooth_audio_session_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::RegisterStatusCback(android::bluetooth::audio::PortStatusCallbacks const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession19RegisterStatusCbackERKNS1_19PortStatusCallbacksE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession19RegisterStatusCbackERKNS1_19PortStatusCallbacksE() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::GetPresentationPosition(unsigned long long*, unsigned long long*, timespec*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession23GetPresentationPositionEPyS3_P8timespec(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession23GetPresentationPositionEPyS3_P8timespec() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::PortStatusCallbacks, std::__1::allocator<android::bluetooth::audio::PortStatusCallbacks> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::IsSessionReady() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession14IsSessionReadyEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession14IsSessionReadyEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::OnSessionEnded() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession14OnSessionEndedEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession14OnSessionEndedEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UpdateAudioConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession17UpdateAudioConfigERKN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession17UpdateAudioConfigERKN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationE() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSessionInstance::GetSessionInstance(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio29BluetoothAudioSessionInstance18GetSessionInstanceERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE(void) {
    ALOGD("_ZN7android9bluetooth5audio29BluetoothAudioSessionInstance18GetSessionInstanceERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::BluetoothAudioSession, std::__1::allocator<android::bluetooth::audio::BluetoothAudioSession> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::__emplace_unique_key_args<unsigned short, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned short const&>, std::__1::tuple<> >(unsigned short const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned short const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsItJRKNS_21piecewise_construct_tENS_5tupleIJRKtEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsItJRKNS_21piecewise_construct_tENS_5tupleIJRKtEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::OutWritePcmData(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession15OutWritePcmDataEPKvj(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession15OutWritePcmDataEPKvj() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::GetSoftwarePcmCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio26GetSoftwarePcmCapabilitiesEv(void) {
    ALOGD("_ZN7android9bluetooth5audio26GetSoftwarePcmCapabilitiesEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::IsSoftwarePcmConfigurationValid(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio31IsSoftwarePcmConfigurationValidERKN6vendor8mediatek8hardware9bluetooth5audio4V2_113PcmParametersE(void) {
    ALOGD("_ZN7android9bluetooth5audio31IsSoftwarePcmConfigurationValidERKN6vendor8mediatek8hardware9bluetooth5audio4V2_113PcmParametersE() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::SuspendStream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession13SuspendStreamEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession13SuspendStreamEv() called");
    return 0;
}

/* Exported Object: android::bluetooth::audio::BluetoothAudioSession::kInvalidCodecConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9bluetooth5audio21BluetoothAudioSession26kInvalidCodecConfigurationE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::__unordered_map_hasher<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::hash<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType>, true>, std::__1::__unordered_map_equal<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::equal_to<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType>, true>, std::__1::allocator<std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeENS_10shared_ptrIN7android9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS8_SF_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SF_NS_8equal_toIS8_EELb1EEENS_9allocatorISF_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeENS_10shared_ptrIN7android9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS8_SF_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SF_NS_8equal_toIS8_EELb1EEENS_9allocatorISF_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::bluetooth::audio::BluetoothAudioSession, std::__1::allocator<android::bluetooth::audio::BluetoothAudioSession> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEEE = NULL;

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::BluetoothAudioSession(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSessionC2ERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSessionC2ERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::BluetoothAudioSession, std::__1::allocator<android::bluetooth::audio::BluetoothAudioSession> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::StopStream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession10StopStreamEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession10StopStreamEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UnregisterStatusCback(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession21UnregisterStatusCbackEt(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession21UnregisterStatusCbackEt() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::bluetooth::audio::PortStatusCallbacks, std::__1::allocator<android::bluetooth::audio::PortStatusCallbacks> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEEE = NULL;

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::StartStream() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession11StartStreamEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession11StartStreamEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UpdateTracksMetadata(source_metadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession20UpdateTracksMetadataEPK15source_metadata(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession20UpdateTracksMetadataEPK15source_metadata() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::ReportControlStatus(bool, vendor::mediatek::hardware::bluetooth::audio::V2_1::Status const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession19ReportControlStatusEbRKN6vendor8mediatek8hardware9bluetooth5audio4V2_16StatusE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession19ReportControlStatusEbRKN6vendor8mediatek8hardware9bluetooth5audio4V2_16StatusE() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::__erase_unique<unsigned short>(unsigned short const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE14__erase_uniqueItEEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE14__erase_uniqueItEEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::GetOffloadCodecCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio27GetOffloadCodecCapabilitiesERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE(void) {
    ALOGD("_ZN7android9bluetooth5audio27GetOffloadCodecCapabilitiesERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::ReportSessionStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession19ReportSessionStatusEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession19ReportSessionStatusEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::__unordered_map_hasher<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::hash<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType>, true>, std::__1::__unordered_map_equal<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::equal_to<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType>, true>, std::__1::allocator<std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> > > >::__emplace_unique_key_args<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::piecewise_construct_t const&, std::__1::tuple<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&>, std::__1::tuple<> >(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&, std::__1::piecewise_construct_t const&, std::__1::tuple<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeENS_10shared_ptrIN7android9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS8_SF_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SF_NS_8equal_toIS8_EELb1EEENS_9allocatorISF_EEE25__emplace_unique_key_argsIS8_JRKNS_21piecewise_construct_tENS_5tupleIJRKS8_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeENS_10shared_ptrIN7android9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS8_SF_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SF_NS_8equal_toIS8_EELb1EEENS_9allocatorISF_EEE25__emplace_unique_key_argsIS8_JRKNS_21piecewise_construct_tENS_5tupleIJRKS8_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::PortStatusCallbacks, std::__1::allocator<android::bluetooth::audio::PortStatusCallbacks> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::bluetooth::audio::IsOffloadCodecConfigurationValid(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio32IsOffloadCodecConfigurationValidERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeERKNS7_18CodecConfigurationE(void) {
    ALOGD("_ZN7android9bluetooth5audio32IsOffloadCodecConfigurationValidERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeERKNS7_18CodecConfigurationE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj() called");
    return 0;
}

/* Exported Object: android::bluetooth::audio::BluetoothAudioSession::invalidSoftwareAudioConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9bluetooth5audio21BluetoothAudioSession33invalidSoftwareAudioConfigurationE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::__unordered_map_hasher<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::hash<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType>, true>, std::__1::__unordered_map_equal<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::equal_to<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType>, true>, std::__1::allocator<std::__1::__hash_value_type<vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeENS_10shared_ptrIN7android9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS8_SF_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SF_NS_8equal_toIS8_EELb1EEENS_9allocatorISF_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeENS_10shared_ptrIN7android9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS8_SF_NS_4hashIS8_EELb1EEENS_21__unordered_map_equalIS8_SF_NS_8equal_toIS8_EELb1EEENS_9allocatorISF_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::OnSessionStarted(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const*, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession16OnSessionStartedENS_2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortEEEPKNS_8hardware12MQDescriptorIhLNSC_8MQFlavorE1EEERKNS9_18AudioConfigurationE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession16OnSessionStartedENS_2spIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortEEEPKNS_8hardware12MQDescriptorIhLNSC_8MQFlavorE1EEERKNS9_18AudioConfigurationE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::BluetoothAudioSession(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSessionC1ERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSessionC1ERKN6vendor8mediatek8hardware9bluetooth5audio4V2_111SessionTypeE() called");
    return 0;
}

/* Exported Object: android::bluetooth::audio::BluetoothAudioSessionInstance::instance_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9bluetooth5audio29BluetoothAudioSessionInstance12instance_ptrE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::GetAudioConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession14GetAudioConfigEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession14GetAudioConfigEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UpdateDataPath(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioSession14UpdateDataPathEPKNS_8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioSession14UpdateDataPathEPKNS_8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEE() called");
    return 0;
}

/* Exported Object: android::bluetooth::audio::BluetoothAudioSession::kInvalidPcmParameters */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9bluetooth5audio21BluetoothAudioSession21kInvalidPcmParametersE = NULL;

/* Exported Object: android::bluetooth::audio::BluetoothAudioSession::invalidOffloadAudioConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9bluetooth5audio21BluetoothAudioSession32invalidOffloadAudioConfigurationE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE8__rehashEj() called");
    return 0;
}
