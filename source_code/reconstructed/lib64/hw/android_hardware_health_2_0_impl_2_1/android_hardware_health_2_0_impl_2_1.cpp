/*
 * Reverse-Engineered Source for: android.hardware.health@2.0-impl-2.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_health_2_0_impl_2_1"

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
#include "android_hardware_health_2_0_impl_2_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getCurrentAverage(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health17getCurrentAverageENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health17getCurrentAverageENSt3__18functionIFvNS1_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::logValues() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor9logValuesEv(void) {
    ALOGD("_ZN7android14BatteryMonitor9logValuesEv() called");
    return 0;
}

/* Demangled: android::hardware::health::V1_0::hal_conversion::convertToHealthConfig(healthd_config const*, android::hardware::health::V1_0::HealthConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V1_014hal_conversion21convertToHealthConfigEPK14healthd_configRNS2_12HealthConfigE(void) {
    ALOGD("_ZN7android8hardware6health4V1_014hal_conversion21convertToHealthConfigEPK14healthd_configRNS2_12HealthConfigE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::readFromFile(android::String8 const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor12readFromFileERKNS_7String8EPNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android14BatteryMonitor12readFromFileERKNS_7String8EPNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::getHealthInfo_2_0() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14BatteryMonitor17getHealthInfo_2_0Ev(void) {
    ALOGD("_ZNK7android14BatteryMonitor17getHealthInfo_2_0Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getHealthInfo_2_1(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V2_1::HealthInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health17getHealthInfo_2_1ENSt3__18functionIFvNS1_4V2_06ResultERKNS2_10HealthInfoEEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health17getHealthInfo_2_1ENSt3__18functionIFvNS1_4V2_06ResultERKNS2_10HealthInfoEEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getStorageInfo(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health14getStorageInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_11StorageInfoEEEEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health14getStorageInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_11StorageInfoEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> >(android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_011StorageInfoEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_m(void) {
    ALOGD("_ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_011StorageInfoEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_m() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::health::V2_1::implementation::Health */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for android::hardware::health::V2_1::implementation::Health */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware6health4V2_114implementation6HealthE = NULL;

/* Demangled: android::hardware::health::V2_1::implementation::Health::Health(std::__1::unique_ptr<healthd_config, std::__1::default_delete<healthd_config> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6HealthC1EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6HealthC1EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getCurrentNow(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health13getCurrentNowENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health13getCurrentNowENSt3__18functionIFvNS1_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getChargeCounter(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health16getChargeCounterENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health16getChargeCounterENSt3__18functionIFvNS1_4V2_06ResultEiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::health::V2_0::IHealth-in-android::hardware::health::V2_1::implementation::Health */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS1_4V2_07IHealthE = NULL;

/* Demangled: android::BatteryMonitor::getBooleanField(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor15getBooleanFieldERKNS_7String8E(void) {
    ALOGD("_ZN7android14BatteryMonitor15getBooleanFieldERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::getChargeStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor15getChargeStatusEv(void) {
    ALOGD("_ZN7android14BatteryMonitor15getChargeStatusEv() called");
    return 0;
}

/* Demangled: android::getBatteryHealth(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16getBatteryHealthEPKc(void) {
    ALOGD("_ZN7android16getBatteryHealthEPKc() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::health::V2_1::implementation::Health::UpdateHealthInfo(android::hardware::health::V2_1::HealthInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health16UpdateHealthInfoEPNS2_10HealthInfoE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health16UpdateHealthInfoEPNS2_10HealthInfoE() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getEnergyCounter(std::__1::function<void (android::hardware::health::V2_0::Result, long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health16getEnergyCounterENSt3__18functionIFvNS1_4V2_06ResultElEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health16getEnergyCounterENSt3__18functionIFvNS1_4V2_06ResultElEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::~BatteryMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitorD1Ev(void) {
    ALOGD("_ZN7android14BatteryMonitorD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::health::V1_0::hal_conversion::convertFromHealthInfo(android::hardware::health::V1_0::HealthInfo const&, android::BatteryProperties*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V1_014hal_conversion21convertFromHealthInfoERKNS2_10HealthInfoEPNS_17BatteryPropertiesE(void) {
    ALOGD("_ZN7android8hardware6health4V1_014hal_conversion21convertFromHealthInfoERKNS2_10HealthInfoEPNS_17BatteryPropertiesE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::health::V2_1::implementation::Health */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware6health4V2_114implementation6HealthE = NULL;

