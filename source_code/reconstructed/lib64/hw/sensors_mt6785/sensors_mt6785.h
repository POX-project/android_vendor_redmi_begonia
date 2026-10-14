/*
 * Reverse-Engineered ABI Specification for: sensors.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: sensors.mt6785.so
 */

#ifndef BEGONIA_RE_SENSORS_MT6785_H
#define BEGONIA_RE_SENSORS_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZN15BiometricSensorC1Ev */
/* Demangled: BiometricSensor::BiometricSensor() */
int _ZN15BiometricSensorC1Ev(void);

/* Symbol: _ZN22sensors_poll_context_t8activateEii */
/* Demangled: sensors_poll_context_t::activate(int, int) */
int _ZN22sensors_poll_context_t8activateEii(void);

/* Symbol: _ZNK7android6VectorI8sensor_tE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<sensor_t>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI8sensor_tE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN12MtkInterface18gyroRunCalibrationEP10sensorDataS1_ */
/* Demangled: MtkInterface::gyroRunCalibration(sensorData*, sensorData*) */
int _ZN12MtkInterface18gyroRunCalibrationEP10sensorDataS1_(void);

/* Symbol: _ZN12MtkInterfaceD1Ev */
/* Demangled: MtkInterface::~MtkInterface() */
int _ZN12MtkInterfaceD1Ev(void);

/* Symbol: _ZNK7android9JSONValue4typeEv */
/* Demangled: android::JSONValue::type() const */
int _ZNK7android9JSONValue4typeEv(void);

/* Symbol: _ZNK7android9JSONValue9getStringEPNS_7AStringE */
/* Demangled: android::JSONValue::getString(android::AString*) const */
int _ZNK7android9JSONValue9getStringEPNS_7AStringE(void);

/* Symbol: _ZN14MagneticSensor17magAccuracyUpdateEfffh */
/* Demangled: MagneticSensor::magAccuracyUpdate(float, float, float, unsigned char) */
int _ZN14MagneticSensor17magAccuracyUpdateEfffh(void);

/* Symbol: _ZN15SituationSensor6enableEii */
/* Demangled: SituationSensor::enable(int, int) */
int _ZN15SituationSensor6enableEii(void);

/* Symbol: _ZN25SensorEventCircularReader19selectSensorEventFdEPKc */
/* Demangled: SensorEventCircularReader::selectSensorEventFd(char const*) */
int _ZN25SensorEventCircularReader19selectSensorEventFdEPKc(void);

/* Symbol: _ZN7android9JSONArrayD0Ev */
/* Demangled: android::JSONArray::~JSONArray() */
int _ZN7android9JSONArrayD0Ev(void);

/* Symbol: _ZN14PressureSensor8setDelayEil */
/* Demangled: PressureSensor::setDelay(int, long) */
int _ZN14PressureSensor8setDelayEil(void);

/* Symbol: _ZN15PedometerSensor12processEventEPK12sensor_event */
/* Demangled: PedometerSensor::processEvent(sensor_event const*) */
int _ZN15PedometerSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN12MtkInterface14getLinearaccelEP10sensorData */
/* Demangled: MtkInterface::getLinearaccel(sensorData*) */
int _ZN12MtkInterface14getLinearaccelEP10sensorData(void);

/* Symbol: _ZTV12MtkInterface */
/* Demangled: vtable for MtkInterface */
extern void* _ZTV12MtkInterface;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, int>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE(void);

/* Symbol: _ZN15AmbiLightSensor12processEventEPK12sensor_event */
/* Demangled: AmbiLightSensor::processEvent(sensor_event const*) */
int _ZN15AmbiLightSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN15SituationSensorD2Ev */
/* Demangled: SituationSensor::~SituationSensor() */
int _ZN15SituationSensorD2Ev(void);

/* Symbol: _ZN15ScpFusionSensor8setDelayEil */
/* Demangled: ScpFusionSensor::setDelay(int, long) */
int _ZN15ScpFusionSensor8setDelayEil(void);

