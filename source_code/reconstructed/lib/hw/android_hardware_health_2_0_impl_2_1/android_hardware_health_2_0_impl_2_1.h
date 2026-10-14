/*
 * Reverse-Engineered ABI Specification for: android.hardware.health@2.0-impl-2.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.health@2.0-impl-2.1.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_HEALTH_2_0_IMPL_2_1_H
#define BEGONIA_RE_ANDROID_HARDWARE_HEALTH_2_0_IMPL_2_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health17getCurrentAverageENSt3__18functionIFvNS1_4V2_06ResultEiEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getCurrentAverage(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
int _ZN7android8hardware6health4V2_114implementation6Health17getCurrentAverageENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void);

/* Symbol: _ZN7android14BatteryMonitor9logValuesEv */
/* Demangled: android::BatteryMonitor::logValues() */
int _ZN7android14BatteryMonitor9logValuesEv(void);

/* Symbol: _ZN7android8hardware6health4V1_014hal_conversion21convertToHealthConfigEPK14healthd_configRNS2_12HealthConfigE */
/* Demangled: android::hardware::health::V1_0::hal_conversion::convertToHealthConfig(healthd_config const*, android::hardware::health::V1_0::HealthConfig&) */
int _ZN7android8hardware6health4V1_014hal_conversion21convertToHealthConfigEPK14healthd_configRNS2_12HealthConfigE(void);

