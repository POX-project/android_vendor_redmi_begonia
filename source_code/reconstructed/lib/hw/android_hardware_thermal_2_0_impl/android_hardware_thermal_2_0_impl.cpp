/*
 * Reverse-Engineered Source for: android.hardware.thermal@2.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_thermal_2_0_impl"

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
#include "android_hardware_thermal_2_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__1::vector<android::hardware::thermal::V2_0::implementation::CallbackSetting, std::__1::allocator<android::hardware::thermal::V2_0::implementation::CallbackSetting> >::erase(std::__1::__wrap_iter<android::hardware::thermal::V2_0::implementation::CallbackSetting const*>, std::__1::__wrap_iter<android::hardware::thermal::V2_0::implementation::CallbackSetting const*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V2_014implementation15CallbackSettingENS_9allocatorIS6_EEE5eraseENS_11__wrap_iterIPKS6_EESD_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V2_014implementation15CallbackSettingENS_9allocatorIS6_EEE5eraseENS_11__wrap_iterIPKS6_EESD_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&> >, void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EEE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalWatcher::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher10threadLoopEv(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher10threadLoopEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::fillCpuUsages(android::hardware::hidl_vec<android::hardware::thermal::V1_0::CpuUsage>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper13fillCpuUsagesEPNS0_8hidl_vecINS1_4V1_08CpuUsageEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper13fillCpuUsagesEPNS0_8hidl_vecINS1_4V1_08CpuUsageEEE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::thermal::V2_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware7thermal4V2_014implementation7ThermalE = NULL;

/* Exported Object: android::hardware::thermal::V2_0::implementation::tz_data */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware7thermal4V2_014implementation7tz_dataE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::read_temperature(int, android::hardware::thermal::V1_0::Temperature*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper16read_temperatureEiPNS1_4V1_011TemperatureE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper16read_temperatureEiPNS1_4V1_011TemperatureE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN7android8hardware7thermal4V2_013CoolingDeviceENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V2_013CoolingDeviceENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V2_013CoolingDeviceENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::fill_temperatures_1_0(android::hardware::hidl_vec<android::hardware::thermal::V1_0::Temperature>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper21fill_temperatures_1_0EPNS0_8hidl_vecINS1_4V1_011TemperatureEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper21fill_temperatures_1_0EPNS0_8hidl_vecINS1_4V1_011TemperatureEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> >::__push_back_slow_path<android::hardware::thermal::V2_0::Temperature const&>(android::hardware::thermal::V2_0::Temperature const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V2_011TemperatureENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V2_011TemperatureENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::thermal::V2_0::implementation::ThermalWatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware7thermal4V2_014implementation14ThermalWatcherE = NULL;

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::ThermalHelper(std::__1::function<void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelperC2ERKNSt3__18functionIFvRKNS5_6vectorINS2_11TemperatureENS5_9allocatorIS8_EEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelperC2ERKNSt3__18functionIFvRKNS5_6vectorINS2_11TemperatureENS5_9allocatorIS8_EEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&> >, bool (std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EEE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::unregisterThermalChangedCallback(android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback> const&, std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal32unregisterThermalChangedCallbackERKNS_2spINS2_23IThermalChangedCallbackEEENSt3__18functionIFvRKNS1_4V1_013ThermalStatusEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal32unregisterThermalChangedCallbackERKNS_2spINS2_23IThermalChangedCallbackEEENSt3__18functionIFvRKNS1_4V1_013ThermalStatusEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::thermal::V2_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7thermal4V2_014implementation7ThermalE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalWatcher::parseUevent(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher11parseUeventEPNSt3__13setINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENS5_4lessISC_EENSA_ISC_EEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher11parseUeventEPNSt3__13setINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENS5_4lessISC_EENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::is_cooling_path_valided() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper23is_cooling_path_validedEv(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper23is_cooling_path_validedEv() called");
    return 0;
}

/* Exported Object: android::hardware::thermal::V2_0::implementation::cdata */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware7thermal4V2_014implementation5cdataE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::fill_temperatures(bool, android::hardware::hidl_vec<android::hardware::thermal::V2_0::Temperature>*, android::hardware::thermal::V2_0::TemperatureType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper17fill_temperaturesEbPNS0_8hidl_vecINS2_11TemperatureEEENS2_15TemperatureTypeE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper17fill_temperaturesEbPNS0_8hidl_vecINS2_11TemperatureEEENS2_15TemperatureTypeE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::Thermal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7ThermalC2Ev(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7ThermalC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback>, std::__1::less<android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback> >, std::__1::allocator<android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback> > >::destroy(std::__1::__tree_node<android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN7android2spINS1_8hardware7thermal4V2_023IThermalChangedCallbackEEENS_4lessIS7_EENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN7android2spINS1_8hardware7thermal4V2_023IThermalChangedCallbackEEENS_4lessIS7_EENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::init_tz_path() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper12init_tz_pathEv(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper12init_tz_pathEv() called");
    return 0;
}

/* Exported Object: android::hardware::thermal::V2_0::implementation::gCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware7thermal4V2_014implementation10gCallbacksE = NULL;

/* Demangled: void std::__1::vector<android::hardware::thermal::V2_0::TemperatureThreshold, std::__1::allocator<android::hardware::thermal::V2_0::TemperatureThreshold> >::__emplace_back_slow_path<android::hardware::thermal::V2_0::TemperatureThreshold>(android::hardware::thermal::V2_0::TemperatureThreshold&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V2_020TemperatureThresholdENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V2_020TemperatureThresholdENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&> >, void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::hardware::thermal::V2_0::implementation::ThermalWatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7thermal4V2_014implementation14ThermalWatcherE0_NS_6ThreadE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::getCoolingDevices(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::CoolingDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal17getCoolingDevicesENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS7_13CoolingDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal17getCoolingDevicesENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS7_13CoolingDeviceEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::getCurrentCoolingDevices(bool, android::hardware::thermal::V2_0::CoolingType, std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V2_0::CoolingDevice> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal24getCurrentCoolingDevicesEbNS2_11CoolingTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS2_13CoolingDeviceEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal24getCurrentCoolingDevicesEbNS2_11CoolingTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS2_13CoolingDeviceEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&> >, void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalWatcher::wake() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher4wakeEv(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher4wakeEv() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::thermal::V2_0::implementation::ThermalWatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware7thermal4V2_014implementation14ThermalWatcherE = NULL;

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&> >, bool (std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE7destroyEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::thermal::V1_0::Temperature, std::__1::allocator<android::hardware::thermal::V1_0::Temperature> >::__emplace_back_slow_path<android::hardware::thermal::V1_0::Temperature>(android::hardware::thermal::V1_0::Temperature&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V1_011TemperatureENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V1_011TemperatureENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IThermal */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IThermal(void) {
    ALOGD("HIDL_FETCH_IThermal() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::thermal::V2_0::IThermal-in-android::hardware::thermal::V2_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7thermal4V2_014implementation7ThermalE0_NS2_8IThermalE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: android::hardware::thermal::V2_0::implementation::CPU_ALL_LABEL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android8hardware7thermal4V2_014implementation13CPU_ALL_LABELE = NULL;

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&> >, bool (std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&)>::__clone(std::__1::__function::__base<bool (std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE7__cloneEPNS0_6__baseISW_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE7__cloneEPNS0_6__baseISW_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::thermal::V1_0::CpuUsage, std::__1::allocator<android::hardware::thermal::V1_0::CpuUsage> >::__emplace_back_slow_path<android::hardware::thermal::V1_0::CpuUsage>(android::hardware::thermal::V1_0::CpuUsage&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V1_08CpuUsageENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V1_08CpuUsageENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::ThermalHelper(std::__1::function<void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelperC1ERKNSt3__18functionIFvRKNS5_6vectorINS2_11TemperatureENS5_9allocatorIS8_EEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelperC1ERKNSt3__18functionIFvRKNS5_6vectorINS2_11TemperatureENS5_9allocatorIS8_EEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::getTemperatures(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::Temperature> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal15getTemperaturesENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS7_11TemperatureEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal15getTemperaturesENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS7_11TemperatureEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::destroy(std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::init_cl_path() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper12init_cl_pathEv(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper12init_cl_pathEv() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::getCpuUsages(std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V1_0::CpuUsage> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal12getCpuUsagesENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS7_8CpuUsageEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal12getCpuUsagesENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS7_8CpuUsageEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&> >, void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)>::__clone(std::__1::__function::__base<void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE7__cloneEPNS0_6__baseISQ_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE7__cloneEPNS0_6__baseISQ_EE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalWatcher::startThermalWatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher19startThermalWatcherEv(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher19startThermalWatcherEv() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::read_temperature(int, android::hardware::thermal::V2_0::Temperature*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper16read_temperatureEiPNS2_11TemperatureE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper16read_temperatureEiPNS2_11TemperatureE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&> >, bool (std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::fill_cooling_devices(bool, std::__1::vector<android::hardware::thermal::V2_0::CoolingDevice, std::__1::allocator<android::hardware::thermal::V2_0::CoolingDevice> >*, android::hardware::thermal::V2_0::CoolingType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper20fill_cooling_devicesEbPNSt3__16vectorINS2_13CoolingDeviceENS5_9allocatorIS7_EEEENS2_11CoolingTypeE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper20fill_cooling_devicesEbPNSt3__16vectorINS2_13CoolingDeviceENS5_9allocatorIS7_EEEENS2_11CoolingTypeE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&> >, void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EE7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalWatcher::initThermalWatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher18initThermalWatcherEv(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation14ThermalWatcher18initThermalWatcherEv() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::getSeverityFromThresholds(float, android::hardware::thermal::V2_0::TemperatureType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper25getSeverityFromThresholdsEfNS2_15TemperatureTypeE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper25getSeverityFromThresholdsEfNS2_15TemperatureTypeE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::thermal::V2_0::CoolingDevice, std::__1::allocator<android::hardware::thermal::V2_0::CoolingDevice> >::__emplace_back_slow_path<android::hardware::thermal::V2_0::CoolingDevice>(android::hardware::thermal::V2_0::CoolingDevice&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V2_013CoolingDeviceENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V2_013CoolingDeviceENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::getCurrentTemperatures(bool, android::hardware::thermal::V2_0::TemperatureType, std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V2_0::Temperature> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal22getCurrentTemperaturesEbNS2_15TemperatureTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS2_11TemperatureEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal22getCurrentTemperaturesEbNS2_15TemperatureTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS2_11TemperatureEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::thermal::V2_0::implementation::CallbackSetting, std::__1::allocator<android::hardware::thermal::V2_0::implementation::CallbackSetting> >::__emplace_back_slow_path<android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback> const&, bool&, android::hardware::thermal::V2_0::TemperatureType&>(android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback> const&, bool&, android::hardware::thermal::V2_0::TemperatureType&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V2_014implementation15CallbackSettingENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRKNS1_2spINS4_23IThermalChangedCallbackEEERbRNS4_15TemperatureTypeEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V2_014implementation15CallbackSettingENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRKNS1_2spINS4_23IThermalChangedCallbackEEERbRNS4_15TemperatureTypeEEEEvDpOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: void std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> >::__emplace_back_slow_path<android::hardware::thermal::V2_0::Temperature>(android::hardware::thermal::V2_0::Temperature&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7thermal4V2_011TemperatureENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7thermal4V2_011TemperatureENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJS5_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::getTemperatureThresholds(bool, android::hardware::thermal::V2_0::TemperatureType, std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&, android::hardware::hidl_vec<android::hardware::thermal::V2_0::TemperatureThreshold> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal24getTemperatureThresholdsEbNS2_15TemperatureTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS2_20TemperatureThresholdEEEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal24getTemperatureThresholdsEbNS2_15TemperatureTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusERKNS0_8hidl_vecINS2_20TemperatureThresholdEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::sendThermalChangedCallback(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal26sendThermalChangedCallbackERKNSt3__16vectorINS2_11TemperatureENS5_9allocatorIS7_EEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal26sendThermalChangedCallbackERKNSt3__16vectorINS2_11TemperatureENS5_9allocatorIS7_EEEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::registerThermalChangedCallback(android::sp<android::hardware::thermal::V2_0::IThermalChangedCallback> const&, bool, android::hardware::thermal::V2_0::TemperatureType, std::__1::function<void (android::hardware::thermal::V1_0::ThermalStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7Thermal30registerThermalChangedCallbackERKNS_2spINS2_23IThermalChangedCallbackEEEbNS2_15TemperatureTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusEEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7Thermal30registerThermalChangedCallbackERKNS_2spINS2_23IThermalChangedCallbackEEEbNS2_15TemperatureTypeENSt3__18functionIFvRKNS1_4V1_013ThermalStatusEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::thermal::V1_0::IThermal-in-android::hardware::thermal::V2_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7thermal4V2_014implementation7ThermalE0_NS1_4V1_08IThermalE = NULL;

/* Exported Object: VTT for android::hardware::thermal::V2_0::implementation::Thermal */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware7thermal4V2_014implementation7ThermalE = NULL;

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::is_tz_path_valided(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper18is_tz_path_validedEi(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper18is_tz_path_validedEi() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::thermalWatcherCallbackFunc(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper26thermalWatcherCallbackFuncERKNSt3__13setINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENS5_4lessISC_EENSA_ISC_EEEE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper26thermalWatcherCallbackFuncERKNSt3__13setINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENS5_4lessISC_EENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&> >, bool (std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&)>::operator()(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EEclESL_(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EEclESL_() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::ThermalHelper::fill_thresholds(bool, android::hardware::hidl_vec<android::hardware::thermal::V2_0::TemperatureThreshold>*, android::hardware::thermal::V2_0::TemperatureType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation13ThermalHelper15fill_thresholdsEbPNS0_8hidl_vecINS2_20TemperatureThresholdEEENS2_15TemperatureTypeE(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation13ThermalHelper15fill_thresholdsEbPNS0_8hidl_vecINS2_20TemperatureThresholdEEENS2_15TemperatureTypeE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::hardware::thermal::V2_0::implementation::SensorStatus>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::hardware::thermal::V2_0::implementation::SensorStatus>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::hardware::thermal::V2_0::implementation::SensorStatus> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::hardware::thermal::V2_0::implementation::SensorStatus>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android8hardware7thermal4V2_014implementation12SensorStatusEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android8hardware7thermal4V2_014implementation12SensorStatusEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Demangled: android::hardware::thermal::V2_0::implementation::Thermal::Thermal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7thermal4V2_014implementation7ThermalC1Ev(void) {
    ALOGD("_ZN7android8hardware7thermal4V2_014implementation7ThermalC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<void (android::hardware::thermal::V2_0::implementation::Thermal::*)(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&), android::hardware::thermal::V2_0::implementation::Thermal*, std::__1::placeholders::__ph<1> const&> >, void (std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&)>::operator()(std::__1::vector<android::hardware::thermal::V2_0::Temperature, std::__1::allocator<android::hardware::thermal::V2_0::Temperature> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EEclESF_(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation7ThermalEFvRKNS_6vectorINS6_11TemperatureENS_9allocatorISA_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSB_ISO_EEFvSF_EEclESF_() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&>, std::__1::allocator<std::__1::__bind<bool (android::hardware::thermal::V2_0::implementation::ThermalHelper::*)(std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&), android::hardware::thermal::V2_0::implementation::ThermalHelper*, std::__1::placeholders::__ph<1> const&> >, bool (std::__1::set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN7android8hardware7thermal4V2_014implementation13ThermalHelperEFbRKNS_3setINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessISF_EENSD_ISF_EEEEEJPS8_RKNS_12placeholders4__phILi1EEEEEENSD_ISU_EEFbSL_EE7__cloneEv() called");
    return 0;
}
