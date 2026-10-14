/*
 * Reverse-Engineered ABI Specification for: sound_trigger.primary.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: sound_trigger.primary.default.so
 */

#ifndef BEGONIA_RE_SOUND_TRIGGER_PRIMARY_DEFAULT_H
#define BEGONIA_RE_SOUND_TRIGGER_PRIMARY_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: t1_older_then_t2 */
/* Demangled: t1_older_then_t2 */
int t1_older_then_t2(void);

/* Symbol: dynamic_change_buf_size */
/* Demangled: dynamic_change_buf_size */
int dynamic_change_buf_size(void);

/* Symbol: _Z11get_commandPc */
/* Demangled: get_command(char*) */
int _Z11get_commandPc(void);

/* Symbol: _Z23write_bad_command_erroriPc */
/* Demangled: write_bad_command_error(int, char*) */
int _Z23write_bad_command_erroriPc(void);

/* Symbol: _Z26sound_trigger_read_samplesiPvj */
/* Demangled: sound_trigger_read_samples(int, void*, unsigned int) */
int _Z26sound_trigger_read_samplesiPvj(void);

/* Symbol: _Z33sound_trigger_close_for_streamingi */
/* Demangled: sound_trigger_close_for_streaming(int) */
int _Z33sound_trigger_close_for_streamingi(void);

/* Symbol: _Z35callback_engine_feature_xml_changedP10_AppHandlePKc */
/* Demangled: callback_engine_feature_xml_changed(_AppHandle*, char const*) */
int _Z35callback_engine_feature_xml_changedP10_AppHandlePKc(void);

/* Symbol: tmp_write_buffer */
/* Demangled: tmp_write_buffer */
extern void* tmp_write_buffer;

/* Symbol: alock_signal */
/* Demangled: alock_signal */
int alock_signal(void);

/* Symbol: g_vow_wakeup_result_init */
/* Demangled: g_vow_wakeup_result_init */
extern void* g_vow_wakeup_result_init;

/* Symbol: phase_2p5_entry_count */
/* Demangled: phase_2p5_entry_count */
extern void* phase_2p5_entry_count;

/* Symbol: audio_get_timespec_timeout */
/* Demangled: audio_get_timespec_timeout */
int audio_get_timespec_timeout(void);

/* Symbol: strcat_safe */
/* Demangled: strcat_safe */
int strcat_safe(void);

/* Symbol: _Z17parse_socket_dataiP25stub_sound_trigger_device */
/* Demangled: parse_socket_data(int, stub_sound_trigger_device*) */
int _Z17parse_socket_dataiP25stub_sound_trigger_device(void);

/* Symbol: _Z27start_recognition_phase_2p5P19recognition_context */
/* Demangled: start_recognition_phase_2p5(recognition_context*) */
int _Z27start_recognition_phase_2p5P19recognition_context(void);

/* Symbol: alock_lock_no_timeout */
/* Demangled: alock_lock_no_timeout */
int alock_lock_no_timeout(void);

/* Symbol: get_time_diff_ms */
/* Demangled: get_time_diff_ms */
int get_time_diff_ms(void);

/* Symbol: _Z11list_modelsiPcP25stub_sound_trigger_device */
/* Demangled: list_models(int, char*, stub_sound_trigger_device*) */
int _Z11list_modelsiPcP25stub_sound_trigger_device(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void);

/* Symbol: g_read_file_count */
/* Demangled: g_read_file_count */
extern void* g_read_file_count;

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_(void);

/* Symbol: alock_new */
/* Demangled: alock_new */
int alock_new(void);

/* Symbol: audio_timespec_to_ms */
/* Demangled: audio_timespec_to_ms */
int audio_timespec_to_ms(void);

/* Symbol: _Z17phase_2p5_testingP18vow_phase_2p5_info */
/* Demangled: phase_2p5_testing(vow_phase_2p5_info*) */
int _Z17phase_2p5_testingP18vow_phase_2p5_info(void);

/* Symbol: _Z32sound_trigger_open_for_streamingv */
/* Demangled: sound_trigger_open_for_streaming() */
int _Z32sound_trigger_open_for_streamingv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: audio_hw_handle */
/* Demangled: audio_hw_handle */
extern void* audio_hw_handle;

/* Symbol: ring_buffer_get_read_information */
/* Demangled: ring_buffer_get_read_information */
int ring_buffer_get_read_information(void);

/* Symbol: ring_buffer_write_done */
/* Demangled: ring_buffer_write_done */
int ring_buffer_write_done(void);

/* Symbol: alock_cleanup_handler */
/* Demangled: alock_cleanup_handler */
int alock_cleanup_handler(void);