/* Symbol: _ZN7android14BatteryMonitor12readFromFileERKNS_7String8EPNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: android::BatteryMonitor::readFromFile(android::String8 const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android14BatteryMonitor12readFromFileERKNS_7String8EPNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android14BatteryMonitor17getHealthInfo_2_0Ev */
/* Demangled: android::BatteryMonitor::getHealthInfo_2_0() const */
int _ZNK7android14BatteryMonitor17getHealthInfo_2_0Ev(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health17getHealthInfo_2_1ENSt3__18functionIFvNS1_4V2_06ResultERKNS2_10HealthInfoEEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getHealthInfo_2_1(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V2_1::HealthInfo const&)>) */
int _ZN7android8hardware6health4V2_114implementation6Health17getHealthInfo_2_1ENSt3__18functionIFvNS1_4V2_06ResultERKNS2_10HealthInfoEEEE(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health14getStorageInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_11StorageInfoEEEEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getStorageInfo(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> const&)>) */
int _ZN7android8hardware6health4V2_114implementation6Health14getStorageInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_11StorageInfoEEEEEE(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN7android8hardware6health4V2_114implementation6Health5debugERKNS0_11hidl_handleERKNS0_8hidl_vecINS0_11hidl_stringEEE(void);

/* Symbol: _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::health::V2_1::implementation::Health */
extern void* _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android8hardware6health4V2_114implementation6HealthE */
/* Demangled: vtable for android::hardware::health::V2_1::implementation::Health */
extern void* _ZTVN7android8hardware6health4V2_114implementation6HealthE;

/* Symbol: _ZN7android8hardware6health4V2_114implementation6HealthC1EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::Health(std::__1::unique_ptr<healthd_config, std::__1::default_delete<healthd_config> >&&) */
int _ZN7android8hardware6health4V2_114implementation6HealthC1EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health13getCurrentNowENSt3__18functionIFvNS1_4V2_06ResultEiEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getCurrentNow(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
int _ZN7android8hardware6health4V2_114implementation6Health13getCurrentNowENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health16getChargeCounterENSt3__18functionIFvNS1_4V2_06ResultEiEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getChargeCounter(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
int _ZN7android8hardware6health4V2_114implementation6Health16getChargeCounterENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void);

/* Symbol: _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS1_4V2_07IHealthE */
/* Demangled: construction vtable for android::hardware::health::V2_0::IHealth-in-android::hardware::health::V2_1::implementation::Health */
extern void* _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS1_4V2_07IHealthE;

/* Symbol: _ZN7android14BatteryMonitor15getBooleanFieldERKNS_7String8E */
/* Demangled: android::BatteryMonitor::getBooleanField(android::String8 const&) */
int _ZN7android14BatteryMonitor15getBooleanFieldERKNS_7String8E(void);

/* Symbol: _ZN7android14BatteryMonitor15getChargeStatusEv */
/* Demangled: android::BatteryMonitor::getChargeStatus() */
int _ZN7android14BatteryMonitor15getChargeStatusEv(void);

/* Symbol: _ZN7android16getBatteryHealthEPKc */
/* Demangled: android::getBatteryHealth(char const*) */
int _ZN7android16getBatteryHealthEPKc(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health16UpdateHealthInfoEPNS2_10HealthInfoE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::UpdateHealthInfo(android::hardware::health::V2_1::HealthInfo*) */
int _ZN7android8hardware6health4V2_114implementation6Health16UpdateHealthInfoEPNS2_10HealthInfoE(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health16getEnergyCounterENSt3__18functionIFvNS1_4V2_06ResultExEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getEnergyCounter(std::__1::function<void (android::hardware::health::V2_0::Result, long long)>) */
int _ZN7android8hardware6health4V2_114implementation6Health16getEnergyCounterENSt3__18functionIFvNS1_4V2_06ResultExEEE(void);

/* Symbol: _ZN7android14BatteryMonitorD1Ev */
/* Demangled: android::BatteryMonitor::~BatteryMonitor() */
int _ZN7android14BatteryMonitorD1Ev(void);

/* Symbol: _ZN7android8hardware6health4V1_014hal_conversion21convertFromHealthInfoERKNS2_10HealthInfoEPNS_17BatteryPropertiesE */
/* Demangled: android::hardware::health::V1_0::hal_conversion::convertFromHealthInfo(android::hardware::health::V1_0::HealthInfo const&, android::BatteryProperties*) */
int _ZN7android8hardware6health4V1_014hal_conversion21convertFromHealthInfoERKNS2_10HealthInfoEPNS_17BatteryPropertiesE(void);

/* Symbol: _ZTTN7android8hardware6health4V2_114implementation6HealthE */
/* Demangled: VTT for android::hardware::health::V2_1::implementation::Health */
extern void* _ZTTN7android8hardware6health4V2_114implementation6HealthE;

/* Symbol: _ZN7android14BatteryMonitorC2Ev */
/* Demangled: android::BatteryMonitor::BatteryMonitor() */
int _ZN7android14BatteryMonitorC2Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_09DiskStatsEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_j */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> >(android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> const&, unsigned int) */
int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_09DiskStatsEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_j(void);

/* Symbol: _ZN7android8hardware8toStringINS0_6health4V2_09DiskStatsEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::health::V2_0::DiskStats>(android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> const&) */
int _ZN7android8hardware8toStringINS0_6health4V2_09DiskStatsEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android8hardware6health4V1_014hal_conversion23convertFromHealthConfigERKNS2_12HealthConfigEP14healthd_config */
/* Demangled: android::hardware::health::V1_0::hal_conversion::convertFromHealthConfig(android::hardware::health::V1_0::HealthConfig const&, healthd_config*) */
int _ZN7android8hardware6health4V1_014hal_conversion23convertFromHealthConfigERKNS2_12HealthConfigEP14healthd_config(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware6health4V2_114implementation6HealthC2EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::Health(std::__1::unique_ptr<healthd_config, std::__1::default_delete<healthd_config> >&&) */
int _ZN7android8hardware6health4V2_114implementation6HealthC2EONSt3__110unique_ptrI14healthd_configNS5_14default_deleteIS7_EEEE(void);

/* Symbol: _ZN7android14BatteryMonitor11getIntFieldERKNS_7String8E */
/* Demangled: android::BatteryMonitor::getIntField(android::String8 const&) */
int _ZN7android14BatteryMonitor11getIntFieldERKNS_7String8E(void);

/* Symbol: _ZN7android14BatteryMonitor19isScopedPowerSupplyEPKc */
/* Demangled: android::BatteryMonitor::isScopedPowerSupply(char const*) */
int _ZN7android14BatteryMonitor19isScopedPowerSupplyEPKc(void);

/* Symbol: _ZN7android14BatteryMonitor19readPowerSupplyTypeERKNS_7String8E */
/* Demangled: android::BatteryMonitor::readPowerSupplyType(android::String8 const&) */
int _ZN7android14BatteryMonitor19readPowerSupplyTypeERKNS_7String8E(void);

/* Symbol: _ZN7android23getBatteryCapacityLevelEPKc */
/* Demangled: android::getBatteryCapacityLevel(char const*) */
int _ZN7android23getBatteryCapacityLevelEPKc(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android14BatteryMonitor11getPropertyEiPNS_15BatteryPropertyE */
/* Demangled: android::BatteryMonitor::getProperty(int, android::BatteryProperty*) */
int _ZN7android14BatteryMonitor11getPropertyEiPNS_15BatteryPropertyE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvj */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health13getHealthInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS7_10HealthInfoEEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getHealthInfo(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V2_0::HealthInfo const&)>) */
int _ZN7android8hardware6health4V2_114implementation6Health13getHealthInfoENSt3__18functionIFvNS1_4V2_06ResultERKNS7_10HealthInfoEEEE(void);

/* Symbol: _ZNK7android14BatteryMonitor17getHealthInfo_2_1Ev */
/* Demangled: android::BatteryMonitor::getHealthInfo_2_1() const */
int _ZNK7android14BatteryMonitor17getHealthInfo_2_1Ev(void);

/* Symbol: _ZN7android16getBatteryStatusEPKc */
/* Demangled: android::getBatteryStatus(char const*) */
int _ZN7android16getBatteryStatusEPKc(void);

/* Symbol: _ZNK7android14BatteryMonitor17getHealthInfo_1_0Ev */
/* Demangled: android::BatteryMonitor::getHealthInfo_1_0() const */
int _ZNK7android14BatteryMonitor17getHealthInfo_1_0Ev(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health15getHealthConfigENSt3__18functionIFvNS1_4V2_06ResultERKNS2_12HealthConfigEEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getHealthConfig(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V2_1::HealthConfig const&)>) */
int _ZN7android8hardware6health4V2_114implementation6Health15getHealthConfigENSt3__18functionIFvNS1_4V2_06ResultERKNS2_12HealthConfigEEEE(void);

/* Symbol: _ZN7android14BatteryMonitor9dumpStateEi */
/* Demangled: android::BatteryMonitor::dumpState(int) */
int _ZN7android14BatteryMonitor9dumpStateEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health18shouldKeepScreenOnENSt3__18functionIFvNS1_4V2_06ResultEbEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::shouldKeepScreenOn(std::__1::function<void (android::hardware::health::V2_0::Result, bool)>) */
int _ZN7android8hardware6health4V2_114implementation6Health18shouldKeepScreenOnENSt3__18functionIFvNS1_4V2_06ResultEbEEE(void);

/* Symbol: _ZN7android8hardware8toStringINS0_6health4V2_011StorageInfoEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::health::V2_0::StorageInfo>(android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> const&) */
int _ZN7android8hardware8toStringINS0_6health4V2_011StorageInfoEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvj */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void);

/* Symbol: HIDL_FETCH_IHealth */
/* Demangled: HIDL_FETCH_IHealth */
int HIDL_FETCH_IHealth(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health6updateEv */
/* Demangled: android::hardware::health::V2_1::implementation::Health::update() */
int _ZN7android8hardware6health4V2_114implementation6Health6updateEv(void);

/* Symbol: _ZN7android14BatteryMonitor12updateValuesEv */
/* Demangled: android::BatteryMonitor::updateValues() */
int _ZN7android14BatteryMonitor12updateValuesEv(void);

/* Symbol: _ZN7android14BatteryMonitorC1Ev */
/* Demangled: android::BatteryMonitor::BatteryMonitor() */
int _ZN7android14BatteryMonitorC1Ev(void);

/* Symbol: _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS2_7IHealthE */
/* Demangled: construction vtable for android::hardware::health::V2_1::IHealth-in-android::hardware::health::V2_1::implementation::Health */
extern void* _ZTCN7android8hardware6health4V2_114implementation6HealthE0_NS2_7IHealthE;

/* Symbol: _ZN7android14BatteryMonitorD2Ev */
/* Demangled: android::BatteryMonitor::~BatteryMonitor() */
int _ZN7android14BatteryMonitorD2Ev(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health11getCapacityENSt3__18functionIFvNS1_4V2_06ResultEiEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getCapacity(std::__1::function<void (android::hardware::health::V2_0::Result, int)>) */
int _ZN7android8hardware6health4V2_114implementation6Health11getCapacityENSt3__18functionIFvNS1_4V2_06ResultEiEEE(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health18unregisterCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::unregisterCallback(android::sp<android::hardware::health::V2_0::IHealthInfoCallback> const&) */
int _ZN7android8hardware6health4V2_114implementation6Health18unregisterCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE(void);

/* Symbol: _ZN7android8hardware6health4V1_014hal_conversion19convertToHealthInfoEPKNS_17BatteryPropertiesERNS2_10HealthInfoE */
/* Demangled: android::hardware::health::V1_0::hal_conversion::convertToHealthInfo(android::BatteryProperties const*, android::hardware::health::V1_0::HealthInfo&) */
int _ZN7android8hardware6health4V1_014hal_conversion19convertToHealthInfoEPKNS_17BatteryPropertiesERNS2_10HealthInfoE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health12getDiskStatsENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_9DiskStatsEEEEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getDiskStats(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::hidl_vec<android::hardware::health::V2_0::DiskStats> const&)>) */
int _ZN7android8hardware6health4V2_114implementation6Health12getDiskStatsENSt3__18functionIFvNS1_4V2_06ResultERKNS0_8hidl_vecINS7_9DiskStatsEEEEEE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health15getChargeStatusENSt3__18functionIFvNS1_4V2_06ResultENS1_4V1_013BatteryStatusEEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::getChargeStatus(std::__1::function<void (android::hardware::health::V2_0::Result, android::hardware::health::V1_0::BatteryStatus)>) */
int _ZN7android8hardware6health4V2_114implementation6Health15getChargeStatusENSt3__18functionIFvNS1_4V2_06ResultENS1_4V1_013BatteryStatusEEEE(void);

/* Symbol: _ZN7android14BatteryMonitor15isChargerOnlineEv */
/* Demangled: android::BatteryMonitor::isChargerOnline() */
int _ZN7android14BatteryMonitor15isChargerOnlineEv(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android8hardware6health17InitHealthdConfigEP14healthd_config */
/* Demangled: android::hardware::health::InitHealthdConfig(healthd_config*) */
int _ZN7android8hardware6health17InitHealthdConfigEP14healthd_config(void);

/* Symbol: _ZN7android8hardware6health4V2_114implementation6Health16registerCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE */
/* Demangled: android::hardware::health::V2_1::implementation::Health::registerCallback(android::sp<android::hardware::health::V2_0::IHealthInfoCallback> const&) */
int _ZN7android8hardware6health4V2_114implementation6Health16registerCallbackERKNS_2spINS1_4V2_019IHealthInfoCallbackEEE(void);

/* Symbol: _ZN7android14BatteryMonitor4initEP14healthd_config */
/* Demangled: android::BatteryMonitor::init(healthd_config*) */
int _ZN7android14BatteryMonitor4initEP14healthd_config(void);

/* Symbol: _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_011StorageInfoEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_j */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> >(android::hardware::hidl_vec<android::hardware::health::V2_0::StorageInfo> const&, unsigned int) */
int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6health4V2_011StorageInfoEEEEENSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEERKT_j(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_HEALTH_2_0_IMPL_2_1_H */
