/*
 * Reverse-Engineered Source for: android.hardware.gnss@2.1-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_gnss_2_1_impl_mediatek"

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
#include "android_hardware_gnss_2_1_impl_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::convertToGnssLocation1_0(GpsLocation_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation1_0EP15GpsLocation_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation1_0EP15GpsLocation_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfRemoveCb(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfRemoveCbEii(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfRemoveCbEii() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfResumeCb(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfResumeCbEii(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfResumeCbEii() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::sMeasureCallbackCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections23sMeasureCallbackCbIfaceE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::createThreadCb(char const*, void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNi14createThreadCbEPKcPFvPvES7_(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNi14createThreadCbEPKcPFvPvES7_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IAGnssRil-in-android::hardware::gnss::V2_0::implementation::AGnssRil */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS1_4V1_09IAGnssRilE = NULL;

/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::gnss::V2_0::GnssLocation, std::__1::allocator<android::hardware::gnss::V2_0::GnssLocation> >::__push_back_slow_path<android::hardware::gnss::V2_0::GnssLocation>(android::hardware::gnss::V2_0::GnssLocation&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware4gnss4V2_012GnssLocationENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware4gnss4V2_012GnssLocationENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::updateNetworkState_2_0(android::hardware::gnss::V2_0::IAGnssRil::NetworkAttributes const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil22updateNetworkState_2_0ERKNS2_9IAGnssRil17NetworkAttributesE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil22updateNetworkState_2_0ERKNS2_9IAGnssRil17NetworkAttributesE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssDebug_2_0_common() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss32getExtensionGnssDebug_2_0_commonEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss32getExtensionGnssDebug_2_0_commonEv() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssGeofenceCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V1_021IGnssGeofenceCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V1_021IGnssGeofenceCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::gnssMeasurementCb(GnssData_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement17gnssMeasurementCbEP12GnssData_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement17gnssMeasurementCbEP12GnssData_ext() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssNi::sGnssNiCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi14sGnssNiCbIfaceE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_2_1() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::start(android::hardware::gnss::V1_0::IGnssBatching::Options const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching5startERKNS1_4V1_013IGnssBatching7OptionsE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching5startERKNS1_4V1_013IGnssBatching7OptionsE() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::sGnssNavigationMsgCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage25sGnssNavigationMsgCbIfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssNavigationMessage-in-android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE0_NS2_22IGnssNavigationMessageE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::updateNetworkAvailability(bool, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil25updateNetworkAvailabilityEbRKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil25updateNetworkAvailabilityEbRKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::setSetId(android::hardware::gnss::V1_0::IAGnssRil::SetIDType, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil8setSetIdENS1_4V1_09IAGnssRil9SetIDTypeERKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil8setSetIdENS1_4V1_09IAGnssRil9SetIDTypeERKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::acquireWakelockCb() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss17acquireWakelockCbEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss17acquireWakelockCbEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::setServer(android::hardware::gnss::V2_0::IAGnssCallback::AGnssType, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnss9setServerENS2_14IAGnssCallback9AGnssTypeERKNS0_11hidl_stringEi(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnss9setServerENS2_14IAGnssCallback9AGnssTypeERKNS0_11hidl_stringEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::GnssBatching */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback_2_1(android::sp<android::hardware::gnss::V2_1::IGnssMeasurementCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_1ERKNS_2spINS2_24IGnssMeasurementCallbackEEEb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_1ERKNS_2spINS2_24IGnssMeasurementCallbackEEEb() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssNi::sInterfaceExists */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi16sInterfaceExistsE = NULL;

/* Exported Object: vtable for android::hardware::gnss::V1_0::implementation::GnssNi */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V1_014implementation6GnssNiE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::AGnssRil */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sHidlVersionMinor */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss17sHidlVersionMinorE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_2_0() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::GnssDebug */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for android::hardware::gnss::V2_0::implementation::GnssDebug */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_014implementation9GnssDebugE = NULL;

/* Exported Object: vtable for android::hardware::gnss::V2_1::implementation::Gnss::GnssHidlDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_114implementation4Gnss22GnssHidlDeathRecipientE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::resumeGeofence(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14resumeGeofenceEii(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14resumeGeofenceEii() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V1_014implementation14GnssGeofencingE = NULL;

/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::GnssNavigationMessage(GpsNavigationMessageInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC1EPK29GpsNavigationMessageInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC1EPK29GpsNavigationMessageInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionVisibilityControl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionVisibilityControlEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionVisibilityControlEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::measurement_corrections::V1_1::IMeasurementCorrections-in-android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS3_23IMeasurementCorrectionsE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::AGnssRil(AGpsRilInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilC2EPK20AGpsRilInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRilC2EPK20AGpsRilInterface_ext() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::GnssNi(GpsNiInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNiC1EPK14GpsNiInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNiC1EPK14GpsNiInterface() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V2_0::IGnssCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V2_013IGnssCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V2_013IGnssCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_2_0(android::sp<android::hardware::gnss::V2_0::IGnssCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_0ERKNS_2spINS1_4V2_013IGnssCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_0ERKNS_2spINS1_4V2_013IGnssCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::acquireWakelockFused() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss20acquireWakelockFusedEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss20acquireWakelockFusedEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssBatching() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionGnssBatchingEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionGnssBatchingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V2_0::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V2_016IGnssMeasurementE = NULL;

/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD0Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnss::sAGnssCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation5AGnss8sAGnssCbE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::GnssMeasurement(GpsMeasurementInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC1EPK27GpsMeasurementInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC1EPK27GpsMeasurementInterface_ext() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::createThreadCb(char const*, void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14createThreadCbEPKcPFvPvES7_(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14createThreadCbEPKcPFvPvES7_() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::setRefLocation(android::hardware::gnss::V1_0::IAGnssRil::AGnssRefLocation const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil14setRefLocationERKNS1_4V1_09IAGnssRil16AGnssRefLocationE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil14setRefLocationERKNS1_4V1_09IAGnssRil16AGnssRefLocationE() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sInterfaceExists */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss16sInterfaceExistsE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionGnssDebugEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionGnssDebugEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V2_0::IGnssBatching-in-android::hardware::gnss::V2_0::implementation::GnssBatching */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS2_13IGnssBatchingE = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V2_1::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS2_18IGnssConfigurationE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNiD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNiD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::GnssVisibilityControl(GnssVisibilityControlInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC1EPK30GnssVisibilityControlInterface(void) {
    ALOGD("_ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC1EPK30GnssVisibilityControlInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::removeGeofence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14removeGeofenceEi(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14removeGeofenceEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V2_1::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS2_16IGnssMeasurementE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::requestRefLoc(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil13requestRefLocEj(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil13requestRefLocEj() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::handleHidlDeath() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss15handleHidlDeathEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss15handleHidlDeathEv() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching5flushEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching5flushEv() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::GnssMeasurement::sSem */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement4sSemE = NULL;

/* Exported Object: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::sGnssVisibilityControlCbs */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl25sGnssVisibilityControlCbsE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnss_2_0() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionAGnss_2_0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionAGnss_2_0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssMeasurementCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement11setCallbackERKNS_2spINS1_4V1_024IGnssMeasurementCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement11setCallbackERKNS_2spINS1_4V1_024IGnssMeasurementCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::measurement_corrections::V1_0::IMeasurementCorrections-in-android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS2_4V1_023IMeasurementCorrectionsE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNiD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNiD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::setCallback(android::sp<android::hardware::gnss::V2_0::IAGnssCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnss11setCallbackERKNS_2spINS2_14IAGnssCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnss11setCallbackERKNS_2spINS2_14IAGnssCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::requestUtcTimeCb() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss16requestUtcTimeCbEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss16requestUtcTimeCbEv() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sThreadFuncArgsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss19sThreadFuncArgsListE = NULL;

/* Demangled: android::sp<android::hardware::gnss::V2_0::IAGnssCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V2_014IAGnssCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V2_014IAGnssCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::GnssMeasurementCorrections(MeasurementCorrectionInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC1EPK30MeasurementCorrectionInterface(void) {
    ALOGD("_ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC1EPK30MeasurementCorrectionInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::requestLocationCb(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss17requestLocationCbEbb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss17requestLocationCbEbb() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssDebug-in-android::hardware::gnss::V2_0::implementation::GnssDebug */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS1_4V1_010IGnssDebugE = NULL;

/* Demangled: android::sp<android::hardware::gnss::visibility_control::V1_0::IGnssVisibilityControlCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss18visibility_control4V1_030IGnssVisibilityControlCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss18visibility_control4V1_030IGnssVisibilityControlCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNiD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNiD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V2_1::IGnssAntennaInfo-in-android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE0_NS2_16IGnssAntennaInfoE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setSuplVersion(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration14setSuplVersionEj(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration14setSuplVersionEj() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssXtraCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V1_017IGnssXtraCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V1_017IGnssXtraCallbackEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V1_0::implementation::GnssXtra */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V1_014implementation8GnssXtraE = NULL;

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnss::sInterfaceExists */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation5AGnss16sInterfaceExistsE = NULL;

/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_1::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V1_116IGnssMeasurementE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::addGeofence(int, double, double, double, android::hardware::gnss::V1_0::IGnssGeofenceCallback::GeofenceTransition, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11addGeofenceEidddNS2_21IGnssGeofenceCallback18GeofenceTransitionEijj(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11addGeofenceEidddNS2_21IGnssGeofenceCallback18GeofenceTransitionEijj() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnssRil::sAGnssRilCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil11sAGnssRilCbE = NULL;

/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V1_013IGnssCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V1_013IGnssCallbackEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V2_0::IGnssDebug-in-android::hardware::gnss::V2_0::implementation::GnssDebug */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS2_10IGnssDebugE = NULL;

/* Exported Object: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::sIGnssVisibilityControlCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl30sIGnssVisibilityControlCbIfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssXtra-in-android::hardware::gnss::V1_0::implementation::GnssXtra */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation8GnssXtraE0_NS2_9IGnssXtraE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::updateNetworkState(bool, android::hardware::gnss::V1_0::IAGnssRil::NetworkType, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil18updateNetworkStateEbNS1_4V1_09IAGnssRil11NetworkTypeEb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil18updateNetworkStateEbNS1_4V1_09IAGnssRil11NetworkTypeEb() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::statusCb(GpsStatus*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss8statusCbEP9GpsStatus(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss8statusCbEP9GpsStatus() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssBatching-in-android::hardware::gnss::V2_0::implementation::GnssBatching */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS1_4V1_013IGnssBatchingE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback_1_1(android::sp<android::hardware::gnss::V1_1::IGnssMeasurementCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_1_1ERKNS_2spINS1_4V1_124IGnssMeasurementCallbackEEEb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_1_1ERKNS_2spINS1_4V1_124IGnssMeasurementCallbackEEEb() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_114implementation15GnssMeasurementE = NULL;

/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::getDebugData_2_0(std::__1::function<void (android::hardware::gnss::V2_0::IGnssDebug::DebugData const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation9GnssDebug16getDebugData_2_0ENSt3__18functionIFvRKNS2_10IGnssDebug9DebugDataEEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation9GnssDebug16getDebugData_2_0ENSt3__18functionIFvRKNS2_10IGnssDebug9DebugDataEEEE() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sWakelockHeldFused */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss18sWakelockHeldFusedE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setPositionMode_1_1(android::hardware::gnss::V1_0::IGnss::GnssPositionMode, android::hardware::gnss::V1_0::IGnss::GnssPositionRecurrence, unsigned int, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss19setPositionMode_1_1ENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjjb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss19setPositionMode_1_1ENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjjb() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::gnssAntennaInfoCb(GnssAntennaInfos_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo17gnssAntennaInfoCbEP20GnssAntennaInfos_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo17gnssAntennaInfoCbEP20GnssAntennaInfos_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::init(android::sp<android::hardware::gnss::V1_0::IGnssBatchingCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching4initERKNS_2spINS1_4V1_021IGnssBatchingCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching4initERKNS_2spINS1_4V1_021IGnssBatchingCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching4stopEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching4stopEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource, std::__1::allocator<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource> >::__push_back_slow_path<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource const&>(android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware4gnss4V2_118IGnssConfiguration17BlacklistedSourceENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware4gnss4V2_118IGnssConfiguration17BlacklistedSourceENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::sGnssNavigationMessageCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage24sGnssNavigationMessageCbE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtraD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectBestLocation(android::hardware::gnss::V1_0::GnssLocation const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss18injectBestLocationERKNS1_4V1_012GnssLocationE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss18injectBestLocationERKNS1_4V1_012GnssLocationE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V2_1::implementation::Gnss */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_114implementation4GnssE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssNiCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNi11setCallbackERKNS_2spINS2_15IGnssNiCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNi11setCallbackERKNS_2spINS2_15IGnssNiCallbackEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::GnssBatching(FlpLocationInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC1EPK20FlpLocationInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC1EPK20FlpLocationInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement_1_1() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_1_1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_1_1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::convertToGnssLocation(GpsLocation_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing21convertToGnssLocationEP15GpsLocation_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing21convertToGnssLocationEP15GpsLocation_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::dataConnFailed() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnFailedEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnFailedEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::AGnss(AGpsInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnssC1EPK17AGpsInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnssC1EPK17AGpsInterface_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::requestSetId(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil12requestSetIdEj(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil12requestSetIdEj() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss11setCallbackERKNS_2spINS1_4V1_013IGnssCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss11setCallbackERKNS_2spINS1_4V1_013IGnssCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::GnssAntennaInfo(GnssAntennaInfoInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC2EPK24GnssAntennaInfoInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC2EPK24GnssAntennaInfoInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::GnssConfiguration(GnssConfigurationInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC1EPK30GnssConfigurationInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC1EPK30GnssConfigurationInterface_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::Gnss(gps_device_t_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4GnssC2EP16gps_device_t_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4GnssC2EP16gps_device_t_ext() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssNi-in-android::hardware::gnss::V1_0::implementation::GnssNi */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation6GnssNiE0_NS2_7IGnssNiE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::releaseWakelockFused() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss20releaseWakelockFusedEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss20releaseWakelockFusedEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssGeofencing::sGnssGfCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing9sGnssGfCbE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::updateWakelock() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss14updateWakelockEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss14updateWakelockEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionGnssConfigurationEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionGnssConfigurationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V1_05IGnssE = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V2_1::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS2_5IGnssE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setBlacklist(android::hardware::hidl_vec<android::hardware::gnss::V1_1::IGnssConfiguration::BlacklistedSource> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration12setBlacklistERKNS0_8hidl_vecINS1_4V1_118IGnssConfiguration17BlacklistedSourceEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration12setBlacklistERKNS0_8hidl_vecINS1_4V1_118IGnssConfiguration17BlacklistedSourceEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::GnssMeasurement(GpsMeasurementInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC2EPK27GpsMeasurementInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC2EPK27GpsMeasurementInterface_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::respond(int, android::hardware::gnss::V1_0::IGnssNiCallback::GnssUserResponseType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNi7respondEiNS2_15IGnssNiCallback20GnssUserResponseTypeE(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNi7respondEiNS2_15IGnssNiCallback20GnssUserResponseTypeE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnssRil() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss20getExtensionAGnssRilEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss20getExtensionAGnssRilEv() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sGnssAntennaInfoCbs */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo19sGnssAntennaInfoCbsE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::gpsMeasurementCb(GpsData*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement16gpsMeasurementCbEP7GpsData(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement16gpsMeasurementCbEP7GpsData() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnssRil::sInterfaceExists */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil16sInterfaceExistsE = NULL;

/* Exported Object: vtable for android::hardware::gnss::V2_0::implementation::AGnssRil */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_014implementation8AGnssRilE = NULL;

/* Demangled: android::sp<android::hardware::gnss::V2_1::IGnssAntennaInfoCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V2_124IGnssAntennaInfoCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V2_124IGnssAntennaInfoCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement5closeEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement5closeEv() called");
    return 0;
}

/* Demangled: threadFunc(void*) */
extern "C" __attribute__((visibility("default"))) int _Z10threadFuncPv(void) {
    ALOGD("_Z10threadFuncPv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement_2_1() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_2_1_common() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss40getExtensionGnssConfiguration_2_1_commonEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss40getExtensionGnssConfiguration_2_1_commonEv() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sGnssAntennaInfoCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo23sGnssAntennaInfoCbIfaceE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfAddCb(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11gnssGfAddCbEii(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11gnssGfAddCbEii() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::sMeasurementCorrectionCbs */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections25sMeasurementCorrectionCbsE = NULL;

/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssNavigationMessageCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V1_030IGnssNavigationMessageCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V1_030IGnssNavigationMessageCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssDebug_2_0() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss25getExtensionGnssDebug_2_0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss25getExtensionGnssDebug_2_0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo, std::__1::allocator<android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo> >::__push_back_slow_path<android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo const&>(android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware4gnss4V2_113IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware4gnss4V2_113IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::acquireWakelockCb() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17acquireWakelockCbEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching17acquireWakelockCbEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::flpCapabilitiesCb(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17flpCapabilitiesCbEi(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching17flpCapabilitiesCbEi() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::convertToGnssLocation2_0(GpsLocation_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation2_0EP15GpsLocation_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation2_0EP15GpsLocation_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssNi() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss18getExtensionGnssNiEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss18getExtensionGnssNiEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::createThreadCb(char const*, void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil14createThreadCbEPKcPFvPvES7_(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil14createThreadCbEPKcPFvPvES7_() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V2_0::implementation::AGnssRil */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_014implementation8AGnssRilE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::createThreadCb(char const*, void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss14createThreadCbEPKcPFvPvES7_(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss14createThreadCbEPKcPFvPvES7_() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement_2_0() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::setCallback(android::sp<android::hardware::gnss::V1_0::IAGnssRilCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil11setCallbackERKNS_2spINS1_4V1_017IAGnssRilCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRil11setCallbackERKNS_2spINS1_4V1_017IAGnssRilCallbackEEE() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface2_0 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface2_0E = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V1_1::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V1_15IGnssE = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V2_0::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V2_05IGnssE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::GnssDebug(GpsDebugInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation9GnssDebugC2EPK21GpsDebugInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation9GnssDebugC2EPK21GpsDebugInterface_ext() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V1_0::implementation::GnssXtra */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V1_014implementation8GnssXtraE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss4stopEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss4stopEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::cleanup() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching7cleanupEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching7cleanupEv() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_114implementation17GnssConfigurationE = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V1_016IGnssMeasurementE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::niNotifyCb(GpsNiNotification*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNi10niNotifyCbEP17GpsNiNotification(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNi10niNotifyCbEP17GpsNiNotification() called");
    return 0;
}

/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::isInEmergencySession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl20isInEmergencySessionEv(void) {
    ALOGD("_ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl20isInEmergencySessionEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::dataConnOpen(unsigned long, android::hardware::hidl_string const&, android::hardware::gnss::V2_0::IAGnss::ApnIpType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnss12dataConnOpenEmRKNS0_11hidl_stringENS2_6IAGnss9ApnIpTypeE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnss12dataConnOpenEmRKNS0_11hidl_stringENS2_6IAGnss9ApnIpTypeE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_2_1(android::sp<android::hardware::gnss::V2_1::IGnssCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_1ERKNS_2spINS2_13IGnssCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_1ERKNS_2spINS2_13IGnssCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::releaseWakelockCb() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss17releaseWakelockCbEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss17releaseWakelockCbEv() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE = NULL;

/* Exported Object: android::hardware::gnss::V2_0::implementation::GnssBatching::sFlpCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation12GnssBatching6sFlpCbE = NULL;

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssGeofencing::sInterfaceExists */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing16sInterfaceExistsE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssNi */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation6GnssNiE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for android::hardware::gnss::V1_0::implementation::GnssNi */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V1_014implementation6GnssNiE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::GnssXtra(GpsXtraInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraC1EPK16GpsXtraInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtraC1EPK16GpsXtraInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::acquireWakelockGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss19acquireWakelockGnssEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss19acquireWakelockGnssEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::nmeaCb(long, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss6nmeaCbElPKci(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss6nmeaCbElPKci() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::createThreadCb(char const*, void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnss14createThreadCbEPKcPFvPvES7_(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnss14createThreadCbEPKcPFvPvES7_() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::cleanup() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss7cleanupEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss7cleanupEv() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss7sGnssCbE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::setCallback(android::sp<android::hardware::gnss::V2_1::IGnssAntennaInfoCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo11setCallbackERKNS_2spINS2_24IGnssAntennaInfoCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo11setCallbackERKNS_2spINS2_24IGnssAntennaInfoCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCallback(android::sp<android::hardware::gnss::measurement_corrections::V1_0::IMeasurementCorrectionsCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections11setCallbackERKNS_2spINS2_4V1_031IMeasurementCorrectionsCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections11setCallbackERKNS_2spINS2_4V1_031IMeasurementCorrectionsCallbackEEE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::createThreadCb(char const*, void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra14createThreadCbEPKcPFvPvES7_(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtra14createThreadCbEPKcPFvPvES7_() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::flpStatusCb(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching11flpStatusCbEi(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching11flpStatusCbEi() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setEsExtensionSec(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration17setEsExtensionSecEj(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration17setEsExtensionSecEj() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> >, std::__1::allocator<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> > > >::__push_back_slow_path<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> > >(std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrI14ThreadFuncArgsNS_14default_deleteIS2_EEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrI14ThreadFuncArgsNS_14default_deleteIS2_EEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface1_0 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface1_0E = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::GnssDebug(GpsDebugInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation9GnssDebugC1EPK21GpsDebugInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation9GnssDebugC1EPK21GpsDebugInterface_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionMeasurementCorrections_common() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss41getExtensionMeasurementCorrections_commonEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss41getExtensionMeasurementCorrections_commonEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_1::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V1_118IGnssConfigurationE = NULL;

/* Exported Object: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sReported */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo9sReportedE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCorrections(android::hardware::gnss::measurement_corrections::V1_0::MeasurementCorrections const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections14setCorrectionsERKNS2_4V1_022MeasurementCorrectionsE(void) {
    ALOGD("_ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections14setCorrectionsERKNS2_4V1_022MeasurementCorrectionsE() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssNi::sGnssNiCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi9sGnssNiCbE = NULL;

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssXtra::sGnssXtraCb */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra11sGnssXtraCbE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::AGnss */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation5AGnssE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnssD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnssD2Ev() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnssRil::sAGnssRilCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil16sAGnssRilCbIfaceE = NULL;

/* Exported Object: vtable for android::hardware::gnss::V2_1::implementation::Gnss */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_114implementation4GnssE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::convertToGnssLocation(FlpLocation*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation21convertToGnssLocationEP11FlpLocation(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation21convertToGnssLocationEP11FlpLocation() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setGlonassPositioningProtocol(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration29setGlonassPositioningProtocolEh(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration29setGlonassPositioningProtocolEh() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssGeofencing::sThreadFuncArgsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing19sThreadFuncArgsListE = NULL;

/* Exported Object: android::hardware::gnss::V2_1::implementation::GnssMeasurement::sGnssMeasurementCbs */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement19sGnssMeasurementCbsE = NULL;

/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::setCallback(android::sp<android::hardware::gnss::visibility_control::V1_0::IGnssVisibilityControlCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11setCallbackERKNS_2spINS3_30IGnssVisibilityControlCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11setCallbackERKNS_2spINS3_30IGnssVisibilityControlCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::statusCb(AGpsStatus*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnss8statusCbEP10AGpsStatus(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnss8statusCbEP10AGpsStatus() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssAntennaInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssAntennaInfoEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssAntennaInfoEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::getBatchSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching12getBatchSizeEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching12getBatchSizeEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::pauseGeofence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13pauseGeofenceEi(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13pauseGeofenceEi() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnssD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnssD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setPositionMode(android::hardware::gnss::V1_0::IGnss::GnssPositionMode, android::hardware::gnss::V1_0::IGnss::GnssPositionRecurrence, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setPositionModeENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjj(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss15setPositionModeENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjj() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setSystemInfoCb(GnssSystemInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setSystemInfoCbEPK14GnssSystemInfo(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss15setSystemInfoCbEPK14GnssSystemInfo() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sHidlVersionMajor */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss17sHidlVersionMajorE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setSuplMode(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration11setSuplModeEh(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration11setSuplModeEh() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V2_0::implementation::GnssDebug */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_014implementation9GnssDebugE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfTransitionCb(int, GpsLocation_ext*, int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing18gnssGfTransitionCbEiP15GpsLocation_extil(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing18gnssGfTransitionCbEiP15GpsLocation_extil() called");
    return 0;
}

/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::enableNfwLocationAccess(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl23enableNfwLocationAccessERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl23enableNfwLocationAccessERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::AGnss(AGpsInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnssC2EPK17AGpsInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnssC2EPK17AGpsInterface_ext() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sSem */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss4sSemE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss5startEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss5startEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::Gnss(gps_device_t_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4GnssC1EP16gps_device_t_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4GnssC1EP16gps_device_t_ext() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionMeasurementCorrections_1_1() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss38getExtensionMeasurementCorrections_1_1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss38getExtensionMeasurementCorrections_1_1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo5closeEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage5closeEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage5closeEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnssD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnssD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setBlacklist_2_1(android::hardware::hidl_vec<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration16setBlacklist_2_1ERKNS0_8hidl_vecINS2_18IGnssConfiguration17BlacklistedSourceEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration16setBlacklist_2_1ERKNS0_8hidl_vecINS2_18IGnssConfiguration17BlacklistedSourceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::visibility_control::V1_0::IGnssVisibilityControl-in-android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE0_NS3_22IGnssVisibilityControlE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_common(android::sp<android::hardware::gnss::V1_0::IGnssCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss18setCallback_commonERKNS_2spINS1_4V1_013IGnssCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss18setCallback_commonERKNS_2spINS1_4V1_013IGnssCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssGeofencing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss26getExtensionGnssGeofencingEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss26getExtensionGnssGeofencingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::GnssVisibilityControl(GnssVisibilityControlInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC2EPK30GnssVisibilityControlInterface(void) {
    ALOGD("_ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC2EPK30GnssVisibilityControlInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::AGnssRil(AGpsRilInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilC1EPK20AGpsRilInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRilC1EPK20AGpsRilInterface_ext() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setEmergencySuplPdn(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration19setEmergencySuplPdnEb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration19setEmergencySuplPdnEb() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD0Ev() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V1_0::IAGnssRilCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V1_017IAGnssRilCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V1_017IAGnssRilCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCapabilitiesCb(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections17setCapabilitiesCbEj(void) {
    ALOGD("_ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections17setCapabilitiesCbEj() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::gnssXtraDownloadRequestCb() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra25gnssXtraDownloadRequestCbEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtra25gnssXtraDownloadRequestCbEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRilD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4GnssD2Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4GnssD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::locationCb(int, FlpLocation**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching10locationCbEiPP11FlpLocation(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching10locationCbEiPP11FlpLocation() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectLocation(double, double, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss14injectLocationEddf(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss14injectLocationEddf() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_0::implementation::GnssBatching::sFlpSupportsBatching */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation12GnssBatching20sFlpSupportsBatchingE = NULL;

/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::GnssMeasurementCorrections(MeasurementCorrectionInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC2EPK30MeasurementCorrectionInterface(void) {
    ALOGD("_ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC2EPK30MeasurementCorrectionInterface() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssNiCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V1_015IGnssNiCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V1_015IGnssNiCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCapabilitiesCb(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss17setCapabilitiesCbEj(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss17setCapabilitiesCbEj() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V2_1::IGnssCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V2_113IGnssCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V2_113IGnssCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4GnssD1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4GnssD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setSuplEs(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration9setSuplEsEb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration9setSuplEsEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssGeofencing-in-android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation14GnssGeofencingE0_NS2_15IGnssGeofencingE = NULL;

/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssXtra::sGnssXtraCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra16sGnssXtraCbIfaceE = NULL;

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sWakelockHeldGnss */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss17sWakelockHeldGnssE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionMeasurementCorrections() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss34getExtensionMeasurementCorrectionsEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss34getExtensionMeasurementCorrectionsEv() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::GnssMeasurement::sGnssMeasureCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement19sGnssMeasureCbIfaceE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssGeofenceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11setCallbackERKNS_2spINS2_21IGnssGeofenceCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11setCallbackERKNS_2spINS2_21IGnssGeofenceCallbackEEE() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnssRil::sThreadFuncArgsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil19sThreadFuncArgsListE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectTime(long, long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss10injectTimeElli(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss10injectTimeElli() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss17getExtensionAGnssEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss17getExtensionAGnssEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4GnssD0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4GnssD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V2_0::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V2_018IGnssConfigurationE = NULL;

/* Exported Object: vtable for android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::gnssNavigationMessageCb(GnssNavigationMessage*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage23gnssNavigationMessageCbEP21GnssNavigationMessage(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage23gnssNavigationMessageCbEP21GnssNavigationMessage() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::GnssGeofencing(GpsGeofencingInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC1EPK26GpsGeofencingInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC1EPK26GpsGeofencingInterface_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::gnssSvStatusCb(GnssSvStatus_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss14gnssSvStatusCbEP16GnssSvStatus_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss14gnssSvStatusCbEP16GnssSvStatus_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::deleteAidingData(android::hardware::gnss::V1_0::IGnss::GnssAidingData) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss16deleteAidingDataENS1_4V1_05IGnss14GnssAidingDataE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss16deleteAidingDataENS1_4V1_05IGnss14GnssAidingDataE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssMeasurementEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssMeasurementEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfPauseCb(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13gnssGfPauseCbEii(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13gnssGfPauseCbEii() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V2_0::implementation::AGnss */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_014implementation5AGnssE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::GnssAntennaInfo(GnssAntennaInfoInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC1EPK24GnssAntennaInfoInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC1EPK24GnssAntennaInfoInterface() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V2_0::implementation::GnssBatching */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_014implementation12GnssBatchingE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::getDebugData(std::__1::function<void (android::hardware::gnss::V1_0::IGnssDebug::DebugData const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation9GnssDebug12getDebugDataENSt3__18functionIFvRKNS1_4V1_010IGnssDebug9DebugDataEEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation9GnssDebug12getDebugDataENSt3__18functionIFvRKNS1_4V1_010IGnssDebug9DebugDataEEEE() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sSem */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo4sSemE = NULL;

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssNi::sThreadFuncArgsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi19sThreadFuncArgsListE = NULL;

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssXtra::sThreadFuncArgsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra19sThreadFuncArgsListE = NULL;

/* Exported Object: construction vtable for android::hardware::gnss::V2_0::IAGnssRil-in-android::hardware::gnss::V2_0::implementation::AGnssRil */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS2_9IAGnssRilE = NULL;

/* Demangled: HIDL_FETCH_IGnss */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IGnss(void) {
    ALOGD("HIDL_FETCH_IGnss() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface2_1 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface2_1E = NULL;

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssXtra::sInterfaceExists */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra16sInterfaceExistsE = NULL;

/* Demangled: void std::__1::vector<android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo, std::__1::allocator<android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo> >::__push_back_slow_path<android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo const&>(android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware4gnss4V2_013IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware4gnss4V2_013IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation14GnssGeofencingE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::locationCb(GpsLocation_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss10locationCbEP15GpsLocation_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss10locationCbEP15GpsLocation_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssBatching_2_0() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss28getExtensionGnssBatching_2_0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss28getExtensionGnssBatching_2_0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfStatusCb(int, GpsLocation_ext*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfStatusCbEiP15GpsLocation_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfStatusCbEiP15GpsLocation_ext() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::measurement_corrections::V1_0::IMeasurementCorrectionsCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss23measurement_corrections4V1_031IMeasurementCorrectionsCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss23measurement_corrections4V1_031IMeasurementCorrectionsCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::nfwNotifyCb(NfwNotification) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11nfwNotifyCbE15NfwNotification(void) {
    ALOGD("_ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11nfwNotifyCbE15NfwNotification() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::dataConnClosed() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnClosedEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnClosedEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectBestLocation_2_0(android::hardware::gnss::V2_0::GnssLocation const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss22injectBestLocation_2_0ERKNS1_4V2_012GnssLocationE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss22injectBestLocation_2_0ERKNS1_4V2_012GnssLocationE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::GnssConfiguration(GnssConfigurationInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC2EPK30GnssConfigurationInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC2EPK30GnssConfigurationInterface_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::GnssNi(GpsNiInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation6GnssNiC2EPK14GpsNiInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation6GnssNiC2EPK14GpsNiInterface() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE = NULL;

/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::gnss::V2_0::implementation::GnssBatching */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware4gnss4V2_014implementation12GnssBatchingE = NULL;

/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCorrections_1_1(android::hardware::gnss::measurement_corrections::V1_1::MeasurementCorrections const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections18setCorrections_1_1ERKNS3_22MeasurementCorrectionsE(void) {
    ALOGD("_ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections18setCorrections_1_1ERKNS3_22MeasurementCorrectionsE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssXtraCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra11setCallbackERKNS_2spINS2_17IGnssXtraCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtra11setCallbackERKNS_2spINS2_17IGnssXtraCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V2_0::IAGnss-in-android::hardware::gnss::V2_0::implementation::AGnss */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_014implementation5AGnssE0_NS2_6IAGnssE = NULL;

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::releaseWakelockCb() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17releaseWakelockCbEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching17releaseWakelockCbEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback_2_0(android::sp<android::hardware::gnss::V2_0::IGnssMeasurementCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_0ERKNS_2spINS1_4V2_024IGnssMeasurementCallbackEEEb(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_0ERKNS_2spINS1_4V2_024IGnssMeasurementCallbackEEEb() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssNavigationMessageCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage11setCallbackERKNS_2spINS2_30IGnssNavigationMessageCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage11setCallbackERKNS_2spINS2_30IGnssNavigationMessageCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssXtra */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V1_014implementation8GnssXtraE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V1_1::IGnssCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V1_113IGnssCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V1_113IGnssCallbackEED2Ev() called");
    return 0;
}

/* Demangled: createPthread(char const*, void (*)(void*), void*, std::__1::vector<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> >, std::__1::allocator<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> > > >*) */
extern "C" __attribute__((visibility("default"))) int _Z13createPthreadPKcPFvPvES1_PNSt3__16vectorINS4_10unique_ptrI14ThreadFuncArgsNS4_14default_deleteIS7_EEEENS4_9allocatorISA_EEEE(void) {
    ALOGD("_Z13createPthreadPKcPFvPvES1_PNSt3__16vectorINS4_10unique_ptrI14ThreadFuncArgsNS4_14default_deleteIS7_EEEENS4_9allocatorISA_EEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::releaseWakelockGnss() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss19releaseWakelockGnssEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss19releaseWakelockGnssEv() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_0::implementation::GnssBatching::sGnssBatchingCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation12GnssBatching20sGnssBatchingCbIfaceE = NULL;

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnss::sAGnssCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation5AGnss13sAGnssCbIfaceE = NULL;

/* Exported Object: android::hardware::gnss::V2_0::implementation::AGnss::sThreadFuncArgsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_014implementation5AGnss19sThreadFuncArgsListE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface1_1 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface1_1E = NULL;

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_1_1(android::sp<android::hardware::gnss::V1_1::IGnssCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_1_1ERKNS_2spINS1_4V1_113IGnssCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_1_1ERKNS_2spINS1_4V1_113IGnssCallbackEEE() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::gnss::V2_0::IGnssBatchingCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V2_021IGnssBatchingCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V2_021IGnssBatchingCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::GnssGeofencing(GpsGeofencingInterface_ext const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC2EPK26GpsGeofencingInterface_ext(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC2EPK26GpsGeofencingInterface_ext() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setNameCb(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss9setNameCbEPKci(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss9setNameCbEPKci() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sendMockAntennaInfos() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo20sendMockAntennaInfosEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo20sendMockAntennaInfosEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::setThreadEventCb(ThreadEvent) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching16setThreadEventCbE11ThreadEvent(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching16setThreadEventCbE11ThreadEvent() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::GnssBatching(FlpLocationInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC2EPK20FlpLocationInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC2EPK20FlpLocationInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::gpsSvStatusCb(GpsSvStatus*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss13gpsSvStatusCbEP11GpsSvStatus(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss13gpsSvStatusCbEP11GpsSvStatus() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_1_1() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_1_1Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_1_1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::gnss::V1_0::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V1_018IGnssConfigurationE = NULL;

/* Exported Object: VTT for android::hardware::gnss::V2_0::implementation::AGnss */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_014implementation5AGnssE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssNavigationMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssNavigationMessageEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssNavigationMessageEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::injectXtraData(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra14injectXtraDataERKNS0_11hidl_stringE(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtra14injectXtraDataERKNS0_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::init_2_0(android::sp<android::hardware::gnss::V2_0::IGnssBatchingCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching8init_2_0ERKNS_2spINS2_21IGnssBatchingCallbackEEE(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_014implementation12GnssBatching8init_2_0ERKNS_2spINS2_21IGnssBatchingCallbackEEE() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setGpsLock(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration10setGpsLockEh(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration10setGpsLockEh() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_114implementation15GnssMeasurementE = NULL;

/* Exported Object: VTT for android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE = NULL;

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::GnssXtra(GpsXtraInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraC2EPK16GpsXtraInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation8GnssXtraC2EPK16GpsXtraInterface() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionXtra() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss16getExtensionXtraEv(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss16getExtensionXtraEv() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setLppProfile(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration13setLppProfileEh(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration13setLppProfileEh() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V2_114implementation17GnssConfigurationE = NULL;

/* Exported Object: VTT for android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware4gnss4V1_014implementation14GnssGeofencingE = NULL;

/* Demangled: android::sp<android::hardware::gnss::V2_1::IGnssMeasurementCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware4gnss4V2_124IGnssMeasurementCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware4gnss4V2_124IGnssMeasurementCallbackEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::GnssNavigationMessage(GpsNavigationMessageInterface const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC2EPK29GpsNavigationMessageInterface(void) {
    ALOGD("_ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC2EPK29GpsNavigationMessageInterface() called");
    return 0;
}

/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnssRil_2_0() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionAGnssRil_2_0Ev(void) {
    ALOGD("_ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionAGnssRil_2_0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: android::hardware::gnss::V1_0::implementation::GnssGeofencing::mGnssGeofencingCbIface */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing22mGnssGeofencingCbIfaceE = NULL;
