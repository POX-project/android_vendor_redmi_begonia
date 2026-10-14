/*
 * Reverse-Engineered Source for: libsensorndkbridge.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libsensorndkbridge"

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
#include "libsensorndkbridge.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ASensorEventQueue_getEvents */
extern "C" __attribute__((visibility("default"))) int ASensorEventQueue_getEvents(void) {
    ALOGD("ASensorEventQueue_getEvents() called");
    return 0;
}

/* Demangled: ASensorEventQueue_setEventRate */
extern "C" __attribute__((visibility("default"))) int ASensorEventQueue_setEventRate(void) {
    ALOGD("ASensorEventQueue_setEventRate() called");
    return 0;
}

/* Demangled: ASensor_getName */
extern "C" __attribute__((visibility("default"))) int ASensor_getName(void) {
    ALOGD("ASensor_getName() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensor(android::hardware::sensors::V1_0::SensorInfo const&, sensor_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSharedMemInfo(android::hardware::sensors::V1_0::SharedMemInfo const&, sensors_direct_mem_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t() called");
    return 0;
}

/* Demangled: ALooper::invalidateSensorQueue(android::wp<ASensorEventQueue>) */
extern "C" __attribute__((visibility("default"))) int _ZN7ALooper21invalidateSensorQueueEN7android2wpI17ASensorEventQueueEE(void) {
    ALOGD("_ZN7ALooper21invalidateSensorQueueEN7android2wpI17ASensorEventQueueEE() called");
    return 0;
}

/* Demangled: ASensorEventQueue::invalidate() */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue10invalidateEv(void) {
    ALOGD("_ZN17ASensorEventQueue10invalidateEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<sensors_event_t, std::__1::allocator<sensors_event_t> >::__emplace_back_slow_path<>() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI15sensors_event_tNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorI15sensors_event_tNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJEEEvDpOT_() called");
    return 0;
}

/* Demangled: ASensor_getMaxRange */
extern "C" __attribute__((visibility("default"))) int ASensor_getMaxRange(void) {
    ALOGD("ASensor_getMaxRange() called");
    return 0;
}

/* Demangled: ASensorManager::destroyEventQueue(ASensorEventQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManager17destroyEventQueueEP17ASensorEventQueue(void) {
    ALOGD("_ZN14ASensorManager17destroyEventQueueEP17ASensorEventQueue() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromRateLevel(android::hardware::sensors::V1_0::RateLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: VTT for ASensorEventQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTT17ASensorEventQueue = NULL;

/* Exported Object: vtable for ASensorEventQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTV17ASensorEventQueue = NULL;

/* Demangled: ASensorManager_createEventQueue */
extern "C" __attribute__((visibility("default"))) int ASensorManager_createEventQueue(void) {
    ALOGD("ASensorManager_createEventQueue() called");
    return 0;
}

/* Demangled: ASensorManager_destroyEventQueue */
extern "C" __attribute__((visibility("default"))) int ASensorManager_destroyEventQueue(void) {
    ALOGD("ASensorManager_destroyEventQueue() called");
    return 0;
}

