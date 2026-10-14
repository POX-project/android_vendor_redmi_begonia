/*
 * Reverse-Engineered ABI Specification for: android.hardware.sensors@1.0-impl-mediatek.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.sensors@1.0-impl-mediatek.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_SENSORS_1_0_IMPL_MEDIATEK_H
#define BEGONIA_RE_ANDROID_HARDWARE_SENSORS_1_0_IMPL_MEDIATEK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZNK7android8hardware7sensors4V1_014implementation7Sensors9initCheckEv */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::initCheck() const */
int _ZNK7android8hardware7sensors4V1_014implementation7Sensors9initCheckEv(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: waiting_for_data */
/* Demangled: waiting_for_data */
extern void* waiting_for_data;

/* Symbol: HIDL_FETCH_ISensors */
/* Demangled: HIDL_FETCH_ISensors */
int HIDL_FETCH_ISensors(void);

/* Symbol: _ZN22sensors_poll_context_t28get_device_version_by_handleEi */
/* Demangled: sensors_poll_context_t::get_device_version_by_handle(int) */
int _ZN22sensors_poll_context_t28get_device_version_by_handleEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi10FullHandleEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, FullHandle>, std::__1::__map_value_compare<int, std::__1::__value_type<int, FullHandle>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, FullHandle> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, FullHandle>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi10FullHandleEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZNSt3__16vectorIPvNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<void*, std::__1::allocator<void*> >::__push_back_slow_path<void* const&>(void* const&) */
int _ZNSt3__16vectorIPvNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _Z25get_multi_hal_module_infov */
/* Demangled: get_multi_hal_module_info() */
int _Z25get_multi_hal_module_infov(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN16SensorEventQueue12waitForSpaceEP15pthread_mutex_t */
/* Demangled: SensorEventQueue::waitForSpace(pthread_mutex_t*) */
int _ZN16SensorEventQueue12waitForSpaceEP15pthread_mutex_t(void);

/* Symbol: _ZNSt3__16vectorIP11hw_device_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<hw_device_t*, std::__1::allocator<hw_device_t*> >::__push_back_slow_path<hw_device_t* const&>(hw_device_t* const&) */
int _ZNSt3__16vectorIP11hw_device_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensor(android::hardware::sensors::V1_0::SensorInfo const&, sensor_t*) */
int _ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t(void);

/* Symbol: _ZN22sensors_poll_context_t14addSubHwDeviceEP11hw_device_t */
/* Demangled: sensors_poll_context_t::addSubHwDevice(hw_device_t*) */
int _ZN22sensors_poll_context_t14addSubHwDeviceEP11hw_device_t(void);

/* Symbol: _ZN22sensors_poll_context_t21get_primary_v1_deviceEv */
/* Demangled: sensors_poll_context_t::get_primary_v1_device() */
int _ZN22sensors_poll_context_t21get_primary_v1_deviceEv(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors4pollEiNSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_5EventEEERKNS8_INS2_10SensorInfoEEEEEE */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::poll(int, std::__1::function<void (android::hardware::sensors::V1_0::Result, android::hardware::hidl_vec<android::hardware::sensors::V1_0::Event> const&, android::hardware::hidl_vec<android::hardware::sensors::V1_0::SensorInfo> const&)>) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors4pollEiNSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_5EventEEERKNS8_INS2_10SensorInfoEEEEEE(void);

/* Symbol: _ZNSt3__16vectorIP11hw_module_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<hw_module_t*, std::__1::allocator<hw_module_t*> >::__push_back_slow_path<hw_module_t* const&>(hw_module_t* const&) */
int _ZNSt3__16vectorIP11hw_module_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensorEvent(sensors_event_t const&, android::hardware::sensors::V1_0::Event*) */
int _ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE(void);

/* Symbol: _ZTVN7android8hardware7sensors4V1_014implementation7SensorsE */
/* Demangled: vtable for android::hardware::sensors::V1_0::implementation::Sensors */
extern void* _ZTVN7android8hardware7sensors4V1_014implementation7SensorsE;

/* Symbol: _ZN16SensorEventQueue13markAsWrittenEi */
/* Demangled: SensorEventQueue::markAsWritten(int) */
int _ZN16SensorEventQueue13markAsWrittenEi(void);

/* Symbol: _ZN22sensors_poll_context_t5batchEiill */
/* Demangled: sensors_poll_context_t::batch(int, int, long, long) */
int _ZN22sensors_poll_context_t5batchEiill(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSharedMemInfo(android::hardware::sensors::V1_0::SharedMemInfo const&, sensors_direct_mem_t*) */
int _ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors18configDirectReportEiiNS2_9RateLevelENSt3__18functionIFvNS2_6ResultEiEEE */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::configDirectReport(int, int, android::hardware::sensors::V1_0::RateLevel, std::__1::function<void (android::hardware::sensors::V1_0::Result, int)>) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors18configDirectReportEiiNS2_9RateLevelENSt3__18functionIFvNS2_6ResultEiEEE(void);

/* Symbol: _ZN16SensorEventQueue4peekEv */
/* Demangled: SensorEventQueue::peek() */
int _ZN16SensorEventQueue4peekEv(void);

/* Symbol: _ZN22sensors_poll_context_t5closeEv */
/* Demangled: sensors_poll_context_t::close() */
int _ZN22sensors_poll_context_t5closeEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: full_to_global */
/* Demangled: full_to_global */
extern void* full_to_global;

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors16setOperationModeENS2_13OperationModeE */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::setOperationMode(android::hardware::sensors::V1_0::OperationMode) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors16setOperationModeENS2_13OperationModeE(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors21registerDirectChannelERKNS2_13SharedMemInfoENSt3__18functionIFvNS2_6ResultEiEEE */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::registerDirectChannel(android::hardware::sensors::V1_0::SharedMemInfo const&, std::__1::function<void (android::hardware::sensors::V1_0::Result, int)>) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors21registerDirectChannelERKNS2_13SharedMemInfoENSt3__18functionIFvNS2_6ResultEiEEE(void);

/* Symbol: _ZTCN7android8hardware7sensors4V1_014implementation7SensorsE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::sensors::V1_0::implementation::Sensors */
extern void* _ZTCN7android8hardware7sensors4V1_014implementation7SensorsE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _Z11apiNumToStri */
/* Demangled: apiNumToStr(int) */
int _Z11apiNumToStri(void);

/* Symbol: _ZN22sensors_poll_context_t23get_v1_device_by_handleEi */
/* Demangled: sensors_poll_context_t::get_v1_device_by_handle(int) */
int _ZN22sensors_poll_context_t23get_v1_device_by_handleEi(void);

/* Symbol: _ZN22sensors_poll_context_t4pollEP15sensors_event_ti */
/* Demangled: sensors_poll_context_t::poll(sensors_event_t*, int) */
int _ZN22sensors_poll_context_t4pollEP15sensors_event_ti(void);

/* Symbol: _ZN16SensorEventQueueD2Ev */
/* Demangled: SensorEventQueue::~SensorEventQueue() */
int _ZN16SensorEventQueueD2Ev(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors5flushEi */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::flush(int) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors5flushEi(void);

/* Symbol: _ZN16SensorEventQueue17getWritableRegionEiPP15sensors_event_t */
/* Demangled: SensorEventQueue::getWritableRegion(int, sensors_event_t**) */
int _ZN16SensorEventQueue17getWritableRegionEiPP15sensors_event_t(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN16SensorEventQueue7getSizeEv */
/* Demangled: SensorEventQueue::getSize() */
int _ZN16SensorEventQueue7getSizeEv(void);

/* Symbol: _ZN16SensorEventQueueC2Ei */
/* Demangled: SensorEventQueue::SensorEventQueue(int) */
int _ZN16SensorEventQueueC2Ei(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensor(sensor_t const&, android::hardware::sensors::V1_0::SensorInfo*) */
int _ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE(void);

/* Symbol: _ZTTN7android8hardware7sensors4V1_014implementation7SensorsE */
/* Demangled: VTT for android::hardware::sensors::V1_0::implementation::Sensors */
extern void* _ZTTN7android8hardware7sensors4V1_014implementation7SensorsE;

/* Symbol: _ZN22sensors_poll_context_t23copy_event_remap_handleEP15sensors_event_tS1_i */
/* Demangled: sensors_poll_context_t::copy_event_remap_handle(sensors_event_t*, sensors_event_t*, int) */
int _ZN22sensors_poll_context_t23copy_event_remap_handleEP15sensors_event_tS1_i(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4swapERS3_ */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::swap(std::__1::basic_filebuf<char, std::__1::char_traits<char> >&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4swapERS3_(void);

/* Symbol: _ZNSt3__16vectorIP16SensorEventQueueNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<SensorEventQueue*, std::__1::allocator<SensorEventQueue*> >::__push_back_slow_path<SensorEventQueue* const&>(SensorEventQueue* const&) */
int _ZNSt3__16vectorIP16SensorEventQueueNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN16SensorEventQueueD1Ev */
/* Demangled: SensorEventQueue::~SensorEventQueue() */
int _ZN16SensorEventQueueD1Ev(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors5batchEill */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::batch(int, long, long) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors5batchEill(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors23convertFromSensorEventsEmPK15sensors_event_tPNS0_8hidl_vecINS2_5EventEEE */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::convertFromSensorEvents(unsigned long, sensors_event_t const*, android::hardware::hidl_vec<android::hardware::sensors::V1_0::Event>*) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors23convertFromSensorEventsEmPK15sensors_event_tPNS0_8hidl_vecINS2_5EventEEE(void);

/* Symbol: _Z10writerTaskPv */
/* Demangled: writerTask(void*) */
int _Z10writerTaskPv(void);

/* Symbol: _ZN16SensorEventQueueC1Ei */
/* Demangled: SensorEventQueue::SensorEventQueue(int) */
int _ZN16SensorEventQueueC1Ei(void);

/* Symbol: _ZN22sensors_poll_context_t8activateEii */
/* Demangled: sensors_poll_context_t::activate(int, int) */
int _ZN22sensors_poll_context_t8activateEii(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromRateLevel(android::hardware::sensors::V1_0::RateLevel) */
int _ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors14getSensorsListENSt3__18functionIFvRKNS0_8hidl_vecINS2_10SensorInfoEEEEEE */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::getSensorsList(std::__1::function<void (android::hardware::hidl_vec<android::hardware::sensors::V1_0::SensorInfo> const&)>) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors14getSensorsListENSt3__18functionIFvRKNS0_8hidl_vecINS2_10SensorInfoEEEEEE(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors23unregisterDirectChannelEi */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::unregisterDirectChannel(int) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors23unregisterDirectChannelEi(void);

/* Symbol: _ZN22sensors_poll_context_t23register_direct_channelEPK20sensors_direct_mem_ti */
/* Demangled: sensors_poll_context_t::register_direct_channel(sensors_direct_mem_t const*, int) */
int _ZN22sensors_poll_context_t23register_direct_channelEPK20sensors_direct_mem_ti(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors16injectSensorDataERKNS2_5EventE */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::injectSensorData(android::hardware::sensors::V1_0::Event const&) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors16injectSensorDataERKNS2_5EventE(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7Sensors8activateEib */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::activate(int, bool) */
int _ZN7android8hardware7sensors4V1_014implementation7Sensors8activateEib(void);

/* Symbol: _ZNK7android8hardware7sensors4V1_014implementation7Sensors19getHalDeviceVersionEv */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::getHalDeviceVersion() const */
int _ZNK7android8hardware7sensors4V1_014implementation7Sensors19getHalDeviceVersionEv(void);

/* Symbol: _ZTCN7android8hardware7sensors4V1_014implementation7SensorsE0_NS2_8ISensorsE */
/* Demangled: construction vtable for android::hardware::sensors::V1_0::ISensors-in-android::hardware::sensors::V1_0::implementation::Sensors */
extern void* _ZTCN7android8hardware7sensors4V1_014implementation7SensorsE0_NS2_8ISensorsE;

/* Symbol: _ZN16SensorEventQueue7dequeueEv */
/* Demangled: SensorEventQueue::dequeue() */
int _ZN16SensorEventQueue7dequeueEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7SensorsC2Ev */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::Sensors() */
int _ZN7android8hardware7sensors4V1_014implementation7SensorsC2Ev(void);

/* Symbol: _ZN22sensors_poll_context_t20config_direct_reportEiiPK20sensors_direct_cfg_t */
/* Demangled: sensors_poll_context_t::config_direct_report(int, int, sensors_direct_cfg_t const*) */
int _ZN22sensors_poll_context_t20config_direct_reportEiiPK20sensors_direct_cfg_t(void);

/* Symbol: _ZN22sensors_poll_context_t23get_v0_device_by_handleEi */
/* Demangled: sensors_poll_context_t::get_v0_device_by_handle(int) */
int _ZN22sensors_poll_context_t23get_v0_device_by_handleEi(void);

/* Symbol: _ZN22sensors_poll_context_t8setDelayEil */
/* Demangled: sensors_poll_context_t::setDelay(int, long) */
int _ZN22sensors_poll_context_t8setDelayEil(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensorEvent(android::hardware::sensors::V1_0::Event const&, sensors_event_t*) */
int _ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t(void);

/* Symbol: _ZN22sensors_poll_context_t5flushEi */
/* Demangled: sensors_poll_context_t::flush(int) */
int _ZN22sensors_poll_context_t5flushEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: global_to_full */
/* Demangled: global_to_full */
extern void* global_to_full;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: next_global_handle */
/* Demangled: next_global_handle */
extern void* next_global_handle;

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation7SensorsC1Ev */
/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::Sensors() */
int _ZN7android8hardware7sensors4V1_014implementation7SensorsC1Ev(void);

/* Symbol: _ZN22sensors_poll_context_t18inject_sensor_dataEPK15sensors_event_t */
/* Demangled: sensors_poll_context_t::inject_sensor_data(sensors_event_t const*) */
int _ZN22sensors_poll_context_t18inject_sensor_dataEPK15sensors_event_t(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI10FullHandleiEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<FullHandle, int>, std::__1::__map_value_compare<FullHandle, std::__1::__value_type<FullHandle, int>, std::__1::less<FullHandle>, true>, std::__1::allocator<std::__1::__value_type<FullHandle, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<FullHandle, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI10FullHandleiEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_SENSORS_1_0_IMPL_MEDIATEK_H */
