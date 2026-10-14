/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.wifi.supplicant@2.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_wifi_supplicant_2_0"

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
#include "vendor_mediatek_hardware_wifi_supplicant_2_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::BpHwSupplicantNetwork(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::BpHwSupplicant(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::~BnHwSupplicantNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallbackE0_NS4_27ISupplicantStaIfaceCallbackE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::~BnHwSupplicantStaNetworkCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::registerCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant16registerCallbackERKN7android2spINS4_19ISupplicantCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant16registerCallbackERKN7android2spINS4_19ISupplicantCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::BnHwSupplicantStaNetworkCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackC1ERKN7android2spINS4_29ISupplicantStaNetworkCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackC1ERKN7android2spINS4_29ISupplicantStaNetworkCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::_hidl_setWapiCertAliasList(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface26_hidl_setWapiCertAliasListEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface26_hidl_setWapiCertAliasListEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::_hidl_getType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork13_hidl_getTypeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusENSH_9IfaceTypeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork13_hidl_getTypeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusENSH_9IfaceTypeEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::_hidl_getInterfaceName(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork22_hidl_getInterfaceNameEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusERKNS7_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork22_hidl_getInterfaceNameEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusERKNS7_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkE0_N7android8hardware7IBinderE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::~BnHwSupplicantStaNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkENS_4hidl4base4V1_05IBaseENS8_24BpHwSupplicantStaNetworkEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkENS_4hidl4base4V1_05IBaseENS8_24BpHwSupplicantStaNetworkEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicantE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantENS8_11ISupplicantEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantENS8_11ISupplicantEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::~BnHwSupplicantNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::~BnHwSupplicantStaNetworkCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetwork::BsSupplicantStaNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetworkC2EN7android2spINS4_21ISupplicantStaNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetworkC2EN7android2spINS4_21ISupplicantStaNetworkEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::~BnHwSupplicantStaNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD0Ev() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEEE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::~BnHwSupplicantCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicantE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> android::hardware::fromBinder<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork, vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkENS7_21BpHwSupplicantNetworkENS7_21BnHwSupplicantNetworkEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkENS7_21BpHwSupplicantNetworkENS7_21BnHwSupplicantNetworkEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::BnHwSupplicant(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantC2ERKN7android2spINS4_11ISupplicantEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantC2ERKN7android2spINS4_11ISupplicantEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackENS8_19ISupplicantCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackENS8_19ISupplicantCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEEE16_NS0_11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::~BnHwSupplicantStaNetworkCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::~BnHwSupplicantCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackE0_N7android8hardware11BpInterfaceINS4_27ISupplicantStaIfaceCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::~BnHwSupplicantStaNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::~BnHwSupplicantCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD1Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceE0_NS4_16ISupplicantIfaceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::~BnHwSupplicantCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceE0_N7android8hardware11BpInterfaceINS4_16ISupplicantIfaceEEE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD2Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::getInterfaceName(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16getInterfaceNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16getInterfaceNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantE0_NS4_11ISupplicantE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface8castFromERKN7android2spINS4_16ISupplicantIfaceEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface8castFromERKN7android2spINS4_16ISupplicantIfaceEEEb() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkENS8_18ISupplicantNetworkENS8_24BpHwSupplicantStaNetworkEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkENS8_18ISupplicantNetworkENS8_24BpHwSupplicantStaNetworkEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicant::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicant13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicant13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::~BnHwSupplicant() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::~BnHwSupplicantNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantNetwork::BsSupplicantNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetworkC1EN7android2spINS4_18ISupplicantNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetworkC1EN7android2spINS4_18ISupplicantNetworkEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetworkE = NULL;