/* Demangled: ASensorManager::getDefaultSensor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManager16getDefaultSensorEi(void) {
    ALOGD("_ZN14ASensorManager16getDefaultSensorEi() called");
    return 0;
}

/* Demangled: ALooper::ALooper() */
extern "C" __attribute__((visibility("default"))) int _ZN7ALooperC2Ev(void) {
    ALOGD("_ZN7ALooperC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::frameworks::sensorservice::V1_0::IEventQueueCallback-in-ASensorEventQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTC17ASensorEventQueue0_N7android10frameworks13sensorservice4V1_019IEventQueueCallbackE = NULL;

/* Demangled: ASensorEventQueue::setEventRate(ASensor const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue12setEventRateEPK7ASensori(void) {
    ALOGD("_ZN17ASensorEventQueue12setEventRateEPK7ASensori() called");
    return 0;
}

/* Demangled: ASensor_getMinDelay */
extern "C" __attribute__((visibility("default"))) int ASensor_getMinDelay(void) {
    ALOGD("ASensor_getMinDelay() called");
    return 0;
}

/* Demangled: ASensor_getVendor */
extern "C" __attribute__((visibility("default"))) int ASensor_getVendor(void) {
    ALOGD("ASensor_getVendor() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-ASensorEventQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTC17ASensorEventQueue0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: ASensor_getType */
extern "C" __attribute__((visibility("default"))) int ASensor_getType(void) {
    ALOGD("ASensor_getType() called");
    return 0;
}

/* Demangled: ASensorManager::ASensorManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManagerC1Ev(void) {
    ALOGD("_ZN14ASensorManagerC1Ev() called");
    return 0;
}

/* Exported Object: vtable for ASensorManager::SensorDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN14ASensorManager20SensorDeathRecipientE = NULL;

/* Demangled: ASensorEventQueue::hasEvents() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17ASensorEventQueue9hasEventsEv(void) {
    ALOGD("_ZNK17ASensorEventQueue9hasEventsEv() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensor(sensor_t const&, android::hardware::sensors::V1_0::SensorInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE() called");
    return 0;
}

/* Demangled: ALooper::wake() */
extern "C" __attribute__((visibility("default"))) int _ZN7ALooper4wakeEv(void) {
    ALOGD("_ZN7ALooper4wakeEv() called");
    return 0;
}

/* Demangled: ASensorEventQueue::enableSensor(ASensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue12enableSensorEPK7ASensor(void) {
    ALOGD("_ZN17ASensorEventQueue12enableSensorEPK7ASensor() called");
    return 0;
}

/* Demangled: ALooper_prepare */
extern "C" __attribute__((visibility("default"))) int ALooper_prepare(void) {
    ALOGD("ALooper_prepare() called");
    return 0;
}

/* Demangled: ALooper::pollOnce(int, int*, int*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN7ALooper8pollOnceEiPiS0_PPv(void) {
    ALOGD("_ZN7ALooper8pollOnceEiPiS0_PPv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<android::wp<ASensorEventQueue>, std::__1::__tree_node<android::wp<ASensorEventQueue>, void*>*, int>, bool> std::__1::__tree<android::wp<ASensorEventQueue>, std::__1::less<android::wp<ASensorEventQueue> >, std::__1::allocator<android::wp<ASensorEventQueue> > >::__emplace_unique_key_args<android::wp<ASensorEventQueue>, android::wp<ASensorEventQueue> const&>(android::wp<ASensorEventQueue> const&, android::wp<ASensorEventQueue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS4_JRKS4_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS4_JRKS4_EEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: ASensorEventQueue::registerSensor(ASensor const*, int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue14registerSensorEPK7ASensorix(void) {
    ALOGD("_ZN17ASensorEventQueue14registerSensorEPK7ASensorix() called");
    return 0;
}

/* Demangled: ASensor_getResolution */
extern "C" __attribute__((visibility("default"))) int ASensor_getResolution(void) {
    ALOGD("ASensor_getResolution() called");
    return 0;
}

/* Demangled: ASensorEventQueue_enableSensor */
extern "C" __attribute__((visibility("default"))) int ASensorEventQueue_enableSensor(void) {
    ALOGD("ASensorEventQueue_enableSensor() called");
    return 0;
}

/* Demangled: ASensorManager::createEventQueue(ALooper*, int, int (*)(int, int, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManager16createEventQueueEP7ALooperiPFiiiPvES2_(void) {
    ALOGD("_ZN14ASensorManager16createEventQueueEP7ALooperiPFiiiPvES2_() called");
    return 0;
}

/* Exported Object: VTT for ASensorManager::SensorDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN14ASensorManager20SensorDeathRecipientE = NULL;

/* Demangled: ASensorEventQueue_hasEvents */
extern "C" __attribute__((visibility("default"))) int ASensorEventQueue_hasEvents(void) {
    ALOGD("ASensorEventQueue_hasEvents() called");
    return 0;
}

/* Demangled: ASensorEventQueue_requestAdditionalInfoEvents */
extern "C" __attribute__((visibility("default"))) int ASensorEventQueue_requestAdditionalInfoEvents(void) {
    ALOGD("ASensorEventQueue_requestAdditionalInfoEvents() called");
    return 0;
}

/* Demangled: ASensorManager_getInstance */
extern "C" __attribute__((visibility("default"))) int ASensorManager_getInstance(void) {
    ALOGD("ASensorManager_getInstance() called");
    return 0;
}

/* Demangled: ASensorManager_getSensorList */
extern "C" __attribute__((visibility("default"))) int ASensorManager_getSensorList(void) {
    ALOGD("ASensorManager_getSensorList() called");
    return 0;
}

/* Demangled: ASensor_getFifoReservedEventCount */
extern "C" __attribute__((visibility("default"))) int ASensor_getFifoReservedEventCount(void) {
    ALOGD("ASensor_getFifoReservedEventCount() called");
    return 0;
}

/* Demangled: ALooper_forThread */
extern "C" __attribute__((visibility("default"))) int ALooper_forThread(void) {
    ALOGD("ALooper_forThread() called");
    return 0;
}

/* Demangled: ASensorEventQueue_registerSensor */
extern "C" __attribute__((visibility("default"))) int ASensorEventQueue_registerSensor(void) {
    ALOGD("ASensorEventQueue_registerSensor() called");
    return 0;
}

/* Exported Object: ASensorManager::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN14ASensorManager9sInstanceE = NULL;

/* Demangled: ASensorManager::ASensorManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManagerC2Ev(void) {
    ALOGD("_ZN14ASensorManagerC2Ev() called");
    return 0;
}

/* Demangled: ALooper::signalSensorEvents(android::wp<ASensorEventQueue>) */
extern "C" __attribute__((visibility("default"))) int _ZN7ALooper18signalSensorEventsEN7android2wpI17ASensorEventQueueEE(void) {
    ALOGD("_ZN7ALooper18signalSensorEventsEN7android2wpI17ASensorEventQueueEE() called");
    return 0;
}

/* Demangled: ASensorEventQueue::onEvent(android::hardware::sensors::V1_0::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue7onEventERKN7android8hardware7sensors4V1_05EventE(void) {
    ALOGD("_ZN17ASensorEventQueue7onEventERKN7android8hardware7sensors4V1_05EventE() called");
    return 0;
}

/* Demangled: ASensorEventQueue::ASensorEventQueue(ALooper*, int (*)(int, int, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueueC2EP7ALooperPFiiiPvES2_(void) {
    ALOGD("_ZN17ASensorEventQueueC2EP7ALooperPFiiiPvES2_() called");
    return 0;
}

/* Demangled: ASensor_getFifoMaxEventCount */
extern "C" __attribute__((visibility("default"))) int ASensor_getFifoMaxEventCount(void) {
    ALOGD("ASensor_getFifoMaxEventCount() called");
    return 0;
}

/* Demangled: ASensor_getHandle */
extern "C" __attribute__((visibility("default"))) int ASensor_getHandle(void) {
    ALOGD("ASensor_getHandle() called");
    return 0;
}

/* Demangled: ASensorManager::SensorDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManager20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN14ASensorManager20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: ASensorManager::initCheck() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14ASensorManager9initCheckEv(void) {
    ALOGD("_ZNK14ASensorManager9initCheckEv() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensorEvent(android::hardware::sensors::V1_0::Event const&, sensors_event_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t() called");
    return 0;
}

/* Demangled: ALooper_wake */
extern "C" __attribute__((visibility("default"))) int ALooper_wake(void) {
    ALOGD("ALooper_wake() called");
    return 0;
}

/* Demangled: ASensor_getStringType */
extern "C" __attribute__((visibility("default"))) int ASensor_getStringType(void) {
    ALOGD("ASensor_getStringType() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensorEvent(sensors_event_t const&, android::hardware::sensors::V1_0::Event*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE() called");
    return 0;
}

/* Demangled: ALooper::ALooper() */
extern "C" __attribute__((visibility("default"))) int _ZN7ALooperC1Ev(void) {
    ALOGD("_ZN7ALooperC1Ev() called");
    return 0;
}

/* Demangled: ASensorEventQueue::setImpl(android::sp<android::frameworks::sensorservice::V1_0::IEventQueue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue7setImplERKN7android2spINS0_10frameworks13sensorservice4V1_011IEventQueueEEE(void) {
    ALOGD("_ZN17ASensorEventQueue7setImplERKN7android2spINS0_10frameworks13sensorservice4V1_011IEventQueueEEE() called");
    return 0;
}

/* Demangled: ALooper_pollOnce */
extern "C" __attribute__((visibility("default"))) int ALooper_pollOnce(void) {
    ALOGD("ALooper_pollOnce() called");
    return 0;
}

/* Demangled: ASensorManager_getInstanceForPackage */
extern "C" __attribute__((visibility("default"))) int ASensorManager_getInstanceForPackage(void) {
    ALOGD("ASensorManager_getInstanceForPackage() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-ASensorManager::SensorDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN14ASensorManager20SensorDeathRecipientE0_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: ASensorEventQueue::dispatchCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue16dispatchCallbackEv(void) {
    ALOGD("_ZN17ASensorEventQueue16dispatchCallbackEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: ASensorEventQueue::disableSensor(ASensor const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue13disableSensorEPK7ASensor(void) {
    ALOGD("_ZN17ASensorEventQueue13disableSensorEPK7ASensor() called");
    return 0;
}

/* Demangled: ASensorEventQueue::requestAdditionalInfoEvents(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue27requestAdditionalInfoEventsEb(void) {
    ALOGD("_ZN17ASensorEventQueue27requestAdditionalInfoEventsEb() called");
    return 0;
}

/* Demangled: ASensorManager::getSensorList(ASensor const* const**) */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManager13getSensorListEPPKPK7ASensor(void) {
    ALOGD("_ZN14ASensorManager13getSensorListEPPKPK7ASensor() called");
    return 0;
}

/* Demangled: ASensorManager::getDefaultSensorEx(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManager18getDefaultSensorExEib(void) {
    ALOGD("_ZN14ASensorManager18getDefaultSensorExEib() called");
    return 0;
}

/* Demangled: std::__1::__tree<android::wp<ASensorEventQueue>, std::__1::less<android::wp<ASensorEventQueue> >, std::__1::allocator<android::wp<ASensorEventQueue> > >::destroy(std::__1::__tree_node<android::wp<ASensorEventQueue>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN7android2wpI17ASensorEventQueueEENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: ASensorEventQueue::getEvents(ASensorEvent*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueue9getEventsEP12ASensorEventj(void) {
    ALOGD("_ZN17ASensorEventQueue9getEventsEP12ASensorEventj() called");
    return 0;
}

/* Demangled: ASensorEventQueue::ASensorEventQueue(ALooper*, int (*)(int, int, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN17ASensorEventQueueC1EP7ALooperPFiiiPvES2_(void) {
    ALOGD("_ZN17ASensorEventQueueC1EP7ALooperPFiiiPvES2_() called");
    return 0;
}

/* Demangled: ASensorEventQueue_disableSensor */
extern "C" __attribute__((visibility("default"))) int ASensorEventQueue_disableSensor(void) {
    ALOGD("ASensorEventQueue_disableSensor() called");
    return 0;
}

/* Demangled: ASensorManager_getDefaultSensor */
extern "C" __attribute__((visibility("default"))) int ASensorManager_getDefaultSensor(void) {
    ALOGD("ASensorManager_getDefaultSensor() called");
    return 0;
}

/* Demangled: ASensorManager::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14ASensorManager11getInstanceEv(void) {
    ALOGD("_ZN14ASensorManager11getInstanceEv() called");
    return 0;
}
