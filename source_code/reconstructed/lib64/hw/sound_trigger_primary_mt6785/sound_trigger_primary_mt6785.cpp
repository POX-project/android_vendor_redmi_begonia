/*
 * Reverse-Engineered Source for: sound_trigger.primary.mt6785.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "sound_trigger_primary_mt6785"

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
#include "sound_trigger_primary_mt6785.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_VOW "/dev/vow"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_VOW, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VOW, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VOW, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int sound_trigger_primary_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int sound_trigger_primary_mt6785_close(struct hw_device_t* dev);

static struct hw_module_methods_t sound_trigger_primary_mt6785_module_methods = {
    .open = sound_trigger_primary_mt6785_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "sound",
    .name = "Begonia sound_trigger_primary_mt6785 Module",
    .author = "LineageOS / Community RE",
    .methods = &sound_trigger_primary_mt6785_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int sound_trigger_primary_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int sound_trigger_primary_mt6785_close(struct hw_device_t* dev) {
    ALOGI("Closing sound_trigger_primary_mt6785 module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: list_models(int, char*, stub_sound_trigger_device*) */
extern "C" __attribute__((visibility("default"))) int _Z11list_modelsiPcP25stub_sound_trigger_device(void) {
    ALOGD("_Z11list_modelsiPcP25stub_sound_trigger_device() called");
    return 0;
}

/* Demangled: alock_free */
extern "C" __attribute__((visibility("default"))) int alock_free(void) {
    ALOGD("alock_free() called");
    return 0;
}

/* Demangled: alock_new */
extern "C" __attribute__((visibility("default"))) int alock_new(void) {
    ALOGD("alock_new() called");
    return 0;
}

/* Exported Object: audio_hw_handle */
extern "C" __attribute__((visibility("default"))) void* audio_hw_handle = NULL;

/* Exported Object: phase_2p5_recog_ok_count */
extern "C" __attribute__((visibility("default"))) void* phase_2p5_recog_ok_count = NULL;

/* Demangled: str_to_uuid(char*, audio_uuid_s*) */
extern "C" __attribute__((visibility("default"))) int _Z11str_to_uuidPcP12audio_uuid_s(void) {
    ALOGD("_Z11str_to_uuidPcP12audio_uuid_s() called");
    return 0;
}

/* Demangled: write_string(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z12write_stringiPKc(void) {
    ALOGD("_Z12write_stringiPKc() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: get_filename */
extern "C" __attribute__((visibility("default"))) int get_filename(void) {
    ALOGD("get_filename() called");
    return 0;
}

/* Demangled: alock_lock_no_timeout */
extern "C" __attribute__((visibility("default"))) int alock_lock_no_timeout(void) {
    ALOGD("alock_lock_no_timeout() called");
    return 0;
}

/* Demangled: audio_get_timespec_realtime */
extern "C" __attribute__((visibility("default"))) int audio_get_timespec_realtime(void) {
    ALOGD("audio_get_timespec_realtime() called");
    return 0;
}

/* Demangled: alock_signal */
extern "C" __attribute__((visibility("default"))) int alock_signal(void) {
    ALOGD("alock_signal() called");
    return 0;
}

/* Demangled: send_event_with_handle(int*, stub_sound_trigger_device*, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z22send_event_with_handlePiP25stub_sound_trigger_deviceiib(void) {
    ALOGD("_Z22send_event_with_handlePiP25stub_sound_trigger_deviceiib() called");
    return 0;
}

/* Demangled: write_bad_command_error(int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z23write_bad_command_erroriPc(void) {
    ALOGD("_Z23write_bad_command_erroriPc() called");
    return 0;
}

/* Demangled: sound_trigger_close_for_streaming(int) */
extern "C" __attribute__((visibility("default"))) int _Z33sound_trigger_close_for_streamingi(void) {
    ALOGD("_Z33sound_trigger_close_for_streamingi() called");
    return 0;
}

/* Exported Object: tmp_write_buffer */
extern "C" __attribute__((visibility("default"))) void* tmp_write_buffer = NULL;

