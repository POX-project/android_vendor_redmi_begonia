/*
 * Reverse-Engineered ABI Specification for: libcam.utils.sensorprovider.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.utils.sensorprovider.so
 */

#ifndef BEGONIA_RE_LIBCAM_UTILS_SENSORPROVIDER_H
#define BEGONIA_RE_LIBCAM_UTILS_SENSORPROVIDER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam5Utils21SensorProviderService9isSupportEv */
/* Demangled: NSCam::Utils::SensorProviderService::isSupport() */
int _ZN5NSCam5Utils21SensorProviderService9isSupportEv(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEED2Ev */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::WorkThread>::~sp() */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEED2Ev(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEEaSEPS4_ */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorDeathRecipient>::operator=(NSCam::Utils::SensorProviderService::SensorDeathRecipient*) */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEEaSEPS4_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_compareEPKvS6_(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZTTN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE */
/* Demangled: VTT for NSCam::Utils::SensorProviderService::SensorDeathRecipient */
extern void* _ZTTN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE;

/* Symbol: _ZTVN5NSCam5Utils14SensorProviderE */
/* Demangled: vtable for NSCam::Utils::SensorProvider */
extern void* _ZTVN5NSCam5Utils14SensorProviderE;

/* Symbol: _ZN5NSCam5Utils21SensorProviderService12enableSensorEPKcPvNS0_11eSensorTypeEj */
/* Demangled: NSCam::Utils::SensorProviderService::enableSensor(char const*, void*, NSCam::Utils::eSensorType, unsigned int) */
int _ZN5NSCam5Utils21SensorProviderService12enableSensorEPKcPvNS0_11eSensorTypeEj(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam5Utils10SensorDataERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::Utils::SensorData>&) */
int _ZNSt3__114__split_bufferIN5NSCam5Utils10SensorDataERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZN5NSCam5Utils14SensorProvider13disableSensorENS0_11eSensorTypeE */
/* Demangled: NSCam::Utils::SensorProvider::disableSensor(NSCam::Utils::eSensorType) */
int _ZN5NSCam5Utils14SensorProvider13disableSensorENS0_11eSensorTypeE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__tree_node<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::__emplace_unique_key_args<NSCam::Utils::eSensorType, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::Utils::eSensorType const&>, std::__1::tuple<> >(NSCam::Utils::eSensorType const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::Utils::eSensorType const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService10initThreadEv */
/* Demangled: NSCam::Utils::SensorProviderService::initThread() */
int _ZN5NSCam5Utils21SensorProviderService10initThreadEv(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEEaSEPS4_ */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::LoadingDebugger>::operator=(NSCam::Utils::SensorProviderService::LoadingDebugger*) */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEEaSEPS4_(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZTINSt3__112system_errorE */
/* Demangled: typeinfo for std::__1::system_error */
extern void* _ZTINSt3__112system_errorE;

/* Symbol: _ZTSNSt3__112system_errorE */
/* Demangled: typeinfo name for std::__1::system_error */
extern void* _ZTSNSt3__112system_errorE;

/* Symbol: _ZN5NSCam5Utils21SensorProviderService14sSingletonLockE */
/* Demangled: NSCam::Utils::SensorProviderService::sSingletonLock */
extern void* _ZN5NSCam5Utils21SensorProviderService14sSingletonLockE;

/* Symbol: _ZN5NSCam5Utils21SensorProviderServiceD2Ev */
/* Demangled: NSCam::Utils::SensorProviderService::~SensorProviderService() */
int _ZN5NSCam5Utils21SensorProviderServiceD2Ev(void);

/* Symbol: _ZTTN5NSCam5Utils21SensorProviderService15LoadingDebuggerE */
/* Demangled: VTT for NSCam::Utils::SensorProviderService::LoadingDebugger */
extern void* _ZTTN5NSCam5Utils21SensorProviderService15LoadingDebuggerE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS3_4hidl4base4V1_05IBaseEEE */
/* Demangled: NSCam::Utils::SensorProviderService::SensorDeathRecipient::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN5NSCam5Utils21SensorProviderService20SensorDeathRecipient11serviceDiedEyRKN7android2wpINS3_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::clear() */
int _ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZTTN5NSCam5Utils21SensorProviderService22SensorProviderListenerE */
/* Demangled: VTT for NSCam::Utils::SensorProviderService::SensorProviderListener */
extern void* _ZTTN5NSCam5Utils21SensorProviderService22SensorProviderListenerE;

/* Symbol: _ZTVN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE */
/* Demangled: vtable for NSCam::Utils::SensorProviderService::SensorDeathRecipient */
extern void* _ZTVN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE;

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*> >::push_back(NSCam::Utils::SensorProviderService::SensorConfig*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: _ZN5NSCam5Utils14SensorProviderC2EPKc */
/* Demangled: NSCam::Utils::SensorProvider::SensorProvider(char const*) */
int _ZN5NSCam5Utils14SensorProviderC2EPKc(void);

/* Symbol: _ZTSSt13runtime_error */
/* Demangled: typeinfo name for std::runtime_error */
extern void* _ZTSSt13runtime_error;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE12do_constructES2_j */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE12do_constructES2_j(void);

/* Symbol: _ZNK7android12SortedVectorIjE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorIjEE */
/* Demangled: vtable for android::SortedVector<unsigned int> */
extern void* _ZTVN7android12SortedVectorIjEE;

/* Symbol: _ZN5NSCam5Utils14SensorProvider12enableSensorENS0_11eSensorTypeEj */
/* Demangled: NSCam::Utils::SensorProvider::enableSensor(NSCam::Utils::eSensorType, unsigned int) */
int _ZN5NSCam5Utils14SensorProvider12enableSensorENS0_11eSensorTypeEj(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEED2Ev */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::LoadingDebugger>::~sp() */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService15LoadingDebuggerEED2Ev(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_ */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::frameworks::sensorservice::V1_0::IEventQueue*) */
int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSEPS4_(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_ */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>&&) */
int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN5NSCam5Utils14SensorProvider19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE */
/* Demangled: NSCam::Utils::SensorProvider::getLatestSensorData(NSCam::Utils::eSensorType, NSCam::Utils::SensorData&) */
int _ZN5NSCam5Utils14SensorProvider19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderServiceD0Ev */
/* Demangled: NSCam::Utils::SensorProviderService::~SensorProviderService() */
int _ZN5NSCam5Utils21SensorProviderServiceD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorIjE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE8do_splatEPvPKvj(void);

/* Symbol: _ZTCN5NSCam5Utils21SensorProviderService22SensorProviderListenerE0_N7android10frameworks13sensorservice4V1_019IEventQueueCallbackE */
/* Demangled: construction vtable for android::frameworks::sensorservice::V1_0::IEventQueueCallback-in-NSCam::Utils::SensorProviderService::SensorProviderListener */
extern void* _ZTCN5NSCam5Utils21SensorProviderService22SensorProviderListenerE0_N7android10frameworks13sensorservice4V1_019IEventQueueCallbackE;

/* Symbol: _ZTVN5NSCam5Utils21SensorProviderService22SensorProviderListenerE */
/* Demangled: vtable for NSCam::Utils::SensorProviderService::SensorProviderListener */
extern void* _ZTVN5NSCam5Utils21SensorProviderService22SensorProviderListenerE;

/* Symbol: _ZN5NSCam5Utils14SensorProvider16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEE */
/* Demangled: NSCam::Utils::SensorProvider::getAllSensorData(NSCam::Utils::eSensorType, std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >&) */
int _ZN5NSCam5Utils14SensorProvider16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZN5NSCam5Utils14SensorProviderC1EPKc */
/* Demangled: NSCam::Utils::SensorProvider::SensorProvider(char const*) */
int _ZN5NSCam5Utils14SensorProviderC1EPKc(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService22SensorProviderListener7onEventERKN7android8hardware7sensors4V1_05EventE */
/* Demangled: NSCam::Utils::SensorProviderService::SensorProviderListener::onEvent(android::hardware::sensors::V1_0::Event const&) */
int _ZN5NSCam5Utils21SensorProviderService22SensorProviderListener7onEventERKN7android8hardware7sensors4V1_05EventE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE8do_splatES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE8do_splatES2_PKvj(void);

/* Symbol: _ZNK7android12SortedVectorIjE10do_compareEPKvS3_ */
/* Demangled: android::SortedVector<unsigned int>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIjE10do_compareEPKvS3_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE10push_frontERKS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*>&>::push_front(NSCam::Utils::SensorProviderService::SensorConfig* const&) */
int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE10push_frontERKS5_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData>&>&) */
int _ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEED2Ev */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorDeathRecipient>::~sp() */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService20SensorDeathRecipientEED2Ev(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_ */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::sp<android::frameworks::sensorservice::V1_0::IEventQueue> const&) */
int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE10push_frontEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*> >::push_front(NSCam::Utils::SensorProviderService::SensorConfig*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEE10push_frontEOS5_(void);

/* Symbol: _ZTCN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE0_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-NSCam::Utils::SensorProviderService::SensorDeathRecipient */
extern void* _ZTCN5NSCam5Utils21SensorProviderService20SensorDeathRecipientE0_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZN5NSCam5Utils14SensorProviderD2Ev */
/* Demangled: NSCam::Utils::SensorProvider::~SensorProvider() */
int _ZN5NSCam5Utils14SensorProviderD2Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEEaSEPS4_ */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorProviderListener>::operator=(NSCam::Utils::SensorProviderService::SensorProviderListener*) */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEEaSEPS4_(void);

/* Symbol: _ZTVN5NSCam5Utils21SensorProviderServiceE */
/* Demangled: vtable for NSCam::Utils::SensorProviderService */
extern void* _ZTVN5NSCam5Utils21SensorProviderServiceE;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEERx */
/* Demangled: NSCam::Utils::SensorProviderService::getAllSensorData(NSCam::Utils::eSensorType, std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >&, long long&) */
int _ZN5NSCam5Utils21SensorProviderService16getAllSensorDataENS0_11eSensorTypeERNSt3__16vectorINS0_10SensorDataENS3_9allocatorIS5_EEEERx(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEOS4_ */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::operator=(android::sp<NSCam::Utils::SensorProviderService>&&) */
int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEOS4_(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN5NSCam5Utils21SensorProviderService15LoadingDebuggerE */
/* Demangled: vtable for NSCam::Utils::SensorProviderService::LoadingDebugger */
extern void* _ZTVN5NSCam5Utils21SensorProviderService15LoadingDebuggerE;

/* Symbol: _ZN5NSCam5Utils21SensorProviderService9sUserLockE */
/* Demangled: NSCam::Utils::SensorProviderService::sUserLock */
extern void* _ZN5NSCam5Utils21SensorProviderService9sUserLockE;

/* Symbol: _ZN5NSCam5Utils21SensorProviderServiceC1Ev */
/* Demangled: NSCam::Utils::SensorProviderService::SensorProviderService() */
int _ZN5NSCam5Utils21SensorProviderServiceC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE7do_copyES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE7do_copyES2_PKvj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN5NSCam5Utils14SensorProvider9isEnabledENS0_11eSensorTypeE */
/* Demangled: NSCam::Utils::SensorProvider::isEnabled(NSCam::Utils::eSensorType) */
int _ZN5NSCam5Utils14SensorProvider9isEnabledENS0_11eSensorTypeE(void);

/* Symbol: _ZN5NSCam5Utils14SensorProviderD0Ev */
/* Demangled: NSCam::Utils::SensorProvider::~SensorProvider() */
int _ZN5NSCam5Utils14SensorProviderD0Ev(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService10WorkThread10threadLoopEv */
/* Demangled: NSCam::Utils::SensorProviderService::WorkThread::threadLoop() */
int _ZN5NSCam5Utils21SensorProviderService10WorkThread10threadLoopEv(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService13disableSensorEPKcPvNS0_11eSensorTypeE */
/* Demangled: NSCam::Utils::SensorProviderService::disableSensor(char const*, void*, NSCam::Utils::eSensorType) */
int _ZN5NSCam5Utils21SensorProviderService13disableSensorEPKcPvNS0_11eSensorTypeE(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE11__vallocateEj(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE15do_move_forwardES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE15do_move_forwardES2_PKvj(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9pop_frontEv */
/* Demangled: std::__1::deque<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::pop_front() */
int _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9pop_frontEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEED2Ev */
/* Demangled: android::wp<NSCam::Utils::SensorProviderService>::~wp() */
int _ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorIjE10do_destroyEPvj */
/* Demangled: android::SortedVector<unsigned int>::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorIjE10do_destroyEPvj(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService10WorkThread10readyToRunEv */
/* Demangled: NSCam::Utils::SensorProviderService::WorkThread::readyToRun() */
int _ZN5NSCam5Utils21SensorProviderService10WorkThread10readyToRunEv(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService17getThreadPriorityERiS2_ */
/* Demangled: NSCam::Utils::SensorProviderService::getThreadPriority(int&, int&) */
int _ZN5NSCam5Utils21SensorProviderService17getThreadPriorityERiS2_(void);

/* Symbol: _ZNK7android12SortedVectorIjE12do_constructEPvj */
/* Demangled: android::SortedVector<unsigned int>::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorIjE12do_constructEPvj(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils14SensorProviderEEC2EPS3_ */
/* Demangled: android::sp<NSCam::Utils::SensorProvider>::sp(NSCam::Utils::SensorProvider*) */
int _ZN7android2spIN5NSCam5Utils14SensorProviderEEC2EPS3_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService9isEnabledENS0_11eSensorTypeE */
/* Demangled: NSCam::Utils::SensorProviderService::isEnabled(NSCam::Utils::eSensorType) */
int _ZN5NSCam5Utils21SensorProviderService9isEnabledENS0_11eSensorTypeE(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_ */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::frameworks::sensorservice::V1_0::ISensorManager*) */
int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEPS4_(void);

/* Symbol: _ZN7android2spINS_8hardware20hidl_death_recipientEED2Ev */
/* Demangled: android::sp<android::hardware::hidl_death_recipient>::~sp() */
int _ZN7android2spINS_8hardware20hidl_death_recipientEED2Ev(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService15doDisableSensorEPKcPvNS0_11eSensorTypeE */
/* Demangled: NSCam::Utils::SensorProviderService::doDisableSensor(char const*, void*, NSCam::Utils::eSensorType) */
int _ZN5NSCam5Utils21SensorProviderService15doDisableSensorEPKcPvNS0_11eSensorTypeE(void);

/* Symbol: _ZTCN5NSCam5Utils21SensorProviderService10WorkThreadE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::Utils::SensorProviderService::WorkThread */
extern void* _ZTCN5NSCam5Utils21SensorProviderService10WorkThreadE0_N7android6ThreadE;

/* Symbol: _ZTINSt3__18ios_base7failureE */
/* Demangled: typeinfo for std::__1::ios_base::failure */
extern void* _ZTINSt3__18ios_base7failureE;

/* Symbol: _ZN5NSCam5Utils21SensorProviderService19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE */
/* Demangled: NSCam::Utils::SensorProviderService::getLatestSensorData(NSCam::Utils::eSensorType, NSCam::Utils::SensorData&) */
int _ZN5NSCam5Utils21SensorProviderService19getLatestSensorDataENS0_11eSensorTypeERNS0_10SensorDataE(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEC2EPS3_ */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::sp(NSCam::Utils::SensorProviderService*) */
int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEC2EPS3_(void);

/* Symbol: _ZNK7android2wpIN5NSCam5Utils21SensorProviderServiceEE7promoteEv */
/* Demangled: android::wp<NSCam::Utils::SensorProviderService>::promote() const */
int _ZNK7android2wpIN5NSCam5Utils21SensorProviderServiceEE7promoteEv(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService11getInstanceEv */
/* Demangled: NSCam::Utils::SensorProviderService::getInstance() */
int _ZN5NSCam5Utils21SensorProviderService11getInstanceEv(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService14configUserInfoERKNS1_12SensorConfigE */
/* Demangled: NSCam::Utils::SensorProviderService::configUserInfo(NSCam::Utils::SensorProviderService::SensorConfig const&) */
int _ZN5NSCam5Utils21SensorProviderService14configUserInfoERKNS1_12SensorConfigE(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderServiceD1Ev */
/* Demangled: NSCam::Utils::SensorProviderService::~SensorProviderService() */
int _ZN5NSCam5Utils21SensorProviderServiceD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils14SensorProviderEED2Ev */
/* Demangled: android::sp<NSCam::Utils::SensorProvider>::~sp() */
int _ZN7android2spIN5NSCam5Utils14SensorProviderEED2Ev(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::deque<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::push_back(NSCam::Utils::SensorProviderService::SensorConfig const&) */
int _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZTCN5NSCam5Utils21SensorProviderService15LoadingDebuggerE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::Utils::SensorProviderService::LoadingDebugger */
extern void* _ZTCN5NSCam5Utils21SensorProviderService15LoadingDebuggerE0_N7android6ThreadE;

/* Symbol: _ZTCN5NSCam5Utils21SensorProviderService22SensorProviderListenerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-NSCam::Utils::SensorProviderService::SensorProviderListener */
extern void* _ZTCN5NSCam5Utils21SensorProviderService22SensorProviderListenerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEPS3_ */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::operator=(NSCam::Utils::SensorProviderService*) */
int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEEaSEPS3_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIS4_EEjRKT_ */
/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::__map_value_compare<NSCam::Utils::eSensorType, std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState>, std::__1::less<NSCam::Utils::eSensorType>, true>, std::__1::allocator<std::__1::__value_type<NSCam::Utils::eSensorType, NSCam::Utils::SensorProvider::SensorState> > >::__erase_unique<NSCam::Utils::eSensorType>(NSCam::Utils::eSensorType const&) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam5Utils11eSensorTypeENS3_14SensorProvider11SensorStateEEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIS4_EEjRKT_(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService17setThreadPriorityEii */
/* Demangled: NSCam::Utils::SensorProviderService::setThreadPriority(int, int) */
int _ZN5NSCam5Utils21SensorProviderService17setThreadPriorityEii(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService8sServiceE */
/* Demangled: NSCam::Utils::SensorProviderService::sService */
extern void* _ZN5NSCam5Utils21SensorProviderService8sServiceE;

/* Symbol: _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTTN5NSCam5Utils21SensorProviderService10WorkThreadE */
/* Demangled: VTT for NSCam::Utils::SensorProviderService::WorkThread */
extern void* _ZTTN5NSCam5Utils21SensorProviderService10WorkThreadE;

/* Symbol: _ZTSNSt3__18ios_base7failureE */
/* Demangled: typeinfo name for std::__1::ios_base::failure */
extern void* _ZTSNSt3__18ios_base7failureE;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_019IEventQueueCallbackEED2Ev */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueueCallback>::~sp() */
int _ZN7android2spINS_10frameworks13sensorservice4V1_019IEventQueueCallbackEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*>&>::push_back(NSCam::Utils::SensorProviderService::SensorConfig*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigERNS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEEaSERKNS_2spIS3_EE */
/* Demangled: android::wp<NSCam::Utils::SensorProviderService>::operator=(android::sp<NSCam::Utils::SensorProviderService> const&) */
int _ZN7android2wpIN5NSCam5Utils21SensorProviderServiceEEaSERKNS_2spIS3_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE16do_move_backwardES2_PKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE16do_move_backwardES2_PKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::Utils::SensorData, std::__1::allocator<NSCam::Utils::SensorData> >::__push_back_slow_path<NSCam::Utils::SensorData const&>(NSCam::Utils::SensorData const&) */
int _ZNSt3__16vectorIN5NSCam5Utils10SensorDataENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEEC2Ej */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::vector(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEEC2Ej(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN5NSCam5Utils14SensorProvider14createInstanceEPKc */
/* Demangled: NSCam::Utils::SensorProvider::createInstance(char const*) */
int _ZN5NSCam5Utils14SensorProvider14createInstanceEPKc(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService14doEnableSensorERKNS1_12SensorConfigE */
/* Demangled: NSCam::Utils::SensorProviderService::doEnableSensor(NSCam::Utils::SensorProviderService::SensorConfig const&) */
int _ZN5NSCam5Utils21SensorProviderService14doEnableSensorERKNS1_12SensorConfigE(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderService15LoadingDebugger10threadLoopEv */
/* Demangled: NSCam::Utils::SensorProviderService::LoadingDebugger::threadLoop() */
int _ZN5NSCam5Utils21SensorProviderService15LoadingDebugger10threadLoopEv(void);

/* Symbol: _ZN5NSCam5Utils21SensorProviderServiceC2Ev */
/* Demangled: NSCam::Utils::SensorProviderService::SensorProviderService() */
int _ZN5NSCam5Utils21SensorProviderServiceC2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEED2Ev */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService>::~sp() */
int _ZN7android2spIN5NSCam5Utils21SensorProviderServiceEED2Ev(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::~sp() */
int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_destroyES2_j */
/* Demangled: android::SortedVector<android::key_value_pair_t<void*, unsigned int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPvjEEE10do_destroyES2_j(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__deque_base<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::~__deque_base() */
int _ZNSt3__112__deque_baseIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN5NSCam5Utils14SensorProviderD1Ev */
/* Demangled: NSCam::Utils::SensorProvider::~SensorProvider() */
int _ZN5NSCam5Utils14SensorProviderD1Ev(void);

/* Symbol: _ZTVN5NSCam5Utils21SensorProviderService10WorkThreadE */
/* Demangled: vtable for NSCam::Utils::SensorProviderService::WorkThread */
extern void* _ZTVN5NSCam5Utils21SensorProviderService10WorkThreadE;

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEEaSEPS4_ */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::WorkThread>::operator=(NSCam::Utils::SensorProviderService::WorkThread*) */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService10WorkThreadEEaSEPS4_(void);

/* Symbol: _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::SensorProviderService::SensorConfig*, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIPvjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<void*, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPvjEEEE;

/* Symbol: _ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEED2Ev */
/* Demangled: android::sp<NSCam::Utils::SensorProviderService::SensorProviderListener>::~sp() */
int _ZN7android2spIN5NSCam5Utils21SensorProviderService22SensorProviderListenerEED2Ev(void);

/* Symbol: _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev */
/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::~sp() */
int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEED2Ev(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::Utils::SensorProviderService::SensorConfig, std::__1::allocator<NSCam::Utils::SensorProviderService::SensorConfig> >::__add_back_capacity() */
int _ZNSt3__15dequeIN5NSCam5Utils21SensorProviderService12SensorConfigENS_9allocatorIS4_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTISt13runtime_error */
/* Demangled: typeinfo for std::runtime_error */
extern void* _ZTISt13runtime_error;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_UTILS_SENSORPROVIDER_H */
