/*
 * Reverse-Engineered ABI Specification for: android.hardware.gnss@2.1-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.gnss@2.1-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_GNSS_2_1_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_GNSS_2_1_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation1_0EP15GpsLocation_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::convertToGnssLocation1_0(GpsLocation_ext*) */
int _ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation1_0EP15GpsLocation_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfRemoveCbEii */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfRemoveCb(int, int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfRemoveCbEii(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfResumeCbEii */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfResumeCb(int, int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfResumeCbEii(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections23sMeasureCallbackCbIfaceE */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::sMeasureCallbackCbIface */
extern void* _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections23sMeasureCallbackCbIfaceE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi14createThreadCbEPKcPFvPvES7_ */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::createThreadCb(char const*, void (*)(void*), void*) */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNi14createThreadCbEPKcPFvPvES7_(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS1_4V1_09IAGnssRilE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IAGnssRil-in-android::hardware::gnss::V2_0::implementation::AGnssRil */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS1_4V1_09IAGnssRilE;

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware4gnss4V2_012GnssLocationENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::gnss::V2_0::GnssLocation, std::__1::allocator<android::hardware::gnss::V2_0::GnssLocation> >::__push_back_slow_path<android::hardware::gnss::V2_0::GnssLocation>(android::hardware::gnss::V2_0::GnssLocation&&) */
int _ZNSt3__16vectorIN7android8hardware4gnss4V2_012GnssLocationENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil22updateNetworkState_2_0ERKNS2_9IAGnssRil17NetworkAttributesE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::updateNetworkState_2_0(android::hardware::gnss::V2_0::IAGnssRil::NetworkAttributes const&) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil22updateNetworkState_2_0ERKNS2_9IAGnssRil17NetworkAttributesE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss32getExtensionGnssDebug_2_0_commonEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssDebug_2_0_common() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss32getExtensionGnssDebug_2_0_commonEv(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V1_021IGnssGeofenceCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssGeofenceCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V1_021IGnssGeofenceCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement17gnssMeasurementCbEP12GnssData_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::gnssMeasurementCb(GnssData_ext*) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement17gnssMeasurementCbEP12GnssData_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi14sGnssNiCbIfaceE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::sGnssNiCbIface */
extern void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi14sGnssNiCbIfaceE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_2_1() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching5startERKNS1_4V1_013IGnssBatching7OptionsE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::start(android::hardware::gnss::V1_0::IGnssBatching::Options const&) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching5startERKNS1_4V1_013IGnssBatching7OptionsE(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage25sGnssNavigationMsgCbIfaceE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::sGnssNavigationMsgCbIface */
extern void* _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage25sGnssNavigationMsgCbIfaceE;

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE0_NS2_22IGnssNavigationMessageE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssNavigationMessage-in-android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE0_NS2_22IGnssNavigationMessageE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil25updateNetworkAvailabilityEbRKNS0_11hidl_stringE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::updateNetworkAvailability(bool, android::hardware::hidl_string const&) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil25updateNetworkAvailabilityEbRKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil8setSetIdENS1_4V1_09IAGnssRil9SetIDTypeERKNS0_11hidl_stringE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::setSetId(android::hardware::gnss::V1_0::IAGnssRil::SetIDType, android::hardware::hidl_string const&) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil8setSetIdENS1_4V1_09IAGnssRil9SetIDTypeERKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17acquireWakelockCbEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::acquireWakelockCb() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss17acquireWakelockCbEv(void);

/* Symbol: _ZTCN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern void* _ZTCN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss9setServerENS2_14IAGnssCallback9AGnssTypeERKNS0_11hidl_stringEi */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::setServer(android::hardware::gnss::V2_0::IAGnssCallback::AGnssType, android::hardware::hidl_string const&, int) */
int _ZN7android8hardware4gnss4V2_014implementation5AGnss9setServerENS2_14IAGnssCallback9AGnssTypeERKNS0_11hidl_stringEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::GnssBatching */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_1ERKNS_2spINS2_24IGnssMeasurementCallbackEEEb */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback_2_1(android::sp<android::hardware::gnss::V2_1::IGnssMeasurementCallback> const&, bool) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_1ERKNS_2spINS2_24IGnssMeasurementCallbackEEEb(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi16sInterfaceExistsE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::sInterfaceExists */
extern void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi16sInterfaceExistsE;

/* Symbol: _ZTVN7android8hardware4gnss4V1_014implementation6GnssNiE */
/* Demangled: vtable for android::hardware::gnss::V1_0::implementation::GnssNi */
extern void* _ZTVN7android8hardware4gnss4V1_014implementation6GnssNiE;

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::AGnssRil */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17sHidlVersionMinorE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sHidlVersionMinor */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss17sHidlVersionMinorE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_2_0() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_2_0Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::GnssDebug */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN7android8hardware4gnss4V2_014implementation9GnssDebugE */
/* Demangled: VTT for android::hardware::gnss::V2_0::implementation::GnssDebug */
extern void* _ZTTN7android8hardware4gnss4V2_014implementation9GnssDebugE;

/* Symbol: _ZTVN7android8hardware4gnss4V2_114implementation4Gnss22GnssHidlDeathRecipientE */
/* Demangled: vtable for android::hardware::gnss::V2_1::implementation::Gnss::GnssHidlDeathRecipient */
extern void* _ZTVN7android8hardware4gnss4V2_114implementation4Gnss22GnssHidlDeathRecipientE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14resumeGeofenceEii */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::resumeGeofence(int, int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14resumeGeofenceEii(void);

/* Symbol: _ZTVN7android8hardware4gnss4V1_014implementation14GnssGeofencingE */
/* Demangled: vtable for android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern void* _ZTVN7android8hardware4gnss4V1_014implementation14GnssGeofencingE;

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC1EPK29GpsNavigationMessageInterface */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::GnssNavigationMessage(GpsNavigationMessageInterface const*) */
int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC1EPK29GpsNavigationMessageInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionVisibilityControlEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionVisibilityControl() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionVisibilityControlEv(void);

/* Symbol: _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS3_23IMeasurementCorrectionsE */
/* Demangled: construction vtable for android::hardware::gnss::measurement_corrections::V1_1::IMeasurementCorrections-in-android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern void* _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS3_23IMeasurementCorrectionsE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRilC2EPK20AGpsRilInterface_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::AGnssRil(AGpsRilInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilC2EPK20AGpsRilInterface_ext(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNiC1EPK14GpsNiInterface */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::GnssNi(GpsNiInterface const*) */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNiC1EPK14GpsNiInterface(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V2_013IGnssCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V2_0::IGnssCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V2_013IGnssCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_0ERKNS_2spINS1_4V2_013IGnssCallbackEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_2_0(android::sp<android::hardware::gnss::V2_0::IGnssCallback> const&) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_0ERKNS_2spINS1_4V2_013IGnssCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss20acquireWakelockFusedEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::acquireWakelockFused() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss20acquireWakelockFusedEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionGnssBatchingEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssBatching() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionGnssBatchingEv(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V2_016IGnssMeasurementE */
/* Demangled: construction vtable for android::hardware::gnss::V2_0::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V2_016IGnssMeasurementE;

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation6GnssNiD0Ev(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss8sAGnssCbE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::sAGnssCb */
extern void* _ZN7android8hardware4gnss4V2_014implementation5AGnss8sAGnssCbE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC1EPK27GpsMeasurementInterface_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::GnssMeasurement(GpsMeasurementInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC1EPK27GpsMeasurementInterface_ext(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14createThreadCbEPKcPFvPvES7_ */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::createThreadCb(char const*, void (*)(void*), void*) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14createThreadCbEPKcPFvPvES7_(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil14setRefLocationERKNS1_4V1_09IAGnssRil16AGnssRefLocationE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::setRefLocation(android::hardware::gnss::V1_0::IAGnssRil::AGnssRefLocation const&) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil14setRefLocationERKNS1_4V1_09IAGnssRil16AGnssRefLocationE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss16sInterfaceExistsE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sInterfaceExists */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss16sInterfaceExistsE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionGnssDebugEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssDebug() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionGnssDebugEv(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS2_13IGnssBatchingE */
/* Demangled: construction vtable for android::hardware::gnss::V2_0::IGnssBatching-in-android::hardware::gnss::V2_0::implementation::GnssBatching */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS2_13IGnssBatchingE;

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS2_18IGnssConfigurationE */
/* Demangled: construction vtable for android::hardware::gnss::V2_1::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS2_18IGnssConfigurationE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNiD2Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNiD2Ev(void);

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC1EPK30GnssVisibilityControlInterface */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::GnssVisibilityControl(GnssVisibilityControlInterface const*) */
int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC1EPK30GnssVisibilityControlInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14removeGeofenceEi */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::removeGeofence(int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14removeGeofenceEi(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS2_16IGnssMeasurementE */
/* Demangled: construction vtable for android::hardware::gnss::V2_1::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS2_16IGnssMeasurementE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil13requestRefLocEj */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::requestRefLoc(unsigned int) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil13requestRefLocEj(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15handleHidlDeathEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::handleHidlDeath() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss15handleHidlDeathEv(void);

/* Symbol: _ZTTN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE */
/* Demangled: VTT for android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern void* _ZTTN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching5flushEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::flush() */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching5flushEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement4sSemE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::sSem */
extern void* _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement4sSemE;

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl25sGnssVisibilityControlCbsE */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::sGnssVisibilityControlCbs */
extern void* _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl25sGnssVisibilityControlCbsE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionAGnss_2_0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnss_2_0() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss21getExtensionAGnss_2_0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD2Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement11setCallbackERKNS_2spINS1_4V1_024IGnssMeasurementCallbackEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssMeasurementCallback> const&) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement11setCallbackERKNS_2spINS1_4V1_024IGnssMeasurementCallbackEEE(void);

/* Symbol: _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS2_4V1_023IMeasurementCorrectionsE */
/* Demangled: construction vtable for android::hardware::gnss::measurement_corrections::V1_0::IMeasurementCorrections-in-android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern void* _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS2_4V1_023IMeasurementCorrectionsE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNiD1Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNiD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss11setCallbackERKNS_2spINS2_14IAGnssCallbackEEE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::setCallback(android::sp<android::hardware::gnss::V2_0::IAGnssCallback> const&) */
int _ZN7android8hardware4gnss4V2_014implementation5AGnss11setCallbackERKNS_2spINS2_14IAGnssCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss16requestUtcTimeCbEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::requestUtcTimeCb() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss16requestUtcTimeCbEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss19sThreadFuncArgsListE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sThreadFuncArgsList */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss19sThreadFuncArgsListE;

/* Symbol: _ZN7android2spINS_8hardware4gnss4V2_014IAGnssCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V2_0::IAGnssCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V2_014IAGnssCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC1EPK30MeasurementCorrectionInterface */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::GnssMeasurementCorrections(MeasurementCorrectionInterface const*) */
int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC1EPK30MeasurementCorrectionInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17requestLocationCbEbb */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::requestLocationCb(bool, bool) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss17requestLocationCbEbb(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD1Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS1_4V1_010IGnssDebugE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssDebug-in-android::hardware::gnss::V2_0::implementation::GnssDebug */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS1_4V1_010IGnssDebugE;

/* Symbol: _ZN7android2spINS_8hardware4gnss18visibility_control4V1_030IGnssVisibilityControlCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::visibility_control::V1_0::IGnssVisibilityControlCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss18visibility_control4V1_030IGnssVisibilityControlCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNiD0Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::~GnssNi() */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNiD0Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE0_NS2_16IGnssAntennaInfoE */
/* Demangled: construction vtable for android::hardware::gnss::V2_1::IGnssAntennaInfo-in-android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE0_NS2_16IGnssAntennaInfoE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration14setSuplVersionEj */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setSuplVersion(unsigned int) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration14setSuplVersionEj(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V1_017IGnssXtraCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssXtraCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V1_017IGnssXtraCallbackEED2Ev(void);

/* Symbol: _ZTVN7android8hardware4gnss4V1_014implementation8GnssXtraE */
/* Demangled: vtable for android::hardware::gnss::V1_0::implementation::GnssXtra */
extern void* _ZTVN7android8hardware4gnss4V1_014implementation8GnssXtraE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss16sInterfaceExistsE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::sInterfaceExists */
extern void* _ZN7android8hardware4gnss4V2_014implementation5AGnss16sInterfaceExistsE;

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation4GnssD0Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V1_116IGnssMeasurementE */
/* Demangled: construction vtable for android::hardware::gnss::V1_1::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V1_116IGnssMeasurementE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11addGeofenceEidddNS2_21IGnssGeofenceCallback18GeofenceTransitionEijj */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::addGeofence(int, double, double, double, android::hardware::gnss::V1_0::IGnssGeofenceCallback::GeofenceTransition, int, unsigned int, unsigned int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11addGeofenceEidddNS2_21IGnssGeofenceCallback18GeofenceTransitionEijj(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil11sAGnssRilCbE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::sAGnssRilCb */
extern void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil11sAGnssRilCbE;

/* Symbol: _ZN7android2spINS_8hardware4gnss4V1_013IGnssCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V1_013IGnssCallbackEED2Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS2_10IGnssDebugE */
/* Demangled: construction vtable for android::hardware::gnss::V2_0::IGnssDebug-in-android::hardware::gnss::V2_0::implementation::GnssDebug */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation9GnssDebugE0_NS2_10IGnssDebugE;

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl30sIGnssVisibilityControlCbIfaceE */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::sIGnssVisibilityControlCbIface */
extern void* _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl30sIGnssVisibilityControlCbIfaceE;

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation8GnssXtraE0_NS2_9IGnssXtraE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssXtra-in-android::hardware::gnss::V1_0::implementation::GnssXtra */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation8GnssXtraE0_NS2_9IGnssXtraE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil18updateNetworkStateEbNS1_4V1_09IAGnssRil11NetworkTypeEb */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::updateNetworkState(bool, android::hardware::gnss::V1_0::IAGnssRil::NetworkType, bool) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil18updateNetworkStateEbNS1_4V1_09IAGnssRil11NetworkTypeEb(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss8statusCbEP9GpsStatus */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::statusCb(GpsStatus*) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss8statusCbEP9GpsStatus(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS1_4V1_013IGnssBatchingE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssBatching-in-android::hardware::gnss::V2_0::implementation::GnssBatching */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation12GnssBatchingE0_NS1_4V1_013IGnssBatchingE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_1_1ERKNS_2spINS1_4V1_124IGnssMeasurementCallbackEEEb */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback_1_1(android::sp<android::hardware::gnss::V1_1::IGnssMeasurementCallback> const&, bool) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_1_1ERKNS_2spINS1_4V1_124IGnssMeasurementCallbackEEEb(void);

/* Symbol: _ZTVN7android8hardware4gnss4V2_114implementation15GnssMeasurementE */
/* Demangled: vtable for android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern void* _ZTVN7android8hardware4gnss4V2_114implementation15GnssMeasurementE;

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation9GnssDebug16getDebugData_2_0ENSt3__18functionIFvRKNS2_10IGnssDebug9DebugDataEEEE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::getDebugData_2_0(std::__1::function<void (android::hardware::gnss::V2_0::IGnssDebug::DebugData const&)>) */
int _ZN7android8hardware4gnss4V2_014implementation9GnssDebug16getDebugData_2_0ENSt3__18functionIFvRKNS2_10IGnssDebug9DebugDataEEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss18sWakelockHeldFusedE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sWakelockHeldFused */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss18sWakelockHeldFusedE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss19setPositionMode_1_1ENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjjb */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setPositionMode_1_1(android::hardware::gnss::V1_0::IGnss::GnssPositionMode, android::hardware::gnss::V1_0::IGnss::GnssPositionRecurrence, unsigned int, unsigned int, unsigned int, bool) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss19setPositionMode_1_1ENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjjb(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo17gnssAntennaInfoCbEP20GnssAntennaInfos_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::gnssAntennaInfoCb(GnssAntennaInfos_ext*) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo17gnssAntennaInfoCbEP20GnssAntennaInfos_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching4initERKNS_2spINS1_4V1_021IGnssBatchingCallbackEEE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::init(android::sp<android::hardware::gnss::V1_0::IGnssBatchingCallback> const&) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching4initERKNS_2spINS1_4V1_021IGnssBatchingCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching4stopEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::stop() */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching4stopEv(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware4gnss4V2_118IGnssConfiguration17BlacklistedSourceENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource, std::__1::allocator<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource> >::__push_back_slow_path<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource const&>(android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource const&) */
int _ZNSt3__16vectorIN7android8hardware4gnss4V2_118IGnssConfiguration17BlacklistedSourceENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage24sGnssNavigationMessageCbE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::sGnssNavigationMessageCb */
extern void* _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage24sGnssNavigationMessageCbE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD2Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss18injectBestLocationERKNS1_4V1_012GnssLocationE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectBestLocation(android::hardware::gnss::V1_0::GnssLocation const&) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss18injectBestLocationERKNS1_4V1_012GnssLocationE(void);

/* Symbol: _ZTTN7android8hardware4gnss4V2_114implementation4GnssE */
/* Demangled: VTT for android::hardware::gnss::V2_1::implementation::Gnss */
extern void* _ZTTN7android8hardware4gnss4V2_114implementation4GnssE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi11setCallbackERKNS_2spINS2_15IGnssNiCallbackEEE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssNiCallback> const&) */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNi11setCallbackERKNS_2spINS2_15IGnssNiCallbackEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC1EPK20FlpLocationInterface */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::GnssBatching(FlpLocationInterface const*) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC1EPK20FlpLocationInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_1_1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement_1_1() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_1_1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing21convertToGnssLocationEP15GpsLocation_ext */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::convertToGnssLocation(GpsLocation_ext*) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing21convertToGnssLocationEP15GpsLocation_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnFailedEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::dataConnFailed() */
int _ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnFailedEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnssC1EPK17AGpsInterface_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::AGnss(AGpsInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_014implementation5AGnssC1EPK17AGpsInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD2Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil12requestSetIdEj */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::requestSetId(unsigned int) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil12requestSetIdEj(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss11setCallbackERKNS_2spINS1_4V1_013IGnssCallbackEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssCallback> const&) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss11setCallbackERKNS_2spINS1_4V1_013IGnssCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC2EPK24GnssAntennaInfoInterface */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::GnssAntennaInfo(GnssAntennaInfoInterface const*) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC2EPK24GnssAntennaInfoInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC1EPK30GnssConfigurationInterface_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::GnssConfiguration(GnssConfigurationInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC1EPK30GnssConfigurationInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4GnssC2EP16gps_device_t_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::Gnss(gps_device_t_ext*) */
int _ZN7android8hardware4gnss4V2_114implementation4GnssC2EP16gps_device_t_ext(void);

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation6GnssNiE0_NS2_7IGnssNiE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssNi-in-android::hardware::gnss::V1_0::implementation::GnssNi */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation6GnssNiE0_NS2_7IGnssNiE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss20releaseWakelockFusedEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::releaseWakelockFused() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss20releaseWakelockFusedEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing9sGnssGfCbE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::sGnssGfCb */
extern void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing9sGnssGfCbE;

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::~GnssXtra() */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss14updateWakelockEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::updateWakelock() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss14updateWakelockEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionGnssConfigurationEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss29getExtensionGnssConfigurationEv(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V1_05IGnssE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V1_05IGnssE;

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS2_5IGnssE */
/* Demangled: construction vtable for android::hardware::gnss::V2_1::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS2_5IGnssE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration12setBlacklistERKNS0_8hidl_vecINS1_4V1_118IGnssConfiguration17BlacklistedSourceEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setBlacklist(android::hardware::hidl_vec<android::hardware::gnss::V1_1::IGnssConfiguration::BlacklistedSource> const&) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration12setBlacklistERKNS0_8hidl_vecINS1_4V1_118IGnssConfiguration17BlacklistedSourceEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC2EPK27GpsMeasurementInterface_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::GnssMeasurement(GpsMeasurementInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementC2EPK27GpsMeasurementInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi7respondEiNS2_15IGnssNiCallback20GnssUserResponseTypeE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::respond(int, android::hardware::gnss::V1_0::IGnssNiCallback::GnssUserResponseType) */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNi7respondEiNS2_15IGnssNiCallback20GnssUserResponseTypeE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss20getExtensionAGnssRilEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnssRil() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss20getExtensionAGnssRilEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo19sGnssAntennaInfoCbsE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sGnssAntennaInfoCbs */
extern void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo19sGnssAntennaInfoCbsE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement16gpsMeasurementCbEP7GpsData */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::gpsMeasurementCb(GpsData*) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement16gpsMeasurementCbEP7GpsData(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil16sInterfaceExistsE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::sInterfaceExists */
extern void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil16sInterfaceExistsE;

/* Symbol: _ZTVN7android8hardware4gnss4V2_014implementation8AGnssRilE */
/* Demangled: vtable for android::hardware::gnss::V2_0::implementation::AGnssRil */
extern void* _ZTVN7android8hardware4gnss4V2_014implementation8AGnssRilE;

/* Symbol: _ZN7android2spINS_8hardware4gnss4V2_124IGnssAntennaInfoCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V2_1::IGnssAntennaInfoCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V2_124IGnssAntennaInfoCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement5closeEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::close() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement5closeEv(void);

/* Symbol: _Z10threadFuncPv */
/* Demangled: threadFunc(void*) */
int _Z10threadFuncPv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement_2_1() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss40getExtensionGnssConfiguration_2_1_commonEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_2_1_common() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss40getExtensionGnssConfiguration_2_1_commonEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo23sGnssAntennaInfoCbIfaceE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sGnssAntennaInfoCbIface */
extern void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo23sGnssAntennaInfoCbIfaceE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11gnssGfAddCbEii */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfAddCb(int, int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11gnssGfAddCbEii(void);

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections25sMeasurementCorrectionCbsE */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::sMeasurementCorrectionCbs */
extern void* _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections25sMeasurementCorrectionCbsE;

/* Symbol: _ZN7android2spINS_8hardware4gnss4V1_030IGnssNavigationMessageCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssNavigationMessageCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V1_030IGnssNavigationMessageCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss25getExtensionGnssDebug_2_0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssDebug_2_0() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss25getExtensionGnssDebug_2_0Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware4gnss4V2_113IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo, std::__1::allocator<android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo> >::__push_back_slow_path<android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo const&>(android::hardware::gnss::V2_1::IGnssCallback::GnssSvInfo const&) */
int _ZNSt3__16vectorIN7android8hardware4gnss4V2_113IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17acquireWakelockCbEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::acquireWakelockCb() */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17acquireWakelockCbEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17flpCapabilitiesCbEi */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::flpCapabilitiesCb(int) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17flpCapabilitiesCbEi(void);

/* Symbol: _ZTVN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE */
/* Demangled: vtable for android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern void* _ZTVN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation2_0EP15GpsLocation_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::convertToGnssLocation2_0(GpsLocation_ext*) */
int _ZN7android8hardware4gnss4V2_014implementation24convertToGnssLocation2_0EP15GpsLocation_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss18getExtensionGnssNiEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssNi() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss18getExtensionGnssNiEv(void);

/* Symbol: _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern void* _ZTCN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil14createThreadCbEPKcPFvPvES7_ */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::createThreadCb(char const*, void (*)(void*), void*) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil14createThreadCbEPKcPFvPvES7_(void);

/* Symbol: _ZTTN7android8hardware4gnss4V2_014implementation8AGnssRilE */
/* Demangled: VTT for android::hardware::gnss::V2_0::implementation::AGnssRil */
extern void* _ZTTN7android8hardware4gnss4V2_014implementation8AGnssRilE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss14createThreadCbEPKcPFvPvES7_ */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::createThreadCb(char const*, void (*)(void*), void*) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss14createThreadCbEPKcPFvPvES7_(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement_2_0() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss31getExtensionGnssMeasurement_2_0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil11setCallbackERKNS_2spINS1_4V1_017IAGnssRilCallbackEEE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::setCallback(android::sp<android::hardware::gnss::V1_0::IAGnssRilCallback> const&) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRil11setCallbackERKNS_2spINS1_4V1_017IAGnssRilCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface2_0E */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface2_0 */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface2_0E;

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V1_15IGnssE */
/* Demangled: construction vtable for android::hardware::gnss::V1_1::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V1_15IGnssE;

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V2_05IGnssE */
/* Demangled: construction vtable for android::hardware::gnss::V2_0::IGnss-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS1_4V2_05IGnssE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation9GnssDebugC2EPK21GpsDebugInterface_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::GnssDebug(GpsDebugInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_014implementation9GnssDebugC2EPK21GpsDebugInterface_ext(void);

/* Symbol: _ZTTN7android8hardware4gnss4V1_014implementation8GnssXtraE */
/* Demangled: VTT for android::hardware::gnss::V1_0::implementation::GnssXtra */
extern void* _ZTTN7android8hardware4gnss4V1_014implementation8GnssXtraE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss4stopEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::stop() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss4stopEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching7cleanupEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::cleanup() */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching7cleanupEv(void);

/* Symbol: _ZTVN7android8hardware4gnss4V2_114implementation17GnssConfigurationE */
/* Demangled: vtable for android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern void* _ZTVN7android8hardware4gnss4V2_114implementation17GnssConfigurationE;

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V1_016IGnssMeasurementE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssMeasurement-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS1_4V1_016IGnssMeasurementE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi10niNotifyCbEP17GpsNiNotification */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::niNotifyCb(GpsNiNotification*) */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNi10niNotifyCbEP17GpsNiNotification(void);

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl20isInEmergencySessionEv */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::isInEmergencySession() */
int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl20isInEmergencySessionEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss12dataConnOpenEmRKNS0_11hidl_stringENS2_6IAGnss9ApnIpTypeE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::dataConnOpen(unsigned long, android::hardware::hidl_string const&, android::hardware::gnss::V2_0::IAGnss::ApnIpType) */
int _ZN7android8hardware4gnss4V2_014implementation5AGnss12dataConnOpenEmRKNS0_11hidl_stringENS2_6IAGnss9ApnIpTypeE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_1ERKNS_2spINS2_13IGnssCallbackEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_2_1(android::sp<android::hardware::gnss::V2_1::IGnssCallback> const&) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_2_1ERKNS_2spINS2_13IGnssCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17releaseWakelockCbEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::releaseWakelockCb() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss17releaseWakelockCbEv(void);

/* Symbol: _ZTVN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE */
/* Demangled: vtable for android::hardware::gnss::V2_1::implementation::GnssAntennaInfo */
extern void* _ZTVN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching6sFlpCbE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::sFlpCb */
extern void* _ZN7android8hardware4gnss4V2_014implementation12GnssBatching6sFlpCbE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing16sInterfaceExistsE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::sInterfaceExists */
extern void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing16sInterfaceExistsE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD2Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD2Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation6GnssNiE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssNi */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation6GnssNiE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN7android8hardware4gnss4V1_014implementation6GnssNiE */
/* Demangled: VTT for android::hardware::gnss::V1_0::implementation::GnssNi */
extern void* _ZTTN7android8hardware4gnss4V1_014implementation6GnssNiE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtraC1EPK16GpsXtraInterface */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::GnssXtra(GpsXtraInterface const*) */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraC1EPK16GpsXtraInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss19acquireWakelockGnssEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::acquireWakelockGnss() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss19acquireWakelockGnssEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss6nmeaCbElPKci */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::nmeaCb(long, char const*, int) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss6nmeaCbElPKci(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss14createThreadCbEPKcPFvPvES7_ */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::createThreadCb(char const*, void (*)(void*), void*) */
int _ZN7android8hardware4gnss4V2_014implementation5AGnss14createThreadCbEPKcPFvPvES7_(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss7cleanupEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::cleanup() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss7cleanupEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss7sGnssCbE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCb */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss7sGnssCbE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo11setCallbackERKNS_2spINS2_24IGnssAntennaInfoCallbackEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::setCallback(android::sp<android::hardware::gnss::V2_1::IGnssAntennaInfoCallback> const&) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo11setCallbackERKNS_2spINS2_24IGnssAntennaInfoCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections11setCallbackERKNS_2spINS2_4V1_031IMeasurementCorrectionsCallbackEEE */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCallback(android::sp<android::hardware::gnss::measurement_corrections::V1_0::IMeasurementCorrectionsCallback> const&) */
int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections11setCallbackERKNS_2spINS2_4V1_031IMeasurementCorrectionsCallbackEEE(void);

/* Symbol: _ZTTN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE */
/* Demangled: VTT for android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern void* _ZTTN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra14createThreadCbEPKcPFvPvES7_ */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::createThreadCb(char const*, void (*)(void*), void*) */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra14createThreadCbEPKcPFvPvES7_(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching11flpStatusCbEi */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::flpStatusCb(int) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching11flpStatusCbEi(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration17setEsExtensionSecEj */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setEsExtensionSec(unsigned int) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration17setEsExtensionSecEj(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrI14ThreadFuncArgsNS_14default_deleteIS2_EEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> >, std::__1::allocator<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> > > >::__push_back_slow_path<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> > >(std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> >&&) */
int _ZNSt3__16vectorINS_10unique_ptrI14ThreadFuncArgsNS_14default_deleteIS2_EEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface1_0E */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface1_0 */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface1_0E;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation9GnssDebugC1EPK21GpsDebugInterface_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::GnssDebug(GpsDebugInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_014implementation9GnssDebugC1EPK21GpsDebugInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss41getExtensionMeasurementCorrections_commonEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionMeasurementCorrections_common() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss41getExtensionMeasurementCorrections_commonEv(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V1_118IGnssConfigurationE */
/* Demangled: construction vtable for android::hardware::gnss::V1_1::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V1_118IGnssConfigurationE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo9sReportedE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sReported */
extern void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo9sReportedE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurementD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections14setCorrectionsERKNS2_4V1_022MeasurementCorrectionsE */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCorrections(android::hardware::gnss::measurement_corrections::V1_0::MeasurementCorrections const&) */
int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections14setCorrectionsERKNS2_4V1_022MeasurementCorrectionsE(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi9sGnssNiCbE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::sGnssNiCb */
extern void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi9sGnssNiCbE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra11sGnssXtraCbE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::sGnssXtraCb */
extern void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra11sGnssXtraCbE;

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation5AGnssE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_0::implementation::AGnss */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation5AGnssE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnssD2Ev */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
int _ZN7android8hardware4gnss4V2_014implementation5AGnssD2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil16sAGnssRilCbIfaceE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::sAGnssRilCbIface */
extern void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil16sAGnssRilCbIfaceE;

/* Symbol: _ZTVN7android8hardware4gnss4V2_114implementation4GnssE */
/* Demangled: vtable for android::hardware::gnss::V2_1::implementation::Gnss */
extern void* _ZTVN7android8hardware4gnss4V2_114implementation4GnssE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation21convertToGnssLocationEP11FlpLocation */
/* Demangled: android::hardware::gnss::V2_0::implementation::convertToGnssLocation(FlpLocation*) */
int _ZN7android8hardware4gnss4V2_014implementation21convertToGnssLocationEP11FlpLocation(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration29setGlonassPositioningProtocolEh */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setGlonassPositioningProtocol(unsigned char) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration29setGlonassPositioningProtocolEh(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing19sThreadFuncArgsListE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::sThreadFuncArgsList */
extern void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing19sThreadFuncArgsListE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement19sGnssMeasurementCbsE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::sGnssMeasurementCbs */
extern void* _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement19sGnssMeasurementCbsE;

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11setCallbackERKNS_2spINS3_30IGnssVisibilityControlCallbackEEE */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::setCallback(android::sp<android::hardware::gnss::visibility_control::V1_0::IGnssVisibilityControlCallback> const&) */
int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11setCallbackERKNS_2spINS3_30IGnssVisibilityControlCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss8statusCbEP10AGpsStatus */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::statusCb(AGpsStatus*) */
int _ZN7android8hardware4gnss4V2_014implementation5AGnss8statusCbEP10AGpsStatus(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssAntennaInfoEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssAntennaInfo() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssAntennaInfoEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching12getBatchSizeEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::getBatchSize() */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching12getBatchSizeEv(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13pauseGeofenceEi */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::pauseGeofence(int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13pauseGeofenceEi(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnssD1Ev */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
int _ZN7android8hardware4gnss4V2_014implementation5AGnssD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15setPositionModeENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjj */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setPositionMode(android::hardware::gnss::V1_0::IGnss::GnssPositionMode, android::hardware::gnss::V1_0::IGnss::GnssPositionRecurrence, unsigned int, unsigned int, unsigned int) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setPositionModeENS1_4V1_05IGnss16GnssPositionModeENS6_22GnssPositionRecurrenceEjjj(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15setSystemInfoCbEPK14GnssSystemInfo */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setSystemInfoCb(GnssSystemInfo const*) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setSystemInfoCbEPK14GnssSystemInfo(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17sHidlVersionMajorE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sHidlVersionMajor */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss17sHidlVersionMajorE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration11setSuplModeEh */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setSuplMode(unsigned char) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration11setSuplModeEh(void);

/* Symbol: _ZTVN7android8hardware4gnss4V2_014implementation9GnssDebugE */
/* Demangled: vtable for android::hardware::gnss::V2_0::implementation::GnssDebug */
extern void* _ZTVN7android8hardware4gnss4V2_014implementation9GnssDebugE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing18gnssGfTransitionCbEiP15GpsLocation_extil */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfTransitionCb(int, GpsLocation_ext*, int, long) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing18gnssGfTransitionCbEiP15GpsLocation_extil(void);

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl23enableNfwLocationAccessERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::enableNfwLocationAccess(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl23enableNfwLocationAccessERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnssC2EPK17AGpsInterface_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::AGnss(AGpsInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_014implementation5AGnssC2EPK17AGpsInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss4sSemE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sSem */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss4sSemE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss5startEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::start() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss5startEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4GnssC1EP16gps_device_t_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::Gnss(gps_device_t_ext*) */
int _ZN7android8hardware4gnss4V2_114implementation4GnssC1EP16gps_device_t_ext(void);

/* Symbol: _ZTTN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE */
/* Demangled: VTT for android::hardware::gnss::V1_0::implementation::GnssNavigationMessage */
extern void* _ZTTN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss38getExtensionMeasurementCorrections_1_1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionMeasurementCorrections_1_1() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss38getExtensionMeasurementCorrections_1_1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo5closeEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::close() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo5closeEv(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage5closeEv */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::close() */
int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage5closeEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnssD0Ev */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
int _ZN7android8hardware4gnss4V2_014implementation5AGnssD0Ev(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration16setBlacklist_2_1ERKNS0_8hidl_vecINS2_18IGnssConfiguration17BlacklistedSourceEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setBlacklist_2_1(android::hardware::hidl_vec<android::hardware::gnss::V2_1::IGnssConfiguration::BlacklistedSource> const&) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration16setBlacklist_2_1ERKNS0_8hidl_vecINS2_18IGnssConfiguration17BlacklistedSourceEEE(void);

/* Symbol: _ZTCN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE0_NS3_22IGnssVisibilityControlE */
/* Demangled: construction vtable for android::hardware::gnss::visibility_control::V1_0::IGnssVisibilityControl-in-android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern void* _ZTCN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE0_NS3_22IGnssVisibilityControlE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss18setCallback_commonERKNS_2spINS1_4V1_013IGnssCallbackEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_common(android::sp<android::hardware::gnss::V1_0::IGnssCallback> const&) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss18setCallback_commonERKNS_2spINS1_4V1_013IGnssCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss26getExtensionGnssGeofencingEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssGeofencing() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss26getExtensionGnssGeofencingEv(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::Gnss */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation4GnssE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC2EPK30GnssVisibilityControlInterface */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::GnssVisibilityControl(GnssVisibilityControlInterface const*) */
int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlC2EPK30GnssVisibilityControlInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRilC1EPK20AGpsRilInterface_ext */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::AGnssRil(AGpsRilInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilC1EPK20AGpsRilInterface_ext(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration19setEmergencySuplPdnEb */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setEmergencySuplPdn(bool) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration19setEmergencySuplPdnEb(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnss::~AGnss() */
int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation5AGnssD0Ev(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V1_017IAGnssRilCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V1_0::IAGnssRilCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V1_017IAGnssRilCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections17setCapabilitiesCbEj */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCapabilitiesCb(unsigned int) */
int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections17setCapabilitiesCbEj(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra25gnssXtraDownloadRequestCbEv */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::gnssXtraDownloadRequestCb() */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra25gnssXtraDownloadRequestCbEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD2Ev */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4GnssD2Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
int _ZN7android8hardware4gnss4V2_114implementation4GnssD2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching10locationCbEiPP11FlpLocation */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::locationCb(int, FlpLocation**) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching10locationCbEiPP11FlpLocation(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss14injectLocationEddf */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectLocation(double, double, float) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss14injectLocationEddf(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching20sFlpSupportsBatchingE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::sFlpSupportsBatching */
extern void* _ZN7android8hardware4gnss4V2_014implementation12GnssBatching20sFlpSupportsBatchingE;

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC2EPK30MeasurementCorrectionInterface */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::GnssMeasurementCorrections(MeasurementCorrectionInterface const*) */
int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsC2EPK30MeasurementCorrectionInterface(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V1_015IGnssNiCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V1_0::IGnssNiCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V1_015IGnssNiCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17setCapabilitiesCbEj */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCapabilitiesCb(unsigned int) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss17setCapabilitiesCbEj(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V2_113IGnssCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V2_1::IGnssCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V2_113IGnssCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4GnssD1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
int _ZN7android8hardware4gnss4V2_114implementation4GnssD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration9setSuplEsEb */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setSuplEs(bool) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration9setSuplEsEb(void);

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation14GnssGeofencingE0_NS2_15IGnssGeofencingE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssGeofencing-in-android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation14GnssGeofencingE0_NS2_15IGnssGeofencingE;

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD1Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation15GnssMeasurementE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra16sGnssXtraCbIfaceE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::sGnssXtraCbIface */
extern void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra16sGnssXtraCbIfaceE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17sWakelockHeldGnssE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sWakelockHeldGnss */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss17sWakelockHeldGnssE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss34getExtensionMeasurementCorrectionsEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionMeasurementCorrections() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss34getExtensionMeasurementCorrectionsEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement19sGnssMeasureCbIfaceE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::sGnssMeasureCbIface */
extern void* _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement19sGnssMeasureCbIfaceE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11setCallbackERKNS_2spINS2_21IGnssGeofenceCallbackEEE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssGeofenceCallback> const&) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing11setCallbackERKNS_2spINS2_21IGnssGeofenceCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRil19sThreadFuncArgsListE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::sThreadFuncArgsList */
extern void* _ZN7android8hardware4gnss4V2_014implementation8AGnssRil19sThreadFuncArgsListE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
int _ZN7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss10injectTimeElli */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectTime(long, long, int) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss10injectTimeElli(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss17getExtensionAGnssEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnss() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss17getExtensionAGnssEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4GnssD0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::~Gnss() */
int _ZN7android8hardware4gnss4V2_114implementation4GnssD0Ev(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V1_0::implementation::GnssGeofencing::~GnssGeofencing() */
int _ZTv0_n24_N7android8hardware4gnss4V1_014implementation14GnssGeofencingD0Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V2_018IGnssConfigurationE */
/* Demangled: construction vtable for android::hardware::gnss::V2_0::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V2_018IGnssConfigurationE;

/* Symbol: _ZTVN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE */
/* Demangled: vtable for android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections */
extern void* _ZTVN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrectionsE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage23gnssNavigationMessageCbEP21GnssNavigationMessage */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::gnssNavigationMessageCb(GnssNavigationMessage*) */
int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage23gnssNavigationMessageCbEP21GnssNavigationMessage(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC1EPK26GpsGeofencingInterface_ext */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::GnssGeofencing(GpsGeofencingInterface_ext const*) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC1EPK26GpsGeofencingInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss14gnssSvStatusCbEP16GnssSvStatus_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::gnssSvStatusCb(GnssSvStatus_ext*) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss14gnssSvStatusCbEP16GnssSvStatus_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss16deleteAidingDataENS1_4V1_05IGnss14GnssAidingDataE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::deleteAidingData(android::hardware::gnss::V1_0::IGnss::GnssAidingData) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss16deleteAidingDataENS1_4V1_05IGnss14GnssAidingDataE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssMeasurementEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssMeasurement() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss27getExtensionGnssMeasurementEv(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13gnssGfPauseCbEii */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfPauseCb(int, int) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing13gnssGfPauseCbEii(void);

/* Symbol: _ZTVN7android8hardware4gnss4V2_014implementation5AGnssE */
/* Demangled: vtable for android::hardware::gnss::V2_0::implementation::AGnss */
extern void* _ZTVN7android8hardware4gnss4V2_014implementation5AGnssE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC1EPK24GnssAntennaInfoInterface */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::GnssAntennaInfo(GnssAntennaInfoInterface const*) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfoC1EPK24GnssAntennaInfoInterface(void);

/* Symbol: _ZTTN7android8hardware4gnss4V2_014implementation12GnssBatchingE */
/* Demangled: VTT for android::hardware::gnss::V2_0::implementation::GnssBatching */
extern void* _ZTTN7android8hardware4gnss4V2_014implementation12GnssBatchingE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation9GnssDebug12getDebugDataENSt3__18functionIFvRKNS1_4V1_010IGnssDebug9DebugDataEEEE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssDebug::getDebugData(std::__1::function<void (android::hardware::gnss::V1_0::IGnssDebug::DebugData const&)>) */
int _ZN7android8hardware4gnss4V2_014implementation9GnssDebug12getDebugDataENSt3__18functionIFvRKNS1_4V1_010IGnssDebug9DebugDataEEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo4sSemE */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sSem */
extern void* _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo4sSemE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNi19sThreadFuncArgsListE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::sThreadFuncArgsList */
extern void* _ZN7android8hardware4gnss4V1_014implementation6GnssNi19sThreadFuncArgsListE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra19sThreadFuncArgsListE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::sThreadFuncArgsList */
extern void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra19sThreadFuncArgsListE;

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS2_9IAGnssRilE */
/* Demangled: construction vtable for android::hardware::gnss::V2_0::IAGnssRil-in-android::hardware::gnss::V2_0::implementation::AGnssRil */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation8AGnssRilE0_NS2_9IAGnssRilE;

/* Symbol: HIDL_FETCH_IGnss */
/* Demangled: HIDL_FETCH_IGnss */
int HIDL_FETCH_IGnss(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface2_1E */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface2_1 */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface2_1E;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra16sInterfaceExistsE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::sInterfaceExists */
extern void* _ZN7android8hardware4gnss4V1_014implementation8GnssXtra16sInterfaceExistsE;

/* Symbol: _ZNSt3__16vectorIN7android8hardware4gnss4V2_013IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo, std::__1::allocator<android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo> >::__push_back_slow_path<android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo const&>(android::hardware::gnss::V2_0::IGnssCallback::GnssSvInfo const&) */
int _ZNSt3__16vectorIN7android8hardware4gnss4V2_013IGnssCallback10GnssSvInfoENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation14GnssGeofencingE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation14GnssGeofencingE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss10locationCbEP15GpsLocation_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::locationCb(GpsLocation_ext*) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss10locationCbEP15GpsLocation_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss28getExtensionGnssBatching_2_0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssBatching_2_0() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss28getExtensionGnssBatching_2_0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfStatusCbEiP15GpsLocation_ext */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::gnssGfStatusCb(int, GpsLocation_ext*) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing14gnssGfStatusCbEiP15GpsLocation_ext(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss23measurement_corrections4V1_031IMeasurementCorrectionsCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::measurement_corrections::V1_0::IMeasurementCorrectionsCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss23measurement_corrections4V1_031IMeasurementCorrectionsCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11nfwNotifyCbE15NfwNotification */
/* Demangled: android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl::nfwNotifyCb(NfwNotification) */
int _ZN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControl11nfwNotifyCbE15NfwNotification(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnClosedEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::dataConnClosed() */
int _ZN7android8hardware4gnss4V2_014implementation5AGnss14dataConnClosedEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss22injectBestLocation_2_0ERKNS1_4V2_012GnssLocationE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::injectBestLocation_2_0(android::hardware::gnss::V2_0::GnssLocation const&) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss22injectBestLocation_2_0ERKNS1_4V2_012GnssLocationE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC2EPK30GnssConfigurationInterface_ext */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::GnssConfiguration(GnssConfigurationInterface_ext const*) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfigurationC2EPK30GnssConfigurationInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation6GnssNiC2EPK14GpsNiInterface */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNi::GnssNi(GpsNiInterface const*) */
int _ZN7android8hardware4gnss4V1_014implementation6GnssNiC2EPK14GpsNiInterface(void);

/* Symbol: _ZTVN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE */
/* Demangled: vtable for android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern void* _ZTVN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE;

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD1Ev(void);

/* Symbol: _ZTVN7android8hardware4gnss4V2_014implementation12GnssBatchingE */
/* Demangled: vtable for android::hardware::gnss::V2_0::implementation::GnssBatching */
extern void* _ZTVN7android8hardware4gnss4V2_014implementation12GnssBatchingE;

/* Symbol: _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections18setCorrections_1_1ERKNS3_22MeasurementCorrectionsE */
/* Demangled: android::hardware::gnss::measurement_corrections::V1_1::implementation::GnssMeasurementCorrections::setCorrections_1_1(android::hardware::gnss::measurement_corrections::V1_1::MeasurementCorrections const&) */
int _ZN7android8hardware4gnss23measurement_corrections4V1_114implementation26GnssMeasurementCorrections18setCorrections_1_1ERKNS3_22MeasurementCorrectionsE(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra11setCallbackERKNS_2spINS2_17IGnssXtraCallbackEEE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssXtraCallback> const&) */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra11setCallbackERKNS_2spINS2_17IGnssXtraCallbackEEE(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_014implementation5AGnssE0_NS2_6IAGnssE */
/* Demangled: construction vtable for android::hardware::gnss::V2_0::IAGnss-in-android::hardware::gnss::V2_0::implementation::AGnss */
extern void* _ZTCN7android8hardware4gnss4V2_014implementation5AGnssE0_NS2_6IAGnssE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17releaseWakelockCbEv */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::releaseWakelockCb() */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching17releaseWakelockCbEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_0ERKNS_2spINS1_4V2_024IGnssMeasurementCallbackEEEb */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssMeasurement::setCallback_2_0(android::sp<android::hardware::gnss::V2_0::IGnssMeasurementCallback> const&, bool) */
int _ZN7android8hardware4gnss4V2_114implementation15GnssMeasurement15setCallback_2_0ERKNS_2spINS1_4V2_024IGnssMeasurementCallbackEEEb(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage11setCallbackERKNS_2spINS2_30IGnssNavigationMessageCallbackEEE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::setCallback(android::sp<android::hardware::gnss::V1_0::IGnssNavigationMessageCallback> const&) */
int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessage11setCallbackERKNS_2spINS2_30IGnssNavigationMessageCallbackEEE(void);

/* Symbol: _ZTCN7android8hardware4gnss4V1_014implementation8GnssXtraE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::gnss::V1_0::implementation::GnssXtra */
extern void* _ZTCN7android8hardware4gnss4V1_014implementation8GnssXtraE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V1_113IGnssCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V1_1::IGnssCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V1_113IGnssCallbackEED2Ev(void);

/* Symbol: _Z13createPthreadPKcPFvPvES1_PNSt3__16vectorINS4_10unique_ptrI14ThreadFuncArgsNS4_14default_deleteIS7_EEEENS4_9allocatorISA_EEEE */
/* Demangled: createPthread(char const*, void (*)(void*), void*, std::__1::vector<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> >, std::__1::allocator<std::__1::unique_ptr<ThreadFuncArgs, std::__1::default_delete<ThreadFuncArgs> > > >*) */
int _Z13createPthreadPKcPFvPvES1_PNSt3__16vectorINS4_10unique_ptrI14ThreadFuncArgsNS4_14default_deleteIS7_EEEENS4_9allocatorISA_EEEE(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_0::implementation::AGnssRil::~AGnssRil() */
int _ZTv0_n24_N7android8hardware4gnss4V2_014implementation8AGnssRilD0Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss19releaseWakelockGnssEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::releaseWakelockGnss() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss19releaseWakelockGnssEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching20sGnssBatchingCbIfaceE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::sGnssBatchingCbIface */
extern void* _ZN7android8hardware4gnss4V2_014implementation12GnssBatching20sGnssBatchingCbIfaceE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss13sAGnssCbIfaceE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::sAGnssCbIface */
extern void* _ZN7android8hardware4gnss4V2_014implementation5AGnss13sAGnssCbIfaceE;

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation5AGnss19sThreadFuncArgsListE */
/* Demangled: android::hardware::gnss::V2_0::implementation::AGnss::sThreadFuncArgsList */
extern void* _ZN7android8hardware4gnss4V2_014implementation5AGnss19sThreadFuncArgsListE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface1_1E */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::sGnssCbIface1_1 */
extern void* _ZN7android8hardware4gnss4V2_114implementation4Gnss15sGnssCbIface1_1E;

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_1_1ERKNS_2spINS1_4V1_113IGnssCallbackEEE */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setCallback_1_1(android::sp<android::hardware::gnss::V1_1::IGnssCallback> const&) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss15setCallback_1_1ERKNS_2spINS1_4V1_113IGnssCallbackEEE(void);

/* Symbol: _ZN7android2spINS_8hardware4gnss4V2_021IGnssBatchingCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V2_0::IGnssBatchingCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V2_021IGnssBatchingCallbackEED2Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC2EPK26GpsGeofencingInterface_ext */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::GnssGeofencing(GpsGeofencingInterface_ext const*) */
int _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencingC2EPK26GpsGeofencingInterface_ext(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss9setNameCbEPKci */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::setNameCb(char const*, int) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss9setNameCbEPKci(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo20sendMockAntennaInfosEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::sendMockAntennaInfos() */
int _ZN7android8hardware4gnss4V2_114implementation15GnssAntennaInfo20sendMockAntennaInfosEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching16setThreadEventCbE11ThreadEvent */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::setThreadEventCb(ThreadEvent) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching16setThreadEventCbE11ThreadEvent(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC2EPK20FlpLocationInterface */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::GnssBatching(FlpLocationInterface const*) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatchingC2EPK20FlpLocationInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss13gpsSvStatusCbEP11GpsSvStatus */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::gpsSvStatusCb(GpsSvStatus*) */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss13gpsSvStatusCbEP11GpsSvStatus(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_1_1Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssConfiguration_1_1() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssConfiguration_1_1Ev(void);

/* Symbol: _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V1_018IGnssConfigurationE */
/* Demangled: construction vtable for android::hardware::gnss::V1_0::IGnssConfiguration-in-android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern void* _ZTCN7android8hardware4gnss4V2_114implementation17GnssConfigurationE0_NS1_4V1_018IGnssConfigurationE;

/* Symbol: _ZTTN7android8hardware4gnss4V2_014implementation5AGnssE */
/* Demangled: VTT for android::hardware::gnss::V2_0::implementation::AGnss */
extern void* _ZTTN7android8hardware4gnss4V2_014implementation5AGnssE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssNavigationMessageEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionGnssNavigationMessage() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss33getExtensionGnssNavigationMessageEv(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtra14injectXtraDataERKNS0_11hidl_stringE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::injectXtraData(android::hardware::hidl_string const&) */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtra14injectXtraDataERKNS0_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_014implementation12GnssBatching8init_2_0ERKNS_2spINS2_21IGnssBatchingCallbackEEE */
/* Demangled: android::hardware::gnss::V2_0::implementation::GnssBatching::init_2_0(android::sp<android::hardware::gnss::V2_0::IGnssBatchingCallback> const&) */
int _ZN7android8hardware4gnss4V2_014implementation12GnssBatching8init_2_0ERKNS_2spINS2_21IGnssBatchingCallbackEEE(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration10setGpsLockEh */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setGpsLock(unsigned char) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration10setGpsLockEh(void);

/* Symbol: _ZTTN7android8hardware4gnss4V2_114implementation15GnssMeasurementE */
/* Demangled: VTT for android::hardware::gnss::V2_1::implementation::GnssMeasurement */
extern void* _ZTTN7android8hardware4gnss4V2_114implementation15GnssMeasurementE;

/* Symbol: _ZTTN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE */
/* Demangled: VTT for android::hardware::gnss::visibility_control::V1_0::implementation::GnssVisibilityControl */
extern void* _ZTTN7android8hardware4gnss18visibility_control4V1_014implementation21GnssVisibilityControlE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation8GnssXtraC2EPK16GpsXtraInterface */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssXtra::GnssXtra(GpsXtraInterface const*) */
int _ZN7android8hardware4gnss4V1_014implementation8GnssXtraC2EPK16GpsXtraInterface(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss16getExtensionXtraEv */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionXtra() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss16getExtensionXtraEv(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration13setLppProfileEh */
/* Demangled: android::hardware::gnss::V2_1::implementation::GnssConfiguration::setLppProfile(unsigned char) */
int _ZN7android8hardware4gnss4V2_114implementation17GnssConfiguration13setLppProfileEh(void);

/* Symbol: _ZTTN7android8hardware4gnss4V2_114implementation17GnssConfigurationE */
/* Demangled: VTT for android::hardware::gnss::V2_1::implementation::GnssConfiguration */
extern void* _ZTTN7android8hardware4gnss4V2_114implementation17GnssConfigurationE;

/* Symbol: _ZTTN7android8hardware4gnss4V1_014implementation14GnssGeofencingE */
/* Demangled: VTT for android::hardware::gnss::V1_0::implementation::GnssGeofencing */
extern void* _ZTTN7android8hardware4gnss4V1_014implementation14GnssGeofencingE;

/* Symbol: _ZN7android2spINS_8hardware4gnss4V2_124IGnssMeasurementCallbackEED2Ev */
/* Demangled: android::sp<android::hardware::gnss::V2_1::IGnssMeasurementCallback>::~sp() */
int _ZN7android2spINS_8hardware4gnss4V2_124IGnssMeasurementCallbackEED2Ev(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssMeasurement::~GnssMeasurement() */
int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssMeasurementD1Ev(void);

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC2EPK29GpsNavigationMessageInterface */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssNavigationMessage::GnssNavigationMessage(GpsNavigationMessageInterface const*) */
int _ZN7android8hardware4gnss4V1_014implementation21GnssNavigationMessageC2EPK29GpsNavigationMessageInterface(void);

/* Symbol: _ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionAGnssRil_2_0Ev */
/* Demangled: android::hardware::gnss::V2_1::implementation::Gnss::getExtensionAGnssRil_2_0() */
int _ZN7android8hardware4gnss4V2_114implementation4Gnss24getExtensionAGnssRil_2_0Ev(void);

/* Symbol: _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev */
/* Demangled: virtual thunk to android::hardware::gnss::V2_1::implementation::GnssAntennaInfo::~GnssAntennaInfo() */
int _ZTv0_n24_N7android8hardware4gnss4V2_114implementation15GnssAntennaInfoD1Ev(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing22mGnssGeofencingCbIfaceE */
/* Demangled: android::hardware::gnss::V1_0::implementation::GnssGeofencing::mGnssGeofencingCbIface */
extern void* _ZN7android8hardware4gnss4V1_014implementation14GnssGeofencing22mGnssGeofencingCbIfaceE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_GNSS_2_1_IMPL_MEDIATEK_H */