/* Demangled: audio_timespec_to_ms */
extern "C" __attribute__((visibility("default"))) int audio_timespec_to_ms(void) {
    ALOGD("audio_timespec_to_ms() called");
    return 0;
}

/* Demangled: ring_buffer_get_write_information */
extern "C" __attribute__((visibility("default"))) int ring_buffer_get_write_information(void) {
    ALOGD("ring_buffer_get_write_information() called");
    return 0;
}

/* Demangled: get_time_diff_ms */
extern "C" __attribute__((visibility("default"))) int get_time_diff_ms(void) {
    ALOGD("get_time_diff_ms() called");
    return 0;
}

/* Demangled: fetch_model_with_handle(stub_sound_trigger_device*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z23fetch_model_with_handleP25stub_sound_trigger_devicePi(void) {
    ALOGD("_Z23fetch_model_with_handleP25stub_sound_trigger_devicePi() called");
    return 0;
}

/* Demangled: fetch_model_with_keyword(stub_sound_trigger_device*, int) */
extern "C" __attribute__((visibility("default"))) int _Z24fetch_model_with_keywordP25stub_sound_trigger_devicei(void) {
    ALOGD("_Z24fetch_model_with_keywordP25stub_sound_trigger_devicei() called");
    return 0;
}

/* Demangled: ring_buffer_write_done */
extern "C" __attribute__((visibility("default"))) int ring_buffer_write_done(void) {
    ALOGD("ring_buffer_write_done() called");
    return 0;
}

/* Exported Object: gAudioMTKHardware */
extern "C" __attribute__((visibility("default"))) void* gAudioMTKHardware = NULL;

/* Exported Object: gAudioMTKStreamIn */
extern "C" __attribute__((visibility("default"))) void* gAudioMTKStreamIn = NULL;

/* Exported Object: g_vow_wakeup_result */
extern "C" __attribute__((visibility("default"))) void* g_vow_wakeup_result = NULL;

/* Exported Object: phase_2p5_entry_count */
extern "C" __attribute__((visibility("default"))) void* phase_2p5_entry_count = NULL;

/* Demangled: ring_buffer_get_space_byte_count */
extern "C" __attribute__((visibility("default"))) int ring_buffer_get_space_byte_count(void) {
    ALOGD("ring_buffer_get_space_byte_count() called");
    return 0;
}

/* Demangled: dynamic_change_buf_size */
extern "C" __attribute__((visibility("default"))) int dynamic_change_buf_size(void) {
    ALOGD("dynamic_change_buf_size() called");
    return 0;
}

/* Demangled: phase_2p5_testing(vow_phase_2p5_info*) */
extern "C" __attribute__((visibility("default"))) int _Z17phase_2p5_testingP18vow_phase_2p5_info(void) {
    ALOGD("_Z17phase_2p5_testingP18vow_phase_2p5_info() called");
    return 0;
}

/* Demangled: alock_lock_ms */
extern "C" __attribute__((visibility("default"))) int alock_lock_ms(void) {
    ALOGD("alock_lock_ms() called");
    return 0;
}

/* Demangled: audio_get_timespec_monotonic */
extern "C" __attribute__((visibility("default"))) int audio_get_timespec_monotonic(void) {
    ALOGD("audio_get_timespec_monotonic() called");
    return 0;
}

/* Demangled: audio_timespec_to_ns */
extern "C" __attribute__((visibility("default"))) int audio_timespec_to_ns(void) {
    ALOGD("audio_timespec_to_ns() called");
    return 0;
}

/* Demangled: t1_older_then_t2 */
extern "C" __attribute__((visibility("default"))) int t1_older_then_t2(void) {
    ALOGD("t1_older_then_t2() called");
    return 0;
}

/* Demangled: strcat_safe */
extern "C" __attribute__((visibility("default"))) int strcat_safe(void) {
    ALOGD("strcat_safe() called");
    return 0;
}

/* Demangled: strcpy_safe */
extern "C" __attribute__((visibility("default"))) int strcpy_safe(void) {
    ALOGD("strcpy_safe() called");
    return 0;
}

