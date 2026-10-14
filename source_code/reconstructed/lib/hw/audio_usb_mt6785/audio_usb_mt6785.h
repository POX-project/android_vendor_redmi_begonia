/*
 * Reverse-Engineered ABI Specification for: audio.usb.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: audio.usb.mt6785.so
 */

#ifndef BEGONIA_RE_AUDIO_USB_MT6785_H
#define BEGONIA_RE_AUDIO_USB_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: usbstreamout_propty */
/* Demangled: usbstreamout_propty */
extern void* usbstreamout_propty;

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: mWriteLockCount */
/* Demangled: mWriteLockCount */
extern void* mWriteLockCount;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__deque_base<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::~__deque_base() */
int _ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: usbstreamout */
/* Demangled: usbstreamout */
extern void* usbstreamout;

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::push_back(android::USBBufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZTVN7android6VectorIP7__sFILEEE */
/* Demangled: vtable for android::Vector<__sFILE*> */
extern void* _ZTVN7android6VectorIP7__sFILEEE;

/* Symbol: usbstreamin_propty */
/* Demangled: usbstreamin_propty */
extern void* usbstreamin_propty;

/* Symbol: _ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNK7android6VectorIP7__sFILEE12do_constructEPvj */
/* Demangled: android::Vector<__sFILE*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE12do_constructEPvj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: mReadLockCount */
/* Demangled: mReadLockCount */
extern void* mReadLockCount;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::clear() */
int _ZNSt3__112__deque_baseIPN7android13USBBufferDumpENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**>&>::push_back(android::USBBufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<__sFILE*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9pop_frontEv */
/* Demangled: std::__1::deque<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::pop_front() */
int _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9pop_frontEv(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: mNewtime */
/* Demangled: mNewtime */
extern void* mNewtime;

/* Symbol: timerec */
/* Demangled: timerec */
extern void* timerec;

/* Symbol: mOldtime */
/* Demangled: mOldtime */
extern void* mOldtime;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE10do_destroyEPvj */
/* Demangled: android::Vector<__sFILE*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIP7__sFILEE10do_destroyEPvj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void);

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: get_hal_period_us */
/* Demangled: get_hal_period_us */
int get_hal_period_us(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9push_backERKS3_ */
/* Demangled: std::__1::deque<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::push_back(android::USBBufferDump* const&) */
int _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE9push_backERKS3_(void);

/* Symbol: get_hal_period_count */
/* Demangled: get_hal_period_count */
int get_hal_period_count(void);

/* Symbol: usb_dump_path */
/* Demangled: usb_dump_path */
extern void* usb_dump_path;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::push_front(android::USBBufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: set_period_info */
/* Demangled: set_period_info */
int set_period_info(void);

/* Symbol: usbstreamin */
/* Demangled: usbstreamin */
extern void* usbstreamin;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**>&>::push_front(android::USBBufferDump** const&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

__END_DECLS

#endif /* BEGONIA_RE_AUDIO_USB_MT6785_H */
