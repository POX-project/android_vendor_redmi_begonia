/*
 * Reverse-Engineered Source for: android.hardware.sensors@1.0-impl-mediatek.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "android_hardware_sensors_1_0_impl_mediatek"

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
#include "android_hardware_sensors_1_0_impl_mediatek.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int android_hardware_sensors_1_0_impl_mediatek_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int android_hardware_sensors_1_0_impl_mediatek_close(struct hw_device_t* dev);

static struct hw_module_methods_t android_hardware_sensors_1_0_impl_mediatek_module_methods = {
    .open = android_hardware_sensors_1_0_impl_mediatek_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "android",
    .name = "Begonia android_hardware_sensors_1_0_impl_mediatek Module",
    .author = "LineageOS / Community RE",
    .methods = &android_hardware_sensors_1_0_impl_mediatek_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int android_hardware_sensors_1_0_impl_mediatek_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int android_hardware_sensors_1_0_impl_mediatek_close(struct hw_device_t* dev) {
    ALOGI("Closing android_hardware_sensors_1_0_impl_mediatek module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::initCheck() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware7sensors4V1_014implementation7Sensors9initCheckEv(void) {
    ALOGD("_ZNK7android8hardware7sensors4V1_014implementation7Sensors9initCheckEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: waiting_for_data */
extern "C" __attribute__((visibility("default"))) void* waiting_for_data = NULL;