/* Symbol: get_time_diff_ns */
/* Demangled: get_time_diff_ns */
int get_time_diff_ns(void);

/* Symbol: get_filename */
/* Demangled: get_filename */
int get_filename(void);

/* Symbol: ring_buffer_get_write_information */
/* Demangled: ring_buffer_get_write_information */
int ring_buffer_get_write_information(void);

/* Symbol: alock_unlock */
/* Demangled: alock_unlock */
int alock_unlock(void);

/* Symbol: _Z11write_vastriPKcz */
/* Demangled: write_vastr(int, char const*, ...) */
int _Z11write_vastriPKcz(void);

/* Symbol: alock_free */
/* Demangled: alock_free */
int alock_free(void);

/* Symbol: gAudioMTKStreamIn */
/* Demangled: gAudioMTKStreamIn */
extern void* gAudioMTKStreamIn;

/* Symbol: phase_2p5_recog_ok_count */
/* Demangled: phase_2p5_recog_ok_count */
extern void* phase_2p5_recog_ok_count;

/* Symbol: ring_buffer_get_data_byte_count */
/* Demangled: ring_buffer_get_data_byte_count */
int ring_buffer_get_data_byte_count(void);

/* Symbol: ring_buffer_get_space_byte_count */
/* Demangled: ring_buffer_get_space_byte_count */
int ring_buffer_get_space_byte_count(void);

/* Symbol: alock_trylock */
/* Demangled: alock_trylock */
int alock_trylock(void);

/* Symbol: audio_timespec_to_ns */
/* Demangled: audio_timespec_to_ns */
int audio_timespec_to_ns(void);

/* Symbol: _Z16saveWakeUpResultib */
/* Demangled: saveWakeUpResult(int, bool) */
int _Z16saveWakeUpResultib(void);

/* Symbol: _Z22send_event_with_handlePiP25stub_sound_trigger_deviceiib */
/* Demangled: send_event_with_handle(int*, stub_sound_trigger_device*, int, int, bool) */
int _Z22send_event_with_handlePiP25stub_sound_trigger_deviceiib(void);

/* Symbol: _Z23fetch_model_with_handleP25stub_sound_trigger_devicePi */
/* Demangled: fetch_model_with_handle(stub_sound_trigger_device*, int*) */
int _Z23fetch_model_with_handleP25stub_sound_trigger_devicePi(void);

/* Symbol: gAudioMTKHardware */
/* Demangled: gAudioMTKHardware */
extern void* gAudioMTKHardware;

/* Symbol: ring_buffer_read_done */
/* Demangled: ring_buffer_read_done */
int ring_buffer_read_done(void);

/* Symbol: alock_lock_ms */
/* Demangled: alock_lock_ms */
int alock_lock_ms(void);

/* Symbol: audio_get_timespec_realtime */
/* Demangled: audio_get_timespec_realtime */
int audio_get_timespec_realtime(void);

/* Symbol: _Z24fetch_model_with_keywordP25stub_sound_trigger_devicei */
/* Demangled: fetch_model_with_keyword(stub_sound_trigger_device*, int) */
int _Z24fetch_model_with_keywordP25stub_sound_trigger_devicei(void);

/* Symbol: g_fd */
/* Demangled: g_fd */
extern void* g_fd;

/* Symbol: g_vow_wakeup_time */
/* Demangled: g_vow_wakeup_time */
extern void* g_vow_wakeup_time;

/* Symbol: audio_get_timespec_monotonic */
/* Demangled: audio_get_timespec_monotonic */
int audio_get_timespec_monotonic(void);

/* Symbol: _Z11str_to_uuidPcP12audio_uuid_s */
/* Demangled: str_to_uuid(char*, audio_uuid_s*) */
int _Z11str_to_uuidPcP12audio_uuid_s(void);

/* Symbol: _Z12write_stringiPKc */
/* Demangled: write_string(int, char const*) */
int _Z12write_stringiPKc(void);

/* Symbol: alock_wait_ms */
/* Demangled: alock_wait_ms */
int alock_wait_ms(void);

/* Symbol: fo_ret */
/* Demangled: fo_ret */
extern void* fo_ret;

/* Symbol: g_vow_wakeup_result */
/* Demangled: g_vow_wakeup_result */
extern void* g_vow_wakeup_result;

/* Symbol: alock_wait_no_timeout */
/* Demangled: alock_wait_no_timeout */
int alock_wait_no_timeout(void);

/* Symbol: strcpy_safe */
/* Demangled: strcpy_safe */
int strcpy_safe(void);

__END_DECLS

#endif /* BEGONIA_RE_SOUND_TRIGGER_PRIMARY_DEFAULT_H */