/* Demangled: android::BatteryMonitor::BatteryMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitorC2Ev(void) {
    ALOGD("_ZN7android14BatteryMonitorC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::health::V2_0::DiskStats>(android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8toStringINS0_6health4V2_09DiskStatsEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void) {
    ALOGD("_ZN7android8hardware8toStringINS0_6health4V2_09DiskStatsEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE() called");
    return 0;
}

/* Demangled: android::hardware::health::V1_0::hal_conversion::convertFromHealthConfig(android::hardware::health::V1_0::HealthConfig const&, healthd_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V1_014hal_conversion23convertFromHealthConfigERKNS2_12HealthConfigEP14healthd_config(void) {
    ALOGD("_ZN7android8hardware6health4V1_014hal_conversion23convertFromHealthConfigERKNS2_12HealthConfigEP14healthd_config() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::health::V2_1::implementation::Health::Health(std::__1::unique_ptr<healthd_config, std::__1::default_delete<healthd_config> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6HealthC2EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6HealthC2EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::getIntField(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor11getIntFieldERKNS_7String8E(void) {
    ALOGD("_ZN7android14BatteryMonitor11getIntFieldERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::isScopedPowerSupply(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor19isScopedPowerSupplyEPKc(void) {
    ALOGD("_ZN7android14BatteryMonitor19isScopedPowerSupplyEPKc() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::readPowerSupplyType(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor19readPowerSupplyTypeERKNS_7String8E(void) {
    ALOGD("_ZN7android14BatteryMonitor19readPowerSupplyTypeERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::getBatteryCapacityLevel(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android23getBatteryCapacityLevelEPKc(void) {
    ALOGD("_ZN7android23getBatteryCapacityLevelEPKc() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::getProperty(int, android::BatteryProperty*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor11getPropertyEiPNS_15BatteryPropertyE(void) {
    ALOGD("_ZN7android14BatteryMonitor11getPropertyEiPNS_15BatteryPropertyE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> >(android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_09DiskStatsEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_m(void) {
    ALOGD("_ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_09DiskStatsEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_m() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getHealthInfo(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V2_0::HealthInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health13getHealthInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS7_10HealthInfoEEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health13getHealthInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS7_10HealthInfoEEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::getHealthInfo_2_1() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14BatteryMonitor17getHealthInfo_2_1Ev(void) {
    ALOGD("_ZNK7android14BatteryMonitor17getHealthInfo_2_1Ev() called");
    return 0;
}

/* Demangled: android::getBatteryStatus(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16getBatteryStatusEPKc(void) {
    ALOGD("_ZN7android16getBatteryStatusEPKc() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::getHealthInfo_1_0() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14BatteryMonitor17getHealthInfo_1_0Ev(void) {
    ALOGD("_ZNK7android14BatteryMonitor17getHealthInfo_1_0Ev() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getHealthConfig(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V2_1::HealthConfig const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health15getHealthConfigENSt3__18functionIFvNS1_4V2_06ResultERKNS2_12HealthConfigEEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health15getHealthConfigENSt3__18functionIFvNS1_4V2_06ResultERKNS2_12HealthConfigEEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::dumpState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor9dumpStateEi(void) {
    ALOGD("_ZN7android14BatteryMonitor9dumpStateEi() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::shouldKeepScreenOn(std::__1::function<void (android::hardware::health::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health18shouldKeepScreenOnENSt3__18functionIFvNS1_4V2_06ResultEbEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health18shouldKeepScreenOnENSt3__18functionIFvNS1_4V2_06ResultEbEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::health::V2_0::StorageInfo>(android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8toStringINS0_6health4V2_011StorageInfoEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void) {
    ALOGD("_ZN7android8hardware8toStringINS0_6health4V2_011StorageInfoEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IHealth */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IHealth(void) {
    ALOGD("HIDL_FETCH_IHealth() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::update() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health6updateEv(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health6updateEv() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::updateValues() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor12updateValuesEv(void) {
    ALOGD("_ZN7android14BatteryMonitor12updateValuesEv() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::BatteryMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitorC1Ev(void) {
    ALOGD("_ZN7android14BatteryMonitorC1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::health::V2_1::IHealth-in-android::hardware::health::V2_1::implementation::Health */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS2_7IHealthE = NULL;

/* Demangled: android::BatteryMonitor::~BatteryMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitorD2Ev(void) {
    ALOGD("_ZN7android14BatteryMonitorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: android::hardware::health::V2_1::implementation::Health::getCapacity(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health11getCapacityENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health11getCapacityENSt3__18functionIFvNS1_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::unregisterCallback(android::sp<android::hardware::health::V2_0::IHealthInfoCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health18unregisterCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health18unregisterCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::hardware::health::V1_0::hal_conversion::convertToHealthInfo(android::BatteryProperties const*, android::hardware::health::V1_0::HealthInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V1_014hal_conversion19convertToHealthInfoEPKNS_17BatteryPropertiesERNS2_10HealthInfoE(void) {
    ALOGD("_ZN7android8hardware6health4V1_014hal_conversion19convertToHealthInfoEPKNS_17BatteryPropertiesERNS2_10HealthInfoE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::getDiskStats(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health12getDiskStatsENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_9DiskStatsEEEEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health12getDiskStatsENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_9DiskStatsEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::health::V2_1::implementation::Health::getChargeStatus(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V1_0::BatteryStatus)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health15getChargeStatusENSt3__18functionIFvNS1_4V2_06ResultENS1_4V1_013BatteryStatusEEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health15getChargeStatusENSt3__18functionIFvNS1_4V2_06ResultENS1_4V1_013BatteryStatusEEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::isChargerOnline() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor15isChargerOnlineEv(void) {
    ALOGD("_ZN7android14BatteryMonitor15isChargerOnlineEv() called");
    return 0;
}

/* Demangled: android::hardware::health::InitHealthdConfig(healthd_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health17InitHealthdConfigEP14healthd_config(void) {
    ALOGD("_ZN7android8hardware6health17InitHealthdConfigEP14healthd_config() called");
    return 0;
}

/* Demangled: android::hardware::health::V2_1::implementation::Health::registerCallback(android::sp<android::hardware::health::V2_0::IHealthInfoCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware6health4V2_114implementation6Health16registerCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE(void) {
    ALOGD("_ZN7android8hardware6health4V2_114implementation6Health16registerCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE() called");
    return 0;
}

/* Demangled: android::BatteryMonitor::init(healthd_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14BatteryMonitor4initEP14healthd_config(void) {
    ALOGD("_ZN7android14BatteryMonitor4initEP14healthd_config() called");
    return 0;
}
