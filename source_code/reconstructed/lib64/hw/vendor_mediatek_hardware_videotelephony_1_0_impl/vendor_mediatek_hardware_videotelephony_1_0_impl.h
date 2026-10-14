/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.videotelephony@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.videotelephony@1.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_VIDEOTELEPHONY_1_0_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_VIDEOTELEPHONY_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16configureFmqModeEt */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::configureFmqMode(unsigned short) */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16configureFmqModeEt(void);

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony21configureFmqSyncWriteENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::configureFmqSyncWrite(std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony21configureFmqSyncWriteENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned long) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE0_NS3_15IVideoTelephonyE */
/* Demangled: construction vtable for vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony-in-vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE0_NS3_15IVideoTelephonyE;

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony9isIMCBrunEv */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::isIMCBrun() */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony9isIMCBrunEv(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS0_9EventFlagE */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::writeBlocking(unsigned char const*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS0_9EventFlagE(void);

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony15sVideoTelephonyE */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::sVideoTelephony */
extern void* _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony15sVideoTelephonyE;

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16isImsVideoCallonEv */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::isImsVideoCallon() */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16isImsVideoCallonEv(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhmjjlPNS0_9EventFlagE */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::readBlocking(unsigned char*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhmjjlPNS0_9EventFlagE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE */
/* Demangled: VTT for vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern void* _ZTTN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE;

/* Symbol: _ZTVN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE */
/* Demangled: vtable for vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern void* _ZTVN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE;

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony11getInstanceEv */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::getInstance() */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony11getInstanceEv(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: HIDL_FETCH_IVideoTelephony */
/* Demangled: HIDL_FETCH_IVideoTelephony */
int HIDL_FETCH_IVideoTelephony(void);

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony20configureFmqSyncReadENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::configureFmqSyncRead(std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony20configureFmqSyncReadENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony7getModeEv */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::getMode() */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony7getModeEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony14initializationEv */
/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::initialization() */
int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony14initializationEv(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_VIDEOTELEPHONY_1_0_IMPL_H */
