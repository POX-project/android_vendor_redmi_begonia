/*
 * Reverse-Engineered ABI Specification for: libbluetooth_audio_session.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libbluetooth_audio_session.so
 */

#ifndef BEGONIA_RE_LIBBLUETOOTH_AUDIO_SESSION_H
#define BEGONIA_RE_LIBBLUETOOTH_AUDIO_SESSION_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession19RegisterStatusCbackERKNS1_19PortStatusCallbacksE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::RegisterStatusCback(android::bluetooth::audio::PortStatusCallbacks const&) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession19RegisterStatusCbackERKNS1_19PortStatusCallbacksE(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession23GetPresentationPositionEPyS3_P8timespec */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::GetPresentationPosition(unsigned long long*, unsigned long long*, timespec*) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession23GetPresentationPositionEPyS3_P8timespec(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSessionC1ERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::BluetoothAudioSession(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
int _ZN7android9bluetooth5audio21BluetoothAudioSessionC1ERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::PortStatusCallbacks, std::__1::allocator<android::bluetooth::audio::PortStatusCallbacks> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession14IsSessionReadyEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::IsSessionReady() */
int _ZN7android9bluetooth5audio21BluetoothAudioSession14IsSessionReadyEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession14OnSessionEndedEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::OnSessionEnded() */
int _ZN7android9bluetooth5audio21BluetoothAudioSession14OnSessionEndedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::BluetoothAudioSession, std::__1::allocator<android::bluetooth::audio::BluetoothAudioSession> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession17UpdateAudioConfigERKNS_8hardware9bluetooth5audio4V2_018AudioConfigurationE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UpdateAudioConfig(android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession17UpdateAudioConfigERKNS_8hardware9bluetooth5audio4V2_018AudioConfigurationE(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession19ReportControlStatusEbRKNS_8hardware9bluetooth5audio4V2_06StatusE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::ReportControlStatus(bool, android::hardware::bluetooth::audio::V2_0::Status const&) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession19ReportControlStatusEbRKNS_8hardware9bluetooth5audio4V2_06StatusE(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSessionC2ERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::BluetoothAudioSession(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
int _ZN7android9bluetooth5audio21BluetoothAudioSessionC2ERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsItJRKNS_21piecewise_construct_tENS_5tupleIJRKtEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::__emplace_unique_key_args<unsigned short, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned short const&>, std::__1::tuple<> >(unsigned short const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned short const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsItJRKNS_21piecewise_construct_tENS_5tupleIJRKtEEENSO_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession15OutWritePcmDataEPKvj */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::OutWritePcmData(void const*, unsigned int) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession15OutWritePcmDataEPKvj(void);

/* Symbol: _ZN7android9bluetooth5audio26GetSoftwarePcmCapabilitiesEv */
/* Demangled: android::bluetooth::audio::GetSoftwarePcmCapabilities() */
int _ZN7android9bluetooth5audio26GetSoftwarePcmCapabilitiesEv(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession13SuspendStreamEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::SuspendStream() */
int _ZN7android9bluetooth5audio21BluetoothAudioSession13SuspendStreamEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession26kInvalidCodecConfigurationE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::kInvalidCodecConfiguration */
extern void* _ZN7android9bluetooth5audio21BluetoothAudioSession26kInvalidCodecConfigurationE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::bluetooth::audio::BluetoothAudioSession, std::__1::allocator<android::bluetooth::audio::BluetoothAudioSession> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEEE;

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN7android8hardware9bluetooth5audio4V2_011SessionTypeENS_10shared_ptrINS2_9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS7_SD_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SD_NS_8equal_toIS7_EELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::__unordered_map_hasher<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::hash<android::hardware::bluetooth::audio::V2_0::SessionType>, true>, std::__1::__unordered_map_equal<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::equal_to<android::hardware::bluetooth::audio::V2_0::SessionType>, true>, std::__1::allocator<std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> > > >::__emplace_unique_key_args<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::piecewise_construct_t const&, std::__1::tuple<android::hardware::bluetooth::audio::V2_0::SessionType const&>, std::__1::tuple<> >(android::hardware::bluetooth::audio::V2_0::SessionType const&, std::__1::piecewise_construct_t const&, std::__1::tuple<android::hardware::bluetooth::audio::V2_0::SessionType const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN7android8hardware9bluetooth5audio4V2_011SessionTypeENS_10shared_ptrINS2_9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS7_SD_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SD_NS_8equal_toIS7_EELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENST_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::BluetoothAudioSession, std::__1::allocator<android::bluetooth::audio::BluetoothAudioSession> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio21BluetoothAudioSessionENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_ */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession10StopStreamEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::StopStream() */
int _ZN7android9bluetooth5audio21BluetoothAudioSession10StopStreamEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession21UnregisterStatusCbackEt */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UnregisterStatusCback(unsigned short) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession21UnregisterStatusCbackEt(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::bluetooth::audio::PortStatusCallbacks, std::__1::allocator<android::bluetooth::audio::PortStatusCallbacks> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEEE;

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession11StartStreamEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::StartStream() */
int _ZN7android9bluetooth5audio21BluetoothAudioSession11StartStreamEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession20UpdateTracksMetadataEPK15source_metadata */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UpdateTracksMetadata(source_metadata const*) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession20UpdateTracksMetadataEPK15source_metadata(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN7android8hardware9bluetooth5audio4V2_011SessionTypeENS_10shared_ptrINS2_9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS7_SD_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SD_NS_8equal_toIS7_EELb1EEENS_9allocatorISD_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::__unordered_map_hasher<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::hash<android::hardware::bluetooth::audio::V2_0::SessionType>, true>, std::__1::__unordered_map_equal<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::equal_to<android::hardware::bluetooth::audio::V2_0::SessionType>, true>, std::__1::allocator<std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN7android8hardware9bluetooth5audio4V2_011SessionTypeENS_10shared_ptrINS2_9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS7_SD_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SD_NS_8equal_toIS7_EELb1EEENS_9allocatorISD_EEE6rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE14__erase_uniqueItEEjRKT_ */
/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::__erase_unique<unsigned short>(unsigned short const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE14__erase_uniqueItEEjRKT_(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN7android9bluetooth5audio32IsOffloadCodecConfigurationValidERKNS_8hardware9bluetooth5audio4V2_011SessionTypeERKNS5_18CodecConfigurationE */
/* Demangled: android::bluetooth::audio::IsOffloadCodecConfigurationValid(android::hardware::bluetooth::audio::V2_0::SessionType const&, android::hardware::bluetooth::audio::V2_0::CodecConfiguration const&) */
int _ZN7android9bluetooth5audio32IsOffloadCodecConfigurationValidERKNS_8hardware9bluetooth5audio4V2_011SessionTypeERKNS5_18CodecConfigurationE(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession19ReportSessionStatusEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::ReportSessionStatus() */
int _ZN7android9bluetooth5audio21BluetoothAudioSession19ReportSessionStatusEv(void);

/* Symbol: _ZN7android9bluetooth5audio29BluetoothAudioSessionInstance18GetSessionInstanceERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSessionInstance::GetSessionInstance(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
int _ZN7android9bluetooth5audio29BluetoothAudioSessionInstance18GetSessionInstanceERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::bluetooth::audio::PortStatusCallbacks, std::__1::allocator<android::bluetooth::audio::PortStatusCallbacks> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9bluetooth5audio19PortStatusCallbacksENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession33invalidSoftwareAudioConfigurationE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::invalidSoftwareAudioConfiguration */
extern void* _ZN7android9bluetooth5audio21BluetoothAudioSession33invalidSoftwareAudioConfigurationE;

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession16OnSessionStartedENS_2spINS_8hardware9bluetooth5audio4V2_019IBluetoothAudioPortEEEPKNS4_12MQDescriptorIhLNS4_8MQFlavorE1EEERKNS7_18AudioConfigurationE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::OnSessionStarted(android::sp<android::hardware::bluetooth::audio::V2_0::IBluetoothAudioPort>, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const*, android::hardware::bluetooth::audio::V2_0::AudioConfiguration const&) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession16OnSessionStartedENS_2spINS_8hardware9bluetooth5audio4V2_019IBluetoothAudioPortEEEPKNS4_12MQDescriptorIhLNS4_8MQFlavorE1EEERKNS7_18AudioConfigurationE(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android9bluetooth5audio31IsSoftwarePcmConfigurationValidERKNS_8hardware9bluetooth5audio4V2_013PcmParametersE */
/* Demangled: android::bluetooth::audio::IsSoftwarePcmConfigurationValid(android::hardware::bluetooth::audio::V2_0::PcmParameters const&) */
int _ZN7android9bluetooth5audio31IsSoftwarePcmConfigurationValidERKNS_8hardware9bluetooth5audio4V2_013PcmParametersE(void);

/* Symbol: _ZN7android9bluetooth5audio29BluetoothAudioSessionInstance12instance_ptrE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSessionInstance::instance_ptr */
extern void* _ZN7android9bluetooth5audio29BluetoothAudioSessionInstance12instance_ptrE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN7android8hardware9bluetooth5audio4V2_011SessionTypeENS_10shared_ptrINS2_9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS7_SD_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SD_NS_8equal_toIS7_EELb1EEENS_9allocatorISD_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::__unordered_map_hasher<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::hash<android::hardware::bluetooth::audio::V2_0::SessionType>, true>, std::__1::__unordered_map_equal<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> >, std::__1::equal_to<android::hardware::bluetooth::audio::V2_0::SessionType>, true>, std::__1::allocator<std::__1::__hash_value_type<android::hardware::bluetooth::audio::V2_0::SessionType, std::__1::shared_ptr<android::bluetooth::audio::BluetoothAudioSession> > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN7android8hardware9bluetooth5audio4V2_011SessionTypeENS_10shared_ptrINS2_9bluetooth5audio21BluetoothAudioSessionEEEEENS_22__unordered_map_hasherIS7_SD_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SD_NS_8equal_toIS7_EELb1EEENS_9allocatorISD_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS8_PvEEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN7android9bluetooth5audio27GetOffloadCodecCapabilitiesERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE */
/* Demangled: android::bluetooth::audio::GetOffloadCodecCapabilities(android::hardware::bluetooth::audio::V2_0::SessionType const&) */
int _ZN7android9bluetooth5audio27GetOffloadCodecCapabilitiesERKNS_8hardware9bluetooth5audio4V2_011SessionTypeE(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession14GetAudioConfigEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::GetAudioConfig() */
int _ZN7android9bluetooth5audio21BluetoothAudioSession14GetAudioConfigEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession14UpdateDataPathEPKNS_8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::UpdateDataPath(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const*) */
int _ZN7android9bluetooth5audio21BluetoothAudioSession14UpdateDataPathEPKNS_8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEE(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession21kInvalidPcmParametersE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::kInvalidPcmParameters */
extern void* _ZN7android9bluetooth5audio21BluetoothAudioSession21kInvalidPcmParametersE;

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioSession32invalidOffloadAudioConfigurationE */
/* Demangled: android::bluetooth::audio::BluetoothAudioSession::invalidOffloadAudioConfiguration */
extern void* _ZN7android9bluetooth5audio21BluetoothAudioSession32invalidOffloadAudioConfigurationE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, std::__1::shared_ptr<android::bluetooth::audio::PortStatusCallbacks> > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeItNS_10shared_ptrIN7android9bluetooth5audio19PortStatusCallbacksEEEEENS_22__unordered_map_hasherItS8_NS_4hashItEELb1EEENS_21__unordered_map_equalItS8_NS_8equal_toItEELb1EEENS_9allocatorIS8_EEE8__rehashEj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBBLUETOOTH_AUDIO_SESSION_H */
