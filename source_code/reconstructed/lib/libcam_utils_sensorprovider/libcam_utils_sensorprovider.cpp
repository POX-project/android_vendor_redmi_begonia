/*
 * Reverse-Engineered Source for: libcam.utils.sensorprovider.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_utils_sensorprovider"

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
#include "libcam_utils_sensorprovider.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::Utils::SensorProviderService::isSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService9isSupportEv(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService9isSupportEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::WorkThread>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorDeathRecipient>::operator=(NSCam::Utils::SensorProviderService::SensorDeathRecipient*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEEaSEPS4_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_compareEPKvS6_() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Exported Object: VTT for NSCam::Utils::SensorProviderService::SensorDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE = NULL;

/* Exported Object: vtable for NSCam::Utils::SensorProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils14SensorProviderE = NULL;

/* Demangled: NSCam::Utils::SensorProviderService::enableSensor(char const*, void*, NSCam::Utils::eSensorType, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService12enableSensorEPKcPvNS0_11eSensorTypeEj(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService12enableSensorEPKcPvNS0_11eSensorTypeEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::Utils::SensorData>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam5Utils10SensorDataERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam5Utils10SensorDataERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::disableSensor(NSCam::Utils::eSensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProvider13disableSensorENS0_11eSensorTypeE(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProvider13disableSensorENS0_11eSensorTypeE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__tree_node<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::__emplace_unique_key_args<NSCam::Utils::eSensorType, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::Utils::eSensorType const&>, std::__1::tuple<> >(NSCam::Utils::eSensorType const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::Utils::eSensorType const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::initThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService10initThreadEv(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService10initThreadEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::LoadingDebugger>::operator=(NSCam::Utils::SensorProviderService::LoadingDebugger*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEEaSEPS4_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Exported Object: typeinfo for std::__1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__112system_errorE = NULL;

/* Exported Object: typeinfo name for std::__1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__112system_errorE = NULL;

/* Exported Object: NSCam::Utils::SensorProviderService::sSingletonLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils21SensorProviderService14sSingletonLockE = NULL;

/* Demangled: NSCam::Utils::SensorProviderService::~SensorProviderService() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderServiceD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderServiceD2Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Utils::SensorProviderService::LoadingDebugger */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam5Utils21SensorProviderService15LoadingDebuggerE = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::SensorDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS3_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS3_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Utils::SensorProviderService::SensorProviderListener */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam5Utils21SensorProviderService22SensorProviderListenerE = NULL;

/* Exported Object: vtable for NSCam::Utils::SensorProviderService::SensorDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*> >::push_back(NSCam::Utils::SensorProviderService::SensorConfig*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::SensorProvider(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProviderC2EPKc(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProviderC2EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13runtime_error = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE12do_constructES2_j(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE12do_constructES2_j() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorIjEE = NULL;

/* Demangled: NSCam::Utils::SensorProvider::enableSensor(NSCam::Utils::eSensorType, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProvider12enableSensorENS0_11eSensorTypeEj(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProvider12enableSensorENS0_11eSensorTypeEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::LoadingDebugger>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::frameworks::sensorservice::V1_0::IEventQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::getLatestSensorData(NSCam::Utils::eSensorType, NSCam::Utils::SensorData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProvider19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProvider19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::~SensorProviderService() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderServiceD0Ev(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderServiceD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: construction vtable for android::frameworks::sensorservice::V1_0::IEventQueueCallback-in-NSCam::Utils::SensorProviderService::SensorProviderListener */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam5Utils21SensorProviderService22SensorProviderListenerE0_N7android10frameworks13sensorservice4V1_019IEventQueueCallbackE = NULL;

/* Exported Object: vtable for NSCam::Utils::SensorProviderService::SensorProviderListener */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils21SensorProviderService22SensorProviderListenerE = NULL;

/* Demangled: NSCam::Utils::SensorProvider::getAllSensorData(NSCam::Utils::eSensorType, std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProvider16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProvider16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::SensorProvider(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProviderC1EPKc(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProviderC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::SensorProviderListener::onEvent(android::hardware::sensors::V1_0::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService22SensorProviderListener7onEventERKN7android8hardware7sensors4V1_05EventE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService22SensorProviderListener7onEventERKN7android8hardware7sensors4V1_05EventE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE8do_splatES2_PKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE8do_splatES2_PKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE10do_compareEPKvS3_(void) {
    ALOGD("_ZNK7android12SortedVectorIjE10do_compareEPKvS3_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*>&>::push_front(NSCam::Utils::SensorProviderService::SensorConfig* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE10push_frontERKS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE10push_frontERKS5_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorDeathRecipient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::sp<android::frameworks::sensorservice::V1_0::IEventQueue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*> >::push_front(NSCam::Utils::SensorProviderService::SensorConfig*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE10push_frontEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE10push_frontEOS5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-NSCam::Utils::SensorProviderService::SensorDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE0_N7android8hardware20hidl_death_recipientE = NULL;

/* Demangled: NSCam::Utils::SensorProvider::~SensorProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProviderD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProviderD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorProviderListener>::operator=(NSCam::Utils::SensorProviderService::SensorProviderListener*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEEaSEPS4_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::SensorProviderService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils21SensorProviderServiceE = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::getAllSensorData(NSCam::Utils::eSensorType, std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >&, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEERx(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEERx() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::operator=(android::sp<NSCam::Utils::SensorProviderService>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEOS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEOS4_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::SensorProviderService::LoadingDebugger */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils21SensorProviderService15LoadingDebuggerE = NULL;

