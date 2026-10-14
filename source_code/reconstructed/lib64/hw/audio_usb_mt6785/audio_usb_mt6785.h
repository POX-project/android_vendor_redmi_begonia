/*
 * Reverse-Engineered ABI Specification for: audio.usb.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
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

/* Symbol: _ZNK7android6VectorIP7__sFILEE12do_constructEPvm */
/* Demangled: android::Vector<__sFILE*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIP7__sFILEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**>&>::push_back(android::USBBufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: mOldtime */
/* Demangled: mOldtime */
extern void* mOldtime;

/* Symbol: mReadLockCount */
/* Demangled: mReadLockCount */
extern void* mReadLockCount;

/* Symbol: usb_dump_path */
/* Demangled: usb_dump_path */
extern void* usb_dump_path;

/* Symbol: _ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<__sFILE*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP7__sFILEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvm */
/* Demangled: android::Vector<__sFILE*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP7__sFILEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<__sFILE*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP7__sFILEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::push_front(android::USBBufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: get_hal_period_us */
/* Demangled: get_hal_period_us */
int get_hal_period_us(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: mNewtime */
/* Demangled: mNewtime */
extern void* mNewtime;

/* Symbol: mWriteLockCount */
/* Demangled: mWriteLockCount */
extern void* mWriteLockCount;

/* Symbol: usbstreamout */
/* Demangled: usbstreamout */
extern void* usbstreamout;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::USBBufferDump*, std::__1::allocator<android::USBBufferDump*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPN7android13USBBufferDumpENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: usbstreamout_propty */
/* Demangled: usbstreamout_propty */
extern void* usbstreamout_propty;

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**> >::push_back(android::USBBufferDump**&&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZTVN7android6VectorIP7__sFILEEE */
/* Demangled: vtable for android::Vector<__sFILE*> */
extern void* _ZTVN7android6VectorIP7__sFILEEE;

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: set_period_info */
/* Demangled: set_period_info */
int set_period_info(void);

/* Symbol: timerec */
/* Demangled: timerec */
extern void* timerec;

/* Symbol: _ZNK7android6VectorIP7__sFILEE10do_destroyEPvm */
/* Demangled: android::Vector<__sFILE*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIP7__sFILEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvm */
/* Demangled: android::Vector<__sFILE*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP7__sFILEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: usbstreamin_propty */
/* Demangled: usbstreamin_propty */
extern void* usbstreamin_propty;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<android::USBBufferDump**, std::__1::allocator<android::USBBufferDump**>&>::push_front(android::USBBufferDump** const&) */
int _ZNSt3__114__split_bufferIPPN7android13USBBufferDumpERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: usbstreamin */
/* Demangled: usbstreamin */
extern void* usbstreamin;

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: get_hal_period_count */
/* Demangled: get_hal_period_count */
int get_hal_period_count(void);

__END_DECLS

#endif /* BEGONIA_RE_AUDIO_USB_MT6785_H */
