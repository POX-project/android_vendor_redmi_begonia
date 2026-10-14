/*
 * Reverse-Engineered Source for: audio.usb.mt6785.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "audio_usb_mt6785"

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
#include "audio_usb_mt6785.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int audio_usb_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int audio_usb_mt6785_close(struct hw_device_t* dev);

static struct hw_module_methods_t audio_usb_mt6785_module_methods = {
    .open = audio_usb_mt6785_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "audio",
    .name = "Begonia audio_usb_mt6785 Module",
    .author = "LineageOS / Community RE",
    .methods = &audio_usb_mt6785_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int audio_usb_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int audio_usb_mt6785_close(struct hw_device_t* dev) {
    ALOGI("Closing audio_usb_mt6785 module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: android::Vector<__sFILE*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: usbstreamout_propty */
extern "C" __attribute__((visibility("default"))) void* usbstreamout_propty = NULL;

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: mWriteLockCount */
extern "C" __attribute__((visibility("default"))) void* mWriteLockCount = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::Vector<__sFILE*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: usbstreamout */
extern "C" __attribute__((visibility("default"))) void* usbstreamout = NULL;

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::push_back(android::USBBufferDump**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Exported Object: vtable for android::Vector<__sFILE*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP7__sFILEEE = NULL;

/* Exported Object: usbstreamin_propty */
extern "C" __attribute__((visibility("default"))) void* usbstreamin_propty = NULL;

/* Demangled: android::Vector<__sFILE*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::Vector<__sFILE*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP7__sFILEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIP7__sFILEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: mReadLockCount */
extern "C" __attribute__((visibility("default"))) void* mReadLockCount = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**>&>::push_back(android::USBBufferDump**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: android::Vector<__sFILE*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: std::__1::deque<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9pop_frontEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Exported Object: mNewtime */
extern "C" __attribute__((visibility("default"))) void* mNewtime = NULL;

/* Exported Object: timerec */
extern "C" __attribute__((visibility("default"))) void* timerec = NULL;

/* Exported Object: mOldtime */
extern "C" __attribute__((visibility("default"))) void* mOldtime = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: android::Vector<__sFILE*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP7__sFILEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIP7__sFILEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: get_hal_period_us */
extern "C" __attribute__((visibility("default"))) int get_hal_period_us(void) {
    ALOGD("get_hal_period_us() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: std::__1::deque<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::deque<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::push_back(android::USBBufferDump* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9push_backERKS3_(void) {
    ALOGD("_ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9push_backERKS3_() called");
    return 0;
}

/* Demangled: get_hal_period_count */
extern "C" __attribute__((visibility("default"))) int get_hal_period_count(void) {
    ALOGD("get_hal_period_count() called");
    return 0;
}

/* Exported Object: usb_dump_path */
extern "C" __attribute__((visibility("default"))) void* usb_dump_path = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::push_front(android::USBBufferDump**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Demangled: set_period_info */
extern "C" __attribute__((visibility("default"))) int set_period_info(void) {
    ALOGD("set_period_info() called");
    return 0;
}

/* Exported Object: usbstreamin */
extern "C" __attribute__((visibility("default"))) void* usbstreamin = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**>&>::push_front(android::USBBufferDump** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}