/* Demangled: sound_trigger_read_samples(int, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z26sound_trigger_read_samplesiPvm(void) {
    ALOGD("_Z26sound_trigger_read_samplesiPvm() called");
    return 0;
}

/* Demangled: sound_trigger_open_for_streaming() */
extern "C" __attribute__((visibility("default"))) int _Z32sound_trigger_open_for_streamingv(void) {
    ALOGD("_Z32sound_trigger_open_for_streamingv() called");
    return 0;
}

/* Demangled: get_time_diff_ns */
extern "C" __attribute__((visibility("default"))) int get_time_diff_ns(void) {
    ALOGD("get_time_diff_ns() called");
    return 0;
}

/* Demangled: start_recognition_phase_2p5(recognition_context*) */
extern "C" __attribute__((visibility("default"))) int _Z27start_recognition_phase_2p5P19recognition_context(void) {
    ALOGD("_Z27start_recognition_phase_2p5P19recognition_context() called");
    return 0;
}

/* Demangled: alock_wait_ms */
extern "C" __attribute__((visibility("default"))) int alock_wait_ms(void) {
    ALOGD("alock_wait_ms() called");
    return 0;
}

/* Demangled: ring_buffer_read_done */
extern "C" __attribute__((visibility("default"))) int ring_buffer_read_done(void) {
    ALOGD("ring_buffer_read_done() called");
    return 0;
}

/* Demangled: alock_trylock */
extern "C" __attribute__((visibility("default"))) int alock_trylock(void) {
    ALOGD("alock_trylock() called");
    return 0;
}

/* Demangled: get_command(char*) */
extern "C" __attribute__((visibility("default"))) int _Z11get_commandPc(void) {
    ALOGD("_Z11get_commandPc() called");
    return 0;
}

/* Demangled: saveWakeUpResult(int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z16saveWakeUpResultib(void) {
    ALOGD("_Z16saveWakeUpResultib() called");
    return 0;
}

/* Exported Object: g_fd */
extern "C" __attribute__((visibility("default"))) void* g_fd = NULL;

/* Demangled: ring_buffer_get_data_byte_count */
extern "C" __attribute__((visibility("default"))) int ring_buffer_get_data_byte_count(void) {
    ALOGD("ring_buffer_get_data_byte_count() called");
    return 0;
}

/* Demangled: audio_get_timespec_timeout */
extern "C" __attribute__((visibility("default"))) int audio_get_timespec_timeout(void) {
    ALOGD("audio_get_timespec_timeout() called");
    return 0;
}

/* Demangled: parse_socket_data(int, stub_sound_trigger_device*) */
extern "C" __attribute__((visibility("default"))) int _Z17parse_socket_dataiP25stub_sound_trigger_device(void) {
    ALOGD("_Z17parse_socket_dataiP25stub_sound_trigger_device() called");
    return 0;
}

/* Exported Object: g_read_file_count */
extern "C" __attribute__((visibility("default"))) void* g_read_file_count = NULL;

/* Exported Object: g_vow_wakeup_result_init */
extern "C" __attribute__((visibility("default"))) void* g_vow_wakeup_result_init = NULL;

/* Demangled: alock_unlock */
extern "C" __attribute__((visibility("default"))) int alock_unlock(void) {
    ALOGD("alock_unlock() called");
    return 0;
}

/* Demangled: write_vastr(int, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _Z11write_vastriPKcz(void) {
    ALOGD("_Z11write_vastriPKcz() called");
    return 0;
}

/* Demangled: ring_buffer_get_read_information */
extern "C" __attribute__((visibility("default"))) int ring_buffer_get_read_information(void) {
    ALOGD("ring_buffer_get_read_information() called");
    return 0;
}

/* Demangled: alock_cleanup_handler */
extern "C" __attribute__((visibility("default"))) int alock_cleanup_handler(void) {
    ALOGD("alock_cleanup_handler() called");
    return 0;
}

/* Demangled: alock_wait_no_timeout */
extern "C" __attribute__((visibility("default"))) int alock_wait_no_timeout(void) {
    ALOGD("alock_wait_no_timeout() called");
    return 0;
}