/* Demangled: HIDL_FETCH_ISensors */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_ISensors(void) {
    ALOGD("HIDL_FETCH_ISensors() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::get_device_version_by_handle(int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t28get_device_version_by_handleEi(void) {
    ALOGD("_ZN22sensors_poll_context_t28get_device_version_by_handleEi() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, FullHandle>, std::__1::__map_value_compare<int, std::__1::__value_type<int, FullHandle>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, FullHandle> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, FullHandle>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi10FullHandleEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi10FullHandleEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<void*, std::__1::allocator<void*> >::__push_back_slow_path<void* const&>(void* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPvNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPvNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: get_multi_hal_module_info() */
extern "C" __attribute__((visibility("default"))) int _Z25get_multi_hal_module_infov(void) {
    ALOGD("_Z25get_multi_hal_module_infov() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: SensorEventQueue::waitForSpace(pthread_mutex_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueue12waitForSpaceEP15pthread_mutex_t(void) {
    ALOGD("_ZN16SensorEventQueue12waitForSpaceEP15pthread_mutex_t() called");
    return 0;
}

/* Demangled: void std::__1::vector<hw_device_t*, std::__1::allocator<hw_device_t*> >::__push_back_slow_path<hw_device_t* const&>(hw_device_t* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP11hw_device_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP11hw_device_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensor(android::hardware::sensors::V1_0::SensorInfo const&, sensor_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation15convertToSensorERKNS2_10SensorInfoEP8sensor_t() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::addSubHwDevice(hw_device_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t14addSubHwDeviceEP11hw_device_t(void) {
    ALOGD("_ZN22sensors_poll_context_t14addSubHwDeviceEP11hw_device_t() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::get_primary_v1_device() */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t21get_primary_v1_deviceEv(void) {
    ALOGD("_ZN22sensors_poll_context_t21get_primary_v1_deviceEv() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::poll(int, std::__1::function<void (android::hardware::sensors::V1_0::Result, android::hardware::hidl_vec<android::hardware::sensors::V1_0::Event> const&, android::hardware::hidl_vec<android::hardware::sensors::V1_0::SensorInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors4pollEiNSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_5EventEEERKNS8_INS2_10SensorInfoEEEEEE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors4pollEiNSt3__18functionIFvNS2_6ResultERKNS0_8hidl_vecINS2_5EventEEERKNS8_INS2_10SensorInfoEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<hw_module_t*, std::__1::allocator<hw_module_t*> >::__push_back_slow_path<hw_module_t* const&>(hw_module_t* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP11hw_module_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP11hw_module_tNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensorEvent(sensors_event_t const&, android::hardware::sensors::V1_0::Event*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation22convertFromSensorEventERK15sensors_event_tPNS2_5EventE() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::sensors::V1_0::implementation::Sensors */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware7sensors4V1_014implementation7SensorsE = NULL;

/* Demangled: SensorEventQueue::markAsWritten(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueue13markAsWrittenEi(void) {
    ALOGD("_ZN16SensorEventQueue13markAsWrittenEi() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::batch(int, int, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t5batchEiill(void) {
    ALOGD("_ZN22sensors_poll_context_t5batchEiill() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSharedMemInfo(android::hardware::sensors::V1_0::SharedMemInfo const&, sensors_direct_mem_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation24convertFromSharedMemInfoERKNS2_13SharedMemInfoEP20sensors_direct_mem_t() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::configDirectReport(int, int, android::hardware::sensors::V1_0::RateLevel, std::__1::function<void (android::hardware::sensors::V1_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors18configDirectReportEiiNS2_9RateLevelENSt3__18functionIFvNS2_6ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors18configDirectReportEiiNS2_9RateLevelENSt3__18functionIFvNS2_6ResultEiEEE() called");
    return 0;
}

/* Demangled: SensorEventQueue::peek() */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueue4peekEv(void) {
    ALOGD("_ZN16SensorEventQueue4peekEv() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::close() */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t5closeEv(void) {
    ALOGD("_ZN22sensors_poll_context_t5closeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: full_to_global */
extern "C" __attribute__((visibility("default"))) void* full_to_global = NULL;

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::setOperationMode(android::hardware::sensors::V1_0::OperationMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors16setOperationModeENS2_13OperationModeE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors16setOperationModeENS2_13OperationModeE() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::registerDirectChannel(android::hardware::sensors::V1_0::SharedMemInfo const&, std::__1::function<void (android::hardware::sensors::V1_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors21registerDirectChannelERKNS2_13SharedMemInfoENSt3__18functionIFvNS2_6ResultEiEEE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors21registerDirectChannelERKNS2_13SharedMemInfoENSt3__18functionIFvNS2_6ResultEiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::sensors::V1_0::implementation::Sensors */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7sensors4V1_014implementation7SensorsE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: apiNumToStr(int) */
extern "C" __attribute__((visibility("default"))) int _Z11apiNumToStri(void) {
    ALOGD("_Z11apiNumToStri() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::get_v1_device_by_handle(int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t23get_v1_device_by_handleEi(void) {
    ALOGD("_ZN22sensors_poll_context_t23get_v1_device_by_handleEi() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::poll(sensors_event_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t4pollEP15sensors_event_ti(void) {
    ALOGD("_ZN22sensors_poll_context_t4pollEP15sensors_event_ti() called");
    return 0;
}

/* Demangled: SensorEventQueue::~SensorEventQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueueD2Ev(void) {
    ALOGD("_ZN16SensorEventQueueD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::flush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors5flushEi(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors5flushEi() called");
    return 0;
}

/* Demangled: SensorEventQueue::getWritableRegion(int, sensors_event_t**) */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueue17getWritableRegionEiPP15sensors_event_t(void) {
    ALOGD("_ZN16SensorEventQueue17getWritableRegionEiPP15sensors_event_t() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: SensorEventQueue::getSize() */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueue7getSizeEv(void) {
    ALOGD("_ZN16SensorEventQueue7getSizeEv() called");
    return 0;
}

/* Demangled: SensorEventQueue::SensorEventQueue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueueC2Ei(void) {
    ALOGD("_ZN16SensorEventQueueC2Ei() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromSensor(sensor_t const&, android::hardware::sensors::V1_0::SensorInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation17convertFromSensorERK8sensor_tPNS2_10SensorInfoE() called");
    return 0;
}

/* Exported Object: VTT for android::hardware::sensors::V1_0::implementation::Sensors */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android8hardware7sensors4V1_014implementation7SensorsE = NULL;

/* Demangled: sensors_poll_context_t::copy_event_remap_handle(sensors_event_t*, sensors_event_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t23copy_event_remap_handleEP15sensors_event_tS1_i(void) {
    ALOGD("_ZN22sensors_poll_context_t23copy_event_remap_handleEP15sensors_event_tS1_i() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::swap(std::__1::basic_filebuf<char, std::__1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4swapERS3_(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4swapERS3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<SensorEventQueue*, std::__1::allocator<SensorEventQueue*> >::__push_back_slow_path<SensorEventQueue* const&>(SensorEventQueue* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP16SensorEventQueueNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP16SensorEventQueueNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: SensorEventQueue::~SensorEventQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueueD1Ev(void) {
    ALOGD("_ZN16SensorEventQueueD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::batch(int, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors5batchEill(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors5batchEill() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::convertFromSensorEvents(unsigned long, sensors_event_t const*, android::hardware::hidl_vec<android::hardware::sensors::V1_0::Event>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors23convertFromSensorEventsEmPK15sensors_event_tPNS0_8hidl_vecINS2_5EventEEE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors23convertFromSensorEventsEmPK15sensors_event_tPNS0_8hidl_vecINS2_5EventEEE() called");
    return 0;
}

/* Demangled: writerTask(void*) */
extern "C" __attribute__((visibility("default"))) int _Z10writerTaskPv(void) {
    ALOGD("_Z10writerTaskPv() called");
    return 0;
}

/* Demangled: SensorEventQueue::SensorEventQueue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueueC1Ei(void) {
    ALOGD("_ZN16SensorEventQueueC1Ei() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::activate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t8activateEii(void) {
    ALOGD("_ZN22sensors_poll_context_t8activateEii() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertFromRateLevel(android::hardware::sensors::V1_0::RateLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation20convertFromRateLevelENS2_9RateLevelE() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::getSensorsList(std::__1::function<void (android::hardware::hidl_vec<android::hardware::sensors::V1_0::SensorInfo> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors14getSensorsListENSt3__18functionIFvRKNS0_8hidl_vecINS2_10SensorInfoEEEEEE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors14getSensorsListENSt3__18functionIFvRKNS0_8hidl_vecINS2_10SensorInfoEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::unregisterDirectChannel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors23unregisterDirectChannelEi(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors23unregisterDirectChannelEi() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::register_direct_channel(sensors_direct_mem_t const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t23register_direct_channelEPK20sensors_direct_mem_ti(void) {
    ALOGD("_ZN22sensors_poll_context_t23register_direct_channelEPK20sensors_direct_mem_ti() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::injectSensorData(android::hardware::sensors::V1_0::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors16injectSensorDataERKNS2_5EventE(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors16injectSensorDataERKNS2_5EventE() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::activate(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7Sensors8activateEib(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7Sensors8activateEib() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::getHalDeviceVersion() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware7sensors4V1_014implementation7Sensors19getHalDeviceVersionEv(void) {
    ALOGD("_ZNK7android8hardware7sensors4V1_014implementation7Sensors19getHalDeviceVersionEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::sensors::V1_0::ISensors-in-android::hardware::sensors::V1_0::implementation::Sensors */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android8hardware7sensors4V1_014implementation7SensorsE0_NS2_8ISensorsE = NULL;

/* Demangled: SensorEventQueue::dequeue() */
extern "C" __attribute__((visibility("default"))) int _ZN16SensorEventQueue7dequeueEv(void) {
    ALOGD("_ZN16SensorEventQueue7dequeueEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::Sensors() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7SensorsC2Ev(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7SensorsC2Ev() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::config_direct_report(int, int, sensors_direct_cfg_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t20config_direct_reportEiiPK20sensors_direct_cfg_t(void) {
    ALOGD("_ZN22sensors_poll_context_t20config_direct_reportEiiPK20sensors_direct_cfg_t() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::get_v0_device_by_handle(int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t23get_v0_device_by_handleEi(void) {
    ALOGD("_ZN22sensors_poll_context_t23get_v0_device_by_handleEi() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::setDelay(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t8setDelayEil(void) {
    ALOGD("_ZN22sensors_poll_context_t8setDelayEil() called");
    return 0;
}

/* Demangled: android::hardware::sensors::V1_0::implementation::convertToSensorEvent(android::hardware::sensors::V1_0::Event const&, sensors_event_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation20convertToSensorEventERKNS2_5EventEP15sensors_event_t() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::flush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t5flushEi(void) {
    ALOGD("_ZN22sensors_poll_context_t5flushEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Exported Object: global_to_full */
extern "C" __attribute__((visibility("default"))) void* global_to_full = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: next_global_handle */
extern "C" __attribute__((visibility("default"))) void* next_global_handle = NULL;

/* Demangled: android::hardware::sensors::V1_0::implementation::Sensors::Sensors() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7sensors4V1_014implementation7SensorsC1Ev(void) {
    ALOGD("_ZN7android8hardware7sensors4V1_014implementation7SensorsC1Ev() called");
    return 0;
}

/* Demangled: sensors_poll_context_t::inject_sensor_data(sensors_event_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN22sensors_poll_context_t18inject_sensor_dataEPK15sensors_event_t(void) {
    ALOGD("_ZN22sensors_poll_context_t18inject_sensor_dataEPK15sensors_event_t() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<FullHandle, int>, std::__1::__map_value_compare<FullHandle, std::__1::__value_type<FullHandle, int>, std::__1::less<FullHandle>, true>, std::__1::allocator<std::__1::__value_type<FullHandle, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<FullHandle, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI10FullHandleiEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI10FullHandleiEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}
