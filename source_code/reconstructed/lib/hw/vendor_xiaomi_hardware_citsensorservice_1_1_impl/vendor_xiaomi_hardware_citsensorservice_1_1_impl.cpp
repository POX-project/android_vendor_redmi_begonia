/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.citsensorservice@1.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_citsensorservice_1_1_impl"

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
#include "vendor_xiaomi_hardware_citsensorservice_1_1_impl.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_INPUT "/dev/input"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_INPUT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_INPUT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_INPUT, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService::halleventlistener() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService17halleventlistenerEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService17halleventlistenerEv() called");
    return 0;
}

/* Demangled: android::sp<Backlight2SlpiNotifier>::operator=(Backlight2SlpiNotifier*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI22Backlight2SlpiNotifierEaSEPS1_(void) {
    ALOGD("_ZN7android2spI22Backlight2SlpiNotifierEaSEPS1_() called");
    return 0;
}

/* Demangled: InputEventCircularReader::InputEventCircularReader(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN24InputEventCircularReaderC2Ej(void) {
    ALOGD("_ZN24InputEventCircularReaderC2Ej() called");
    return 0;
}

/* Demangled: InputEventCircularReader::~InputEventCircularReader() */
extern "C" __attribute__((visibility("default"))) int _ZN24InputEventCircularReaderD2Ev(void) {
    ALOGD("_ZN24InputEventCircularReaderD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceE0_NS3_17ICitSensorServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierE = NULL;

/* Demangled: DisplayFreq2SlpiNotifier::NotifierEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifier15NotifierEnabledEv(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifier15NotifierEnabledEv() called");
    return 0;
}

/* Demangled: DisplayFreq2SlpiNotifier::DisplayFreq2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifierC2Ev(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifierC2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::~ParsedRGB_Notifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService::deinitService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService13deinitServiceEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService13deinitServiceEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService::send_ssc_oem_test_msg(vendor::xiaomi::hardware::citsensorservice::V1_1::ssc_oem_test_msg const&, std::__1::function<void (vendor::xiaomi::hardware::citsensorservice::V1_1::ssc_oem_test_msg const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService21send_ssc_oem_test_msgERKNS3_16ssc_oem_test_msgENSt3__18functionIFvS8_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService21send_ssc_oem_test_msgERKNS3_16ssc_oem_test_msgENSt3__18functionIFvS8_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService::CitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceC1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceC1Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceE = NULL;

/* Demangled: DisplayFreq2SlpiNotifier::~DisplayFreq2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifierD1Ev(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifierD1Ev() called");
    return 0;
}

/* Demangled: Backlight2SlpiNotifier::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN22Backlight2SlpiNotifier10threadLoopEv(void) {
    ALOGD("_ZN22Backlight2SlpiNotifier10threadLoopEv() called");
    return 0;
}

/* Demangled: Backlight2SlpiNotifier::~Backlight2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN22Backlight2SlpiNotifierD2Ev(void) {
    ALOGD("_ZN22Backlight2SlpiNotifierD2Ev() called");
    return 0;
}

/* Exported Object: VTT for Backlight2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTT22Backlight2SlpiNotifier = NULL;

/* Demangled: android::sp<DisplayFreq2SlpiNotifier>::operator=(DisplayFreq2SlpiNotifier*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI24DisplayFreq2SlpiNotifierEaSEPS1_(void) {
    ALOGD("_ZN7android2spI24DisplayFreq2SlpiNotifierEaSEPS1_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::~ParsedRGB_Notifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD0Ev() called");
    return 0;
}

/* Demangled: InputEventCircularReader::readEvent(input_event const**) */
extern "C" __attribute__((visibility("default"))) int _ZN24InputEventCircularReader9readEventEPPK11input_event(void) {
    ALOGD("_ZN24InputEventCircularReader9readEventEPPK11input_event() called");
    return 0;
}

/* Demangled: HallSensorHandler::~HallSensorHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandlerD1Ev(void) {
    ALOGD("_ZN17HallSensorHandlerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for DisplayFreq2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTV24DisplayFreq2SlpiNotifier = NULL;

/* Demangled: virtual thunk to DisplayDcState2SlpiNotifier::~DisplayDcState2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N27DisplayDcState2SlpiNotifierD1Ev(void) {
    ALOGD("_ZTv0_n12_N27DisplayDcState2SlpiNotifierD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: HallSensorHandler::getFd() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17HallSensorHandler5getFdEv(void) {
    ALOGD("_ZNK17HallSensorHandler5getFdEv() called");
    return 0;
}

/* Exported Object: VTT for DisplayFreq2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTT24DisplayFreq2SlpiNotifier = NULL;

/* Demangled: DisplayDcState2SlpiNotifier::NotifyOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifier10NotifyOnceEv(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifier10NotifyOnceEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-DisplayDcState2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTC27DisplayDcState2SlpiNotifier0_N7android6ThreadE = NULL;

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::ParsedRGB_Notifier(_ssc_oem_test_msg*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierC2EP17_ssc_oem_test_msg(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierC2EP17_ssc_oem_test_msg() called");
    return 0;
}

/* Demangled: android::sp<DisplayDcState2SlpiNotifier>::operator=(DisplayDcState2SlpiNotifier*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI27DisplayDcState2SlpiNotifierEaSEPS1_(void) {
    ALOGD("_ZN7android2spI27DisplayDcState2SlpiNotifierEaSEPS1_() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierE0_N7android6ThreadE = NULL;

/* Demangled: DisplayDcState2SlpiNotifier::~DisplayDcState2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifierD2Ev(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifierD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: Backlight2SlpiNotifier::Backlight2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN22Backlight2SlpiNotifierC1Ev(void) {
    ALOGD("_ZN22Backlight2SlpiNotifierC1Ev() called");
    return 0;
}

/* Demangled: HallSensorHandler::openInput(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandler9openInputEPKc(void) {
    ALOGD("_ZN17HallSensorHandler9openInputEPKc() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-Backlight2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTC22Backlight2SlpiNotifier0_N7android6ThreadE = NULL;

/* Demangled: HIDL_FETCH_ICitSensorService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ICitSensorService(void) {
    ALOGD("HIDL_FETCH_ICitSensorService() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::~ParsedRGB_Notifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD2Ev() called");
    return 0;
}

/* Exported Object: HallSensorHandler::self */
extern "C" __attribute__((visibility("default"))) void* _ZN17HallSensorHandler4selfE = NULL;

/* Demangled: DisplayFreq2SlpiNotifier::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifier10threadLoopEv(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifier10threadLoopEv() called");
    return 0;
}

/* Demangled: DisplayDcState2SlpiNotifier::DisplayDcState2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifierC1Ev(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifierC1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService::CitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceC2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceC2Ev() called");
    return 0;
}

/* Demangled: HallSensorHandler::HallSensorHandler(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandlerC2EPKc(void) {
    ALOGD("_ZN17HallSensorHandlerC2EPKc() called");
    return 0;
}

/* Demangled: virtual thunk to DisplayFreq2SlpiNotifier::~DisplayFreq2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N24DisplayFreq2SlpiNotifierD0Ev(void) {
    ALOGD("_ZTv0_n12_N24DisplayFreq2SlpiNotifierD0Ev() called");
    return 0;
}

/* Demangled: Backlight2SlpiNotifier::~Backlight2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN22Backlight2SlpiNotifierD0Ev(void) {
    ALOGD("_ZN22Backlight2SlpiNotifierD0Ev() called");
    return 0;
}

/* Exported Object: vtable for Backlight2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTV22Backlight2SlpiNotifier = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::ParsedRGB_Notifier(_ssc_oem_test_msg*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierC1EP17_ssc_oem_test_msg(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierC1EP17_ssc_oem_test_msg() called");
    return 0;
}

/* Demangled: DisplayFreq2SlpiNotifier::~DisplayFreq2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifierD2Ev(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifierD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceE0_NS2_4V1_017ICitSensorServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::~ParsedRGB_Notifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD1Ev() called");
    return 0;
}

/* Demangled: HallSensorHandler::processEvents(input_event*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandler13processEventsEP11input_eventi(void) {
    ALOGD("_ZN17HallSensorHandler13processEventsEP11input_eventi() called");
    return 0;
}

/* Demangled: HallSensorHandler::~HallSensorHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandlerD2Ev(void) {
    ALOGD("_ZN17HallSensorHandlerD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to Backlight2SlpiNotifier::~Backlight2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N22Backlight2SlpiNotifierD0Ev(void) {
    ALOGD("_ZTv0_n12_N22Backlight2SlpiNotifierD0Ev() called");
    return 0;
}

/* Demangled: DisplayDcState2SlpiNotifier::NotifierEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifier15NotifierEnabledEv(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifier15NotifierEnabledEv() called");
    return 0;
}

/* Exported Object: VTT for DisplayDcState2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTT27DisplayDcState2SlpiNotifier = NULL;

/* Demangled: DisplayDcState2SlpiNotifier::~DisplayDcState2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifierD0Ev(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifierD0Ev() called");
    return 0;
}

/* Demangled: HallSensorHandler::getHallSensorHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandler20getHallSensorHandlerEv(void) {
    ALOGD("_ZN17HallSensorHandler20getHallSensorHandlerEv() called");
    return 0;
}

/* Demangled: InputEventCircularReader::InputEventCircularReader(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN24InputEventCircularReaderC1Ej(void) {
    ALOGD("_ZN24InputEventCircularReaderC1Ej() called");
    return 0;
}

/* Demangled: InputEventCircularReader::~InputEventCircularReader() */
extern "C" __attribute__((visibility("default"))) int _ZN24InputEventCircularReaderD1Ev(void) {
    ALOGD("_ZN24InputEventCircularReaderD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-DisplayFreq2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTC24DisplayFreq2SlpiNotifier0_N7android6ThreadE = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: DisplayFreq2SlpiNotifier::DisplayFreq2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifierC1Ev(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifierC1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: HallSensorHandler::HallSensorHandler(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandlerC1EPKc(void) {
    ALOGD("_ZN17HallSensorHandlerC1EPKc() called");
    return 0;
}

/* Demangled: Backlight2SlpiNotifier::NotifierEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN22Backlight2SlpiNotifier15NotifierEnabledEv(void) {
    ALOGD("_ZN22Backlight2SlpiNotifier15NotifierEnabledEv() called");
    return 0;
}

/* Demangled: Backlight2SlpiNotifier::Backlight2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN22Backlight2SlpiNotifierC2Ev(void) {
    ALOGD("_ZN22Backlight2SlpiNotifierC2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::~ParsedRGB_Notifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierD0Ev() called");
    return 0;
}

/* Demangled: InputEventCircularReader::fill(int) */
extern "C" __attribute__((visibility("default"))) int _ZN24InputEventCircularReader4fillEi(void) {
    ALOGD("_ZN24InputEventCircularReader4fillEi() called");
    return 0;
}

/* Demangled: DisplayDcState2SlpiNotifier::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifier10threadLoopEv(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifier10threadLoopEv() called");
    return 0;
}

/* Exported Object: vtable for DisplayDcState2SlpiNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTV27DisplayDcState2SlpiNotifier = NULL;

/* Exported Object: sensor_list */
extern "C" __attribute__((visibility("default"))) void* sensor_list = NULL;

/* Demangled: InputEventCircularReader::next() */
extern "C" __attribute__((visibility("default"))) int _ZN24InputEventCircularReader4nextEv(void) {
    ALOGD("_ZN24InputEventCircularReader4nextEv() called");
    return 0;
}

/* Demangled: HallSensorHandler::pollHallEvents(input_event*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandler14pollHallEventsEP11input_eventi(void) {
    ALOGD("_ZN17HallSensorHandler14pollHallEventsEP11input_eventi() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_NotifierE = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: dev_count */
extern "C" __attribute__((visibility("default"))) void* dev_count = NULL;

/* Demangled: DisplayFreq2SlpiNotifier::~DisplayFreq2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifierD0Ev(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifierD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to DisplayFreq2SlpiNotifier::~DisplayFreq2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N24DisplayFreq2SlpiNotifierD1Ev(void) {
    ALOGD("_ZTv0_n12_N24DisplayFreq2SlpiNotifierD1Ev() called");
    return 0;
}

/* Demangled: Backlight2SlpiNotifier::~Backlight2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN22Backlight2SlpiNotifierD1Ev(void) {
    ALOGD("_ZN22Backlight2SlpiNotifierD1Ev() called");
    return 0;
}

/* Demangled: DisplayDcState2SlpiNotifier::DisplayDcState2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifierC2Ev(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifierC2Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorServiceE = NULL;

/* Demangled: HallSensorHandler::releaseHallSensorHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN17HallSensorHandler24releaseHallSensorHandlerEv(void) {
    ALOGD("_ZN17HallSensorHandler24releaseHallSensorHandlerEv() called");
    return 0;
}

/* Demangled: virtual thunk to DisplayDcState2SlpiNotifier::~DisplayDcState2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N27DisplayDcState2SlpiNotifierD0Ev(void) {
    ALOGD("_ZTv0_n12_N27DisplayDcState2SlpiNotifierD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to Backlight2SlpiNotifier::~Backlight2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N22Backlight2SlpiNotifierD1Ev(void) {
    ALOGD("_ZTv0_n12_N22Backlight2SlpiNotifierD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService::initService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService11initServiceEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService11initServiceEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::ParsedRGB_Notifier::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_Notifier10threadLoopEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_114implementation18ParsedRGB_Notifier10threadLoopEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::implementation::CitSensorService::initCheck() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService9initCheckEv(void) {
    ALOGD("_ZNK6vendor6xiaomi8hardware16citsensorservice4V1_114implementation16CitSensorService9initCheckEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: DisplayFreq2SlpiNotifier::NotifyOnce() */
extern "C" __attribute__((visibility("default"))) int _ZN24DisplayFreq2SlpiNotifier10NotifyOnceEv(void) {
    ALOGD("_ZN24DisplayFreq2SlpiNotifier10NotifyOnceEv() called");
    return 0;
}

/* Demangled: DisplayDcState2SlpiNotifier::~DisplayDcState2SlpiNotifier() */
extern "C" __attribute__((visibility("default"))) int _ZN27DisplayDcState2SlpiNotifierD1Ev(void) {
    ALOGD("_ZN27DisplayDcState2SlpiNotifierD1Ev() called");
    return 0;
}
