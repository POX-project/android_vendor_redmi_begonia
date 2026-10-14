/*
 * Reverse-Engineered ABI Specification for: libsensorndkbridge.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libsensorndkbridge.so
 */

#ifndef BEGONIA_RE_LIBSENSORNDKBRIDGE_H
#define BEGONIA_RE_LIBSENSORNDKBRIDGE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ASensorEventQueue_getEvents */
/* Demangled: ASensorEventQueue_getEvents */
int ASensorEventQueue_getEvents(void);

/* Symbol: ASensorEventQueue_setEventRate */
/* Demangled: ASensorEventQueue_setEventRate */
int ASensorEventQueue_setEventRate(void);

/* Symbol: ASensor_getName */
/* Demangled: ASensor_getName */
int ASensor_getName(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensor(android::hardware::sensors::V1_0::SensorInfo const&, sensor_t*) */
int _ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSharedMemInfo(android::hardware::sensors::V1_0::SharedMemInfo const&, sensors_direct_mem_t*) */
int _ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t(void);

/* Symbol: _ZN7ALooper21invalidateSensorQueueEN7android2wpI17ASensorEventQueueEE */
/* Demangled: ALooper::invalidateSensorQueue(android::wp<ASensorEventQueue>) */
int _ZN7ALooper21invalidateSensorQueueEN7android2wpI17ASensorEventQueueEE(void);

/* Symbol: _ZN17ASensorEventQueue10invalidateEv */
/* Demangled: ASensorEventQueue::invalidate() */
int _ZN17ASensorEventQueue10invalidateEv(void);

/* Symbol: _ZNSt3__16vectorI15sensors_event_tNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJEEEvDpOT_ */
/* Demangled: void std::__1::vector<sensors_event_t, std::__1::allocator<sensors_event_t> >::__emplace_back_slow_path<>() */
int _ZNSt3__16vectorI15sensors_event_tNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJEEEvDpOT_(void);

/* Symbol: ASensor_getMaxRange */
/* Demangled: ASensor_getMaxRange */
int ASensor_getMaxRange(void);

/* Symbol: _ZN14ASensorManager17destroyEventQueueEP17ASensorEventQueue */
/* Demangled: ASensorManager::destroyEventQueue(ASensorEventQueue*) */
int _ZN14ASensorManager17destroyEventQueueEP17ASensorEventQueue(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromRateLevel(android::hardware::sensors::V1_0::RateLevel) */
int _ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTT17ASensorEventQueue */
/* Demangled: VTT for ASensorEventQueue */
extern void* _ZTT17ASensorEventQueue;

/* Symbol: _ZTV17ASensorEventQueue */
/* Demangled: vtable for ASensorEventQueue */
extern void* _ZTV17ASensorEventQueue;

/* Symbol: ASensorManager_createEventQueue */
/* Demangled: ASensorManager_createEventQueue */
int ASensorManager_createEventQueue(void);

/* Symbol: ASensorManager_destroyEventQueue */
/* Demangled: ASensorManager_destroyEventQueue */
int ASensorManager_destroyEventQueue(void);

/* Symbol: _ZN14ASensorManager16getDefaultSensorEi */
/* Demangled: ASensorManager::getDefaultSensor(int) */
int _ZN14ASensorManager16getDefaultSensorEi(void);

/* Symbol: _ZN7ALooperC2Ev */
/* Demangled: ALooper::ALooper() */
int _ZN7ALooperC2Ev(void);

/* Symbol: _ZTC17ASensorEventQueue0_N7android10frameworks13sensorservice4V1_019IEventQueueCallbackE */
/* Demangled: construction vtable for android::frameworks::sensorservice::V1_0::IEventQueueCallback-in-ASensorEventQueue */
extern void* _ZTC17ASensorEventQueue0_N7android10frameworks13sensorservice4V1_019IEventQueueCallbackE;

/* Symbol: _ZN17ASensorEventQueue12setEventRateEPK7ASensori */
/* Demangled: ASensorEventQueue::setEventRate(ASensor const*, int) */
int _ZN17ASensorEventQueue12setEventRateEPK7ASensori(void);

/* Symbol: ASensor_getMinDelay */
/* Demangled: ASensor_getMinDelay */
int ASensor_getMinDelay(void);

/* Symbol: ASensor_getVendor */
/* Demangled: ASensor_getVendor */
int ASensor_getVendor(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZTC17ASensorEventQueue0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-ASensorEventQueue */
extern void* _ZTC17ASensorEventQueue0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: ASensor_getType */
/* Demangled: ASensor_getType */
int ASensor_getType(void);

/* Symbol: _ZN14ASensorManagerC1Ev */
/* Demangled: ASensorManager::ASensorManager() */
int _ZN14ASensorManagerC1Ev(void);

/* Symbol: _ZTVN14ASensorManager20SensorDeathRecipientE */
/* Demangled: vtable for ASensorManager::SensorDeathRecipient */
extern void* _ZTVN14ASensorManager20SensorDeathRecipientE;

/* Symbol: _ZNK17ASensorEventQueue9hasEventsEv */
/* Demangled: ASensorEventQueue::hasEvents() const */
int _ZNK17ASensorEventQueue9hasEventsEv(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensor(sensor_t const&, android::hardware::sensors::V1_0::SensorInfo*) */
int _ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE(void);

/* Symbol: _ZN7ALooper4wakeEv */
/* Demangled: ALooper::wake() */
int _ZN7ALooper4wakeEv(void);

/* Symbol: _ZN17ASensorEventQueue12enableSensorEPK7ASensor */
/* Demangled: ASensorEventQueue::enableSensor(ASensor const*) */
int _ZN17ASensorEventQueue12enableSensorEPK7ASensor(void);

/* Symbol: ALooper_prepare */
/* Demangled: ALooper_prepare */
int ALooper_prepare(void);

/* Symbol: _ZN7ALooper8pollOnceEiPiS0_PPv */
/* Demangled: ALooper::pollOnce(int, int*, int*, void**) */
int _ZN7ALooper8pollOnceEiPiS0_PPv(void);

/* Symbol: _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS4_JRKS4_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<android::wp<ASensorEventQueue>, std::__1::__tree_node<android::wp<ASensorEventQueue>, void*>*, int>, bool> std::__1::__tree<android::wp<ASensorEventQueue>, std::__1::less<android::wp<ASensorEventQueue> >, std::__1::allocator<android::wp<ASensorEventQueue> > >::__emplace_unique_key_args<android::wp<ASensorEventQueue>, android::wp<ASensorEventQueue> const&>(android::wp<ASensorEventQueue> const&, android::wp<ASensorEventQueue> const&) */
int _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS4_JRKS4_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN17ASensorEventQueue14registerSensorEPK7ASensorix */
/* Demangled: ASensorEventQueue::registerSensor(ASensor const*, int, long long) */
int _ZN17ASensorEventQueue14registerSensorEPK7ASensorix(void);

/* Symbol: ASensor_getResolution */
/* Demangled: ASensor_getResolution */
int ASensor_getResolution(void);

/* Symbol: ASensorEventQueue_enableSensor */
/* Demangled: ASensorEventQueue_enableSensor */
int ASensorEventQueue_enableSensor(void);

/* Symbol: _ZN14ASensorManager16createEventQueueEP7ALooperiPFiiiPvES2_ */
/* Demangled: ASensorManager::createEventQueue(ALooper*, int, int (*)(int, int, void*), void*) */
int _ZN14ASensorManager16createEventQueueEP7ALooperiPFiiiPvES2_(void);

/* Symbol: _ZTTN14ASensorManager20SensorDeathRecipientE */
/* Demangled: VTT for ASensorManager::SensorDeathRecipient */
extern void* _ZTTN14ASensorManager20SensorDeathRecipientE;

/* Symbol: ASensorEventQueue_hasEvents */
/* Demangled: ASensorEventQueue_hasEvents */
int ASensorEventQueue_hasEvents(void);

/* Symbol: ASensorEventQueue_requestAdditionalInfoEvents */
/* Demangled: ASensorEventQueue_requestAdditionalInfoEvents */
int ASensorEventQueue_requestAdditionalInfoEvents(void);

/* Symbol: ASensorManager_getInstance */
/* Demangled: ASensorManager_getInstance */
int ASensorManager_getInstance(void);

/* Symbol: ASensorManager_getSensorList */
/* Demangled: ASensorManager_getSensorList */
int ASensorManager_getSensorList(void);

/* Symbol: ASensor_getFifoReservedEventCount */
/* Demangled: ASensor_getFifoReservedEventCount */
int ASensor_getFifoReservedEventCount(void);

/* Symbol: ALooper_forThread */
/* Demangled: ALooper_forThread */
int ALooper_forThread(void);

/* Symbol: ASensorEventQueue_registerSensor */
/* Demangled: ASensorEventQueue_registerSensor */
int ASensorEventQueue_registerSensor(void);

/* Symbol: _ZN14ASensorManager9sInstanceE */
/* Demangled: ASensorManager::sInstance */
extern void* _ZN14ASensorManager9sInstanceE;

/* Symbol: _ZN14ASensorManagerC2Ev */
/* Demangled: ASensorManager::ASensorManager() */
int _ZN14ASensorManagerC2Ev(void);

/* Symbol: _ZN7ALooper18signalSensorEventsEN7android2wpI17ASensorEventQueueEE */
/* Demangled: ALooper::signalSensorEvents(android::wp<ASensorEventQueue>) */
int _ZN7ALooper18signalSensorEventsEN7android2wpI17ASensorEventQueueEE(void);

/* Symbol: _ZN17ASensorEventQueue7onEventERKN7android8hardware7sensors4V1_05EventE */
/* Demangled: ASensorEventQueue::onEvent(android::hardware::sensors::V1_0::Event const&) */
int _ZN17ASensorEventQueue7onEventERKN7android8hardware7sensors4V1_05EventE(void);

/* Symbol: _ZN17ASensorEventQueueC2EP7ALooperPFiiiPvES2_ */
/* Demangled: ASensorEventQueue::ASensorEventQueue(ALooper*, int (*)(int, int, void*), void*) */
int _ZN17ASensorEventQueueC2EP7ALooperPFiiiPvES2_(void);

/* Symbol: ASensor_getFifoMaxEventCount */
/* Demangled: ASensor_getFifoMaxEventCount */
int ASensor_getFifoMaxEventCount(void);

/* Symbol: ASensor_getHandle */
/* Demangled: ASensor_getHandle */
int ASensor_getHandle(void);

/* Symbol: _ZN14ASensorManager20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE */
/* Demangled: ASensorManager::SensorDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN14ASensorManager20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZNK14ASensorManager9initCheckEv */
/* Demangled: ASensorManager::initCheck() const */
int _ZNK14ASensorManager9initCheckEv(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensorEvent(android::hardware::sensors::V1_0::Event const&, sensors_event_t*) */
int _ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t(void);

/* Symbol: ALooper_wake */
/* Demangled: ALooper_wake */
int ALooper_wake(void);

/* Symbol: ASensor_getStringType */
/* Demangled: ASensor_getStringType */
int ASensor_getStringType(void);

/* Symbol: _ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE */
/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensorEvent(sensors_event_t const&, android::hardware::sensors::V1_0::Event*) */
int _ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE(void);

/* Symbol: _ZN7ALooperC1Ev */
/* Demangled: ALooper::ALooper() */
int _ZN7ALooperC1Ev(void);

/* Symbol: _ZN17ASensorEventQueue7setImplERKN7android2spINS0_10frameworks13sensorservice4V1_011IEventQueueEEE */
/* Demangled: ASensorEventQueue::setImpl(android::sp<android::frameworks::sensorservice::V1_0::IEventQueue> const&) */
int _ZN17ASensorEventQueue7setImplERKN7android2spINS0_10frameworks13sensorservice4V1_011IEventQueueEEE(void);

/* Symbol: ALooper_pollOnce */
/* Demangled: ALooper_pollOnce */
int ALooper_pollOnce(void);

/* Symbol: ASensorManager_getInstanceForPackage */
/* Demangled: ASensorManager_getInstanceForPackage */
int ASensorManager_getInstanceForPackage(void);

/* Symbol: _ZTCN14ASensorManager20SensorDeathRecipientE0_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-ASensorManager::SensorDeathRecipient */
extern void* _ZTCN14ASensorManager20SensorDeathRecipientE0_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZN17ASensorEventQueue16dispatchCallbackEv */
/* Demangled: ASensorEventQueue::dispatchCallback() */
int _ZN17ASensorEventQueue16dispatchCallbackEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN17ASensorEventQueue13disableSensorEPK7ASensor */
/* Demangled: ASensorEventQueue::disableSensor(ASensor const*) */
int _ZN17ASensorEventQueue13disableSensorEPK7ASensor(void);

/* Symbol: _ZN17ASensorEventQueue27requestAdditionalInfoEventsEb */
/* Demangled: ASensorEventQueue::requestAdditionalInfoEvents(bool) */
int _ZN17ASensorEventQueue27requestAdditionalInfoEventsEb(void);

/* Symbol: _ZN14ASensorManager13getSensorListEPPKPK7ASensor */
/* Demangled: ASensorManager::getSensorList(ASensor const* const**) */
int _ZN14ASensorManager13getSensorListEPPKPK7ASensor(void);

/* Symbol: _ZN14ASensorManager18getDefaultSensorExEib */
/* Demangled: ASensorManager::getDefaultSensorEx(int, bool) */
int _ZN14ASensorManager18getDefaultSensorExEib(void);

/* Symbol: _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<android::wp<ASensorEventQueue>, std::__1::less<android::wp<ASensorEventQueue> >, std::__1::allocator<android::wp<ASensorEventQueue> > >::destroy(std::__1::__tree_node<android::wp<ASensorEventQueue>, void*>*) */
int _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN17ASensorEventQueue9getEventsEP12ASensorEventj */
/* Demangled: ASensorEventQueue::getEvents(ASensorEvent*, unsigned int) */
int _ZN17ASensorEventQueue9getEventsEP12ASensorEventj(void);

/* Symbol: _ZN17ASensorEventQueueC1EP7ALooperPFiiiPvES2_ */
/* Demangled: ASensorEventQueue::ASensorEventQueue(ALooper*, int (*)(int, int, void*), void*) */
int _ZN17ASensorEventQueueC1EP7ALooperPFiiiPvES2_(void);

/* Symbol: ASensorEventQueue_disableSensor */
/* Demangled: ASensorEventQueue_disableSensor */
int ASensorEventQueue_disableSensor(void);

/* Symbol: ASensorManager_getDefaultSensor */
/* Demangled: ASensorManager_getDefaultSensor */
int ASensorManager_getDefaultSensor(void);

/* Symbol: _ZN14ASensorManager11getInstanceEv */
/* Demangled: ASensorManager::getInstance() */
int _ZN14ASensorManager11getInstanceEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSENSORNDKBRIDGE_H */
