/*
 * Reverse-Engineered Source for: audio.bluetooth.default.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "audio_bluetooth_default"

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
#include "audio_bluetooth_default.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int audio_bluetooth_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int audio_bluetooth_default_close(struct hw_device_t* dev);

static struct hw_module_methods_t audio_bluetooth_default_module_methods = {
    .open = audio_bluetooth_default_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "audio",
    .name = "Begonia audio_bluetooth_default Module",
    .author = "LineageOS / Community RE",
    .methods = &audio_bluetooth_default_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int audio_bluetooth_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int audio_bluetooth_default_close(struct hw_device_t* dev) {
    ALOGI("Closing audio_bluetooth_default module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: adev_close_output_stream(audio_hw_device*, audio_stream_out*) */
extern "C" __attribute__((visibility("default"))) int _Z24adev_close_output_streamP15audio_hw_deviceP16audio_stream_out(void) {
    ALOGD("_Z24adev_close_output_streamP15audio_hw_deviceP16audio_stream_out() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::Suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut7SuspendEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut7SuspendEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::TearDown() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut8TearDownEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut8TearDownEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::UpdateMetadata(source_metadata const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut14UpdateMetadataEPK15source_metadata(void) {
    ALOGD("_ZNK7android9bluetooth5audio21BluetoothAudioPortOut14UpdateMetadataEPK15source_metadata() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, BluetoothStreamState const&) */
extern "C" __attribute__((visibility("default"))) int _ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK20BluetoothStreamState(void) {
    ALOGD("_ZlsRNSt3__113basic_ostreamIcNS_11char_traitsIcEEEERK20BluetoothStreamState() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::utils::ParseAudioParams(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio5utils16ParseAudioParamsERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android9bluetooth5audio5utils16ParseAudioParamsERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEERKT_() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: std::__1::list<BluetoothStreamOut*, std::__1::allocator<BluetoothStreamOut*> >::remove(BluetoothStreamOut* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIP18BluetoothStreamOutNS_9allocatorIS2_EEE6removeERKS2_(void) {
    ALOGD("_ZNSt3__14listIP18BluetoothStreamOutNS_9allocatorIS2_EEE6removeERKS2_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::SetUp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut5SetUpEj(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut5SetUpEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE6rehashEj() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut5StartEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut5StartEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::init_session_type(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut17init_session_typeEj(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut17init_session_typeEj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::GetPresentationPosition(unsigned long long*, unsigned long long*, timespec*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut23GetPresentationPositionEPyS3_P8timespec(void) {
    ALOGD("_ZNK7android9bluetooth5audio21BluetoothAudioPortOut23GetPresentationPositionEPyS3_P8timespec() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::GetState() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut8GetStateEv(void) {
    ALOGD("_ZNK7android9bluetooth5audio21BluetoothAudioPortOut8GetStateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::ControlResultHandler(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut20ControlResultHandlerERKN6vendor8mediatek8hardware9bluetooth5audio4V2_16StatusE(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut20ControlResultHandlerERKN6vendor8mediatek8hardware9bluetooth5audio4V2_16StatusE() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::SessionChangedHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut21SessionChangedHandlerEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut21SessionChangedHandlerEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::bluetooth::audio::utils::GetAudioParamString(std::__1::unordered_map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio5utils19GetAudioParamStringERNSt3__113unordered_mapINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_NS3_4hashISA_EENS3_8equal_toISA_EENS8_INS3_4pairIKSA_SA_EEEEEE(void) {
    ALOGD("_ZN7android9bluetooth5audio5utils19GetAudioParamStringERNSt3__113unordered_mapINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_NS3_4hashISA_EENS3_8equal_toISA_EENS8_INS3_4pairIKSA_SA_EEEEEE() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::SetState(BluetoothStreamState) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut8SetStateE20BluetoothStreamState(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut8SetStateE20BluetoothStreamState() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: adev_open_input_stream(audio_hw_device*, int, unsigned int, audio_config*, audio_stream_in**, audio_input_flags_t, char const*, audio_source_t) */
extern "C" __attribute__((visibility("default"))) int _Z22adev_open_input_streamP15audio_hw_deviceijP12audio_configPP15audio_stream_in19audio_input_flags_tPKc14audio_source_t(void) {
    ALOGD("_Z22adev_open_input_streamP15audio_hw_deviceijP12audio_configPP15audio_stream_in19audio_input_flags_tPKc14audio_source_t() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: adev_open_output_stream(audio_hw_device*, int, unsigned int, audio_output_flags_t, audio_config*, audio_stream_out**, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z23adev_open_output_streamP15audio_hw_deviceij20audio_output_flags_tP12audio_configPP16audio_stream_outPKc(void) {
    ALOGD("_Z23adev_open_output_streamP15audio_hw_deviceij20audio_output_flags_tP12audio_configPP16audio_stream_outPKc() called");
    return 0;
}

/* Demangled: adev_get_input_buffer_size(audio_hw_device const*, audio_config const*) */
extern "C" __attribute__((visibility("default"))) int _Z26adev_get_input_buffer_sizePK15audio_hw_devicePK12audio_config(void) {
    ALOGD("_Z26adev_get_input_buffer_sizePK15audio_hw_devicePK12audio_config() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut4StopEv(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut4StopEv() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::LoadAudioConfig(audio_config*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut15LoadAudioConfigEP12audio_config(void) {
    ALOGD("_ZNK7android9bluetooth5audio21BluetoothAudioPortOut15LoadAudioConfigEP12audio_config() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::BluetoothAudioPortOut() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOutC1Ev(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOutC1Ev() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::WriteData(void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut9WriteDataEPKvj(void) {
    ALOGD("_ZNK7android9bluetooth5audio21BluetoothAudioPortOut9WriteDataEPKvj() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::CondwaitState(BluetoothStreamState) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOut13CondwaitStateE20BluetoothStreamState(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOut13CondwaitStateE20BluetoothStreamState() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::BluetoothAudioPortOut() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9bluetooth5audio21BluetoothAudioPortOutC2Ev(void) {
    ALOGD("_ZN7android9bluetooth5audio21BluetoothAudioPortOutC2Ev() called");
    return 0;
}

/* Demangled: android::bluetooth::audio::BluetoothAudioPortOut::in_use() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9bluetooth5audio21BluetoothAudioPortOut6in_useEv(void) {
    ALOGD("_ZNK7android9bluetooth5audio21BluetoothAudioPortOut6in_useEv() called");
    return 0;
}

/* Demangled: adev_close_input_stream(audio_hw_device*, audio_stream_in*) */
extern "C" __attribute__((visibility("default"))) int _Z23adev_close_input_streamP15audio_hw_deviceP15audio_stream_in(void) {
    ALOGD("_Z23adev_close_input_streamP15audio_hw_deviceP15audio_stream_in() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}
