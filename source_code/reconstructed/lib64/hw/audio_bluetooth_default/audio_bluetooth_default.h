/*
 * Reverse-Engineered ABI Specification for: audio.bluetooth.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: audio.bluetooth.default.so
 */

#ifndef BEGONIA_RE_AUDIO_BLUETOOTH_DEFAULT_H
#define BEGONIA_RE_AUDIO_BLUETOOTH_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZN7android9bluetooth5audio5utils19GetAudioParamStringERNSt3__113unordered_mapINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_NS3_4hashISA_EENS3_8equal_toISA_EENS8_INS3_4pairIKSA_SA_EEEEEE */
/* Demangled: android::bluetooth::audio::utils::GetAudioParamString(std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >&) */
int _ZN7android9bluetooth5audio5utils19GetAudioParamStringERNSt3__113unordered_mapINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_NS3_4hashISA_EENS3_8equal_toISA_EENS8_INS3_4pairIKSA_SA_EEEEEE(void);

/* Symbol: _ZNK7android9bluetooth5audio21BluetoothAudioPortOut15LoadAudioConfigEP12audio_config */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::LoadAudioConfig(audio_config*) const */
int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut15LoadAudioConfigEP12audio_config(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut7SuspendEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::Suspend() */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut7SuspendEv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int __subtf3(void);

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut4StopEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::Stop() */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut4StopEv(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: _Z26adev_get_input_buffer_sizePK15audio_hw_devicePK12audio_config */
/* Demangled: adev_get_input_buffer_size(audio_hw_device const*, audio_config const*) */
int _Z26adev_get_input_buffer_sizePK15audio_hw_devicePK12audio_config(void);

/* Symbol: _ZNK7android9bluetooth5audio21BluetoothAudioPortOut9WriteDataEPKvm */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::WriteData(void const*, unsigned long) const */
int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut9WriteDataEPKvm(void);

/* Symbol: _ZNK7android9bluetooth5audio21BluetoothAudioPortOut14UpdateMetadataEPK15source_metadata */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::UpdateMetadata(source_metadata const*) const */
int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut14UpdateMetadataEPK15source_metadata(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: _ZNK7android9bluetooth5audio21BluetoothAudioPortOut8GetStateEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::GetState() const */
int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut8GetStateEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut20ControlResultHandlerERKN6vendor8mediatek8hardware9bluetooth5audio4V2_16StatusE */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::ControlResultHandler(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status const&) */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut20ControlResultHandlerERKN6vendor8mediatek8hardware9bluetooth5audio4V2_16StatusE(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut13CondwaitStateE20BluetoothStreamState */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::CondwaitState(BluetoothStreamState) */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut13CondwaitStateE20BluetoothStreamState(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut5StartEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::Start() */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut5StartEv(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOutC2Ev */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::BluetoothAudioPortOut() */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOutC2Ev(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut21SessionChangedHandlerEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::SessionChangedHandler() */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut21SessionChangedHandlerEv(void);

/* Symbol: _ZN7android9bluetooth5audio5utils16ParseAudioParamsERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: android::bluetooth::audio::utils::ParseAudioParams(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android9bluetooth5audio5utils16ParseAudioParamsERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

/* Symbol: _Z24adev_close_output_streamP15audio_hw_deviceP16audio_stream_out */
/* Demangled: adev_close_output_stream(audio_hw_device*, audio_stream_out*) */
int _Z24adev_close_output_streamP15audio_hw_deviceP16audio_stream_out(void);

/* Symbol: _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK20BluetoothStreamState */
/* Demangled: operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, BluetoothStreamState const&) */
int _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK20BluetoothStreamState(void);

/* Symbol: _ZNK7android9bluetooth5audio21BluetoothAudioPortOut23GetPresentationPositionEPmS3_P8timespec */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::GetPresentationPosition(unsigned long*, unsigned long*, timespec*) const */
int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut23GetPresentationPositionEPmS3_P8timespec(void);

/* Symbol: _ZNK7android9bluetooth5audio21BluetoothAudioPortOut6in_useEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::in_use() const */
int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut6in_useEv(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOutC1Ev */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::BluetoothAudioPortOut() */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOutC1Ev(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut17init_session_typeEj */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::init_session_type(unsigned int) */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut17init_session_typeEj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: _Z23adev_close_input_streamP15audio_hw_deviceP15audio_stream_in */
/* Demangled: adev_close_input_stream(audio_hw_device*, audio_stream_in*) */
int _Z23adev_close_input_streamP15audio_hw_deviceP15audio_stream_in(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut5SetUpEj */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::SetUp(unsigned int) */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut5SetUpEj(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut8SetStateE20BluetoothStreamState */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::SetState(BluetoothStreamState) */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut8SetStateE20BluetoothStreamState(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int __multf3(void);

/* Symbol: _Z23adev_open_output_streamP15audio_hw_deviceij20audio_output_flags_tP12audio_configPP16audio_stream_outPKc */
/* Demangled: adev_open_output_stream(audio_hw_device*, int, unsigned int, audio_output_flags_t, audio_config*, audio_stream_out**, char const*) */
int _Z23adev_open_output_streamP15audio_hw_deviceij20audio_output_flags_tP12audio_configPP16audio_stream_outPKc(void);

/* Symbol: _Z22adev_open_input_streamP15audio_hw_deviceijP12audio_configPP15audio_stream_in19audio_input_flags_tPKc14audio_source_t */
/* Demangled: adev_open_input_stream(audio_hw_device*, int, unsigned int, audio_config*, audio_stream_in**, audio_input_flags_t, char const*, audio_source_t) */
int _Z22adev_open_input_streamP15audio_hw_deviceijP12audio_configPP15audio_stream_in19audio_input_flags_tPKc14audio_source_t(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: __cfi_check */
/* Demangled: __cfi_check */
int __cfi_check(void);

/* Symbol: _ZN7android9bluetooth5audio21BluetoothAudioPortOut8TearDownEv */
/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::TearDown() */
int _ZN7android9bluetooth5audio21BluetoothAudioPortOut8TearDownEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int __floatditf(void);

__END_DECLS

#endif /* BEGONIA_RE_AUDIO_BLUETOOTH_DEFAULT_H */
