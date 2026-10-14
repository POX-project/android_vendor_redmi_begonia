/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.videotelephony@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_videotelephony_1_0_impl"

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
#include "vendor_mediatek_hardware_videotelephony_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::configureFmqMode(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16configureFmqModeEt(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16configureFmqModeEt() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::configureFmqSyncWrite(std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony21configureFmqSyncWriteENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony21configureFmqSyncWriteENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony-in-vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE0_NS3_15IVideoTelephonyE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::isIMCBrun() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony9isIMCBrunEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony9isIMCBrunEv() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::readBlocking(unsigned char*, unsigned int, unsigned int, unsigned int, long long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhjjjxPNS0_9EventFlagE(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhjjjxPNS0_9EventFlagE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::sVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony15sVideoTelephonyE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::isImsVideoCallon() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16isImsVideoCallonEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony16isImsVideoCallonEv() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::writeBlocking(unsigned char const*, unsigned int, unsigned int, unsigned int, long long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhjjjxPNS0_9EventFlagE(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhjjjxPNS0_9EventFlagE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Ejb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Ejb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephonyE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony11getInstanceEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony11getInstanceEv() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhj() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IVideoTelephony */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IVideoTelephony(void) {
    ALOGD("HIDL_FETCH_IVideoTelephony() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::configureFmqSyncRead(std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony20configureFmqSyncReadENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony20configureFmqSyncReadENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::getMode() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony7getModeEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony7getModeEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::implementation::VideoTelephony::initialization() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony14initializationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_014implementation14VideoTelephony14initializationEv() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EjP13native_handlejb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EjP13native_handlejb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}