/* Symbol: _ZN13SensorManager19getSensorReportModeEi */
/* Demangled: SensorManager::getSensorReportMode(int) */
int _ZN13SensorManager19getSensorReportModeEi(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEEE;

/* Symbol: _ZN15VendorInterface23VendorInterfaceInstanceE */
/* Demangled: VendorInterface::VendorInterfaceInstance */
extern void* _ZN15VendorInterface23VendorInterfaceInstanceE;

/* Symbol: _ZN25SensorEventCircularReader4fillEv */
/* Demangled: SensorEventCircularReader::fill() */
int _ZN25SensorEventCircularReader4fillEv(void);

/* Symbol: _ZN25SensorEventCircularReader9readEventEPPK12sensor_event */
/* Demangled: SensorEventCircularReader::readEvent(sensor_event const**) */
int _ZN25SensorEventCircularReader9readEventEPPK12sensor_event(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN14HumiditySensor8setDelayEil */
/* Demangled: HumiditySensor::setDelay(int, long) */
int _ZN14HumiditySensor8setDelayEil(void);

/* Symbol: _ZN12MtkInterface11getInstanceEv */
/* Demangled: MtkInterface::getInstance() */
int _ZN12MtkInterface11getInstanceEv(void);

/* Symbol: _ZN7android11SensorSavedC1Ev */
/* Demangled: android::SensorSaved::SensorSaved() */
int _ZN7android11SensorSavedC1Ev(void);

/* Symbol: _ZN14ApFusionSensor11reportFlushEi */
/* Demangled: ApFusionSensor::reportFlush(int) */
int _ZN14ApFusionSensor11reportFlushEi(void);

/* Symbol: _ZN14MagneticSensor8setEventEP15sensors_event_t */
/* Demangled: MagneticSensor::setEvent(sensors_event_t*) */
int _ZN14MagneticSensor8setEventEP15sensors_event_t(void);

/* Symbol: _ZN22sensors_poll_context_t11getInstanceEv */
/* Demangled: sensors_poll_context_t::getInstance() */
int _ZN22sensors_poll_context_t11getInstanceEv(void);

/* Symbol: _ZN13SensorManager4Info17selectBatchParamsEv */
/* Demangled: SensorManager::Info::selectBatchParams() */
int _ZN13SensorManager4Info17selectBatchParamsEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_ */
/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > > > >::__erase_unique<int>(int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIiEEmRKT_(void);

/* Symbol: _ZN19VirtGyroscopeSensor12pendingEventEv */
/* Demangled: VirtGyroscopeSensor::pendingEvent() */
int _ZN19VirtGyroscopeSensor12pendingEventEv(void);

/* Symbol: _ZN19VirtGyroscopeSensor23getVirtualGyroAndReportEv */
/* Demangled: VirtGyroscopeSensor::getVirtualGyroAndReport() */
int _ZN19VirtGyroscopeSensor23getVirtualGyroAndReportEv(void);

/* Symbol: _ZN15ProximitySensorD0Ev */
/* Demangled: ProximitySensor::~ProximitySensor() */
int _ZN15ProximitySensorD0Ev(void);

/* Symbol: _ZN14MagneticSensorC1Ev */
/* Demangled: MagneticSensor::MagneticSensor() */
int _ZN14MagneticSensorC1Ev(void);

/* Symbol: _ZN16SensorConnection13flushCountAddEi */
/* Demangled: SensorConnection::flushCountAdd(int) */
int _ZN16SensorConnection13flushCountAddEi(void);

/* Symbol: _ZN12MtkInterface20MtkInterfaceInstanceE */
/* Demangled: MtkInterface::MtkInterfaceInstance */
extern void* _ZN12MtkInterface20MtkInterfaceInstanceE;

/* Symbol: _ZN17SensorCalibration14magSetGyroDataEP10sensorData */
/* Demangled: SensorCalibration::magSetGyroData(sensorData*) */
int _ZN17SensorCalibration14magSetGyroDataEP10sensorData(void);

/* Symbol: _ZN7android9JSONValueD2Ev */
/* Demangled: android::JSONValue::~JSONValue() */
int _ZN7android9JSONValueD2Ev(void);

/* Symbol: _ZN15WakeUpSetSensorD2Ev */
/* Demangled: WakeUpSetSensor::~WakeUpSetSensor() */
int _ZN15WakeUpSetSensorD2Ev(void);

/* Symbol: _ZN25SensorEventCircularReader10getWriteFdEv */
/* Demangled: SensorEventCircularReader::getWriteFd() */
int _ZN25SensorEventCircularReader10getWriteFdEv(void);

/* Symbol: _ZN10SensorBase8setEventEP15sensors_event_t */
/* Demangled: SensorBase::setEvent(sensors_event_t*) */
int _ZN10SensorBase8setEventEP15sensors_event_t(void);

/* Symbol: _ZN10SensorList13getSensorListEPPK8sensor_t */
/* Demangled: SensorList::getSensorList(sensor_t const**) */
int _ZN10SensorList13getSensorListEPPK8sensor_t(void);

/* Symbol: _ZN7android4File4readEPvm */
/* Demangled: android::File::read(void*, unsigned long) */
int _ZN7android4File4readEPvm(void);

/* Symbol: _ZN17DirectChannelBase5writeEPK15sensors_event_t */
/* Demangled: DirectChannelBase::write(sensors_event_t const*) */
int _ZN17DirectChannelBase5writeEPK15sensors_event_t(void);

/* Symbol: _ZN13SensorManager5batchEP16SensorConnectionill */
/* Demangled: SensorManager::batch(SensorConnection*, int, long, long) */
int _ZN13SensorManager5batchEP16SensorConnectionill(void);

/* Symbol: _ZN19AshmemDirectChannelD2Ev */
/* Demangled: AshmemDirectChannel::~AshmemDirectChannel() */
int _ZN19AshmemDirectChannelD2Ev(void);

/* Symbol: _ZN15ProximitySensor8setDelayEil */
/* Demangled: ProximitySensor::setDelay(int, long) */
int _ZN15ProximitySensor8setDelayEil(void);

/* Symbol: _ZN14ActivitySensor5flushEi */
/* Demangled: ActivitySensor::flush(int) */
int _ZN14ActivitySensor5flushEi(void);

/* Symbol: _ZN17SensorCalibrationD1Ev */
/* Demangled: SensorCalibration::~SensorCalibration() */
int _ZN17SensorCalibrationD1Ev(void);

/* Symbol: _ZNK7android6VectorI8sensor_tE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<sensor_t>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI8sensor_tE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android9JSONValue10setBooleanEb */
/* Demangled: android::JSONValue::setBoolean(bool) */
int _ZN7android9JSONValue10setBooleanEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZN17HwGyroscopeSensorD2Ev */
/* Demangled: HwGyroscopeSensor::~HwGyroscopeSensor() */
int _ZN17HwGyroscopeSensorD2Ev(void);

/* Symbol: _ZN17StepCounterSensorC2Ev */
/* Demangled: StepCounterSensor::StepCounterSensor() */
int _ZN17StepCounterSensorC2Ev(void);

/* Symbol: _ZN12MtkInterface24gyroSetTempCaliParameterEP10sensorData */
/* Demangled: MtkInterface::gyroSetTempCaliParameter(sensorData*) */
int _ZN12MtkInterface24gyroSetTempCaliParameterEP10sensorData(void);

/* Symbol: _ZN7android10JSONObjectC1Ev */
/* Demangled: android::JSONObject::JSONObject() */
int _ZN7android10JSONObjectC1Ev(void);

/* Symbol: _ZN15ScpFusionSensor5flushEi */
/* Demangled: ScpFusionSensor::flush(int) */
int _ZN15ScpFusionSensor5flushEi(void);

/* Symbol: _ZTV10SensorBase */
/* Demangled: vtable for SensorBase */
extern void* _ZTV10SensorBase;

/* Symbol: _ZN7android4FileD1Ev */
/* Demangled: android::File::~File() */
int _ZN7android4FileD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > > > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN15PedometerSensorC2Ev */
/* Demangled: PedometerSensor::PedometerSensor() */
int _ZN15PedometerSensorC2Ev(void);

/* Symbol: _ZN15WakeUpSetSensor10reportDataEiP15sensors_event_t */
/* Demangled: WakeUpSetSensor::reportData(int, sensors_event_t*) */
int _ZN15WakeUpSetSensor10reportDataEiP15sensors_event_t(void);

/* Symbol: _ZN17SensorCalibration18magInitCalibrationEv */
/* Demangled: SensorCalibration::magInitCalibration() */
int _ZN17SensorCalibration18magInitCalibrationEv(void);

/* Symbol: _ZN7android9JSONValue8setInt32Ei */
/* Demangled: android::JSONValue::setInt32(int) */
int _ZN7android9JSONValue8setInt32Ei(void);

/* Symbol: _ZN18AccelerationSensorD1Ev */
/* Demangled: AccelerationSensor::~AccelerationSensor() */
int _ZN18AccelerationSensorD1Ev(void);

/* Symbol: _ZN14HumiditySensorD0Ev */
/* Demangled: HumiditySensor::~HumiditySensor() */
int _ZN14HumiditySensorD0Ev(void);

/* Symbol: _ZN16SensorConnection16hasHandleIndexOfEj */
/* Demangled: SensorConnection::hasHandleIndexOf(unsigned int) */
int _ZN16SensorConnection16hasHandleIndexOfEj(void);

/* Symbol: _ZNK7android12SortedVectorIP16SensorConnectionE12do_constructEPvm */
/* Demangled: android::SortedVector<SensorConnection*>::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorIP16SensorConnectionE12do_constructEPvm(void);

/* Symbol: _ZN19VirtGyroscopeSensor8setDelayEil */
/* Demangled: VirtGyroscopeSensor::setDelay(int, long) */
int _ZN19VirtGyroscopeSensor8setDelayEil(void);

/* Symbol: _ZN15VendorInterface14magCalibrationEP10sensorDataS1_ */
/* Demangled: VendorInterface::magCalibration(sensorData*, sensorData*) */
int _ZN15VendorInterface14magCalibrationEP10sensorDataS1_(void);

/* Symbol: _ZN15VendorInterfaceD0Ev */
/* Demangled: VendorInterface::~VendorInterface() */
int _ZN15VendorInterfaceD0Ev(void);

/* Symbol: _ZN25SensorEventCircularReaderC1Em */
/* Demangled: SensorEventCircularReader::SensorEventCircularReader(unsigned long) */
int _ZN25SensorEventCircularReaderC1Em(void);

/* Symbol: _ZN14LockfreeBufferC2EPvm */
/* Demangled: LockfreeBuffer::LockfreeBuffer(void*, unsigned long) */
int _ZN14LockfreeBufferC2EPvm(void);

/* Symbol: _ZN17GrallocHalWrapper4lockEPK13native_handleiiiiiPPv */
/* Demangled: GrallocHalWrapper::lock(native_handle const*, int, int, int, int, int, void**) */
int _ZN17GrallocHalWrapper4lockEPK13native_handleiiiiiPPv(void);

/* Symbol: _ZN15AmbiLightSensorD1Ev */
/* Demangled: AmbiLightSensor::~AmbiLightSensor() */
int _ZN15AmbiLightSensorD1Ev(void);

/* Symbol: _ZN17StepCounterSensor10readEventsEP15sensors_event_ti */
/* Demangled: StepCounterSensor::readEvents(sensors_event_t*, int) */
int _ZN17StepCounterSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN12MtkInterfaceC2Ev */
/* Demangled: MtkInterface::MtkInterface() */
int _ZN12MtkInterfaceC2Ev(void);

/* Symbol: _ZTV17HwGyroscopeSensor */
/* Demangled: vtable for HwGyroscopeSensor */
extern void* _ZTV17HwGyroscopeSensor;

/* Symbol: _ZN17StepCounterSensor12pendingEventEv */
/* Demangled: StepCounterSensor::pendingEvent() */
int _ZN17StepCounterSensor12pendingEventEv(void);

/* Symbol: _ZN7android9JSONArrayC1Ev */
/* Demangled: android::JSONArray::JSONArray() */
int _ZN7android9JSONArrayC1Ev(void);

/* Symbol: _ZN14ApFusionSensorD0Ev */
/* Demangled: ApFusionSensor::~ApFusionSensor() */
int _ZN14ApFusionSensorD0Ev(void);

/* Symbol: _ZN13SensorManager5flushEP16SensorConnectioni */
/* Demangled: SensorManager::flush(SensorConnection*, int) */
int _ZN13SensorManager5flushEP16SensorConnectioni(void);

/* Symbol: _ZN15VendorInterface14getLinearaccelEP10sensorData */
/* Demangled: VendorInterface::getLinearaccel(sensorData*) */
int _ZN15VendorInterface14getLinearaccelEP10sensorData(void);

/* Symbol: _ZN19VirtGyroscopeSensor6enableEii */
/* Demangled: VirtGyroscopeSensor::enable(int, int) */
int _ZN19VirtGyroscopeSensor6enableEii(void);

/* Symbol: _ZN14PressureSensor12processEventEPK12sensor_event */
/* Demangled: PressureSensor::processEvent(sensor_event const*) */
int _ZN14PressureSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN10SensorListD1Ev */
/* Demangled: SensorList::~SensorList() */
int _ZN10SensorListD1Ev(void);

/* Symbol: _ZNK7android6VectorINS_9JSONValueEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::JSONValue>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_9JSONValueEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android9JSONValue5ParseEPKcmPS0_ */
/* Demangled: android::JSONValue::Parse(char const*, unsigned long, android::JSONValue*) */
int _ZN7android9JSONValue5ParseEPKcmPS0_(void);

/* Symbol: _ZN13SensorManager9pollEventEP15sensors_event_ti */
/* Demangled: SensorManager::pollEvent(sensors_event_t*, int) */
int _ZN13SensorManager9pollEventEP15sensors_event_ti(void);

/* Symbol: _ZN20DirectChannelManager24mergeDirectReportRequestEi */
/* Demangled: DirectChannelManager::mergeDirectReportRequest(int) */
int _ZN20DirectChannelManager24mergeDirectReportRequestEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE(void);

/* Symbol: _ZN19AshmemDirectChannelC2EPK20sensors_direct_mem_t */
/* Demangled: AshmemDirectChannel::AshmemDirectChannel(sensors_direct_mem_t const*) */
int _ZN19AshmemDirectChannelC2EPK20sensors_direct_mem_t(void);

/* Symbol: _ZN13SensorManager8setEventEP15sensors_event_tii */
/* Demangled: SensorManager::setEvent(sensors_event_t*, int, int) */
int _ZN13SensorManager8setEventEP15sensors_event_tii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN17SensorCalibration18gyroRunCalibrationEP10sensorDataS1_ */
/* Demangled: SensorCalibration::gyroRunCalibration(sensorData*, sensorData*) */
int _ZN17SensorCalibration18gyroRunCalibrationEP10sensorDataS1_(void);

/* Symbol: _ZN15BiometricSensor12pendingEventEv */
/* Demangled: BiometricSensor::pendingEvent() */
int _ZN15BiometricSensor12pendingEventEv(void);

/* Symbol: _ZN10SensorList14initSensorListEv */
/* Demangled: SensorList::initSensorList() */
int _ZN10SensorList14initSensorListEv(void);

/* Symbol: _ZN15ProximitySensorC1Ev */
/* Demangled: ProximitySensor::ProximitySensor() */
int _ZN15ProximitySensorC1Ev(void);

/* Symbol: _ZN13SensorManager11autoDisableEP15sensors_event_tm */
/* Demangled: SensorManager::autoDisable(sensors_event_t*, unsigned long) */
int _ZN13SensorManager11autoDisableEP15sensors_event_tm(void);

/* Symbol: _ZN19VirtGyroscopeSensorD0Ev */
/* Demangled: VirtGyroscopeSensor::~VirtGyroscopeSensor() */
int _ZN19VirtGyroscopeSensorD0Ev(void);

/* Symbol: _ZN7android11SensorSaved19getCalibrationFloatEPKcS2_Pfm */
/* Demangled: android::SensorSaved::getCalibrationFloat(char const*, char const*, float*, unsigned long) */
int _ZN7android11SensorSaved19getCalibrationFloatEPKcS2_Pfm(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN14PressureSensor5flushEi */
/* Demangled: PressureSensor::flush(int) */
int _ZN14PressureSensor5flushEi(void);

/* Symbol: _ZN12MtkInterface14getOrientationEP10sensorData */
/* Demangled: MtkInterface::getOrientation(sensorData*) */
int _ZN12MtkInterface14getOrientationEP10sensorData(void);

/* Symbol: _ZN12MtkInterface17getRotationVectorEP10sensorData */
/* Demangled: MtkInterface::getRotationVector(sensorData*) */
int _ZN12MtkInterface17getRotationVectorEP10sensorData(void);

/* Symbol: _ZNK7android6VectorINS_9JSONValueEE10do_destroyEPvm */
/* Demangled: android::Vector<android::JSONValue>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_9JSONValueEE10do_destroyEPvm(void);

/* Symbol: _ZN20GrallocDirectChannelD2Ev */
/* Demangled: GrallocDirectChannel::~GrallocDirectChannel() */
int _ZN20GrallocDirectChannelD2Ev(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE5sLockE */
/* Demangled: android::Singleton<GrallocHalWrapper>::sLock */
extern void* _ZN7android9SingletonI17GrallocHalWrapperE5sLockE;

/* Symbol: _ZN15ProximitySensor5flushEi */
/* Demangled: ProximitySensor::flush(int) */
int _ZN15ProximitySensor5flushEi(void);

/* Symbol: _ZN15BiometricSensorD1Ev */
/* Demangled: BiometricSensor::~BiometricSensor() */
int _ZN15BiometricSensorD1Ev(void);

/* Symbol: _ZN20DirectChannelManager11getInstanceEv */
/* Demangled: DirectChannelManager::getInstance() */
int _ZN20DirectChannelManager11getInstanceEv(void);

/* Symbol: _ZN13SensorManager19getSensorMinDelayNsEi */
/* Demangled: SensorManager::getSensorMinDelayNs(int) */
int _ZN13SensorManager19getSensorMinDelayNsEi(void);

/* Symbol: _ZN12MtkInterface11setGyroDataEP10sensorData */
/* Demangled: MtkInterface::setGyroData(sensorData*) */
int _ZN12MtkInterface11setGyroDataEP10sensorData(void);

/* Symbol: _ZN17SensorCalibrationC2Ev */
/* Demangled: SensorCalibration::SensorCalibration() */
int _ZN17SensorCalibrationC2Ev(void);

/* Symbol: _ZNK7android6VectorINS_9JSONValueEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::JSONValue>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_9JSONValueEE8do_splatEPvPKvm(void);

/* Symbol: _ZN15PedometerSensor10readEventsEP15sensors_event_ti */
/* Demangled: PedometerSensor::readEvents(sensors_event_t*, int) */
int _ZN15PedometerSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN14ApFusionSensor5flushEi */
/* Demangled: ApFusionSensor::flush(int) */
int _ZN14ApFusionSensor5flushEi(void);

/* Symbol: _ZN14MagneticSensor6enableEii */
/* Demangled: MagneticSensor::enable(int, int) */
int _ZN14MagneticSensor6enableEii(void);

/* Symbol: _ZTV15ProximitySensor */
/* Demangled: vtable for ProximitySensor */
extern void* _ZTV15ProximitySensor;

/* Symbol: _ZNK7android12SortedVectorIjE10do_destroyEPvm */
/* Demangled: android::SortedVector<unsigned int>::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorIjE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorI8sensor_tE12do_constructEPvm */
/* Demangled: android::Vector<sensor_t>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorI8sensor_tE12do_constructEPvm(void);

/* Symbol: _ZN7android4FileC2Ev */
/* Demangled: android::File::File() */
int _ZN7android4FileC2Ev(void);

/* Symbol: _ZNK7android9JSONValue8getArrayEPNS_2spINS_9JSONArrayEEE */
/* Demangled: android::JSONValue::getArray(android::sp<android::JSONArray>*) const */
int _ZNK7android9JSONValue8getArrayEPNS_2spINS_9JSONArrayEEE(void);

/* Symbol: _ZN7android11SensorSavedD1Ev */
/* Demangled: android::SensorSaved::~SensorSaved() */
int _ZN7android11SensorSavedD1Ev(void);

/* Symbol: _ZN14PressureSensor5batchEiill */
/* Demangled: PressureSensor::batch(int, int, long, long) */
int _ZN14PressureSensor5batchEiill(void);

/* Symbol: _ZN14HumiditySensorC1Ev */
/* Demangled: HumiditySensor::HumiditySensor() */
int _ZN14HumiditySensorC1Ev(void);

/* Symbol: _ZN18AccelerationSensorC2Ev */
/* Demangled: AccelerationSensor::AccelerationSensor() */
int _ZN18AccelerationSensorC2Ev(void);

/* Symbol: _ZN14ApFusionSensor6enableEii */
/* Demangled: ApFusionSensor::enable(int, int) */
int _ZN14ApFusionSensor6enableEii(void);

/* Symbol: _ZN13SensorManager13parsePollDataEP15sensors_event_tS1_m */
/* Demangled: SensorManager::parsePollData(sensors_event_t*, sensors_event_t*, unsigned long) */
int _ZN13SensorManager13parsePollDataEP15sensors_event_tS1_m(void);

/* Symbol: _ZN13SensorManager4Info25removeBatchParamsForIdentEP16SensorConnection */
/* Demangled: SensorManager::Info::removeBatchParamsForIdent(SensorConnection*) */
int _ZN13SensorManager4Info25removeBatchParamsForIdentEP16SensorConnection(void);

/* Symbol: _ZN16SensorConnectionC1Ev */
/* Demangled: SensorConnection::SensorConnection() */
int _ZN16SensorConnectionC1Ev(void);

/* Symbol: _ZN25SensorEventCircularReader4nextEv */
/* Demangled: SensorEventCircularReader::next() */
int _ZN25SensorEventCircularReader4nextEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_13unordered_mapIiN20DirectChannelManager23DirectChannelTimingInfoENS_4hashIiEENS_8equal_toIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_22__unordered_map_hasherIiSF_S6_Lb1EEENS_21__unordered_map_equalIiSF_S8_Lb1EEENS9_ISF_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_13unordered_mapIiN20DirectChannelManager23DirectChannelTimingInfoENS_4hashIiEENS_8equal_toIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_22__unordered_map_hasherIiSF_S6_Lb1EEENS_21__unordered_map_equalIiSF_S8_Lb1EEENS9_ISF_EEE6rehashEm(void);

/* Symbol: _ZN17GrallocHalWrapperC1Ev */
/* Demangled: GrallocHalWrapper::GrallocHalWrapper() */
int _ZN17GrallocHalWrapperC1Ev(void);

/* Symbol: _ZTV15PedometerSensor */
/* Demangled: vtable for PedometerSensor */
extern void* _ZTV15PedometerSensor;

/* Symbol: _ZN22sensors_poll_context_t21computeCountForEachFdEiPiS0_ */
/* Demangled: sensors_poll_context_t::computeCountForEachFd(int, int*, int*) */
int _ZN22sensors_poll_context_t21computeCountForEachFdEiPiS0_(void);

/* Symbol: _ZN15VendorInterfaceC1Ev */
/* Demangled: VendorInterface::VendorInterface() */
int _ZN15VendorInterfaceC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN15AmbiLightSensorC2Ev */
/* Demangled: AmbiLightSensor::AmbiLightSensor() */
int _ZN15AmbiLightSensorC2Ev(void);

/* Symbol: _ZN15SituationSensor10readEventsEP15sensors_event_ti */
/* Demangled: SituationSensor::readEvents(sensors_event_t*, int) */
int _ZN15SituationSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEEE;

/* Symbol: _ZN14MagneticSensorD1Ev */
/* Demangled: MagneticSensor::~MagneticSensor() */
int _ZN14MagneticSensorD1Ev(void);

/* Symbol: _ZN14ApFusionSensorC1Ev */
/* Demangled: ApFusionSensor::ApFusionSensor() */
int _ZN14ApFusionSensorC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorIP16SensorConnectionE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<SensorConnection*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIP16SensorConnectionE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN12MtkInterface10setMagDataEP10sensorData */
/* Demangled: MtkInterface::setMagData(sensorData*) */
int _ZN12MtkInterface10setMagDataEP10sensorData(void);

/* Symbol: _ZNK7android10JSONObject16internalToStringEm */
/* Demangled: android::JSONObject::internalToString(unsigned long) const */
int _ZNK7android10JSONObject16internalToStringEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJNS_4pairIiS6_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > > > >::__emplace_unique_key_args<int, std::__1::pair<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > > >(int const&, std::__1::pair<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJNS_4pairIiS6_EEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN14MagneticSensor5flushEi */
/* Demangled: MagneticSensor::flush(int) */
int _ZN14MagneticSensor5flushEi(void);

/* Symbol: _ZN19VirtGyroscopeSensor5flushEi */
/* Demangled: VirtGyroscopeSensor::flush(int) */
int _ZN19VirtGyroscopeSensor5flushEi(void);

/* Symbol: _ZN15ScpFusionSensor12processEventEPK12sensor_event */
/* Demangled: ScpFusionSensor::processEvent(sensor_event const*) */
int _ZN15ScpFusionSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZNK7android12SortedVectorIjE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<unsigned int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIjE7do_copyEPvPKvm(void);

/* Symbol: _ZTV19VirtGyroscopeSensor */
/* Demangled: vtable for VirtGyroscopeSensor */
extern void* _ZTV19VirtGyroscopeSensor;

/* Symbol: _ZN15WakeUpSetSensor12processEventEPK12sensor_event */
/* Demangled: WakeUpSetSensor::processEvent(sensor_event const*) */
int _ZN15WakeUpSetSensor12processEventEPK12sensor_event(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN10SensorListC2Ev */
/* Demangled: SensorList::SensorList() */
int _ZN10SensorListC2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void);

/* Symbol: _ZN17StepCounterSensor8setDelayEil */
/* Demangled: StepCounterSensor::setDelay(int, long) */
int _ZN17StepCounterSensor8setDelayEil(void);

/* Symbol: _ZN15BiometricSensor5flushEi */
/* Demangled: BiometricSensor::flush(int) */
int _ZN15BiometricSensor5flushEi(void);

/* Symbol: _ZN15VendorInterface11getInstanceEv */
/* Demangled: VendorInterface::getInstance() */
int _ZN15VendorInterface11getInstanceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN20GrallocDirectChannelC1EPK20sensors_direct_mem_t */
/* Demangled: GrallocDirectChannel::GrallocDirectChannel(sensors_direct_mem_t const*) */
int _ZN20GrallocDirectChannelC1EPK20sensors_direct_mem_t(void);

/* Symbol: _ZN17StepCounterSensorD2Ev */
/* Demangled: StepCounterSensor::~StepCounterSensor() */
int _ZN17StepCounterSensorD2Ev(void);

/* Symbol: _ZN13SensorManager16setSensorContextEP22sensors_poll_context_t */
/* Demangled: SensorManager::setSensorContext(sensors_poll_context_t*) */
int _ZN13SensorManager16setSensorContextEP22sensors_poll_context_t(void);

/* Symbol: _ZN22sensors_poll_context_t8setDelayEil */
/* Demangled: sensors_poll_context_t::setDelay(int, long) */
int _ZN22sensors_poll_context_t8setDelayEil(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN7android10JSONObjectD1Ev */
/* Demangled: android::JSONObject::~JSONObject() */
int _ZN7android10JSONObjectD1Ev(void);

/* Symbol: _ZTV17StepCounterSensor */
/* Demangled: vtable for StepCounterSensor */
extern void* _ZTV17StepCounterSensor;

/* Symbol: _ZN15PedometerSensorD2Ev */
/* Demangled: PedometerSensor::~PedometerSensor() */
int _ZN15PedometerSensorD2Ev(void);

/* Symbol: _ZTV14HumiditySensor */
/* Demangled: vtable for HumiditySensor */
extern void* _ZTV14HumiditySensor;

/* Symbol: _ZTV15BiometricSensor */
/* Demangled: vtable for BiometricSensor */
extern void* _ZTV15BiometricSensor;

/* Symbol: _ZN19VirtGyroscopeSensorC1Ev */
/* Demangled: VirtGyroscopeSensor::VirtGyroscopeSensor() */
int _ZN19VirtGyroscopeSensorC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorIP16SensorConnectionE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<SensorConnection*>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIP16SensorConnectionE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android6VectorINS_9JSONValueEE12do_constructEPvm */
/* Demangled: android::Vector<android::JSONValue>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_9JSONValueEE12do_constructEPvm(void);

/* Symbol: _ZN14MagneticSensor8setDelayEil */
/* Demangled: MagneticSensor::setDelay(int, long) */
int _ZN14MagneticSensor8setDelayEil(void);

/* Symbol: _ZN14PressureSensor10readEventsEP15sensors_event_ti */
/* Demangled: PressureSensor::readEvents(sensors_event_t*, int) */
int _ZN14PressureSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN17GrallocHalWrapper14registerBufferEPK13native_handle */
/* Demangled: GrallocHalWrapper::registerBuffer(native_handle const*) */
int _ZN17GrallocHalWrapper14registerBufferEPK13native_handle(void);

/* Symbol: _ZN10SensorBase12getTimestampEv */
/* Demangled: SensorBase::getTimestamp() */
int _ZN10SensorBase12getTimestampEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEEE;

/* Symbol: _ZN15VendorInterface14getOrientationEP10sensorData */
/* Demangled: VendorInterface::getOrientation(sensorData*) */
int _ZN15VendorInterface14getOrientationEP10sensorData(void);

/* Symbol: _ZN15VendorInterface14getVirtualGyroEP10sensorData */
/* Demangled: VendorInterface::getVirtualGyro(sensorData*) */
int _ZN15VendorInterface14getVirtualGyroEP10sensorData(void);

/* Symbol: _ZTVN7android9JSONArrayE */
/* Demangled: vtable for android::JSONArray */
extern void* _ZTVN7android9JSONArrayE;

/* Symbol: _ZN15AmbiLightSensor18load_prox2als_biasEPKcPiS2_ */
/* Demangled: AmbiLightSensor::load_prox2als_bias(char const*, int*, int*) */
int _ZN15AmbiLightSensor18load_prox2als_biasEPKcPiS2_(void);

/* Symbol: _ZN12MtkInterfaceD2Ev */
/* Demangled: MtkInterface::~MtkInterface() */
int _ZN12MtkInterfaceD2Ev(void);

/* Symbol: _ZN7android4File5setToEPKcS2_ */
/* Demangled: android::File::setTo(char const*, char const*) */
int _ZN7android4File5setToEPKcS2_(void);

/* Symbol: _ZN14LockfreeBuffer5writeEPK15sensors_event_tm */
/* Demangled: LockfreeBuffer::write(sensors_event_t const*, unsigned long) */
int _ZN14LockfreeBuffer5writeEPK15sensors_event_tm(void);

/* Symbol: _ZN17HwGyroscopeSensor6enableEii */
/* Demangled: HwGyroscopeSensor::enable(int, int) */
int _ZN17HwGyroscopeSensor6enableEii(void);

/* Symbol: _ZN19VirtGyroscopeSensor5batchEiill */
/* Demangled: VirtGyroscopeSensor::batch(int, int, long, long) */
int _ZN19VirtGyroscopeSensor5batchEiill(void);

/* Symbol: _ZN15BiometricSensorC2Ev */
/* Demangled: BiometricSensor::BiometricSensor() */
int _ZN15BiometricSensorC2Ev(void);

/* Symbol: _ZN10SensorBase12pendingEventEv */
/* Demangled: SensorBase::pendingEvent() */
int _ZN10SensorBase12pendingEventEv(void);

/* Symbol: _ZN7android9JSONArrayD1Ev */
/* Demangled: android::JSONArray::~JSONArray() */
int _ZN7android9JSONArrayD1Ev(void);

/* Symbol: _ZN19VirtGyroscopeSensor10reportDataEP10sensorData */
/* Demangled: VirtGyroscopeSensor::reportData(sensorData*) */
int _ZN19VirtGyroscopeSensor10reportDataEP10sensorData(void);

/* Symbol: _ZN14HumiditySensor12processEventEPK12sensor_event */
/* Demangled: HumiditySensor::processEvent(sensor_event const*) */
int _ZN14HumiditySensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN15ScpFusionSensorD0Ev */
/* Demangled: ScpFusionSensor::~ScpFusionSensor() */
int _ZN15ScpFusionSensorD0Ev(void);

/* Symbol: _ZN13SensorManager4Info22setBatchParamsForIdentEP16SensorConnectionill */
/* Demangled: SensorManager::Info::setBatchParamsForIdent(SensorConnection*, int, long, long) */
int _ZN13SensorManager4Info22setBatchParamsForIdentEP16SensorConnectionill(void);

/* Symbol: _ZN19VirtGyroscopeSensor13setFlushEventEP15sensors_event_t */
/* Demangled: VirtGyroscopeSensor::setFlushEvent(sensors_event_t*) */
int _ZN19VirtGyroscopeSensor13setFlushEventEP15sensors_event_t(void);

/* Symbol: _ZN7android11SensorSavedC2Ev */
/* Demangled: android::SensorSaved::SensorSaved() */
int _ZN7android11SensorSavedC2Ev(void);

/* Symbol: _ZTV18AccelerationSensor */
/* Demangled: vtable for AccelerationSensor */
extern void* _ZTV18AccelerationSensor;

/* Symbol: _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<unsigned int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN14PressureSensorD0Ev */
/* Demangled: PressureSensor::~PressureSensor() */
int _ZN14PressureSensorD0Ev(void);

/* Symbol: _ZN15WakeUpSetSensor8setEventEP15sensors_event_t */
/* Demangled: WakeUpSetSensor::setEvent(sensors_event_t*) */
int _ZN15WakeUpSetSensor8setEventEP15sensors_event_t(void);

/* Symbol: _ZN14ApFusionSensor23selectBestSampleLatencyEv */
/* Demangled: ApFusionSensor::selectBestSampleLatency() */
int _ZN14ApFusionSensor23selectBestSampleLatencyEv(void);

/* Symbol: _ZN15ProximitySensorD1Ev */
/* Demangled: ProximitySensor::~ProximitySensor() */
int _ZN15ProximitySensorD1Ev(void);

/* Symbol: _ZN25SensorEventCircularReaderD1Ev */
/* Demangled: SensorEventCircularReader::~SensorEventCircularReader() */
int _ZN25SensorEventCircularReaderD1Ev(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN14MagneticSensorC2Ev */
/* Demangled: MagneticSensor::MagneticSensor() */
int _ZN14MagneticSensorC2Ev(void);

/* Symbol: _ZN15BiometricSensor13HandleToIndexEi */
/* Demangled: BiometricSensor::HandleToIndex(int) */
int _ZN15BiometricSensor13HandleToIndexEi(void);

/* Symbol: _ZNK7android12SortedVectorIjE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<unsigned int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIjE8do_splatEPvPKvm(void);

/* Symbol: _ZN15VendorInterface10magInitLibEv */
/* Demangled: VendorInterface::magInitLib() */
int _ZN15VendorInterface10magInitLibEv(void);

/* Symbol: _ZN25SensorEventCircularReader9getReadFdEv */
/* Demangled: SensorEventCircularReader::getReadFd() */
int _ZN25SensorEventCircularReader9getReadFdEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE11hasInstanceEv */
/* Demangled: android::Singleton<GrallocHalWrapper>::hasInstance() */
int _ZN7android9SingletonI17GrallocHalWrapperE11hasInstanceEv(void);

/* Symbol: _ZN14ActivitySensorD0Ev */
/* Demangled: ActivitySensor::~ActivitySensor() */
int _ZN14ActivitySensorD0Ev(void);

/* Symbol: _ZN15ScpFusionSensor5batchEiill */
/* Demangled: ScpFusionSensor::batch(int, int, long, long) */
int _ZN15ScpFusionSensor5batchEiill(void);

/* Symbol: _ZTVN7android12SortedVectorIjEE */
/* Demangled: vtable for android::SortedVector<unsigned int> */
extern void* _ZTVN7android12SortedVectorIjEE;

/* Symbol: _ZN12MtkInterface10getGravityEP10sensorData */
/* Demangled: MtkInterface::getGravity(sensorData*) */
int _ZN12MtkInterface10getGravityEP10sensorData(void);

/* Symbol: _ZN15ScpFusionSensor6enableEii */
/* Demangled: ScpFusionSensor::enable(int, int) */
int _ZN15ScpFusionSensor6enableEii(void);

/* Symbol: _ZN15VendorInterface12magEnableLibEi */
/* Demangled: VendorInterface::magEnableLib(int) */
int _ZN15VendorInterface12magEnableLibEi(void);

/* Symbol: _ZN17SensorCalibrationD2Ev */
/* Demangled: SensorCalibration::~SensorCalibration() */
int _ZN17SensorCalibrationD2Ev(void);

/* Symbol: _ZNK7android9JSONArray16internalToStringEm */
/* Demangled: android::JSONArray::internalToString(unsigned long) const */
int _ZNK7android9JSONArray16internalToStringEm(void);

/* Symbol: _ZN14ApFusionSensor21getUncaliMagAndReportEP15sensors_event_t */
/* Demangled: ApFusionSensor::getUncaliMagAndReport(sensors_event_t*) */
int _ZN14ApFusionSensor21getUncaliMagAndReportEP15sensors_event_t(void);

/* Symbol: _ZN12MtkInterface10setAccDataEP10sensorData */
/* Demangled: MtkInterface::setAccData(sensorData*) */
int _ZN12MtkInterface10setAccDataEP10sensorData(void);

/* Symbol: _ZN12MtkInterface14getGeoMagneticEP10sensorData */
/* Demangled: MtkInterface::getGeoMagnetic(sensorData*) */
int _ZN12MtkInterface14getGeoMagneticEP10sensorData(void);

/* Symbol: _ZN17SensorCalibration18accInitCalibrationEv */
/* Demangled: SensorCalibration::accInitCalibration() */
int _ZN17SensorCalibration18accInitCalibrationEv(void);

/* Symbol: _ZN7android4File6seekToEli */
/* Demangled: android::File::seekTo(long, int) */
int _ZN7android4File6seekToEli(void);

/* Symbol: _ZN7android10JSONObjectC2Ev */
/* Demangled: android::JSONObject::JSONObject() */
int _ZN7android10JSONObjectC2Ev(void);

/* Symbol: _ZN7android11SensorSaved20saveCalibrationInt32EPKcS2_Pim */
/* Demangled: android::SensorSaved::saveCalibrationInt32(char const*, char const*, int*, unsigned long) */
int _ZN7android11SensorSaved20saveCalibrationInt32EPKcS2_Pim(void);

/* Symbol: _ZN15SituationSensorD0Ev */
/* Demangled: SituationSensor::~SituationSensor() */
int _ZN15SituationSensorD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android4FileD2Ev */
/* Demangled: android::File::~File() */
int _ZN7android4FileD2Ev(void);

/* Symbol: _ZN7android9JSONArray8addValueERKNS_9JSONValueE */
/* Demangled: android::JSONArray::addValue(android::JSONValue const&) */
int _ZN7android9JSONArray8addValueERKNS_9JSONValueE(void);

/* Symbol: _ZNK7android9JSONArray8getValueEmPNS_9JSONValueE */
/* Demangled: android::JSONArray::getValue(unsigned long, android::JSONValue*) const */
int _ZNK7android9JSONArray8getValueEmPNS_9JSONValueE(void);

/* Symbol: _ZN14ActivitySensor12pendingEventEv */
/* Demangled: ActivitySensor::pendingEvent() */
int _ZN14ActivitySensor12pendingEventEv(void);

/* Symbol: _ZN20DirectChannelManager21sendDirectReportEventEPK15sensors_event_tm */
/* Demangled: DirectChannelManager::sendDirectReportEvent(sensors_event_t const*, unsigned long) */
int _ZN20DirectChannelManager21sendDirectReportEventEPK15sensors_event_tm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unique_ptr<DirectChannelBase, std::__1::default_delete<DirectChannelBase> > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10unique_ptrI17DirectChannelBaseNS_14default_deleteIS3_EEEEEENS_22__unordered_map_hasherIiS7_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS7_NS_8equal_toIiEELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZN18AccelerationSensorD2Ev */
/* Demangled: AccelerationSensor::~AccelerationSensor() */
int _ZN18AccelerationSensorD2Ev(void);

/* Symbol: _ZN14HumiditySensorD1Ev */
/* Demangled: HumiditySensor::~HumiditySensor() */
int _ZN14HumiditySensorD1Ev(void);

/* Symbol: _ZN13SensorManagerC1Ev */
/* Demangled: SensorManager::SensorManager() */
int _ZN13SensorManagerC1Ev(void);

/* Symbol: _ZN16SensorConnectionD1Ev */
/* Demangled: SensorConnection::~SensorConnection() */
int _ZN16SensorConnectionD1Ev(void);

/* Symbol: _ZN17GrallocHalWrapperD1Ev */
/* Demangled: GrallocHalWrapper::~GrallocHalWrapper() */
int _ZN17GrallocHalWrapperD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN15VendorInterfaceD1Ev */
/* Demangled: VendorInterface::~VendorInterface() */
int _ZN15VendorInterfaceD1Ev(void);

/* Symbol: _ZN17SensorCalibration17accGetCalibrationEP10sensorData */
/* Demangled: SensorCalibration::accGetCalibration(sensorData*) */
int _ZN17SensorCalibration17accGetCalibrationEP10sensorData(void);

/* Symbol: _ZN25SensorEventCircularReaderC2Em */
/* Demangled: SensorEventCircularReader::SensorEventCircularReader(unsigned long) */
int _ZN25SensorEventCircularReaderC2Em(void);

/* Symbol: _ZN7android9JSONValue5unsetEv */
/* Demangled: android::JSONValue::unset() */
int _ZN7android9JSONValue5unsetEv(void);

/* Symbol: _ZN15AmbiLightSensorD2Ev */
/* Demangled: AmbiLightSensor::~AmbiLightSensor() */
int _ZN15AmbiLightSensorD2Ev(void);

/* Symbol: _ZN14ActivitySensor10readEventsEP15sensors_event_ti */
/* Demangled: ActivitySensor::readEvents(sensors_event_t*, int) */
int _ZN14ActivitySensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN14ActivitySensor12processEventEPK12sensor_event */
/* Demangled: ActivitySensor::processEvent(sensor_event const*) */
int _ZN14ActivitySensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN15VendorInterface11setGyroDataEP10sensorData */
/* Demangled: VendorInterface::setGyroData(sensorData*) */
int _ZN15VendorInterface11setGyroDataEP10sensorData(void);

/* Symbol: _ZNK7android12SortedVectorIP16SensorConnectionE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<SensorConnection*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIP16SensorConnectionE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android9JSONArrayC2Ev */
/* Demangled: android::JSONArray::JSONArray() */
int _ZN7android9JSONArrayC2Ev(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN15PedometerSensor6enableEii */
/* Demangled: PedometerSensor::enable(int, int) */
int _ZN15PedometerSensor6enableEii(void);

/* Symbol: _ZN14ApFusionSensorD1Ev */
/* Demangled: ApFusionSensor::~ApFusionSensor() */
int _ZN14ApFusionSensorD1Ev(void);

/* Symbol: _ZN15WakeUpSetSensorD0Ev */
/* Demangled: WakeUpSetSensor::~WakeUpSetSensor() */
int _ZN15WakeUpSetSensorD0Ev(void);

/* Symbol: _ZN15ScpFusionSensorC1Ev */
/* Demangled: ScpFusionSensor::ScpFusionSensor() */
int _ZN15ScpFusionSensorC1Ev(void);

/* Symbol: _ZN15AmbiLightSensor6enableEii */
/* Demangled: AmbiLightSensor::enable(int, int) */
int _ZN15AmbiLightSensor6enableEii(void);

/* Symbol: _ZN10SensorListD2Ev */
/* Demangled: SensorList::~SensorList() */
int _ZN10SensorListD2Ev(void);

/* Symbol: _ZN7android9JSONValueC1ERKS0_ */
/* Demangled: android::JSONValue::JSONValue(android::JSONValue const&) */
int _ZN7android9JSONValueC1ERKS0_(void);

/* Symbol: _ZTV15SituationSensor */
/* Demangled: vtable for SituationSensor */
extern void* _ZTV15SituationSensor;

/* Symbol: _ZN13SensorManager22createSensorConnectionEi */
/* Demangled: SensorManager::createSensorConnection(int) */
int _ZN13SensorManager22createSensorConnectionEi(void);

/* Symbol: _ZN20DirectChannelManager18configDirectReportEiii */
/* Demangled: DirectChannelManager::configDirectReport(int, int, int) */
int _ZN20DirectChannelManager18configDirectReportEiii(void);

/* Symbol: _ZN17GrallocHalWrapper16mapGralloc1ErrorEi */
/* Demangled: GrallocHalWrapper::mapGralloc1Error(int) */
int _ZN17GrallocHalWrapper16mapGralloc1ErrorEi(void);

/* Symbol: _ZN19AshmemDirectChannelD0Ev */
/* Demangled: AshmemDirectChannel::~AshmemDirectChannel() */
int _ZN19AshmemDirectChannelD0Ev(void);

/* Symbol: _ZN14MagneticSensor10readEventsEP15sensors_event_ti */
/* Demangled: MagneticSensor::readEvents(sensors_event_t*, int) */
int _ZN14MagneticSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN14PressureSensorC1Ev */
/* Demangled: PressureSensor::PressureSensor() */
int _ZN14PressureSensorC1Ev(void);

/* Symbol: _ZN20DirectChannelManagerC1Ev */
/* Demangled: DirectChannelManager::DirectChannelManager() */
int _ZN20DirectChannelManagerC1Ev(void);

/* Symbol: _ZN17HwGyroscopeSensor10readEventsEP15sensors_event_ti */
/* Demangled: HwGyroscopeSensor::readEvents(sensors_event_t*, int) */
int _ZN17HwGyroscopeSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN17HwGyroscopeSensorD0Ev */
/* Demangled: HwGyroscopeSensor::~HwGyroscopeSensor() */
int _ZN17HwGyroscopeSensorD0Ev(void);

/* Symbol: _ZN15SituationSensor5batchEiill */
/* Demangled: SituationSensor::batch(int, int, long, long) */
int _ZN15SituationSensor5batchEiill(void);

/* Symbol: _ZN22sensors_poll_context_t5batchEiill */
/* Demangled: sensors_poll_context_t::batch(int, int, long, long) */
int _ZN22sensors_poll_context_t5batchEiill(void);

/* Symbol: _ZN22sensors_poll_context_tC1Ev */
/* Demangled: sensors_poll_context_t::sensors_poll_context_t() */
int _ZN22sensors_poll_context_tC1Ev(void);

/* Symbol: _ZN12MtkInterface21getGameRotationVectorEP10sensorData */
/* Demangled: MtkInterface::getGameRotationVector(sensorData*) */
int _ZN12MtkInterface21getGameRotationVectorEP10sensorData(void);

/* Symbol: _ZN20DirectChannelManager9sInstanceE */
/* Demangled: DirectChannelManager::sInstance */
extern void* _ZN20DirectChannelManager9sInstanceE;

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE11getInstanceEv */
/* Demangled: android::Singleton<GrallocHalWrapper>::getInstance() */
int _ZN7android9SingletonI17GrallocHalWrapperE11getInstanceEv(void);

/* Symbol: _ZN14ActivitySensor6enableEii */
/* Demangled: ActivitySensor::enable(int, int) */
int _ZN14ActivitySensor6enableEii(void);

/* Symbol: _ZN14MagneticSensor5batchEiill */
/* Demangled: MagneticSensor::batch(int, int, long, long) */
int _ZN14MagneticSensor5batchEiill(void);

/* Symbol: _ZN19VirtGyroscopeSensorD1Ev */
/* Demangled: VirtGyroscopeSensor::~VirtGyroscopeSensor() */
int _ZN19VirtGyroscopeSensorD1Ev(void);

/* Symbol: _ZN15ProximitySensorC2Ev */
/* Demangled: ProximitySensor::ProximitySensor() */
int _ZN15ProximitySensorC2Ev(void);

/* Symbol: _ZN15ProximitySensor10readEventsEP15sensors_event_ti */
/* Demangled: ProximitySensor::readEvents(sensors_event_t*, int) */
int _ZN15ProximitySensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN14ActivitySensorC1Ev */
/* Demangled: ActivitySensor::ActivitySensor() */
int _ZN14ActivitySensorC1Ev(void);

/* Symbol: _ZN17SensorCalibration18gyroGetCalibrationEP10sensorData */
/* Demangled: SensorCalibration::gyroGetCalibration(sensorData*) */
int _ZN17SensorCalibration18gyroGetCalibrationEP10sensorData(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperEC1Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperEC1Ev(void);

/* Symbol: _ZN15AmbiLightSensor8setDelayEil */
/* Demangled: AmbiLightSensor::setDelay(int, long) */
int _ZN15AmbiLightSensor8setDelayEil(void);

/* Symbol: _ZN15ProximitySensor5batchEiill */
/* Demangled: ProximitySensor::batch(int, int, long, long) */
int _ZN15ProximitySensor5batchEiill(void);

/* Symbol: _ZN15SituationSensor5flushEi */
/* Demangled: SituationSensor::flush(int) */
int _ZN15SituationSensor5flushEi(void);

/* Symbol: _ZN15VendorInterface21getGameRotationVectorEP10sensorData */
/* Demangled: VendorInterface::getGameRotationVector(sensorData*) */
int _ZN15VendorInterface21getGameRotationVectorEP10sensorData(void);

/* Symbol: _ZN12MtkInterface18gyroGetCalibrationEP10sensorData */
/* Demangled: MtkInterface::gyroGetCalibration(sensorData*) */
int _ZN12MtkInterface18gyroGetCalibrationEP10sensorData(void);

/* Symbol: _ZN20DirectChannelManager28stopAllDirectReportOnChannelEiPNSt3__16vectorIiNS0_9allocatorIiEEEE */
/* Demangled: DirectChannelManager::stopAllDirectReportOnChannel(int, std::__1::vector<int, std::__1::allocator<int> >*) */
int _ZN20DirectChannelManager28stopAllDirectReportOnChannelEiPNSt3__16vectorIiNS0_9allocatorIiEEEE(void);

/* Symbol: _ZN17StepCounterSensor5flushEi */
/* Demangled: StepCounterSensor::flush(int) */
int _ZN17StepCounterSensor5flushEi(void);

/* Symbol: _ZN14ApFusionSensor8setDelayEil */
/* Demangled: ApFusionSensor::setDelay(int, long) */
int _ZN14ApFusionSensor8setDelayEil(void);

/* Symbol: _ZN15BiometricSensorD2Ev */
/* Demangled: BiometricSensor::~BiometricSensor() */
int _ZN15BiometricSensorD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE12do_constructEPvm(void);

/* Symbol: _ZN17HwGyroscopeSensor5flushEi */
/* Demangled: HwGyroscopeSensor::flush(int) */
int _ZN17HwGyroscopeSensor5flushEi(void);

/* Symbol: _ZN15SituationSensorC1Ev */
/* Demangled: SituationSensor::SituationSensor() */
int _ZN15SituationSensorC1Ev(void);

/* Symbol: _ZN15VendorInterface14getGeoMagneticEP10sensorData */
/* Demangled: VendorInterface::getGeoMagnetic(sensorData*) */
int _ZN15VendorInterface14getGeoMagneticEP10sensorData(void);

/* Symbol: _ZN17SensorCalibration18gyroSetCalibrationEP10sensorData */
/* Demangled: SensorCalibration::gyroSetCalibration(sensorData*) */
int _ZN17SensorCalibration18gyroSetCalibrationEP10sensorData(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEmRKT_ */
/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::__erase_unique<int>(int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEmRKT_(void);

/* Symbol: _ZN20GrallocDirectChannelC2EPK20sensors_direct_mem_t */
/* Demangled: GrallocDirectChannel::GrallocDirectChannel(sensors_direct_mem_t const*) */
int _ZN20GrallocDirectChannelC2EPK20sensors_direct_mem_t(void);

/* Symbol: _ZN14ApFusionSensor18getFusionAndReportEP15sensors_event_t */
/* Demangled: ApFusionSensor::getFusionAndReport(sensors_event_t*) */
int _ZN14ApFusionSensor18getFusionAndReportEP15sensors_event_t(void);

/* Symbol: _ZN14ApFusionSensor5batchEiill */
/* Demangled: ApFusionSensor::batch(int, int, long, long) */
int _ZN14ApFusionSensor5batchEiill(void);

/* Symbol: _ZN10SensorList17findDynamicSensorEPciPK8sensor_t */
/* Demangled: SensorList::findDynamicSensor(char*, int, sensor_t const*) */
int _ZN10SensorList17findDynamicSensorEPciPK8sensor_t(void);

/* Symbol: _ZN17SensorCalibration24gyroGetTempCaliParameterEP10sensorData */
/* Demangled: SensorCalibration::gyroGetTempCaliParameter(sensorData*) */
int _ZN17SensorCalibration24gyroGetTempCaliParameterEP10sensorData(void);

/* Symbol: _ZNK7android4File9initCheckEv */
/* Demangled: android::File::initCheck() const */
int _ZNK7android4File9initCheckEv(void);

/* Symbol: _ZN7android11SensorSavedD2Ev */
/* Demangled: android::SensorSaved::~SensorSaved() */
int _ZN7android11SensorSavedD2Ev(void);

/* Symbol: _ZN14HumiditySensor6enableEii */
/* Demangled: HumiditySensor::enable(int, int) */
int _ZN14HumiditySensor6enableEii(void);

/* Symbol: _ZN25SensorEventCircularReader10writeEventEP12sensor_event */
/* Demangled: SensorEventCircularReader::writeEvent(sensor_event*) */
int _ZN25SensorEventCircularReader10writeEventEP12sensor_event(void);

/* Symbol: _ZN14HumiditySensorC2Ev */
/* Demangled: HumiditySensor::HumiditySensor() */
int _ZN14HumiditySensorC2Ev(void);

/* Symbol: _ZN16SensorConnection13flushCountDecEi */
/* Demangled: SensorConnection::flushCountDec(int) */
int _ZN16SensorConnection13flushCountDecEi(void);

/* Symbol: _ZN16SensorConnectionC2Ev */
/* Demangled: SensorConnection::SensorConnection() */
int _ZN16SensorConnectionC2Ev(void);

/* Symbol: _ZN17GrallocHalWrapperC2Ev */
/* Demangled: GrallocHalWrapper::GrallocHalWrapper() */
int _ZN17GrallocHalWrapperC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorIjE12do_constructEPvm */
/* Demangled: android::SortedVector<unsigned int>::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorIjE12do_constructEPvm(void);

/* Symbol: _ZN15VendorInterfaceC2Ev */
/* Demangled: VendorInterface::VendorInterface() */
int _ZN15VendorInterfaceC2Ev(void);

/* Symbol: _ZN15AmbiLightSensor20load_brightness_biasEPKcPiS2_ */
/* Demangled: AmbiLightSensor::load_brightness_bias(char const*, int*, int*) */
int _ZN15AmbiLightSensor20load_brightness_biasEPKcPiS2_(void);

/* Symbol: _ZN17StepCounterSensor5batchEiill */
/* Demangled: StepCounterSensor::batch(int, int, long, long) */
int _ZN17StepCounterSensor5batchEiill(void);

/* Symbol: _ZN15SituationSensor12pendingEventEv */
/* Demangled: SituationSensor::pendingEvent() */
int _ZN15SituationSensor12pendingEventEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE12do_constructEPvm(void);

/* Symbol: _ZN17SensorCalibration13magSetAccDataEP10sensorData */
/* Demangled: SensorCalibration::magSetAccData(sensorData*) */
int _ZN17SensorCalibration13magSetAccDataEP10sensorData(void);

/* Symbol: _ZN17SensorCalibration25SensorCalibrationInstanceE */
/* Demangled: SensorCalibration::SensorCalibrationInstance */
extern void* _ZN17SensorCalibration25SensorCalibrationInstanceE;

/* Symbol: _ZNK7android9JSONValue8toStringEmb */
/* Demangled: android::JSONValue::toString(unsigned long, bool) const */
int _ZNK7android9JSONValue8toStringEmb(void);

/* Symbol: _ZN14MagneticSensorD2Ev */
/* Demangled: MagneticSensor::~MagneticSensor() */
int _ZN14MagneticSensorD2Ev(void);

/* Symbol: _ZN15ScpFusionSensor12pendingEventEv */
/* Demangled: ScpFusionSensor::pendingEvent() */
int _ZN15ScpFusionSensor12pendingEventEv(void);

/* Symbol: _ZN15WakeUpSetSensorC1Ev */
/* Demangled: WakeUpSetSensor::WakeUpSetSensor() */
int _ZN15WakeUpSetSensorC1Ev(void);

/* Symbol: _ZN7android9JSONValueC1Ev */
/* Demangled: android::JSONValue::JSONValue() */
int _ZN7android9JSONValueC1Ev(void);

/* Symbol: _ZNK7android6VectorINS_9JSONValueEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::JSONValue>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_9JSONValueEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_13unordered_mapIiN20DirectChannelManager23DirectChannelTimingInfoENS_4hashIiEENS_8equal_toIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_22__unordered_map_hasherIiSF_S6_Lb1EEENS_21__unordered_map_equalIiSF_S8_Lb1EEENS9_ISF_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_13unordered_mapIiN20DirectChannelManager23DirectChannelTimingInfoENS_4hashIiEENS_8equal_toIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_22__unordered_map_hasherIiSF_S6_Lb1EEENS_21__unordered_map_equalIiSF_S8_Lb1EEENS9_ISF_EEE8__rehashEm(void);

/* Symbol: _ZN14HumiditySensor5batchEiill */
/* Demangled: HumiditySensor::batch(int, int, long, long) */
int _ZN14HumiditySensor5batchEiill(void);

/* Symbol: _ZN14ApFusionSensor10readEventsEP15sensors_event_ti */
/* Demangled: ApFusionSensor::readEvents(sensors_event_t*, int) */
int _ZN14ApFusionSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN14ApFusionSensorC2Ev */
/* Demangled: ApFusionSensor::ApFusionSensor() */
int _ZN14ApFusionSensorC2Ev(void);

/* Symbol: _ZNK7android9JSONArray4sizeEv */
/* Demangled: android::JSONArray::size() const */
int _ZNK7android9JSONArray4sizeEv(void);

/* Symbol: _ZNK20DirectChannelManager33rateLevelToDeviceSamplingPeriodNsEii */
/* Demangled: DirectChannelManager::rateLevelToDeviceSamplingPeriodNs(int, int) const */
int _ZNK20DirectChannelManager33rateLevelToDeviceSamplingPeriodNsEii(void);

/* Symbol: _ZN20GrallocDirectChannelD0Ev */
/* Demangled: GrallocDirectChannel::~GrallocDirectChannel() */
int _ZN20GrallocDirectChannelD0Ev(void);

/* Symbol: _ZN12MtkInterface19gyroInitCalibrationEv */
/* Demangled: MtkInterface::gyroInitCalibration() */
int _ZN12MtkInterface19gyroInitCalibrationEv(void);

/* Symbol: _ZN7android4File5closeEv */
/* Demangled: android::File::close() */
int _ZN7android4File5closeEv(void);

/* Symbol: _ZN18AccelerationSensor8setDelayEil */
/* Demangled: AccelerationSensor::setDelay(int, long) */
int _ZN18AccelerationSensor8setDelayEil(void);

/* Symbol: _ZN17HwGyroscopeSensorC1Ev */
/* Demangled: HwGyroscopeSensor::HwGyroscopeSensor() */
int _ZN17HwGyroscopeSensorC1Ev(void);

/* Symbol: _ZN17SensorCalibration17accSetCalibrationEP10sensorData */
/* Demangled: SensorCalibration::accSetCalibration(sensorData*) */
int _ZN17SensorCalibration17accSetCalibrationEP10sensorData(void);

/* Symbol: _ZN7android10JSONObjectD2Ev */
/* Demangled: android::JSONObject::~JSONObject() */
int _ZN7android10JSONObjectD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS4_PvEEEE(void);

/* Symbol: _ZN14HumiditySensor5flushEi */
/* Demangled: HumiditySensor::flush(int) */
int _ZN14HumiditySensor5flushEi(void);

/* Symbol: _ZN14ApFusionSensor8setEventEP15sensors_event_t */
/* Demangled: ApFusionSensor::setEvent(sensors_event_t*) */
int _ZN14ApFusionSensor8setEventEP15sensors_event_t(void);

/* Symbol: _ZN15BiometricSensor8setDelayEil */
/* Demangled: BiometricSensor::setDelay(int, long) */
int _ZN15BiometricSensor8setDelayEil(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_13unordered_mapIiN20DirectChannelManager23DirectChannelTimingInfoENS_4hashIiEENS_8equal_toIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_22__unordered_map_hasherIiSF_S6_Lb1EEENS_21__unordered_map_equalIiSF_S8_Lb1EEENS9_ISF_EEE25__emplace_unique_key_argsIiJiSE_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > > > >::__emplace_unique_key_args<int, int, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > > >(int const&, int&&, std::__1::unordered_map<int, DirectChannelManager::DirectChannelTimingInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<int const, DirectChannelManager::DirectChannelTimingInfo> > >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_13unordered_mapIiN20DirectChannelManager23DirectChannelTimingInfoENS_4hashIiEENS_8equal_toIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_22__unordered_map_hasherIiSF_S6_Lb1EEENS_21__unordered_map_equalIiSF_S8_Lb1EEENS9_ISF_EEE25__emplace_unique_key_argsIiJiSE_EEENSA_INS_15__hash_iteratorIPNS_11__hash_nodeISF_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJNS_4pairIiiEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::__emplace_unique_key_args<int, std::__1::pair<int, int> >(int const&, std::__1::pair<int, int>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJNS_4pairIiiEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN18AccelerationSensor6enableEii */
/* Demangled: AccelerationSensor::enable(int, int) */
int _ZN18AccelerationSensor6enableEii(void);

/* Symbol: _ZN19VirtGyroscopeSensorC2Ev */
/* Demangled: VirtGyroscopeSensor::VirtGyroscopeSensor() */
int _ZN19VirtGyroscopeSensorC2Ev(void);

/* Symbol: _ZN14ApFusionSensor12processEventEPK12sensor_event */
/* Demangled: ApFusionSensor::processEvent(sensor_event const*) */
int _ZN14ApFusionSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN13SensorManagerD1Ev */
/* Demangled: SensorManager::~SensorManager() */
int _ZN13SensorManagerD1Ev(void);

/* Symbol: _ZN10SensorList13replaceSensorEiPK8sensor_t */
/* Demangled: SensorList::replaceSensor(int, sensor_t const*) */
int _ZN10SensorList13replaceSensorEiPK8sensor_t(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN19VirtGyroscopeSensor10readEventsEP15sensors_event_ti */
/* Demangled: VirtGyroscopeSensor::readEvents(sensors_event_t*, int) */
int _ZN19VirtGyroscopeSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN15BiometricSensor10readEventsEP15sensors_event_ti */
/* Demangled: BiometricSensor::readEvents(sensors_event_t*, int) */
int _ZN15BiometricSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN7android9JSONValue9setStringERKNS_7AStringE */
/* Demangled: android::JSONValue::setString(android::AString const&) */
int _ZN7android9JSONValue9setStringERKNS_7AStringE(void);

/* Symbol: _ZN17StepCounterSensor12processEventEPK12sensor_event */
/* Demangled: StepCounterSensor::processEvent(sensor_event const*) */
int _ZN17StepCounterSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN15WakeUpSetSensor10readEventsEP15sensors_event_ti */
/* Demangled: WakeUpSetSensor::readEvents(sensors_event_t*, int) */
int _ZN15WakeUpSetSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN10SensorList18SensorListInstanceE */
/* Demangled: SensorList::SensorListInstance */
extern void* _ZN10SensorList18SensorListInstanceE;

/* Symbol: _ZNK7android6VectorI8sensor_tE10do_destroyEPvm */
/* Demangled: android::Vector<sensor_t>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorI8sensor_tE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android6VectorI8sensor_tEE */
/* Demangled: vtable for android::Vector<sensor_t> */
extern void* _ZTVN7android6VectorI8sensor_tEE;

/* Symbol: _ZN7android9JSONArrayD2Ev */
/* Demangled: android::JSONArray::~JSONArray() */
int _ZN7android9JSONArrayD2Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN13SensorManager8activateEP16SensorConnectionib */
/* Demangled: SensorManager::activate(SensorConnection*, int, bool) */
int _ZN13SensorManager8activateEP16SensorConnectionib(void);

/* Symbol: _ZN15ScpFusionSensorD1Ev */
/* Demangled: ScpFusionSensor::~ScpFusionSensor() */
int _ZN15ScpFusionSensorD1Ev(void);

/* Symbol: _ZN10SensorBase13setFlushEventEP15sensors_event_t */
/* Demangled: SensorBase::setFlushEvent(sensors_event_t*) */
int _ZN10SensorBase13setFlushEventEP15sensors_event_t(void);

/* Symbol: _ZNK7android6VectorINS_9JSONValueEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::JSONValue>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_9JSONValueEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12JSONCompound8toStringEmb */
/* Demangled: android::JSONCompound::toString(unsigned long, bool) const */
int _ZNK7android12JSONCompound8toStringEmb(void);

/* Symbol: _ZN14LockfreeBufferD1Ev */
/* Demangled: LockfreeBuffer::~LockfreeBuffer() */
int _ZN14LockfreeBufferD1Ev(void);

/* Symbol: _ZN20DirectChannelManagerD1Ev */
/* Demangled: DirectChannelManager::~DirectChannelManager() */
int _ZN20DirectChannelManagerD1Ev(void);

/* Symbol: _ZN7android9JSONValue8setArrayERKNS_2spINS_9JSONArrayEEE */
/* Demangled: android::JSONValue::setArray(android::sp<android::JSONArray> const&) */
int _ZN7android9JSONValue8setArrayERKNS_2spINS_9JSONArrayEEE(void);

/* Symbol: _ZN20DirectChannelManager13sInstanceLockE */
/* Demangled: DirectChannelManager::sInstanceLock */
extern void* _ZN20DirectChannelManager13sInstanceLockE;

/* Symbol: _ZN14PressureSensorD1Ev */
/* Demangled: PressureSensor::~PressureSensor() */
int _ZN14PressureSensorD1Ev(void);

/* Symbol: _ZN17StepCounterSensorD0Ev */
/* Demangled: StepCounterSensor::~StepCounterSensor() */
int _ZN17StepCounterSensorD0Ev(void);

/* Symbol: _ZN22sensors_poll_context_tD1Ev */
/* Demangled: sensors_poll_context_t::~sensors_poll_context_t() */
int _ZN22sensors_poll_context_tD1Ev(void);

/* Symbol: _ZN10SensorList15hwGyroSupportedEv */
/* Demangled: SensorList::hwGyroSupported() */
int _ZN10SensorList15hwGyroSupportedEv(void);

/* Symbol: _ZN12MtkInterface18gyroSetCalibrationEP10sensorData */
/* Demangled: MtkInterface::gyroSetCalibration(sensorData*) */
int _ZN12MtkInterface18gyroSetCalibrationEP10sensorData(void);

/* Symbol: _ZN7android4FileC2EPKcS2_ */
/* Demangled: android::File::File(char const*, char const*) */
int _ZN7android4FileC2EPKcS2_(void);

/* Symbol: _ZNK7android9JSONValue9getObjectEPNS_2spINS_10JSONObjectEEE */
/* Demangled: android::JSONValue::getObject(android::sp<android::JSONObject>*) const */
int _ZNK7android9JSONValue9getObjectEPNS_2spINS_10JSONObjectEEE(void);

/* Symbol: _ZN15ProximitySensorD2Ev */
/* Demangled: ProximitySensor::~ProximitySensor() */
int _ZN15ProximitySensorD2Ev(void);

/* Symbol: _ZN15PedometerSensorD0Ev */
/* Demangled: PedometerSensor::~PedometerSensor() */
int _ZN15PedometerSensorD0Ev(void);

/* Symbol: _ZN13SensorManager14addSensorsListEPK8sensor_tm */
/* Demangled: SensorManager::addSensorsList(sensor_t const*, unsigned long) */
int _ZN13SensorManager14addSensorsListEPK8sensor_tm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE10do_destroyEPvm(void);

/* Symbol: _ZN25SensorEventCircularReaderD2Ev */
/* Demangled: SensorEventCircularReader::~SensorEventCircularReader() */
int _ZN25SensorEventCircularReaderD2Ev(void);

/* Symbol: _ZN20DirectChannelManager19removeDirectChannelEi */
/* Demangled: DirectChannelManager::removeDirectChannel(int) */
int _ZN20DirectChannelManager19removeDirectChannelEi(void);

/* Symbol: _ZN19VirtGyroscopeSensor12processEventEPK12sensor_event */
/* Demangled: VirtGyroscopeSensor::processEvent(sensor_event const*) */
int _ZN19VirtGyroscopeSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<sensor_t, std::__1::allocator<sensor_t> >::__push_back_slow_path<sensor_t const&>(sensor_t const&) */
int _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android9JSONValue9setObjectERKNS_2spINS_10JSONObjectEEE */
/* Demangled: android::JSONValue::setObject(android::sp<android::JSONObject> const&) */
int _ZN7android9JSONValue9setObjectERKNS_2spINS_10JSONObjectEEE(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperED1Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::~Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperED1Ev(void);

/* Symbol: _ZN14ActivitySensorD1Ev */
/* Demangled: ActivitySensor::~ActivitySensor() */
int _ZN14ActivitySensorD1Ev(void);

/* Symbol: _ZN17SensorCalibration11getInstanceEv */
/* Demangled: SensorCalibration::getInstance() */
int _ZN17SensorCalibration11getInstanceEv(void);

/* Symbol: _ZNK7android12SortedVectorIP16SensorConnectionE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<SensorConnection*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIP16SensorConnectionE7do_copyEPvPKvm(void);

/* Symbol: _ZN25SensorEventCircularReader12pendingEventEv */
/* Demangled: SensorEventCircularReader::pendingEvent() */
int _ZN25SensorEventCircularReader12pendingEventEv(void);

/* Symbol: _ZN7android4FileC1EPKcS2_ */
/* Demangled: android::File::File(char const*, char const*) */
int _ZN7android4FileC1EPKcS2_(void);

/* Symbol: _ZN7android10JSONObject8setValueEPKcRKNS_9JSONValueE */
/* Demangled: android::JSONObject::setValue(char const*, android::JSONValue const&) */
int _ZN7android10JSONObject8setValueEPKcRKNS_9JSONValueE(void);

/* Symbol: _ZTV14PressureSensor */
/* Demangled: vtable for PressureSensor */
extern void* _ZTV14PressureSensor;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN12MtkInterfaceD0Ev */
/* Demangled: MtkInterface::~MtkInterface() */
int _ZN12MtkInterfaceD0Ev(void);

/* Symbol: _ZNK7android9JSONArray8isObjectEv */
/* Demangled: android::JSONArray::isObject() const */
int _ZNK7android9JSONArray8isObjectEv(void);

/* Symbol: _ZN13SensorManager21SensorManagerInstanceE */
/* Demangled: SensorManager::SensorManagerInstance */
extern void* _ZN13SensorManager21SensorManagerInstanceE;

/* Symbol: _ZN12MtkInterface17accGetCalibrationEP10sensorData */
/* Demangled: MtkInterface::accGetCalibration(sensorData*) */
int _ZN12MtkInterface17accGetCalibrationEP10sensorData(void);

/* Symbol: _ZN12MtkInterface17accRunCalibrationEP10sensorDataS1_ */
/* Demangled: MtkInterface::accRunCalibration(sensorData*, sensorData*) */
int _ZN12MtkInterface17accRunCalibrationEP10sensorDataS1_(void);

/* Symbol: _ZN17SensorCalibration20magEnableCalibrationEi */
/* Demangled: SensorCalibration::magEnableCalibration(int) */
int _ZN17SensorCalibration20magEnableCalibrationEi(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN15WakeUpSetSensor11reportFlushEi */
/* Demangled: WakeUpSetSensor::reportFlush(int) */
int _ZN15WakeUpSetSensor11reportFlushEi(void);

/* Symbol: _ZN10SensorList11getInstanceEv */
/* Demangled: SensorList::getInstance() */
int _ZN10SensorList11getInstanceEv(void);

/* Symbol: _ZN7android12JSONCompound5ParseEPKcm */
/* Demangled: android::JSONCompound::Parse(char const*, unsigned long) */
int _ZN7android12JSONCompound5ParseEPKcm(void);

/* Symbol: _ZTV20GrallocDirectChannel */
/* Demangled: vtable for GrallocDirectChannel */
extern void* _ZTV20GrallocDirectChannel;

/* Symbol: _ZN14MagneticSensor12pendingEventEv */
/* Demangled: MagneticSensor::pendingEvent() */
int _ZN14MagneticSensor12pendingEventEv(void);

/* Symbol: _ZN15AmbiLightSensor5batchEiill */
/* Demangled: AmbiLightSensor::batch(int, int, long, long) */
int _ZN15AmbiLightSensor5batchEiill(void);

/* Symbol: _ZN14PressureSensor12pendingEventEv */
/* Demangled: PressureSensor::pendingEvent() */
int _ZN14PressureSensor12pendingEventEv(void);

/* Symbol: _ZN15SituationSensorD1Ev */
/* Demangled: SituationSensor::~SituationSensor() */
int _ZN15SituationSensorD1Ev(void);

/* Symbol: _ZN16SensorConnection9getMoudleEv */
/* Demangled: SensorConnection::getMoudle() */
int _ZN16SensorConnection9getMoudleEv(void);

/* Symbol: _ZN7android4File5writeEPKvm */
/* Demangled: android::File::write(void const*, unsigned long) */
int _ZN7android4File5writeEPKvm(void);

/* Symbol: _ZN20DirectChannelManager16addDirectChannelEPK20sensors_direct_mem_t */
/* Demangled: DirectChannelManager::addDirectChannel(sensors_direct_mem_t const*) */
int _ZN20DirectChannelManager16addDirectChannelEPK20sensors_direct_mem_t(void);

/* Symbol: _ZN14ActivitySensor5batchEiill */
/* Demangled: ActivitySensor::batch(int, int, long, long) */
int _ZN14ActivitySensor5batchEiill(void);

/* Symbol: _ZN14ActivitySensor8setDelayEil */
/* Demangled: ActivitySensor::setDelay(int, long) */
int _ZN14ActivitySensor8setDelayEil(void);

/* Symbol: _ZN22sensors_poll_context_t15contextInstanceE */
/* Demangled: sensors_poll_context_t::contextInstance */
extern void* _ZN22sensors_poll_context_t15contextInstanceE;

/* Symbol: _ZNK7android10JSONObject8getValueEPKcPNS_9JSONValueE */
/* Demangled: android::JSONObject::getValue(char const*, android::JSONValue*) const */
int _ZNK7android10JSONObject8getValueEPKcPNS_9JSONValueE(void);

/* Symbol: _ZNK7android9JSONValue8getFloatEPf */
/* Demangled: android::JSONValue::getFloat(float*) const */
int _ZNK7android9JSONValue8getFloatEPf(void);

/* Symbol: _ZN14HumiditySensorD2Ev */
/* Demangled: HumiditySensor::~HumiditySensor() */
int _ZN14HumiditySensorD2Ev(void);

/* Symbol: _ZN13SensorManagerC2Ev */
/* Demangled: SensorManager::SensorManager() */
int _ZN13SensorManagerC2Ev(void);

/* Symbol: _ZN16SensorConnectionD2Ev */
/* Demangled: SensorConnection::~SensorConnection() */
int _ZN16SensorConnectionD2Ev(void);

/* Symbol: _ZN12MtkInterface17accSetCalibrationEP10sensorData */
/* Demangled: MtkInterface::accSetCalibration(sensorData*) */
int _ZN12MtkInterface17accSetCalibrationEP10sensorData(void);

/* Symbol: _ZN17GrallocHalWrapperD2Ev */
/* Demangled: GrallocHalWrapper::~GrallocHalWrapper() */
int _ZN17GrallocHalWrapperD2Ev(void);

/* Symbol: _ZTV19AshmemDirectChannel */
/* Demangled: vtable for AshmemDirectChannel */
extern void* _ZTV19AshmemDirectChannel;

/* Symbol: _ZN15PedometerSensor5batchEiill */
/* Demangled: PedometerSensor::batch(int, int, long, long) */
int _ZN15PedometerSensor5batchEiill(void);

/* Symbol: _ZN15SituationSensor8setDelayEil */
/* Demangled: SituationSensor::setDelay(int, long) */
int _ZN15SituationSensor8setDelayEil(void);

/* Symbol: _ZN14ApFusionSensor10reportDataEiP10sensorData */
/* Demangled: ApFusionSensor::reportData(int, sensorData*) */
int _ZN14ApFusionSensor10reportDataEiP10sensorData(void);

/* Symbol: _ZNK7android12SortedVectorIP16SensorConnectionE10do_destroyEPvm */
/* Demangled: android::SortedVector<SensorConnection*>::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorIP16SensorConnectionE10do_destroyEPvm(void);

/* Symbol: _ZN15VendorInterface10getGravityEP10sensorData */
/* Demangled: VendorInterface::getGravity(sensorData*) */
int _ZN15VendorInterface10getGravityEP10sensorData(void);

/* Symbol: _ZN15VendorInterfaceD2Ev */
/* Demangled: VendorInterface::~VendorInterface() */
int _ZN15VendorInterfaceD2Ev(void);

/* Symbol: _ZN17SensorCalibration19gyroInitCalibrationEv */
/* Demangled: SensorCalibration::gyroInitCalibration() */
int _ZN17SensorCalibration19gyroInitCalibrationEv(void);

/* Symbol: _ZTVN7android10JSONObjectE */
/* Demangled: vtable for android::JSONObject */
extern void* _ZTVN7android10JSONObjectE;

/* Symbol: _ZN17DirectChannelBase8getErrorEv */
/* Demangled: DirectChannelBase::getError() */
int _ZN17DirectChannelBase8getErrorEv(void);

/* Symbol: _ZN15ProximitySensor12pendingEventEv */
/* Demangled: ProximitySensor::pendingEvent() */
int _ZN15ProximitySensor12pendingEventEv(void);

/* Symbol: _ZN17StepCounterSensor6enableEii */
/* Demangled: StepCounterSensor::enable(int, int) */
int _ZN17StepCounterSensor6enableEii(void);

/* Symbol: _ZTV15ScpFusionSensor */
/* Demangled: vtable for ScpFusionSensor */
extern void* _ZTV15ScpFusionSensor;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN15VendorInterface10setMagDataEP10sensorData */
/* Demangled: VendorInterface::setMagData(sensorData*) */
int _ZN15VendorInterface10setMagDataEP10sensorData(void);

/* Symbol: _ZN14ApFusionSensor12pendingEventEv */
/* Demangled: ApFusionSensor::pendingEvent() */
int _ZN14ApFusionSensor12pendingEventEv(void);

/* Symbol: _ZN7android9JSONValueD1Ev */
/* Demangled: android::JSONValue::~JSONValue() */
int _ZN7android9JSONValueD1Ev(void);

/* Symbol: _ZTV15AmbiLightSensor */
/* Demangled: vtable for AmbiLightSensor */
extern void* _ZTV15AmbiLightSensor;

/* Symbol: _ZN14ApFusionSensorD2Ev */
/* Demangled: ApFusionSensor::~ApFusionSensor() */
int _ZN14ApFusionSensorD2Ev(void);

/* Symbol: _ZN15WakeUpSetSensorD1Ev */
/* Demangled: WakeUpSetSensor::~WakeUpSetSensor() */
int _ZN15WakeUpSetSensorD1Ev(void);

/* Symbol: _ZN13SensorManager19setDirectConnectionEP16SensorConnection */
/* Demangled: SensorManager::setDirectConnection(SensorConnection*) */
int _ZN13SensorManager19setDirectConnectionEP16SensorConnection(void);

/* Symbol: _ZNK7android12SortedVectorIP16SensorConnectionE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<SensorConnection*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIP16SensorConnectionE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZTV14ActivitySensor */
/* Demangled: vtable for ActivitySensor */
extern void* _ZTV14ActivitySensor;

/* Symbol: _ZN15ScpFusionSensorC2Ev */
/* Demangled: ScpFusionSensor::ScpFusionSensor() */
int _ZN15ScpFusionSensorC2Ev(void);

/* Symbol: _ZTV15WakeUpSetSensor */
/* Demangled: vtable for WakeUpSetSensor */
extern void* _ZTV15WakeUpSetSensor;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android9JSONValue8getInt32EPi */
/* Demangled: android::JSONValue::getInt32(int*) const */
int _ZNK7android9JSONValue8getInt32EPi(void);

/* Symbol: _ZTV14MagneticSensor */
/* Demangled: vtable for MagneticSensor */
extern void* _ZTV14MagneticSensor;

/* Symbol: _ZN19VirtGyroscopeSensor11reportFlushEv */
/* Demangled: VirtGyroscopeSensor::reportFlush() */
int _ZN19VirtGyroscopeSensor11reportFlushEv(void);

/* Symbol: _ZN15ProximitySensor12processEventEPK12sensor_event */
/* Demangled: ProximitySensor::processEvent(sensor_event const*) */
int _ZN15ProximitySensor12processEventEPK12sensor_event(void);

/* Symbol: _ZTV14ApFusionSensor */
/* Demangled: vtable for ApFusionSensor */
extern void* _ZTV14ApFusionSensor;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN15VendorInterface17getRotationVectorEP10sensorData */
/* Demangled: VendorInterface::getRotationVector(sensorData*) */
int _ZN15VendorInterface17getRotationVectorEP10sensorData(void);

/* Symbol: _ZTV15VendorInterface */
/* Demangled: vtable for VendorInterface */
extern void* _ZTV15VendorInterface;

/* Symbol: _ZN19AshmemDirectChannelD1Ev */
/* Demangled: AshmemDirectChannel::~AshmemDirectChannel() */
int _ZN19AshmemDirectChannelD1Ev(void);

/* Symbol: _ZNK20GrallocDirectChannel13memoryMatchesEPK20sensors_direct_mem_t */
/* Demangled: GrallocDirectChannel::memoryMatches(sensors_direct_mem_t const*) const */
int _ZNK20GrallocDirectChannel13memoryMatchesEPK20sensors_direct_mem_t(void);

/* Symbol: _ZN15AmbiLightSensor5flushEi */
/* Demangled: AmbiLightSensor::flush(int) */
int _ZN15AmbiLightSensor5flushEi(void);

/* Symbol: _ZN17StepCounterSensorC1Ev */
/* Demangled: StepCounterSensor::StepCounterSensor() */
int _ZN17StepCounterSensorC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, SensorManager::Info> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN13SensorManager4InfoEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN20DirectChannelManagerC2Ev */
/* Demangled: DirectChannelManager::DirectChannelManager() */
int _ZN20DirectChannelManagerC2Ev(void);

/* Symbol: _ZN17HwGyroscopeSensorD1Ev */
/* Demangled: HwGyroscopeSensor::~HwGyroscopeSensor() */
int _ZN17HwGyroscopeSensorD1Ev(void);

/* Symbol: _ZN14PressureSensorC2Ev */
/* Demangled: PressureSensor::PressureSensor() */
int _ZN14PressureSensorC2Ev(void);

/* Symbol: _ZN13SensorManager11getInstanceEv */
/* Demangled: SensorManager::getInstance() */
int _ZN13SensorManager11getInstanceEv(void);

/* Symbol: _ZN22sensors_poll_context_tC2Ev */
/* Demangled: sensors_poll_context_t::sensors_poll_context_t() */
int _ZN22sensors_poll_context_tC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorI8sensor_tE8do_splatEPvPKvm */
/* Demangled: android::Vector<sensor_t>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI8sensor_tE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android11SensorSaved19getCalibrationInt32EPKcS2_Pim */
/* Demangled: android::SensorSaved::getCalibrationInt32(char const*, char const*, int*, unsigned long) */
int _ZN7android11SensorSaved19getCalibrationInt32EPKcS2_Pim(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo> > >::__emplace_unique_key_args<int, std::__1::pair<int, DirectChannelManager::DirectChannelTimingInfo> >(int const&, std::__1::pair<int, DirectChannelManager::DirectChannelTimingInfo>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN15AmbiLightSensor10readEventsEP15sensors_event_ti */
/* Demangled: AmbiLightSensor::readEvents(sensors_event_t*, int) */
int _ZN15AmbiLightSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN15PedometerSensorC1Ev */
/* Demangled: PedometerSensor::PedometerSensor() */
int _ZN15PedometerSensorC1Ev(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN19VirtGyroscopeSensorD2Ev */
/* Demangled: VirtGyroscopeSensor::~VirtGyroscopeSensor() */
int _ZN19VirtGyroscopeSensorD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorIjE10do_compareEPKvS3_ */
/* Demangled: android::SortedVector<unsigned int>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIjE10do_compareEPKvS3_(void);

/* Symbol: _ZN18AccelerationSensorD0Ev */
/* Demangled: AccelerationSensor::~AccelerationSensor() */
int _ZN18AccelerationSensorD0Ev(void);

/* Symbol: _ZN15WakeUpSetSensor5batchEiill */
/* Demangled: WakeUpSetSensor::batch(int, int, long, long) */
int _ZN15WakeUpSetSensor5batchEiill(void);

/* Symbol: _ZN22sensors_poll_context_t9pollEventEP15sensors_event_ti */
/* Demangled: sensors_poll_context_t::pollEvent(sensors_event_t*, int) */
int _ZN22sensors_poll_context_t9pollEventEP15sensors_event_ti(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIiEEmRKT_ */
/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo> > >::__erase_unique<int>(int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE14__erase_uniqueIiEEmRKT_(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperEC2Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperEC2Ev(void);

/* Symbol: _ZN14ActivitySensorC2Ev */
/* Demangled: ActivitySensor::ActivitySensor() */
int _ZN14ActivitySensorC2Ev(void);

/* Symbol: _ZN22sensors_poll_context_t8setEventEP15sensors_event_tii */
/* Demangled: sensors_poll_context_t::setEvent(sensors_event_t*, int, int) */
int _ZN22sensors_poll_context_t8setEventEP15sensors_event_tii(void);

/* Symbol: _ZN13SensorManager19getSensorMaxDelayNsEi */
/* Demangled: SensorManager::getSensorMaxDelayNs(int) */
int _ZN13SensorManager19getSensorMaxDelayNsEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorIP16SensorConnectionEE */
/* Demangled: vtable for android::SortedVector<SensorConnection*> */
extern void* _ZTVN7android12SortedVectorIP16SensorConnectionEE;

/* Symbol: _ZN12MtkInterface24gyroGetTempCaliParameterEP10sensorData */
/* Demangled: MtkInterface::gyroGetTempCaliParameter(sensorData*) */
int _ZN12MtkInterface24gyroGetTempCaliParameterEP10sensorData(void);

/* Symbol: _ZN17SensorCalibration24gyroSetTempCaliParameterEP10sensorData */
/* Demangled: SensorCalibration::gyroSetTempCaliParameter(sensorData*) */
int _ZN17SensorCalibration24gyroSetTempCaliParameterEP10sensorData(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN15AmbiLightSensorD0Ev */
/* Demangled: AmbiLightSensor::~AmbiLightSensor() */
int _ZN15AmbiLightSensorD0Ev(void);

/* Symbol: _ZN12MtkInterfaceC1Ev */
/* Demangled: MtkInterface::MtkInterface() */
int _ZN12MtkInterfaceC1Ev(void);

/* Symbol: _ZN17SensorCalibration17magRunCalibrationEP10sensorDataS1_ */
/* Demangled: SensorCalibration::magRunCalibration(sensorData*, sensorData*) */
int _ZN17SensorCalibration17magRunCalibrationEP10sensorDataS1_(void);

/* Symbol: _ZN7android9JSONValueaSERKS0_ */
/* Demangled: android::JSONValue::operator=(android::JSONValue const&) */
int _ZN7android9JSONValueaSERKS0_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN14HumiditySensor10readEventsEP15sensors_event_ti */
/* Demangled: HumiditySensor::readEvents(sensors_event_t*, int) */
int _ZN14HumiditySensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN13SensorManager19setNativeConnectionEP16SensorConnection */
/* Demangled: SensorManager::setNativeConnection(SensorConnection*) */
int _ZN13SensorManager19setNativeConnectionEP16SensorConnection(void);

/* Symbol: _ZN16SensorConnection18removeActiveHandleEj */
/* Demangled: SensorConnection::removeActiveHandle(unsigned int) */
int _ZN16SensorConnection18removeActiveHandleEj(void);

/* Symbol: _ZN12MtkInterface18accInitCalibrationEv */
/* Demangled: MtkInterface::accInitCalibration() */
int _ZN12MtkInterface18accInitCalibrationEv(void);

/* Symbol: _ZN15SituationSensor12processEventEPK12sensor_event */
/* Demangled: SituationSensor::processEvent(sensor_event const*) */
int _ZN15SituationSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN15SituationSensorC2Ev */
/* Demangled: SituationSensor::SituationSensor() */
int _ZN15SituationSensorC2Ev(void);

/* Symbol: _ZN16SensorConnection9setMoudleEi */
/* Demangled: SensorConnection::setMoudle(int) */
int _ZN16SensorConnection9setMoudleEi(void);

/* Symbol: _ZN15VendorInterface12getMagOffsetEPf */
/* Demangled: VendorInterface::getMagOffset(float*) */
int _ZN15VendorInterface12getMagOffsetEPf(void);

/* Symbol: _ZN17DirectChannelBase7isValidEv */
/* Demangled: DirectChannelBase::isValid() */
int _ZN17DirectChannelBase7isValidEv(void);

/* Symbol: _ZN15WakeUpSetSensor6enableEii */
/* Demangled: WakeUpSetSensor::enable(int, int) */
int _ZN15WakeUpSetSensor6enableEii(void);

/* Symbol: _ZN18AccelerationSensor10readEventsEP15sensors_event_ti */
/* Demangled: AccelerationSensor::readEvents(sensors_event_t*, int) */
int _ZN18AccelerationSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN10SensorBase8setDelayEil */
/* Demangled: SensorBase::setDelay(int, long) */
int _ZN10SensorBase8setDelayEil(void);

/* Symbol: _ZN17SensorCalibration17magGetCalibrationEP10sensorData */
/* Demangled: SensorCalibration::magGetCalibration(sensorData*) */
int _ZN17SensorCalibration17magGetCalibrationEP10sensorData(void);

/* Symbol: _ZN7android9JSONValueC2ERKS0_ */
/* Demangled: android::JSONValue::JSONValue(android::JSONValue const&) */
int _ZN7android9JSONValueC2ERKS0_(void);

/* Symbol: _ZN15ScpFusionSensor10readEventsEP15sensors_event_ti */
/* Demangled: ScpFusionSensor::readEvents(sensors_event_t*, int) */
int _ZN15ScpFusionSensor10readEventsEP15sensors_event_ti(void);

/* Symbol: _ZN15WakeUpSetSensor8setDelayEil */
/* Demangled: WakeUpSetSensor::setDelay(int, long) */
int _ZN15WakeUpSetSensor8setDelayEil(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<SensorConnection*, SensorManager::BatchParams> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIP16SensorConnectionN13SensorManager11BatchParamsEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, int>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, int>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, int>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, int> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiiEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEm(void);

/* Symbol: _ZN18AccelerationSensor5flushEi */
/* Demangled: AccelerationSensor::flush(int) */
int _ZN18AccelerationSensor5flushEi(void);

/* Symbol: _ZN15SituationSensor13HandleToIndexEi */
/* Demangled: SituationSensor::HandleToIndex(int) */
int _ZN15SituationSensor13HandleToIndexEi(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE9sInstanceE */
/* Demangled: android::Singleton<GrallocHalWrapper>::sInstance */
extern void* _ZN7android9SingletonI17GrallocHalWrapperE9sInstanceE;

/* Symbol: _ZN7android9JSONValueC2Ev */
/* Demangled: android::JSONValue::JSONValue() */
int _ZN7android9JSONValueC2Ev(void);

/* Symbol: _ZN15AmbiLightSensor12pendingEventEv */
/* Demangled: AmbiLightSensor::pendingEvent() */
int _ZN15AmbiLightSensor12pendingEventEv(void);

/* Symbol: _ZN15WakeUpSetSensorC2Ev */
/* Demangled: WakeUpSetSensor::WakeUpSetSensor() */
int _ZN15WakeUpSetSensorC2Ev(void);

/* Symbol: _ZN16SensorConnection15addActiveHandleEj */
/* Demangled: SensorConnection::addActiveHandle(unsigned int) */
int _ZN16SensorConnection15addActiveHandleEj(void);

/* Symbol: _ZN17SensorCalibration17accRunCalibrationEP10sensorDataS1_ */
/* Demangled: SensorCalibration::accRunCalibration(sensorData*, sensorData*) */
int _ZN17SensorCalibration17accRunCalibrationEP10sensorDataS1_(void);

/* Symbol: _ZN17SensorCalibration17magSetCalibrationEP10sensorData */
/* Demangled: SensorCalibration::magSetCalibration(sensorData*) */
int _ZN17SensorCalibration17magSetCalibrationEP10sensorData(void);

/* Symbol: _ZN20GrallocDirectChannelD1Ev */
/* Demangled: GrallocDirectChannel::~GrallocDirectChannel() */
int _ZN20GrallocDirectChannelD1Ev(void);

/* Symbol: _ZN17HwGyroscopeSensor5batchEiill */
/* Demangled: HwGyroscopeSensor::batch(int, int, long, long) */
int _ZN17HwGyroscopeSensor5batchEiill(void);

/* Symbol: _ZN14ApFusionSensor22getUncaliGyroAndReportEP15sensors_event_t */
/* Demangled: ApFusionSensor::getUncaliGyroAndReport(sensors_event_t*) */
int _ZN14ApFusionSensor22getUncaliGyroAndReportEP15sensors_event_t(void);

/* Symbol: _ZN13SensorManager22removeSensorConnectionEP16SensorConnection */
/* Demangled: SensorManager::removeSensorConnection(SensorConnection*) */
int _ZN13SensorManager22removeSensorConnectionEP16SensorConnection(void);

/* Symbol: _ZN15BiometricSensorD0Ev */
/* Demangled: BiometricSensor::~BiometricSensor() */
int _ZN15BiometricSensorD0Ev(void);

/* Symbol: _ZN15VendorInterface10setAccDataEP10sensorData */
/* Demangled: VendorInterface::setAccData(sensorData*) */
int _ZN15VendorInterface10setAccDataEP10sensorData(void);

/* Symbol: _ZN7android9JSONValue8setFloatEf */
/* Demangled: android::JSONValue::setFloat(float) */
int _ZN7android9JSONValue8setFloatEf(void);

/* Symbol: _ZNK7android10JSONObject8isObjectEv */
/* Demangled: android::JSONObject::isObject() const */
int _ZNK7android10JSONObject8isObjectEv(void);

/* Symbol: _ZTV17DirectChannelBase */
/* Demangled: vtable for DirectChannelBase */
extern void* _ZTV17DirectChannelBase;

/* Symbol: _ZN17SensorCalibrationC1Ev */
/* Demangled: SensorCalibration::SensorCalibration() */
int _ZN17SensorCalibrationC1Ev(void);

/* Symbol: _ZN17HwGyroscopeSensor8setDelayEil */
/* Demangled: HwGyroscopeSensor::setDelay(int, long) */
int _ZN17HwGyroscopeSensor8setDelayEil(void);

/* Symbol: _ZN17HwGyroscopeSensorC2Ev */
/* Demangled: HwGyroscopeSensor::HwGyroscopeSensor() */
int _ZN17HwGyroscopeSensorC2Ev(void);

/* Symbol: _ZN19VirtGyroscopeSensor8setEventEP15sensors_event_t */
/* Demangled: VirtGyroscopeSensor::setEvent(sensors_event_t*) */
int _ZN19VirtGyroscopeSensor8setEventEP15sensors_event_t(void);

/* Symbol: _ZN13SensorManager4Info16numActiveClientsEv */
/* Demangled: SensorManager::Info::numActiveClients() */
int _ZN13SensorManager4Info16numActiveClientsEv(void);

/* Symbol: _ZN17HwGyroscopeSensor12processEventEPK12sensor_event */
/* Demangled: HwGyroscopeSensor::processEvent(sensor_event const*) */
int _ZN17HwGyroscopeSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN14PressureSensor6enableEii */
/* Demangled: PressureSensor::enable(int, int) */
int _ZN14PressureSensor6enableEii(void);

/* Symbol: _ZNK7android6VectorI8sensor_tE7do_copyEPvPKvm */
/* Demangled: android::Vector<sensor_t>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI8sensor_tE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android4FileC1Ev */
/* Demangled: android::File::File() */
int _ZN7android4FileC1Ev(void);

/* Symbol: _ZN19AshmemDirectChannelC1EPK20sensors_direct_mem_t */
/* Demangled: AshmemDirectChannel::AshmemDirectChannel(sensors_direct_mem_t const*) */
int _ZN19AshmemDirectChannelC1EPK20sensors_direct_mem_t(void);

/* Symbol: _ZN17GrallocHalWrapper12isSameMemoryEPK13native_handleS2_ */
/* Demangled: GrallocHalWrapper::isSameMemory(native_handle const*, native_handle const*) */
int _ZN17GrallocHalWrapper12isSameMemoryEPK13native_handleS2_(void);

/* Symbol: _ZN18AccelerationSensorC1Ev */
/* Demangled: AccelerationSensor::AccelerationSensor() */
int _ZN18AccelerationSensorC1Ev(void);

/* Symbol: _ZN13SensorManagerD2Ev */
/* Demangled: SensorManager::~SensorManager() */
int _ZN13SensorManagerD2Ev(void);

/* Symbol: _ZN14LockfreeBufferC1EPvm */
/* Demangled: LockfreeBuffer::LockfreeBuffer(void*, unsigned long) */
int _ZN14LockfreeBufferC1EPvm(void);

/* Symbol: _ZN17GrallocHalWrapper16unregisterBufferEPK13native_handle */
/* Demangled: GrallocHalWrapper::unregisterBuffer(native_handle const*) */
int _ZN17GrallocHalWrapper16unregisterBufferEPK13native_handle(void);

/* Symbol: _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<unsigned int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN15VendorInterface12setMagOffsetEPf */
/* Demangled: VendorInterface::setMagOffset(float*) */
int _ZN15VendorInterface12setMagOffsetEPf(void);

/* Symbol: _ZN18AccelerationSensor5batchEiill */
/* Demangled: AccelerationSensor::batch(int, int, long, long) */
int _ZN18AccelerationSensor5batchEiill(void);

/* Symbol: _ZN14MagneticSensor12processEventEPK12sensor_event */
/* Demangled: MagneticSensor::processEvent(sensor_event const*) */
int _ZN14MagneticSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN15ProximitySensor6enableEii */
/* Demangled: ProximitySensor::enable(int, int) */
int _ZN15ProximitySensor6enableEii(void);

/* Symbol: _ZN15WakeUpSetSensor12pendingEventEv */
/* Demangled: WakeUpSetSensor::pendingEvent() */
int _ZN15WakeUpSetSensor12pendingEventEv(void);

/* Symbol: _ZN15AmbiLightSensorC1Ev */
/* Demangled: AmbiLightSensor::AmbiLightSensor() */
int _ZN15AmbiLightSensorC1Ev(void);

/* Symbol: _ZN7android11SensorSaved20saveCalibrationFloatEPKcS2_Pfm */
/* Demangled: android::SensorSaved::saveCalibrationFloat(char const*, char const*, float*, unsigned long) */
int _ZN7android11SensorSaved20saveCalibrationFloatEPKcS2_Pfm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN17GrallocHalWrapper6unlockEPK13native_handle */
/* Demangled: GrallocHalWrapper::unlock(native_handle const*) */
int _ZN17GrallocHalWrapper6unlockEPK13native_handle(void);

/* Symbol: _ZN15BiometricSensor6enableEii */
/* Demangled: BiometricSensor::enable(int, int) */
int _ZN15BiometricSensor6enableEii(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, DirectChannelManager::DirectChannelTimingInfo> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN20DirectChannelManager23DirectChannelTimingInfoEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZN18AccelerationSensor12processEventEPK12sensor_event */
/* Demangled: AccelerationSensor::processEvent(sensor_event const*) */
int _ZN18AccelerationSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN14MagneticSensorD0Ev */
/* Demangled: MagneticSensor::~MagneticSensor() */
int _ZN14MagneticSensorD0Ev(void);

/* Symbol: _ZN15ScpFusionSensorD2Ev */
/* Demangled: ScpFusionSensor::~ScpFusionSensor() */
int _ZN15ScpFusionSensorD2Ev(void);

/* Symbol: _ZN15WakeUpSetSensor5flushEi */
/* Demangled: WakeUpSetSensor::flush(int) */
int _ZN15WakeUpSetSensor5flushEi(void);

/* Symbol: _ZN10SensorListC1Ev */
/* Demangled: SensorList::SensorList() */
int _ZN10SensorListC1Ev(void);

/* Symbol: _ZN14LockfreeBufferD2Ev */
/* Demangled: LockfreeBuffer::~LockfreeBuffer() */
int _ZN14LockfreeBufferD2Ev(void);

/* Symbol: _ZN17HwGyroscopeSensor12pendingEventEv */
/* Demangled: HwGyroscopeSensor::pendingEvent() */
int _ZN17HwGyroscopeSensor12pendingEventEv(void);

/* Symbol: _ZN20DirectChannelManagerD2Ev */
/* Demangled: DirectChannelManager::~DirectChannelManager() */
int _ZN20DirectChannelManagerD2Ev(void);

/* Symbol: _ZN14PressureSensorD2Ev */
/* Demangled: PressureSensor::~PressureSensor() */
int _ZN14PressureSensorD2Ev(void);

/* Symbol: _ZN17StepCounterSensorD1Ev */
/* Demangled: StepCounterSensor::~StepCounterSensor() */
int _ZN17StepCounterSensorD1Ev(void);

/* Symbol: _ZN15BiometricSensor12processEventEPK12sensor_event */
/* Demangled: BiometricSensor::processEvent(sensor_event const*) */
int _ZN15BiometricSensor12processEventEPK12sensor_event(void);

/* Symbol: _ZN22sensors_poll_context_tD2Ev */
/* Demangled: sensors_poll_context_t::~sensors_poll_context_t() */
int _ZN22sensors_poll_context_tD2Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN7android10JSONObjectD0Ev */
/* Demangled: android::JSONObject::~JSONObject() */
int _ZN7android10JSONObjectD0Ev(void);

/* Symbol: _ZNK7android9JSONValue10getBooleanEPb */
/* Demangled: android::JSONValue::getBoolean(bool*) const */
int _ZNK7android9JSONValue10getBooleanEPb(void);

/* Symbol: _ZTVN7android6VectorINS_9JSONValueEEE */
/* Demangled: vtable for android::Vector<android::JSONValue> */
extern void* _ZTVN7android6VectorINS_9JSONValueEEE;

/* Symbol: _ZN15PedometerSensor5flushEi */
/* Demangled: PedometerSensor::flush(int) */
int _ZN15PedometerSensor5flushEi(void);

/* Symbol: _ZN14ApFusionSensor21getUncaliAccAndReportEP15sensors_event_t */
/* Demangled: ApFusionSensor::getUncaliAccAndReport(sensors_event_t*) */
int _ZN14ApFusionSensor21getUncaliAccAndReportEP15sensors_event_t(void);

/* Symbol: _ZN10SensorList12removeSensorEi */
/* Demangled: SensorList::removeSensor(int) */
int _ZN10SensorList12removeSensorEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AString, android::JSONValue> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7AStringENS_9JSONValueEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN15PedometerSensor12pendingEventEv */
/* Demangled: PedometerSensor::pendingEvent() */
int _ZN15PedometerSensor12pendingEventEv(void);

/* Symbol: _ZN15PedometerSensor8setDelayEil */
/* Demangled: PedometerSensor::setDelay(int, long) */
int _ZN15PedometerSensor8setDelayEil(void);

/* Symbol: _ZN15PedometerSensorD1Ev */
/* Demangled: PedometerSensor::~PedometerSensor() */
int _ZN15PedometerSensorD1Ev(void);

/* Symbol: _ZN22sensors_poll_context_t5flushEi */
/* Demangled: sensors_poll_context_t::flush(int) */
int _ZN22sensors_poll_context_t5flushEi(void);

/* Symbol: _ZN15BiometricSensor5batchEiill */
/* Demangled: BiometricSensor::batch(int, int, long, long) */
int _ZN15BiometricSensor5batchEiill(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperED2Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::~Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperED2Ev(void);

/* Symbol: _ZNK19AshmemDirectChannel13memoryMatchesEPK20sensors_direct_mem_t */
/* Demangled: AshmemDirectChannel::memoryMatches(sensors_direct_mem_t const*) const */
int _ZNK19AshmemDirectChannel13memoryMatchesEPK20sensors_direct_mem_t(void);

/* Symbol: _ZN14ActivitySensorD2Ev */
/* Demangled: ActivitySensor::~ActivitySensor() */
int _ZN14ActivitySensorD2Ev(void);

/* Symbol: _ZN14ApFusionSensor13setFlushEventEP15sensors_event_t */
/* Demangled: ApFusionSensor::setFlushEvent(sensors_event_t*) */
int _ZN14ApFusionSensor13setFlushEventEP15sensors_event_t(void);

/* Symbol: _ZN18AccelerationSensor12pendingEventEv */
/* Demangled: AccelerationSensor::pendingEvent() */
int _ZN18AccelerationSensor12pendingEventEv(void);

__END_DECLS

#endif /* BEGONIA_RE_SENSORS_MT6785_H */