/* Exported Object: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicantE0_NS4_11ISupplicantE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallbackE0_NS4_19ISupplicantCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::_hidl_getName(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface13_hidl_getNameEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface13_hidl_getNameEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkE = NULL;

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::getType(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::BpHwSupplicantStaNetwork(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkENS8_21ISupplicantStaNetworkEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkENS8_21ISupplicantStaNetworkEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> android::hardware::fromBinder<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackENS7_32BpHwSupplicantStaNetworkCallbackENS7_32BnHwSupplicantStaNetworkCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackENS7_32BpHwSupplicantStaNetworkCallbackENS7_32BnHwSupplicantStaNetworkCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE0_NS4_21ISupplicantStaNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::_hidl_getInterfaceName(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork22_hidl_getInterfaceNameEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork22_hidl_getInterfaceNameEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackE0_NS4_27ISupplicantStaIfaceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::~BnHwSupplicant() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::~BnHwSupplicantIface() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::~BnHwSupplicantNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback4pingEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetworkE0_NS4_18ISupplicantNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIface::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> android::hardware::fromBinder<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceENS7_19BpHwSupplicantIfaceENS7_19BnHwSupplicantIfaceEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceENS7_19BpHwSupplicantIfaceENS7_19BnHwSupplicantIfaceEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::BnHwSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackC2ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackC2ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantNetwork::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetwork13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetwork13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackENS_4hidl4base4V1_05IBaseENS8_32BpHwSupplicantStaNetworkCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackENS_4hidl4base4V1_05IBaseENS8_32BpHwSupplicantStaNetworkCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::BpHwSupplicant(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetworkCallback::BsSupplicantStaNetworkCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallbackC2EN7android2spINS4_29ISupplicantStaNetworkCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallbackC2EN7android2spINS4_29ISupplicantStaNetworkCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEEE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::BpHwSupplicantIface(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::getId(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork5getIdENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork5getIdENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::BpHwSupplicantStaNetworkCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEEE0_NS7_19ISupplicantCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::~BnHwSupplicantIface() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::~BnHwSupplicant() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::~BnHwSupplicantIface() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantNetwork::BsSupplicantNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetworkC2EN7android2spINS4_18ISupplicantNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetworkC2EN7android2spINS4_18ISupplicantNetworkEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIfaceCallback::BsSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallbackC2EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallbackC2EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface4pingEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetworkE0_NS4_21ISupplicantStaNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicantE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackENS_4hidl4base4V1_05IBaseENS8_30BpHwSupplicantStaIfaceCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackENS_4hidl4base4V1_05IBaseENS8_30BpHwSupplicantStaIfaceCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::_hidl_getType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork13_hidl_getTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork13_hidl_getTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_29ISupplicantStaNetworkCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_29ISupplicantStaNetworkCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE0_NS4_16ISupplicantIfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE0_N7android8hardware11BpInterfaceINS4_21ISupplicantStaNetworkEEE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::_hidl_getId(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork11_hidl_getIdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork11_hidl_getIdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantIface::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIface13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIface13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::_hidl_getNetwork(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface16_hidl_getNetworkEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusERKNS6_2spINS4_18ISupplicantNetworkEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface16_hidl_getNetworkEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusERKNS6_2spINS4_18ISupplicantNetworkEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceENS8_16ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceENS8_16ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::getName(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::~BnHwSupplicantIface() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::getNetwork(unsigned int, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS4_18ISupplicantNetworkEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS4_18ISupplicantNetworkEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::getType(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantIface::BsSupplicantIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIfaceC2EN7android2spINS4_16ISupplicantIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIfaceC2EN7android2spINS4_16ISupplicantIfaceEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::~BnHwSupplicantNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::_hidl_getType(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface13_hidl_getTypeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusENSH_9IfaceTypeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface13_hidl_getTypeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusENSH_9IfaceTypeEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkENS8_18ISupplicantNetworkEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkENS8_18ISupplicantNetworkEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::setWapiCertAlias(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16setWapiCertAliasERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16setWapiCertAliasERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::~BnHwSupplicant() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::_hidl_getNetwork(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface16_hidl_getNetworkEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface16_hidl_getNetworkEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackE0_N7android8hardware11BpInterfaceINS4_29ISupplicantStaNetworkCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::_hidl_getInterface(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::wifi::supplicant::V1_0::ISupplicant::IfaceInfo const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant18_hidl_getInterfaceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_4wifi10supplicant4V1_011ISupplicant9IfaceInfoENSt3__18functionIFvRKNSF_16SupplicantStatusERKNS6_2spINS4_16ISupplicantIfaceEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant18_hidl_getInterfaceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_4wifi10supplicant4V1_011ISupplicant9IfaceInfoENSt3__18functionIFvRKNSF_16SupplicantStatusERKNS6_2spINS4_16ISupplicantIfaceEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::_hidl_getName(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface13_hidl_getNameEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusERKNS7_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface13_hidl_getNameEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusERKNS7_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::_hidl_setEapOcsp(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork16_hidl_setEapOcspEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork16_hidl_setEapOcspEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::_hidl_setWapiCertAlias(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork22_hidl_setWapiCertAliasEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork22_hidl_setWapiCertAliasEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_19ISupplicantCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_19ISupplicantCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE0_N7android8hardware11BpInterfaceINS4_19ISupplicantStaIfaceEEE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::_hidl_setWapiCertAlias(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork22_hidl_setWapiCertAliasEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork22_hidl_setWapiCertAliasEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::BpHwSupplicantCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkENS_4hidl4base4V1_05IBaseENS8_21BpHwSupplicantNetworkEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkENS_4hidl4base4V1_05IBaseENS8_21BpHwSupplicantNetworkEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::BnHwSupplicantStaNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkC1ERKN7android2spINS4_21ISupplicantStaNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkC1ERKN7android2spINS4_21ISupplicantStaNetworkEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::~BnHwSupplicantNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetworkCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> android::hardware::fromBinder<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackENS7_22BpHwSupplicantCallbackENS7_22BnHwSupplicantCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackENS7_22BpHwSupplicantCallbackENS7_22BnHwSupplicantCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicantENS_4hidl4base4V1_05IBaseENS8_14BpHwSupplicantEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicantENS_4hidl4base4V1_05IBaseENS8_14BpHwSupplicantEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackE0_N7android8hardware11BpInterfaceINS4_19ISupplicantCallbackEEE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::_hidl_onEssDisassocImminentNotice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_array<unsigned char, 6ul> const&, unsigned int, unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback33_hidl_onEssDisassocImminentNoticeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_10hidl_arrayIhLm6EJEEEjjRKNS7_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback33_hidl_onEssDisassocImminentNoticeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_10hidl_arrayIhLm6EJEEEjjRKNS7_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::getType(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback4pingEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::~BnHwSupplicantStaNetworkCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork8castFromERKN7android2spINS4_18ISupplicantNetworkEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork8castFromERKN7android2spINS4_18ISupplicantNetworkEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::~BnHwSupplicant() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantCallback::BsSupplicantCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallbackC2EN7android2spINS4_19ISupplicantCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallbackC2EN7android2spINS4_19ISupplicantCallbackEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::BpHwSupplicantStaIfaceCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::registerCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16registerCallbackERKN7android2spINS4_29ISupplicantStaNetworkCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16registerCallbackERKN7android2spINS4_29ISupplicantStaNetworkCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::getNetwork(unsigned int, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS4_18ISupplicantNetworkEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS4_18ISupplicantNetworkEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceENS8_16ISupplicantIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceENS8_16ISupplicantIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::registerCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface16registerCallbackERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface16registerCallbackERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::BpHwSupplicantNetwork(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::BnHwSupplicantStaNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkC2ERKN7android2spINS4_21ISupplicantStaNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkC2ERKN7android2spINS4_21ISupplicantStaNetworkEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantCallback::BsSupplicantCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallbackC1EN7android2spINS4_19ISupplicantCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallbackC1EN7android2spINS4_19ISupplicantCallbackEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::_hidl_getFeatureMask(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface20_hidl_getFeatureMaskEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface20_hidl_getFeatureMaskEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::setEapOcsp(vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::Ocsp, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork10setEapOcspENS4_21ISupplicantStaNetwork4OcspENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork10setEapOcspENS4_21ISupplicantStaNetwork4OcspENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::~BnHwSupplicantStaNetworkCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::BnHwSupplicantCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackC1ERKN7android2spINS4_19ISupplicantCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackC1ERKN7android2spINS4_19ISupplicantCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::_hidl_getId(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork11_hidl_getIdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork11_hidl_getIdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::getId(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork5getIdENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork5getIdENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::_hidl_setWapiCertAliasList(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface26_hidl_setWapiCertAliasListEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface26_hidl_setWapiCertAliasListEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::BpHwSupplicantStaNetwork(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::BnHwSupplicantNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkC1ERKN7android2spINS4_18ISupplicantNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkC1ERKN7android2spINS4_18ISupplicantNetworkEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::_hidl_setEapOcsp(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::Ocsp, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16_hidl_setEapOcspEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_21ISupplicantStaNetwork4OcspENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork16_hidl_setEapOcspEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_21ISupplicantStaNetwork4OcspENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::~BnHwSupplicant() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD0Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::_hidl_getType(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface13_hidl_getTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface13_hidl_getTypeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantE0_N7android8hardware11BpInterfaceINS4_11ISupplicantEEE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD0Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEEE0_NS7_29ISupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicant::BsSupplicant(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicantC2EN7android2spINS4_11ISupplicantEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicantC2EN7android2spINS4_11ISupplicantEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEEE8_NS0_10IInterfaceE = NULL;

/* Exported Object: VTT for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEEE16_NS0_11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetworkE0_NS4_18ISupplicantNetworkE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::BpHwSupplicantIface(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicantE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::BnHwSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackC1ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackC1ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::BpHwSupplicantStaNetworkCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork10descriptorE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::~BnHwSupplicant() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::getName(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::~BnHwSupplicantStaNetworkCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_020BsSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetworkCallback::BsSupplicantStaNetworkCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallbackC1EN7android2spINS4_29ISupplicantStaNetworkCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallbackC1EN7android2spINS4_29ISupplicantStaNetworkCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback10descriptorE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantE = NULL;

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork10descriptorE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackENS8_29ISupplicantStaNetworkCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackENS8_29ISupplicantStaNetworkCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::BnHwSupplicant(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantC1ERKN7android2spINS4_11ISupplicantEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicantC1ERKN7android2spINS4_11ISupplicantEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkE0_NS4_18ISupplicantNetworkE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::setWapiCertAliasList(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::_hidl_getFeatureMask(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface20_hidl_getFeatureMaskEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIface20_hidl_getFeatureMaskEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::~BnHwSupplicantStaNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::~BnHwSupplicantCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::BnHwSupplicantIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceC1ERKN7android2spINS4_16ISupplicantIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceC1ERKN7android2spINS4_16ISupplicantIfaceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::getFeatureMask(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::getInterfaceName(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork16getInterfaceNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork16getInterfaceNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicant::_hidl_getInterface(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant18_hidl_getInterfaceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BnHwSupplicant18_hidl_getInterfaceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetworkE0_NS4_18ISupplicantNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEEE8_NS0_10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetwork4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::~BnHwSupplicantStaNetworkCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::~BnHwSupplicantIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021ISupplicantStaNetwork24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::BnHwSupplicantCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackC2ERKN7android2spINS4_19ISupplicantCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackC2ERKN7android2spINS4_19ISupplicantCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::getType(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_019BsSupplicantNetworkE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::onEssDisassocImminentNotice(android::hardware::hidl_array<unsigned char, 6ul> const&, unsigned int, unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback27onEssDisassocImminentNoticeERKN7android8hardware10hidl_arrayIhLm6EJEEEjjRKNS7_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback27onEssDisassocImminentNoticeERKN7android8hardware10hidl_arrayIhLm6EJEEEjjRKNS7_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_011ISupplicant12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEEE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> android::hardware::fromBinder<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackENS7_30BpHwSupplicantStaIfaceCallbackENS7_30BnHwSupplicantStaIfaceCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackENS7_30BpHwSupplicantStaIfaceCallbackENS7_30BnHwSupplicantStaIfaceCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetwork10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::~BnHwSupplicantStaNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetworkCallback::BnHwSupplicantStaNetworkCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackC2ERKN7android2spINS4_29ISupplicantStaNetworkCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BnHwSupplicantStaNetworkCallbackC2ERKN7android2spINS4_29ISupplicantStaNetworkCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallbackE0_NS4_29ISupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::~BnHwSupplicantCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIfaceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackE = NULL;

/* Exported Object: vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware11BpInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackEEE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIface21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIfaceE0_NS4_16ISupplicantIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetwork::BsSupplicantStaNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetwork>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetworkC1EN7android2spINS4_21ISupplicantStaNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetworkC1EN7android2spINS4_21ISupplicantStaNetworkEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback::BpHwSupplicantCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicantE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::~BnHwSupplicantIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicant::getInterface(android::hardware::wifi::supplicant::V1_0::ISupplicant::IfaceInfo const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant12getInterfaceERKN7android8hardware4wifi10supplicant4V1_011ISupplicant9IfaceInfoENSt3__18functionIFvRKNSA_16SupplicantStatusERKNS6_2spINS4_16ISupplicantIfaceEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_014BpHwSupplicant12getInterfaceERKN7android8hardware4wifi10supplicant4V1_011ISupplicant9IfaceInfoENSt3__18functionIFvRKNSA_16SupplicantStatusERKNS6_2spINS4_16ISupplicantIfaceEEEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::~BnHwSupplicantStaNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallbackE0_NS4_29ISupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantIface::BsSupplicantIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIfaceC1EN7android2spINS4_16ISupplicantIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIfaceC1EN7android2spINS4_16ISupplicantIfaceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantCallbackE0_NS4_19ISupplicantCallbackE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceENS_4hidl4base4V1_05IBaseENS8_19BpHwSupplicantIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIfaceENS_4hidl4base4V1_05IBaseENS8_19BpHwSupplicantIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::~BnHwSupplicantNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetworkE0_N7android8hardware11BpInterfaceINS4_18ISupplicantNetworkEEE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackENS8_27ISupplicantStaIfaceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackENS8_27ISupplicantStaIfaceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetwork::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetwork13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BsSupplicantStaNetwork13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantCallback::~BnHwSupplicantCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallback8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_019BpHwSupplicantIfaceE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_022BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIfaceCallback::BsSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallbackC1EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallbackC1EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIfaceCallback::_hidl_onEssDisassocImminentNotice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback33_hidl_onEssDisassocImminentNoticeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BnHwSupplicantStaIfaceCallback33_hidl_onEssDisassocImminentNoticeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaNetworkCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_030BsSupplicantStaNetworkCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork::BnHwSupplicantNetwork(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkC2ERKN7android2spINS4_18ISupplicantNetworkEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkC2ERKN7android2spINS4_18ISupplicantNetworkEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantStaIfaceCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_028BsSupplicantStaIfaceCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantCallbackENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::BnHwSupplicantIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceC2ERKN7android2spINS4_16ISupplicantIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceC2ERKN7android2spINS4_16ISupplicantIfaceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantNetwork */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_021BnHwSupplicantNetworkE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicant::BsSupplicant(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicant>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicantC1EN7android2spINS4_11ISupplicantEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_012BsSupplicantC1EN7android2spINS4_11ISupplicantEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantIface::~BnHwSupplicantIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019BnHwSupplicantIfaceD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantNetwork::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_021BpHwSupplicantNetwork12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaIfaceCallback::BpHwSupplicantStaIfaceCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_030BpHwSupplicantStaIfaceCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetwork::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BpHwSupplicantStaNetwork5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaNetwork::~BnHwSupplicantStaNetwork() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_024BnHwSupplicantStaNetworkD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_016ISupplicantIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_0::BsSupplicantIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_017BsSupplicantIfaceE0_NS4_16ISupplicantIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetwork13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_019ISupplicantStaIface4pingEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_0::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_022BnHwSupplicantStaIfaceD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaNetworkCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_029ISupplicantStaNetworkCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_0::BpHwSupplicantStaNetworkCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_032BpHwSupplicantStaNetworkCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}