/* Exported Object: NSCam::Utils::SensorProviderService::sUserLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils21SensorProviderService9sUserLockE = NULL;

/* Demangled: NSCam::Utils::SensorProviderService::SensorProviderService() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderServiceC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderServiceC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE7do_copyES2_PKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE7do_copyES2_PKvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::isEnabled(NSCam::Utils::eSensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProvider9isEnabledENS0_11eSensorTypeE(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProvider9isEnabledENS0_11eSensorTypeE() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::~SensorProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProviderD0Ev(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::WorkThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService10WorkThread10threadLoopEv(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService10WorkThread10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::disableSensor(char const*, void*, NSCam::Utils::eSensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService13disableSensorEPKcPvNS0_11eSensorTypeE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService13disableSensorEPKcPvNS0_11eSensorTypeE() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE15do_move_forwardES2_PKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE15do_move_forwardES2_PKvj() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::wp<NSCam::Utils::SensorProviderService>::~wp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEED2Ev(void) {
    ALOGD("_ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::WorkThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService10WorkThread10readyToRunEv(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService10WorkThread10readyToRunEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::getThreadPriority(int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService17getThreadPriorityERiS2_(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService17getThreadPriorityERiS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProvider>::sp(NSCam::Utils::SensorProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils14SensorProviderEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils14SensorProviderEEC2EPS3_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::isEnabled(NSCam::Utils::eSensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService9isEnabledENS0_11eSensorTypeE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService9isEnabledENS0_11eSensorTypeE() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::frameworks::sensorservice::V1_0::ISensorManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::hidl_death_recipient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware20hidl_death_recipientEED2Ev(void) {
    ALOGD("_ZN7android2spINS_8hardware20hidl_death_recipientEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::doDisableSensor(char const*, void*, NSCam::Utils::eSensorType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService15doDisableSensorEPKcPvNS0_11eSensorTypeE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService15doDisableSensorEPKcPvNS0_11eSensorTypeE() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::Utils::SensorProviderService::WorkThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam5Utils21SensorProviderService10WorkThreadE0_N7android6ThreadE = NULL;

/* Exported Object: typeinfo for std::__1::ios_base::failure */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__18ios_base7failureE = NULL;

/* Demangled: NSCam::Utils::SensorProviderService::getLatestSensorData(NSCam::Utils::eSensorType, NSCam::Utils::SensorData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::sp(NSCam::Utils::SensorProviderService*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEC2EPS3_() called");
    return 0;
}

/* Demangled: android::wp<NSCam::Utils::SensorProviderService>::promote() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android2wpIN5NSCam5Utils21SensorProviderServiceEE7promoteEv(void) {
    ALOGD("_ZNK7android2wpIN5NSCam5Utils21SensorProviderServiceEE7promoteEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService11getInstanceEv(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::configUserInfo(NSCam::Utils::SensorProviderService::SensorConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService14configUserInfoERKNS1_12SensorConfigE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService14configUserInfoERKNS1_12SensorConfigE() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::~SensorProviderService() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderServiceD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderServiceD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProvider>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils14SensorProviderEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils14SensorProviderEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::push_back(NSCam::Utils::SensorProviderService::SensorConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::Utils::SensorProviderService::LoadingDebugger */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam5Utils21SensorProviderService15LoadingDebuggerE0_N7android6ThreadE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-NSCam::Utils::SensorProviderService::SensorProviderListener */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam5Utils21SensorProviderService22SensorProviderListenerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::operator=(NSCam::Utils::SensorProviderService*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEPS3_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::__erase_unique<NSCam::Utils::eSensorType>(NSCam::Utils::eSensorType const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIS4_EEjRKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIS4_EEjRKT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::setThreadPriority(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService17setThreadPriorityEii(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService17setThreadPriorityEii() called");
    return 0;
}

/* Exported Object: NSCam::Utils::SensorProviderService::sService */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils21SensorProviderService8sServiceE = NULL;

/* Demangled: android::SortedVector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Utils::SensorProviderService::WorkThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam5Utils21SensorProviderService10WorkThreadE = NULL;

/* Exported Object: typeinfo name for std::__1::ios_base::failure */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__18ios_base7failureE = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueueCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_019IEventQueueCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_019IEventQueueCallbackEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*>&>::push_back(NSCam::Utils::SensorProviderService::SensorConfig*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::wp<NSCam::Utils::SensorProviderService>::operator=(android::sp<NSCam::Utils::SensorProviderService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEEaSERKNS_2spIS3_EE(void) {
    ALOGD("_ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEEaSERKNS_2spIS3_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE16do_move_backwardES2_PKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE16do_move_backwardES2_PKvj() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >::__push_back_slow_path<NSCam::Utils::SensorData const&>(NSCam::Utils::SensorData const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::vector(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEEC2Ej(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEEC2Ej() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProvider14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProvider14createInstanceEPKc() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::doEnableSensor(NSCam::Utils::SensorProviderService::SensorConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService14doEnableSensorERKNS1_12SensorConfigE(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService14doEnableSensorERKNS1_12SensorConfigE() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::LoadingDebugger::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderService15LoadingDebugger10threadLoopEv(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderService15LoadingDebugger10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProviderService::SensorProviderService() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils21SensorProviderServiceC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils21SensorProviderServiceC2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderServiceEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_destroyES2_j(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_destroyES2_j() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCam::Utils::SensorProvider::~SensorProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils14SensorProviderD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils14SensorProviderD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::SensorProviderService::WorkThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils21SensorProviderService10WorkThreadE = NULL;

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::WorkThread>::operator=(NSCam::Utils::SensorProviderService::WorkThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEEaSEPS4_() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<void*, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPvjEEEE = NULL;

/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorProviderListener>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13runtime_error = NULL;
