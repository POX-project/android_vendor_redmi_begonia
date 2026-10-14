/*
 * Reverse-Engineered Source for: libvidhance.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libvidhance"

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
#include "libvidhance.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: stabilizerFeatureBuilder */
extern "C" __attribute__((visibility("default"))) int stabilizerFeatureBuilder(void) {
    ALOGD("stabilizerFeatureBuilder() called");
    return 0;
}

/* Demangled: boost::exception_detail::copy_boost_exception(boost::exception*, boost::exception const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail20copy_boost_exceptionEPNS_9exceptionEPKS1_(void) {
    ALOGD("_ZN5boost16exception_detail20copy_boost_exceptionEPNS_9exceptionEPKS1_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::once_block_sentry::commit() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17once_block_sentry6commitEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17once_block_sentry6commitEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::once_block_sentry::enter_once_block() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix3aux17once_block_sentry16enter_once_blockEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix3aux17once_block_sentry16enter_once_blockEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sources::aux::global_storage::get_or_init(boost::typeindex::stl_type_index, boost::shared_ptr<boost::log::v2s_mt_posix::sources::aux::logger_holder_base> (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7sources3aux14global_storage11get_or_initENS_9typeindex14stl_type_indexEPFNS_10shared_ptrINS3_18logger_holder_baseEEEvE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7sources3aux14global_storage11get_or_initENS_9typeindex14stl_type_indexEPFNS_10shared_ptrINS3_18logger_holder_baseEEEvE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sources::aux::throw_odr_violation(boost::typeindex::stl_type_index, boost::typeindex::stl_type_index, boost::log::v2s_mt_posix::sources::aux::logger_holder_base const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7sources3aux19throw_odr_violationENS_9typeindex14stl_type_indexES5_RKNS3_18logger_holder_baseE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7sources3aux19throw_odr_violationENS_9typeindex14stl_type_indexES5_RKNS3_18logger_holder_baseE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::default_attribute_names::severity() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux23default_attribute_names8severityEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux23default_attribute_names8severityEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::attribute_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_setC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_setC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::insert(boost::log::v2s_mt_posix::attribute_name, boost::log::v2s_mt_posix::attribute const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set6insertENS1_14attribute_nameERKNS1_9attributeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set6insertENS1_14attribute_nameERKNS1_9attributeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::~attribute_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_setD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_setD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::once_block_sentry::rollback() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17once_block_sentry8rollbackEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17once_block_sentry8rollbackEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::get_logging_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix4core19get_logging_enabledEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix4core19get_logging_enabledEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sources::aux::get_severity_level() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7sources3aux18get_severity_levelEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7sources3aux18get_severity_levelEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::open_record(boost::log::v2s_mt_posix::attribute_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core11open_recordERKNS1_13attribute_setE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core11open_recordERKNS1_13attribute_setE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::stream_provider<char>::allocate_compound(boost::log::v2s_mt_posix::record&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux15stream_providerIcE17allocate_compoundERNS1_6recordE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux15stream_providerIcE17allocate_compoundERNS1_6recordE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::unhandled_exception_count() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux25unhandled_exception_countEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux25unhandled_exception_countEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::push_record_move(boost::log::v2s_mt_posix::record&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core16push_record_moveERNS1_6recordE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core16push_record_moveERNS1_6recordE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::stream_provider<char>::release_compound(boost::log::v2s_mt_posix::aux::stream_provider<char>::stream_compound*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux15stream_providerIcE16release_compoundEPNS4_15stream_compoundE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux15stream_providerIcE16release_compoundEPNS4_15stream_compoundE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::record_view::public_data::destroy(boost::log::v2s_mt_posix::record_view::public_data const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11record_view11public_data7destroyEPKS3_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11record_view11public_data7destroyEPKS3_() called");
    return 0;
}

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_any_cast> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_any_castEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::bad_any_cast> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_12bad_any_castEEE = NULL;

/* Exported Object: typeinfo name for boost::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost12bad_any_castE = NULL;

/* Exported Object: typeinfo for boost::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost12bad_any_castE = NULL;

/* Exported Object: typeinfo name for boost::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9exceptionE = NULL;

/* Exported Object: typeinfo for boost::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9exceptionE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::bad_any_cast> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_12bad_any_castEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_baseE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_base */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_baseE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_any_cast> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_any_castEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_any_cast> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_any_castEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_base */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_baseE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::bad_any_cast> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_12bad_any_castEEE = NULL;

/* Exported Object: vtable for boost::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost12bad_any_castE = NULL;

/* Exported Object: vtable for boost::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9exceptionE = NULL;

/* Demangled: autoZoomBuilder */
extern "C" __attribute__((visibility("default"))) int autoZoomBuilder(void) {
    ALOGD("autoZoomBuilder() called");
    return 0;
}

/* Demangled: trackerBuilder */
extern "C" __attribute__((visibility("default"))) int trackerBuilder(void) {
    ALOGD("trackerBuilder() called");
    return 0;
}

/* Demangled: dmbrGraphBuilder */
extern "C" __attribute__((visibility("default"))) int dmbrGraphBuilder(void) {
    ALOGD("dmbrGraphBuilder() called");
    return 0;
}

/* Demangled: lensDistortionFeatureBuilder */
extern "C" __attribute__((visibility("default"))) int lensDistortionFeatureBuilder(void) {
    ALOGD("lensDistortionFeatureBuilder() called");
    return 0;
}

/* Demangled: vidhance_acceleration_measurement_new */
extern "C" __attribute__((visibility("default"))) int vidhance_acceleration_measurement_new(void) {
    ALOGD("vidhance_acceleration_measurement_new() called");
    return 0;
}

/* Demangled: vidhance_acceleration_measurements_new */
extern "C" __attribute__((visibility("default"))) int vidhance_acceleration_measurements_new(void) {
    ALOGD("vidhance_acceleration_measurements_new() called");
    return 0;
}

/* Demangled: vidhance_acceleration_measurements_free */
extern "C" __attribute__((visibility("default"))) int vidhance_acceleration_measurements_free(void) {
    ALOGD("vidhance_acceleration_measurements_free() called");
    return 0;
}

/* Demangled: vidhance_acceleration_measurements_add */
extern "C" __attribute__((visibility("default"))) int vidhance_acceleration_measurements_add(void) {
    ALOGD("vidhance_acceleration_measurements_add() called");
    return 0;
}

/* Demangled: vidhance_angular_velocity_measurement_new */
extern "C" __attribute__((visibility("default"))) int vidhance_angular_velocity_measurement_new(void) {
    ALOGD("vidhance_angular_velocity_measurement_new() called");
    return 0;
}

/* Demangled: vidhance_angular_velocity_measurements_new */
extern "C" __attribute__((visibility("default"))) int vidhance_angular_velocity_measurements_new(void) {
    ALOGD("vidhance_angular_velocity_measurements_new() called");
    return 0;
}

/* Demangled: vidhance_angular_velocity_measurements_new_v2 */
extern "C" __attribute__((visibility("default"))) int vidhance_angular_velocity_measurements_new_v2(void) {
    ALOGD("vidhance_angular_velocity_measurements_new_v2() called");
    return 0;
}

/* Demangled: vidhance_angular_velocity_measurements_free */
extern "C" __attribute__((visibility("default"))) int vidhance_angular_velocity_measurements_free(void) {
    ALOGD("vidhance_angular_velocity_measurements_free() called");
    return 0;
}

/* Demangled: vidhance_angular_velocity_measurements_add */
extern "C" __attribute__((visibility("default"))) int vidhance_angular_velocity_measurements_add(void) {
    ALOGD("vidhance_angular_velocity_measurements_add() called");
    return 0;
}

/* Demangled: vidhance_date_time_from_nanoseconds */
extern "C" __attribute__((visibility("default"))) int vidhance_date_time_from_nanoseconds(void) {
    ALOGD("vidhance_date_time_from_nanoseconds() called");
    return 0;
}

/* Demangled: vidhance_date_time_to_nanoseconds */
extern "C" __attribute__((visibility("default"))) int vidhance_date_time_to_nanoseconds(void) {
    ALOGD("vidhance_date_time_to_nanoseconds() called");
    return 0;
}

/* Demangled: vidhance_debug_register_callback */
extern "C" __attribute__((visibility("default"))) int vidhance_debug_register_callback(void) {
    ALOGD("vidhance_debug_register_callback() called");
    return 0;
}

/* Demangled: vidhance_debug_register_callback_v2 */
extern "C" __attribute__((visibility("default"))) int vidhance_debug_register_callback_v2(void) {
    ALOGD("vidhance_debug_register_callback_v2() called");
    return 0;
}

/* Demangled: vidhance_debug_set_level */
extern "C" __attribute__((visibility("default"))) int vidhance_debug_set_level(void) {
    ALOGD("vidhance_debug_set_level() called");
    return 0;
}

/* Demangled: vidhance_debug_get_level */
extern "C" __attribute__((visibility("default"))) int vidhance_debug_get_level(void) {
    ALOGD("vidhance_debug_get_level() called");
    return 0;
}

/* Demangled: vidhance_graphic_buffer_register_callbacks */
extern "C" __attribute__((visibility("default"))) int vidhance_graphic_buffer_register_callbacks(void) {
    ALOGD("vidhance_graphic_buffer_register_callbacks() called");
    return 0;
}

/* Demangled: vidhance_graphic_buffer_yuv_420_semiplanar_new */
extern "C" __attribute__((visibility("default"))) int vidhance_graphic_buffer_yuv_420_semiplanar_new(void) {
    ALOGD("vidhance_graphic_buffer_yuv_420_semiplanar_new() called");
    return 0;
}

/* Demangled: vidhance_graphic_buffer_new */
extern "C" __attribute__((visibility("default"))) int vidhance_graphic_buffer_new(void) {
    ALOGD("vidhance_graphic_buffer_new() called");
    return 0;
}

/* Demangled: vidhance_graphic_buffer_new_v2 */
extern "C" __attribute__((visibility("default"))) int vidhance_graphic_buffer_new_v2(void) {
    ALOGD("vidhance_graphic_buffer_new_v2() called");
    return 0;
}

/* Demangled: vidhance_graphic_buffer_free */
extern "C" __attribute__((visibility("default"))) int vidhance_graphic_buffer_free(void) {
    ALOGD("vidhance_graphic_buffer_free() called");
    return 0;
}

/* Demangled: vidhance_raster_yuv_420_semiplanar_new */
extern "C" __attribute__((visibility("default"))) int vidhance_raster_yuv_420_semiplanar_new(void) {
    ALOGD("vidhance_raster_yuv_420_semiplanar_new() called");
    return 0;
}

/* Demangled: vidhance_image_free */
extern "C" __attribute__((visibility("default"))) int vidhance_image_free(void) {
    ALOGD("vidhance_image_free() called");
    return 0;
}

/* Demangled: vidhance_image_save */
extern "C" __attribute__((visibility("default"))) int vidhance_image_save(void) {
    ALOGD("vidhance_image_save() called");
    return 0;
}

/* Demangled: vidhance_ion_buffer_new */
extern "C" __attribute__((visibility("default"))) int vidhance_ion_buffer_new(void) {
    ALOGD("vidhance_ion_buffer_new() called");
    return 0;
}

/* Demangled: vidhance_ion_buffer_free */
extern "C" __attribute__((visibility("default"))) int vidhance_ion_buffer_free(void) {
    ALOGD("vidhance_ion_buffer_free() called");
    return 0;
}

/* Demangled: vidhance_ion_buffer_yuv_420_semiplanar_new */
extern "C" __attribute__((visibility("default"))) int vidhance_ion_buffer_yuv_420_semiplanar_new(void) {
    ALOGD("vidhance_ion_buffer_yuv_420_semiplanar_new() called");
    return 0;
}

/* Demangled: vidhance_lens_position_measurement_new */
extern "C" __attribute__((visibility("default"))) int vidhance_lens_position_measurement_new(void) {
    ALOGD("vidhance_lens_position_measurement_new() called");
    return 0;
}

/* Demangled: vidhance_lens_position_measurements_new_v2 */
extern "C" __attribute__((visibility("default"))) int vidhance_lens_position_measurements_new_v2(void) {
    ALOGD("vidhance_lens_position_measurements_new_v2() called");
    return 0;
}

/* Demangled: vidhance_lens_position_measurements_free */
extern "C" __attribute__((visibility("default"))) int vidhance_lens_position_measurements_free(void) {
    ALOGD("vidhance_lens_position_measurements_free() called");
    return 0;
}

/* Demangled: vidhance_lens_position_measurements_add */
extern "C" __attribute__((visibility("default"))) int vidhance_lens_position_measurements_add(void) {
    ALOGD("vidhance_lens_position_measurements_add() called");
    return 0;
}

/* Demangled: vidhance_gyro_sensor_new */
extern "C" __attribute__((visibility("default"))) int vidhance_gyro_sensor_new(void) {
    ALOGD("vidhance_gyro_sensor_new() called");
    return 0;
}

/* Demangled: vidhance_accelerometer_new */
extern "C" __attribute__((visibility("default"))) int vidhance_accelerometer_new(void) {
    ALOGD("vidhance_accelerometer_new() called");
    return 0;
}

/* Demangled: vidhance_buffered_gyro_sensor_new */
extern "C" __attribute__((visibility("default"))) int vidhance_buffered_gyro_sensor_new(void) {
    ALOGD("vidhance_buffered_gyro_sensor_new() called");
    return 0;
}

/* Demangled: vidhance_buffered_acceleration_sensor_new */
extern "C" __attribute__((visibility("default"))) int vidhance_buffered_acceleration_sensor_new(void) {
    ALOGD("vidhance_buffered_acceleration_sensor_new() called");
    return 0;
}

/* Demangled: vidhance_buffered_lens_position_sensor_new */
extern "C" __attribute__((visibility("default"))) int vidhance_buffered_lens_position_sensor_new(void) {
    ALOGD("vidhance_buffered_lens_position_sensor_new() called");
    return 0;
}

/* Demangled: vidhance_motion_sensor_free */
extern "C" __attribute__((visibility("default"))) int vidhance_motion_sensor_free(void) {
    ALOGD("vidhance_motion_sensor_free() called");
    return 0;
}

/* Demangled: vidhance_buffered_gyro_sensor_update */
extern "C" __attribute__((visibility("default"))) int vidhance_buffered_gyro_sensor_update(void) {
    ALOGD("vidhance_buffered_gyro_sensor_update() called");
    return 0;
}

/* Demangled: vidhance_buffered_acceleration_sensor_update */
extern "C" __attribute__((visibility("default"))) int vidhance_buffered_acceleration_sensor_update(void) {
    ALOGD("vidhance_buffered_acceleration_sensor_update() called");
    return 0;
}

/* Demangled: vidhance_buffered_lens_position_sensor_update */
extern "C" __attribute__((visibility("default"))) int vidhance_buffered_lens_position_sensor_update(void) {
    ALOGD("vidhance_buffered_lens_position_sensor_update() called");
    return 0;
}

/* Demangled: vidhance_float_point_3d_new */
extern "C" __attribute__((visibility("default"))) int vidhance_float_point_3d_new(void) {
    ALOGD("vidhance_float_point_3d_new() called");
    return 0;
}

/* Demangled: vidhance_time_span_from_nanoseconds */
extern "C" __attribute__((visibility("default"))) int vidhance_time_span_from_nanoseconds(void) {
    ALOGD("vidhance_time_span_from_nanoseconds() called");
    return 0;
}

/* Demangled: vidhance_time_span_to_nanoseconds */
extern "C" __attribute__((visibility("default"))) int vidhance_time_span_to_nanoseconds(void) {
    ALOGD("vidhance_time_span_to_nanoseconds() called");
    return 0;
}

/* Demangled: vidhance_float_box_2d_new */
extern "C" __attribute__((visibility("default"))) int vidhance_float_box_2d_new(void) {
    ALOGD("vidhance_float_box_2d_new() called");
    return 0;
}

/* Demangled: vidhance_int_vector_2d_new */
extern "C" __attribute__((visibility("default"))) int vidhance_int_vector_2d_new(void) {
    ALOGD("vidhance_int_vector_2d_new() called");
    return 0;
}

/* Demangled: vidhance_float_vector_2d_new */
extern "C" __attribute__((visibility("default"))) int vidhance_float_vector_2d_new(void) {
    ALOGD("vidhance_float_vector_2d_new() called");
    return 0;
}

/* Demangled: vidhance_float_vector_3d_new */
extern "C" __attribute__((visibility("default"))) int vidhance_float_vector_3d_new(void) {
    ALOGD("vidhance_float_vector_3d_new() called");
    return 0;
}

/* Demangled: vidhance_get_version */
extern "C" __attribute__((visibility("default"))) int vidhance_get_version(void) {
    ALOGD("vidhance_get_version() called");
    return 0;
}

/* Demangled: vidhance_get_version_name */
extern "C" __attribute__((visibility("default"))) int vidhance_get_version_name(void) {
    ALOGD("vidhance_get_version_name() called");
    return 0;
}

/* Demangled: vidhance_fence_duplicate_fd */
extern "C" __attribute__((visibility("default"))) int vidhance_fence_duplicate_fd(void) {
    ALOGD("vidhance_fence_duplicate_fd() called");
    return 0;
}

/* Demangled: vidhance_context_new */
extern "C" __attribute__((visibility("default"))) int vidhance_context_new(void) {
    ALOGD("vidhance_context_new() called");
    return 0;
}

/* Demangled: vidhance_context_free */
extern "C" __attribute__((visibility("default"))) int vidhance_context_free(void) {
    ALOGD("vidhance_context_free() called");
    return 0;
}

/* Demangled: vidhance_context_start */
extern "C" __attribute__((visibility("default"))) int vidhance_context_start(void) {
    ALOGD("vidhance_context_start() called");
    return 0;
}

/* Demangled: vidhance_context_stop */
extern "C" __attribute__((visibility("default"))) int vidhance_context_stop(void) {
    ALOGD("vidhance_context_stop() called");
    return 0;
}

/* Demangled: vidhance_context_flush */
extern "C" __attribute__((visibility("default"))) int vidhance_context_flush(void) {
    ALOGD("vidhance_context_flush() called");
    return 0;
}

/* Demangled: vidhance_context_preregister_input */
extern "C" __attribute__((visibility("default"))) int vidhance_context_preregister_input(void) {
    ALOGD("vidhance_context_preregister_input() called");
    return 0;
}

/* Demangled: vidhance_context_preregister_output */
extern "C" __attribute__((visibility("default"))) int vidhance_context_preregister_output(void) {
    ALOGD("vidhance_context_preregister_output() called");
    return 0;
}

/* Demangled: vidhance_context_invalidate_buffers */
extern "C" __attribute__((visibility("default"))) int vidhance_context_invalidate_buffers(void) {
    ALOGD("vidhance_context_invalidate_buffers() called");
    return 0;
}

/* Demangled: vidhance_context_register_callback */
extern "C" __attribute__((visibility("default"))) int vidhance_context_register_callback(void) {
    ALOGD("vidhance_context_register_callback() called");
    return 0;
}

/* Demangled: vidhance_context_send */
extern "C" __attribute__((visibility("default"))) int vidhance_context_send(void) {
    ALOGD("vidhance_context_send() called");
    return 0;
}

/* Demangled: vidhance_context_process */
extern "C" __attribute__((visibility("default"))) int vidhance_context_process(void) {
    ALOGD("vidhance_context_process() called");
    return 0;
}

/* Demangled: vidhance_context_set_proxy */
extern "C" __attribute__((visibility("default"))) int vidhance_context_set_proxy(void) {
    ALOGD("vidhance_context_set_proxy() called");
    return 0;
}

/* Demangled: vidhance_input_from_image */
extern "C" __attribute__((visibility("default"))) int vidhance_input_from_image(void) {
    ALOGD("vidhance_input_from_image() called");
    return 0;
}

/* Demangled: vidhance_input_set_user_data */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_user_data(void) {
    ALOGD("vidhance_input_set_user_data() called");
    return 0;
}

/* Demangled: vidhance_input_set_render_target */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_render_target(void) {
    ALOGD("vidhance_input_set_render_target() called");
    return 0;
}

/* Demangled: vidhance_input_set_sensor_mode_index */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_sensor_mode_index(void) {
    ALOGD("vidhance_input_set_sensor_mode_index() called");
    return 0;
}

/* Demangled: vidhance_input_set_timestamp */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_timestamp(void) {
    ALOGD("vidhance_input_set_timestamp() called");
    return 0;
}

/* Demangled: vidhance_input_set_rolling_shutter_time */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_rolling_shutter_time(void) {
    ALOGD("vidhance_input_set_rolling_shutter_time() called");
    return 0;
}

/* Demangled: vidhance_input_set_focal_length */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_focal_length(void) {
    ALOGD("vidhance_input_set_focal_length() called");
    return 0;
}

/* Demangled: vidhance_input_set_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_exposure_time(void) {
    ALOGD("vidhance_input_set_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_input_set_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_sensitivity(void) {
    ALOGD("vidhance_input_set_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_input_set_zoom */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_zoom(void) {
    ALOGD("vidhance_input_set_zoom() called");
    return 0;
}

/* Demangled: vidhance_input_free */
extern "C" __attribute__((visibility("default"))) int vidhance_input_free(void) {
    ALOGD("vidhance_input_free() called");
    return 0;
}

/* Demangled: vidhance_input_set_object_distance */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_object_distance(void) {
    ALOGD("vidhance_input_set_object_distance() called");
    return 0;
}

/* Demangled: vidhance_input_set_object_distance_unknown */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_object_distance_unknown(void) {
    ALOGD("vidhance_input_set_object_distance_unknown() called");
    return 0;
}

/* Demangled: vidhance_input_set_focus_distance */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_focus_distance(void) {
    ALOGD("vidhance_input_set_focus_distance() called");
    return 0;
}

/* Demangled: vidhance_input_set_autofocus_position */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_autofocus_position(void) {
    ALOGD("vidhance_input_set_autofocus_position() called");
    return 0;
}

/* Demangled: vidhance_input_get_object_distance */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_object_distance(void) {
    ALOGD("vidhance_input_get_object_distance() called");
    return 0;
}

/* Demangled: vidhance_input_get_focus_distance */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_focus_distance(void) {
    ALOGD("vidhance_input_get_focus_distance() called");
    return 0;
}

/* Demangled: vidhance_input_get_autofocus_position */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_autofocus_position(void) {
    ALOGD("vidhance_input_get_autofocus_position() called");
    return 0;
}

/* Demangled: vidhance_input_get_sensor_mode_index */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_sensor_mode_index(void) {
    ALOGD("vidhance_input_get_sensor_mode_index() called");
    return 0;
}

/* Demangled: vidhance_input_get_timestamp */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_timestamp(void) {
    ALOGD("vidhance_input_get_timestamp() called");
    return 0;
}

/* Demangled: vidhance_input_get_rolling_shutter_time */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_rolling_shutter_time(void) {
    ALOGD("vidhance_input_get_rolling_shutter_time() called");
    return 0;
}

/* Demangled: vidhance_input_get_focal_length */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_focal_length(void) {
    ALOGD("vidhance_input_get_focal_length() called");
    return 0;
}

/* Demangled: vidhance_input_get_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_exposure_time(void) {
    ALOGD("vidhance_input_get_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_input_get_zoom */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_zoom(void) {
    ALOGD("vidhance_input_get_zoom() called");
    return 0;
}

/* Demangled: vidhance_input_get_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_sensitivity(void) {
    ALOGD("vidhance_input_get_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_input_set_applied_crop_region */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_applied_crop_region(void) {
    ALOGD("vidhance_input_set_applied_crop_region() called");
    return 0;
}

/* Demangled: vidhance_input_set_master_resolution */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_master_resolution(void) {
    ALOGD("vidhance_input_set_master_resolution() called");
    return 0;
}

/* Demangled: vidhance_input_set_camera_id */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_camera_id(void) {
    ALOGD("vidhance_input_set_camera_id() called");
    return 0;
}

/* Demangled: vidhance_input_set_active_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_active_array_size(void) {
    ALOGD("vidhance_input_set_active_array_size() called");
    return 0;
}

/* Demangled: vidhance_input_set_pixel_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_pixel_array_size(void) {
    ALOGD("vidhance_input_set_pixel_array_size() called");
    return 0;
}

/* Demangled: vidhance_input_set_physical_size */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_physical_size(void) {
    ALOGD("vidhance_input_set_physical_size() called");
    return 0;
}

/* Demangled: vidhance_input_get_camera_id */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_camera_id(void) {
    ALOGD("vidhance_input_get_camera_id() called");
    return 0;
}

/* Demangled: vidhance_input_get_active_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_active_array_size(void) {
    ALOGD("vidhance_input_get_active_array_size() called");
    return 0;
}

/* Demangled: vidhance_input_get_pixel_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_pixel_array_size(void) {
    ALOGD("vidhance_input_get_pixel_array_size() called");
    return 0;
}

/* Demangled: vidhance_input_get_physical_size */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_physical_size(void) {
    ALOGD("vidhance_input_get_physical_size() called");
    return 0;
}

/* Demangled: vidhance_input_get_master_resolution */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_master_resolution(void) {
    ALOGD("vidhance_input_get_master_resolution() called");
    return 0;
}

/* Demangled: vidhance_input_add_exposure_data */
extern "C" __attribute__((visibility("default"))) int vidhance_input_add_exposure_data(void) {
    ALOGD("vidhance_input_add_exposure_data() called");
    return 0;
}

/* Demangled: vidhance_input_get_exposure_data */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_exposure_data(void) {
    ALOGD("vidhance_input_get_exposure_data() called");
    return 0;
}

/* Demangled: vidhance_input_add_gain_data */
extern "C" __attribute__((visibility("default"))) int vidhance_input_add_gain_data(void) {
    ALOGD("vidhance_input_add_gain_data() called");
    return 0;
}

/* Demangled: vidhance_input_get_gain_data */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_gain_data(void) {
    ALOGD("vidhance_input_get_gain_data() called");
    return 0;
}

/* Demangled: vidhance_result_get_output_image */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_output_image(void) {
    ALOGD("vidhance_result_get_output_image() called");
    return 0;
}

/* Demangled: vidhance_result_free */
extern "C" __attribute__((visibility("default"))) int vidhance_result_free(void) {
    ALOGD("vidhance_result_free() called");
    return 0;
}

/* Demangled: vidhance_result_get_status */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_status(void) {
    ALOGD("vidhance_result_get_status() called");
    return 0;
}

/* Demangled: vidhance_result_get_user_data */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_user_data(void) {
    ALOGD("vidhance_result_get_user_data() called");
    return 0;
}

/* Demangled: vidhance_result_get_crop_region */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_crop_region(void) {
    ALOGD("vidhance_result_get_crop_region() called");
    return 0;
}

/* Demangled: vidhance_result_get_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_sensitivity(void) {
    ALOGD("vidhance_result_get_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_result_get_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_exposure_time(void) {
    ALOGD("vidhance_result_get_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_result_get_fence */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_fence(void) {
    ALOGD("vidhance_result_get_fence() called");
    return 0;
}

/* Demangled: vidhance_result_transform_point */
extern "C" __attribute__((visibility("default"))) int vidhance_result_transform_point(void) {
    ALOGD("vidhance_result_transform_point() called");
    return 0;
}

/* Demangled: vidhance_result_back_transform_point */
extern "C" __attribute__((visibility("default"))) int vidhance_result_back_transform_point(void) {
    ALOGD("vidhance_result_back_transform_point() called");
    return 0;
}

/* Demangled: vidhance_settings_new */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_new(void) {
    ALOGD("vidhance_settings_new() called");
    return 0;
}

/* Demangled: vidhance_settings_free */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_free(void) {
    ALOGD("vidhance_settings_free() called");
    return 0;
}

/* Demangled: vidhance_settings_set_device_name */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_device_name(void) {
    ALOGD("vidhance_settings_set_device_name() called");
    return 0;
}

/* Demangled: vidhance_settings_get_device_name */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_device_name(void) {
    ALOGD("vidhance_settings_get_device_name() called");
    return 0;
}

/* Demangled: vidhance_settings_set_calibration_path */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_calibration_path(void) {
    ALOGD("vidhance_settings_set_calibration_path() called");
    return 0;
}

/* Demangled: vidhance_settings_get_calibration_path */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_calibration_path(void) {
    ALOGD("vidhance_settings_get_calibration_path() called");
    return 0;
}

/* Demangled: vidhance_settings_set_render_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_render_mode(void) {
    ALOGD("vidhance_settings_set_render_mode() called");
    return 0;
}

/* Demangled: vidhance_settings_get_render_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_render_mode(void) {
    ALOGD("vidhance_settings_get_render_mode() called");
    return 0;
}

/* Demangled: vidhance_settings_set_input_meta_format */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_input_meta_format(void) {
    ALOGD("vidhance_settings_set_input_meta_format() called");
    return 0;
}

/* Demangled: vidhance_settings_get_input_meta_format */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_input_meta_format(void) {
    ALOGD("vidhance_settings_get_input_meta_format() called");
    return 0;
}

/* Demangled: vidhance_settings_set_render_output_image */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_render_output_image(void) {
    ALOGD("vidhance_settings_set_render_output_image() called");
    return 0;
}

/* Demangled: vidhance_settings_get_render_output_image */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_render_output_image(void) {
    ALOGD("vidhance_settings_get_render_output_image() called");
    return 0;
}

/* Demangled: vidhance_settings_set_synchronize_result */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_synchronize_result(void) {
    ALOGD("vidhance_settings_set_synchronize_result() called");
    return 0;
}

/* Demangled: vidhance_settings_get_synchronize_result */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_synchronize_result(void) {
    ALOGD("vidhance_settings_get_synchronize_result() called");
    return 0;
}

/* Demangled: vidhance_settings_set_sensor_logger_enabled */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_sensor_logger_enabled(void) {
    ALOGD("vidhance_settings_set_sensor_logger_enabled() called");
    return 0;
}

/* Demangled: vidhance_settings_get_sensor_logger_enabled */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_sensor_logger_enabled(void) {
    ALOGD("vidhance_settings_get_sensor_logger_enabled() called");
    return 0;
}

/* Demangled: vidhance_settings_register_motion_sensor */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_register_motion_sensor(void) {
    ALOGD("vidhance_settings_register_motion_sensor() called");
    return 0;
}

/* Demangled: vidhance_settings_enable_overlays */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_enable_overlays(void) {
    ALOGD("vidhance_settings_enable_overlays() called");
    return 0;
}

/* Demangled: vidhance_settings_disable_overlays */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_disable_overlays(void) {
    ALOGD("vidhance_settings_disable_overlays() called");
    return 0;
}

/* Demangled: vidhance_settings_enable_proxy_source */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_enable_proxy_source(void) {
    ALOGD("vidhance_settings_enable_proxy_source() called");
    return 0;
}

/* Demangled: vidhance_settings_enable_proxy_target */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_enable_proxy_target(void) {
    ALOGD("vidhance_settings_enable_proxy_target() called");
    return 0;
}

/* Demangled: vidhance_settings_set_input_coordinate_system */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_input_coordinate_system(void) {
    ALOGD("vidhance_settings_set_input_coordinate_system() called");
    return 0;
}

/* Demangled: vidhance_settings_get_input_coordinate_system */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_input_coordinate_system(void) {
    ALOGD("vidhance_settings_get_input_coordinate_system() called");
    return 0;
}

/* Demangled: vidhance_settings_set_output_coordinate_system */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_output_coordinate_system(void) {
    ALOGD("vidhance_settings_set_output_coordinate_system() called");
    return 0;
}

/* Demangled: vidhance_settings_get_output_coordinate_system */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_output_coordinate_system(void) {
    ALOGD("vidhance_settings_get_output_coordinate_system() called");
    return 0;
}

/* Demangled: vidhance_settings_set_target_fps */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_target_fps(void) {
    ALOGD("vidhance_settings_set_target_fps() called");
    return 0;
}

/* Demangled: vidhance_settings_get_target_fps */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_target_fps(void) {
    ALOGD("vidhance_settings_get_target_fps() called");
    return 0;
}

/* Demangled: vidhance_settings_set_usage */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_usage(void) {
    ALOGD("vidhance_settings_set_usage() called");
    return 0;
}

/* Demangled: vidhance_settings_get_usage */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_usage(void) {
    ALOGD("vidhance_settings_get_usage() called");
    return 0;
}

/* Demangled: vidhance_settings_set_minimum_valid_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_minimum_valid_sensitivity(void) {
    ALOGD("vidhance_settings_set_minimum_valid_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_settings_set_maximum_valid_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_maximum_valid_sensitivity(void) {
    ALOGD("vidhance_settings_set_maximum_valid_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_settings_get_minimum_valid_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_minimum_valid_sensitivity(void) {
    ALOGD("vidhance_settings_get_minimum_valid_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_settings_get_maximum_valid_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_maximum_valid_sensitivity(void) {
    ALOGD("vidhance_settings_get_maximum_valid_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_settings_set_minimum_valid_exposure */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_minimum_valid_exposure(void) {
    ALOGD("vidhance_settings_set_minimum_valid_exposure() called");
    return 0;
}

/* Demangled: vidhance_settings_set_maximum_valid_exposure */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_maximum_valid_exposure(void) {
    ALOGD("vidhance_settings_set_maximum_valid_exposure() called");
    return 0;
}

/* Demangled: vidhance_settings_get_minimum_valid_exposure */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_minimum_valid_exposure(void) {
    ALOGD("vidhance_settings_get_minimum_valid_exposure() called");
    return 0;
}

/* Demangled: vidhance_settings_get_maximum_valid_exposure */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_maximum_valid_exposure(void) {
    ALOGD("vidhance_settings_get_maximum_valid_exposure() called");
    return 0;
}

/* Exported Object: vtable for boost::system::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6system12system_errorE = NULL;

/* Exported Object: typeinfo name for boost::system::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6system12system_errorE = NULL;

/* Exported Object: typeinfo for boost::system::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6system12system_errorE = NULL;

/* Exported Object: typeinfo name for void (*)(int, int, int, int, void**, void**, int*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFviiiiPPvS0_PiE = NULL;

/* Exported Object: typeinfo name for void (int, int, int, int, void**, void**, int*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFviiiiPPvS0_PiE = NULL;

/* Exported Object: typeinfo for void (int, int, int, int, void**, void**, int*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFviiiiPPvS0_PiE = NULL;

/* Exported Object: typeinfo for void (*)(int, int, int, int, void**, void**, int*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFviiiiPPvS0_PiE = NULL;

/* Exported Object: typeinfo name for void (*)(int, int, int, int, int, void*, bool, void**, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFviiiiiPvbPS_S0_E = NULL;

/* Exported Object: typeinfo name for void (int, int, int, int, int, void*, bool, void**, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFviiiiiPvbPS_S0_E = NULL;

/* Exported Object: typeinfo for void (int, int, int, int, int, void*, bool, void**, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFviiiiiPvbPS_S0_E = NULL;

/* Exported Object: typeinfo for void (*)(int, int, int, int, int, void*, bool, void**, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFviiiiiPvbPS_S0_E = NULL;

/* Exported Object: typeinfo name for void (*)(void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFvPvS_E = NULL;

/* Exported Object: typeinfo name for void (void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFvPvS_E = NULL;

/* Exported Object: typeinfo for void (void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFvPvS_E = NULL;

/* Exported Object: typeinfo for void (*)(void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFvPvS_E = NULL;

/* Exported Object: typeinfo name for void (*)(void*, int, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFvPviPS_E = NULL;

/* Exported Object: typeinfo name for void (void*, int, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFvPviPS_E = NULL;

/* Exported Object: typeinfo for void (void*, int, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFvPviPS_E = NULL;

/* Exported Object: typeinfo for void (*)(void*, int, void**) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFvPviPS_E = NULL;

/* Exported Object: typeinfo name for void (*)(void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFvPvE = NULL;

/* Exported Object: typeinfo name for void (void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFvPvE = NULL;

/* Exported Object: typeinfo for void (void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFvPvE = NULL;

/* Exported Object: typeinfo for void (*)(void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFvPvE = NULL;

/* Exported Object: typeinfo for std::__1::basic_iostream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__114basic_iostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_istream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_ostream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_streambuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__115basic_streambufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: vidhance_settings_set_stabilizer_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_stabilizer_mode(void) {
    ALOGD("vidhance_settings_set_stabilizer_mode() called");
    return 0;
}

/* Demangled: vidhance_settings_get_stabilizer_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_stabilizer_mode(void) {
    ALOGD("vidhance_settings_get_stabilizer_mode() called");
    return 0;
}

/* Demangled: vidhance_settings_set_stabilizer_latency */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_stabilizer_latency(void) {
    ALOGD("vidhance_settings_set_stabilizer_latency() called");
    return 0;
}

/* Demangled: vidhance_settings_get_stabilizer_latency */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_stabilizer_latency(void) {
    ALOGD("vidhance_settings_get_stabilizer_latency() called");
    return 0;
}

/* Demangled: vidhance_settings_set_stabilizer_reduction */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_stabilizer_reduction(void) {
    ALOGD("vidhance_settings_set_stabilizer_reduction() called");
    return 0;
}

/* Demangled: vidhance_settings_get_stabilizer_reduction */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_stabilizer_reduction(void) {
    ALOGD("vidhance_settings_get_stabilizer_reduction() called");
    return 0;
}

/* Demangled: vidhance_settings_set_stabilizer_crop_factor */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_stabilizer_crop_factor(void) {
    ALOGD("vidhance_settings_set_stabilizer_crop_factor() called");
    return 0;
}

/* Demangled: vidhance_settings_get_stabilizer_crop_factor */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_stabilizer_crop_factor(void) {
    ALOGD("vidhance_settings_get_stabilizer_crop_factor() called");
    return 0;
}

/* Demangled: vidhance_settings_set_autozoom_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_autozoom_mode(void) {
    ALOGD("vidhance_settings_set_autozoom_mode() called");
    return 0;
}

/* Demangled: vidhance_settings_get_autozoom_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_autozoom_mode(void) {
    ALOGD("vidhance_settings_get_autozoom_mode() called");
    return 0;
}

/* Demangled: vidhance_settings_set_autozoom_minimum_scaling */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_autozoom_minimum_scaling(void) {
    ALOGD("vidhance_settings_set_autozoom_minimum_scaling() called");
    return 0;
}

/* Demangled: vidhance_settings_get_autozoom_minimum_scaling */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_autozoom_minimum_scaling(void) {
    ALOGD("vidhance_settings_get_autozoom_minimum_scaling() called");
    return 0;
}

/* Demangled: vidhance_settings_set_autozoom_manual_offset_delay */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_autozoom_manual_offset_delay(void) {
    ALOGD("vidhance_settings_set_autozoom_manual_offset_delay() called");
    return 0;
}

/* Demangled: vidhance_settings_get_autozoom_manual_offset_delay */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_autozoom_manual_offset_delay(void) {
    ALOGD("vidhance_settings_get_autozoom_manual_offset_delay() called");
    return 0;
}

/* Demangled: vidhance_settings_set_autozoom_latency */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_autozoom_latency(void) {
    ALOGD("vidhance_settings_set_autozoom_latency() called");
    return 0;
}

/* Demangled: vidhance_settings_get_autozoom_latency */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_autozoom_latency(void) {
    ALOGD("vidhance_settings_get_autozoom_latency() called");
    return 0;
}

/* Demangled: vidhance_settings_set_autozoom_apply_transform */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_autozoom_apply_transform(void) {
    ALOGD("vidhance_settings_set_autozoom_apply_transform() called");
    return 0;
}

/* Demangled: vidhance_settings_get_autozoom_apply_transform */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_autozoom_apply_transform(void) {
    ALOGD("vidhance_settings_get_autozoom_apply_transform() called");
    return 0;
}

/* Demangled: vidhance_settings_set_autozoom_zoom_speed */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_autozoom_zoom_speed(void) {
    ALOGD("vidhance_settings_set_autozoom_zoom_speed() called");
    return 0;
}

/* Demangled: vidhance_settings_get_autozoom_zoom_speed */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_autozoom_zoom_speed(void) {
    ALOGD("vidhance_settings_get_autozoom_zoom_speed() called");
    return 0;
}

/* Demangled: vidhance_input_start_autozoom */
extern "C" __attribute__((visibility("default"))) int vidhance_input_start_autozoom(void) {
    ALOGD("vidhance_input_start_autozoom() called");
    return 0;
}

/* Demangled: vidhance_input_start_autozoom_post_transform */
extern "C" __attribute__((visibility("default"))) int vidhance_input_start_autozoom_post_transform(void) {
    ALOGD("vidhance_input_start_autozoom_post_transform() called");
    return 0;
}

/* Demangled: vidhance_input_stop_autozoom */
extern "C" __attribute__((visibility("default"))) int vidhance_input_stop_autozoom(void) {
    ALOGD("vidhance_input_stop_autozoom() called");
    return 0;
}

/* Demangled: vidhance_input_set_autozoom_object_selected */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_autozoom_object_selected(void) {
    ALOGD("vidhance_input_set_autozoom_object_selected() called");
    return 0;
}

/* Demangled: vidhance_input_set_autozoom_manual_scaling_offset */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_autozoom_manual_scaling_offset(void) {
    ALOGD("vidhance_input_set_autozoom_manual_scaling_offset() called");
    return 0;
}

/* Demangled: vidhance_input_autozoom_force_lock */
extern "C" __attribute__((visibility("default"))) int vidhance_input_autozoom_force_lock(void) {
    ALOGD("vidhance_input_autozoom_force_lock() called");
    return 0;
}

/* Demangled: vidhance_input_set_autozoom_apply */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_autozoom_apply(void) {
    ALOGD("vidhance_input_set_autozoom_apply() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_status */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_status(void) {
    ALOGD("vidhance_result_get_autozoom_status() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_bounds */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_bounds(void) {
    ALOGD("vidhance_result_get_autozoom_bounds() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_bounds_v2 */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_bounds_v2(void) {
    ALOGD("vidhance_result_get_autozoom_bounds_v2() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_object_count */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_object_count(void) {
    ALOGD("vidhance_result_get_autozoom_object_count() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_object_id */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_object_id(void) {
    ALOGD("vidhance_result_get_autozoom_object_id() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_object_status */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_object_status(void) {
    ALOGD("vidhance_result_get_autozoom_object_status() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_object_bounds */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_object_bounds(void) {
    ALOGD("vidhance_result_get_autozoom_object_bounds() called");
    return 0;
}

/* Demangled: vidhance_result_get_autozoom_object_bounds_v2 */
extern "C" __attribute__((visibility("default"))) int vidhance_result_get_autozoom_object_bounds_v2(void) {
    ALOGD("vidhance_result_get_autozoom_object_bounds_v2() called");
    return 0;
}

/* Demangled: vidhance_dmbr_context_new */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_context_new(void) {
    ALOGD("vidhance_dmbr_context_new() called");
    return 0;
}

/* Demangled: vidhance_dmbr_context_free */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_context_free(void) {
    ALOGD("vidhance_dmbr_context_free() called");
    return 0;
}

/* Demangled: vidhance_dmbr_context_process */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_context_process(void) {
    ALOGD("vidhance_dmbr_context_process() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_new */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_new(void) {
    ALOGD("vidhance_dmbr_input_new() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_timestamp */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_timestamp(void) {
    ALOGD("vidhance_dmbr_input_set_timestamp() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_abd_50hz_gap */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_abd_50hz_gap(void) {
    ALOGD("vidhance_dmbr_input_set_abd_50hz_gap() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_antibanding_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_antibanding_mode(void) {
    ALOGD("vidhance_dmbr_input_set_antibanding_mode() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_sensor_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_sensor_gain(void) {
    ALOGD("vidhance_dmbr_input_set_sensor_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_gain(void) {
    ALOGD("vidhance_dmbr_input_set_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_hdr_short_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_hdr_short_gain(void) {
    ALOGD("vidhance_dmbr_input_set_hdr_short_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_hdr_long_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_hdr_long_gain(void) {
    ALOGD("vidhance_dmbr_input_set_hdr_long_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_brightness */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_brightness(void) {
    ALOGD("vidhance_dmbr_input_set_brightness() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_exposure_time(void) {
    ALOGD("vidhance_dmbr_input_set_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_hdr_short_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_hdr_short_exposure_time(void) {
    ALOGD("vidhance_dmbr_input_set_hdr_short_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_hdr_long_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_hdr_long_exposure_time(void) {
    ALOGD("vidhance_dmbr_input_set_hdr_long_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_debug_pointer */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_debug_pointer(void) {
    ALOGD("vidhance_dmbr_input_set_debug_pointer() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_focal_length */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_focal_length(void) {
    ALOGD("vidhance_dmbr_input_set_focal_length() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_get_focal_length */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_get_focal_length(void) {
    ALOGD("vidhance_dmbr_input_get_focal_length() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_physical_size */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_physical_size(void) {
    ALOGD("vidhance_dmbr_input_set_physical_size() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_get_physical_size */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_get_physical_size(void) {
    ALOGD("vidhance_dmbr_input_get_physical_size() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_crop_region */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_crop_region(void) {
    ALOGD("vidhance_dmbr_input_set_crop_region() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_get_crop_region */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_get_crop_region(void) {
    ALOGD("vidhance_dmbr_input_get_crop_region() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_active_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_active_array_size(void) {
    ALOGD("vidhance_dmbr_input_set_active_array_size() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_get_active_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_get_active_array_size(void) {
    ALOGD("vidhance_dmbr_input_get_active_array_size() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_pixel_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_pixel_array_size(void) {
    ALOGD("vidhance_dmbr_input_set_pixel_array_size() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_get_pixel_array_size */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_get_pixel_array_size(void) {
    ALOGD("vidhance_dmbr_input_get_pixel_array_size() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_get_sensor_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_get_sensor_gain(void) {
    ALOGD("vidhance_dmbr_result_get_sensor_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_get_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_get_gain(void) {
    ALOGD("vidhance_dmbr_result_get_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_get_hdr_short_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_get_hdr_short_gain(void) {
    ALOGD("vidhance_dmbr_result_get_hdr_short_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_get_hdr_long_gain */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_get_hdr_long_gain(void) {
    ALOGD("vidhance_dmbr_result_get_hdr_long_gain() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_get_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_get_exposure_time(void) {
    ALOGD("vidhance_dmbr_result_get_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_get_hdr_short_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_get_hdr_short_exposure_time(void) {
    ALOGD("vidhance_dmbr_result_get_hdr_short_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_get_hdr_long_exposure_time */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_get_hdr_long_exposure_time(void) {
    ALOGD("vidhance_dmbr_result_get_hdr_long_exposure_time() called");
    return 0;
}

/* Demangled: vidhance_dmbr_result_free */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_result_free(void) {
    ALOGD("vidhance_dmbr_result_free() called");
    return 0;
}

/* Demangled: vidhance_settings_set_stabilizer_motion_blur_reduction */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_stabilizer_motion_blur_reduction(void) {
    ALOGD("vidhance_settings_set_stabilizer_motion_blur_reduction() called");
    return 0;
}

/* Demangled: vidhance_settings_get_stabilizer_motion_blur_reduction */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_stabilizer_motion_blur_reduction(void) {
    ALOGD("vidhance_settings_get_stabilizer_motion_blur_reduction() called");
    return 0;
}

/* Demangled: vidhance_settings_get_dmbr_maximum_switch_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_dmbr_maximum_switch_sensitivity(void) {
    ALOGD("vidhance_settings_get_dmbr_maximum_switch_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_settings_set_dmbr_maximum_switch_sensitivity */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_dmbr_maximum_switch_sensitivity(void) {
    ALOGD("vidhance_settings_set_dmbr_maximum_switch_sensitivity() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_get_camera_id */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_get_camera_id(void) {
    ALOGD("vidhance_dmbr_input_get_camera_id() called");
    return 0;
}

/* Demangled: vidhance_dmbr_input_set_camera_id */
extern "C" __attribute__((visibility("default"))) int vidhance_dmbr_input_set_camera_id(void) {
    ALOGD("vidhance_dmbr_input_set_camera_id() called");
    return 0;
}

/* Demangled: vidhance_settings_set_lens_distortion_correction_factor */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_lens_distortion_correction_factor(void) {
    ALOGD("vidhance_settings_set_lens_distortion_correction_factor() called");
    return 0;
}

/* Demangled: vidhance_settings_get_lens_distortion_correction_factor */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_lens_distortion_correction_factor(void) {
    ALOGD("vidhance_settings_get_lens_distortion_correction_factor() called");
    return 0;
}

/* Demangled: vidhance_settings_set_lens_distortion_correction_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_set_lens_distortion_correction_mode(void) {
    ALOGD("vidhance_settings_set_lens_distortion_correction_mode() called");
    return 0;
}

/* Demangled: vidhance_settings_get_lens_distortion_correction_mode */
extern "C" __attribute__((visibility("default"))) int vidhance_settings_get_lens_distortion_correction_mode(void) {
    ALOGD("vidhance_settings_get_lens_distortion_correction_mode() called");
    return 0;
}

/* Demangled: vidhance_input_set_lens_distortion_correction_factor */
extern "C" __attribute__((visibility("default"))) int vidhance_input_set_lens_distortion_correction_factor(void) {
    ALOGD("vidhance_input_set_lens_distortion_correction_factor() called");
    return 0;
}

/* Demangled: vidhance_input_get_lens_distortion_correction_factor */
extern "C" __attribute__((visibility("default"))) int vidhance_input_get_lens_distortion_correction_factor(void) {
    ALOGD("vidhance_input_get_lens_distortion_correction_factor() called");
    return 0;
}

/* Demangled: vidhance_load */
extern "C" __attribute__((visibility("default"))) int vidhance_load(void) {
    ALOGD("vidhance_load() called");
    return 0;
}

/* Demangled: vidhance_cleanup */
extern "C" __attribute__((visibility("default"))) int vidhance_cleanup(void) {
    ALOGD("vidhance_cleanup() called");
    return 0;
}

/* Demangled: boost::filesystem::path::root_directory() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path14root_directoryEv(void) {
    ALOGD("_ZNK5boost10filesystem4path14root_directoryEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__117bad_function_callE = NULL;

/* Exported Object: typeinfo for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__117bad_function_callE = NULL;

/* Exported Object: vtable for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117bad_function_callE = NULL;

/* Exported Object: typeinfo name for std::__1::__vector_base_common<true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__120__vector_base_commonILb1EEE = NULL;

/* Exported Object: typeinfo for std::__1::__vector_base_common<true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__120__vector_base_commonILb1EEE = NULL;

/* Exported Object: _ZTSPDoFvRKiE */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDoFvRKiE = NULL;

/* Exported Object: typeinfo name for void (int const&) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFvRKiE = NULL;

/* Exported Object: typeinfo for void (int const&) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFvRKiE = NULL;

/* Exported Object: _ZTIPDoFvRKiE */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDoFvRKiE = NULL;

/* Exported Object: _ZTSPDoFvRKbE */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDoFvRKbE = NULL;

/* Exported Object: typeinfo name for void (bool const&) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFvRKbE = NULL;

/* Exported Object: typeinfo for void (bool const&) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFvRKbE = NULL;

/* Exported Object: _ZTIPDoFvRKbE */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDoFvRKbE = NULL;

/* Exported Object: _ZTSPDoFvRKfE */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDoFvRKfE = NULL;

/* Exported Object: typeinfo name for void (float const&) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFvRKfE = NULL;

/* Exported Object: typeinfo for void (float const&) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFvRKfE = NULL;

/* Exported Object: _ZTIPDoFvRKfE */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDoFvRKfE = NULL;

/* Exported Object: buildId */
extern "C" __attribute__((visibility("default"))) void* buildId = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorISt12length_errorEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<std::length_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorISt12length_errorEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<std::length_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorISt12length_errorEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorISt12length_errorEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::length_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorISt12length_errorEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<std::length_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorISt12length_errorEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorISt12out_of_rangeEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<std::out_of_range> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorISt12out_of_rangeEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<std::out_of_range> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorISt12out_of_rangeEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorISt12out_of_rangeEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::out_of_range> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorISt12out_of_rangeEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<std::out_of_range> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorISt12out_of_rangeEE = NULL;

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::__basic_string_common<true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__121__basic_string_commonILb1EEE = NULL;

/* Exported Object: typeinfo for std::__1::__basic_string_common<true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__121__basic_string_commonILb1EEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: boost::log::v2s_mt_posix::core::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core3getEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core3getEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::add_sink(boost::shared_ptr<boost::log::v2s_mt_posix::sinks::sink> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core8add_sinkERKNS_10shared_ptrINS1_5sinks4sinkEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core8add_sinkERKNS_10shared_ptrINS1_5sinks4sinkEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::add_stream(boost::shared_ptr<std::__1::basic_ostream<char, std::__1::char_traits<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE10add_streamERKNS_10shared_ptrINSt3__113basic_ostreamIcNS6_11char_traitsIcEEEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE10add_streamERKNS_10shared_ptrINSt3__113basic_ostreamIcNS6_11char_traitsIcEEEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::auto_flush(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE10auto_flushEb(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE10auto_flushEb() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::remove_stream(boost::shared_ptr<std::__1::basic_ostream<char, std::__1::char_traits<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE13remove_streamERKNS_10shared_ptrINSt3__113basic_ostreamIcNS6_11char_traitsIcEEEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE13remove_streamERKNS_10shared_ptrINSt3__113basic_ostreamIcNS6_11char_traitsIcEEEEEE() called");
    return 0;
}

/* Demangled: boost::filesystem::path::parent_path() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path11parent_pathEv(void) {
    ALOGD("_ZNK5boost10filesystem4path11parent_pathEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute::impl::operator new(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9attribute4implnwEm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9attribute4implnwEm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute::impl::operator delete(void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9attribute4impldlEPvm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9attribute4impldlEPvm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::add_global_attribute(boost::log::v2s_mt_posix::attribute_name const&, boost::log::v2s_mt_posix::attribute const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core20add_global_attributeERKNS1_14attribute_nameERKNS1_9attributeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core20add_global_attributeERKNS1_14attribute_nameERKNS1_9attributeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::default_attribute_names::line_id() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux23default_attribute_names7line_idEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux23default_attribute_names7line_idEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::default_attribute_names::timestamp() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux23default_attribute_names9timestampEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux23default_attribute_names9timestampEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::default_attribute_names::process_id() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux23default_attribute_names10process_idEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux23default_attribute_names10process_idEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::default_attribute_names::thread_id() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux23default_attribute_names9thread_idEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux23default_attribute_names9thread_idEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::this_process::get_id() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux12this_process6get_idEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux12this_process6get_idEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::this_thread::get_id() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux11this_thread6get_idEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux11this_thread6get_idEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_name::get_id_from_string(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix14attribute_name18get_id_from_stringEPKc(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix14attribute_name18get_id_from_stringEPKc() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::status(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail6statusERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail6statusERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::system_complete(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail15system_completeERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail15system_completeERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::current_path(boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail12current_pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail12current_pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::directory_iterator_construct(boost::filesystem::directory_iterator&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail28directory_iterator_constructERNS0_18directory_iteratorERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail28directory_iterator_constructERNS0_18directory_iteratorERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::dir_itr_close(void*&, void*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail13dir_itr_closeERPvS3_(void) {
    ALOGD("_ZN5boost10filesystem6detail13dir_itr_closeERPvS3_() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::directory_iterator_increment(boost::filesystem::directory_iterator&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail28directory_iterator_incrementERNS0_18directory_iteratorEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail28directory_iterator_incrementERNS0_18directory_iteratorEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::create_directory(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail16create_directoryERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail16create_directoryERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::system::generic_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6system16generic_categoryEv(void) {
    ALOGD("_ZN5boost6system16generic_categoryEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<std::__1::__less<char, char>&, char*>(char*, char*, std::__1::__less<char, char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRNS_6__lessIccEEPcEEvT0_S5_T_(void) {
    ALOGD("_ZNSt3__16__sortIRNS_6__lessIccEEPcEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcEC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcEC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::~basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcED1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcED1Ev() called");
    return 0;
}

/* Demangled: boost::detail::set_tss_data(void const*, boost::shared_ptr<boost::detail::tss_cleanup_function>, void*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail12set_tss_dataEPKvNS_10shared_ptrINS0_20tss_cleanup_functionEEEPvb(void) {
    ALOGD("_ZN5boost6detail12set_tss_dataEPKvNS_10shared_ptrINS0_20tss_cleanup_functionEEEPvb() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::consume(boost::log::v2s_mt_posix::record_view const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE7consumeERKNS1_11record_viewERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE7consumeERKNS1_11record_viewERKNSt3__112basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::detail::get_tss_data(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail12get_tss_dataEPKv(void) {
    ALOGD("_ZN5boost6detail12get_tss_dataEPKv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE5flushEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcE5flushEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::default_attribute_names::message() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux23default_attribute_names7messageEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux23default_attribute_names7messageEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::find(boost::log::v2s_mt_posix::attribute_name) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix19attribute_value_set4findENS1_14attribute_nameE(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix19attribute_value_set4findENS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix19attribute_value_set3endEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix19attribute_value_set3endEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::attach_attribute_name_info(boost::exception&, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux26attach_attribute_name_infoERNS_9exceptionERKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux26attach_attribute_name_infoERNS_9exceptionERKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(wchar_t const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKwmRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKwmRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::format_description<char> boost::log::v2s_mt_posix::aux::parse_format<char>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux12parse_formatIcEENS2_18format_descriptionIT_EEPKS5_S8_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux12parse_formatIcEENS2_18format_descriptionIT_EEPKS5_S8_() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::put_integer<char>(boost::log::v2s_mt_posix::aux::basic_ostringstreambuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned int, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux11put_integerIcEEvRNS2_22basic_ostringstreambufIT_NSt3__111char_traitsIS5_EENS6_9allocatorIS5_EEEEjjS5_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux11put_integerIcEEvRNS2_22basic_ostringstreambufIT_NSt3__111char_traitsIS5_EENS6_9allocatorIS5_EEEEjjS5_() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::parse_date_time_format<char>(char const*, char const*, boost::log::v2s_mt_posix::aux::date_time_format_parser_callback<char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux22parse_date_time_formatIcEEvPKT_S6_RNS2_32date_time_format_parser_callbackIS4_EE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux22parse_date_time_formatIcEEvPKT_S6_RNS2_32date_time_format_parser_callbackIS4_EE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& boost::log::v2s_mt_posix::aux::operator<< <char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, boost::log::v2s_mt_posix::aux::id<boost::log::v2s_mt_posix::aux::thread> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3auxlsIcNSt3__111char_traitsIcEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_6threadEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3auxlsIcNSt3__111char_traitsIcEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_6threadEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::attribute_set(boost::log::v2s_mt_posix::attribute_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_setC1ERKS2_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_setC1ERKS2_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(boost::log::v2s_mt_posix::attribute_value_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC1ERKS2_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC1ERKS2_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::~attribute_value_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::trivial::to_string(boost::log::v2s_mt_posix::trivial::severity_level) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7trivial9to_stringENS2_14severity_levelE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7trivial9to_stringENS2_14severity_levelE() called");
    return 0;
}

/* Demangled: boost::filesystem::path::stem() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path4stemEv(void) {
    ALOGD("_ZNK5boost10filesystem4path4stemEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_ios<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__19basic_iosIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::attribute::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix9attribute4implE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::attribute::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix9attribute4implE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::attributes::counter<unsigned int>::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix10attributes7counterIjE4implE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::attributes::counter<unsigned int>::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix10attributes7counterIjE4implE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::attributes::counter<unsigned int>::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix10attributes7counterIjE4implE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::attributes::current_thread_id::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix10attributes17current_thread_id4implE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::attributes::current_thread_id::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix10attributes17current_thread_id4implE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::attributes::current_thread_id::impl */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix10attributes17current_thread_id4implE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::gregorian::bad_year> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_9gregorian8bad_yearEEE = NULL;

/* Exported Object: typeinfo name for boost::gregorian::bad_year */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9gregorian8bad_yearE = NULL;

/* Exported Object: typeinfo for boost::gregorian::bad_year */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9gregorian8bad_yearE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::gregorian::bad_year> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_9gregorian8bad_yearEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian8bad_yearEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::gregorian::bad_year> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_9gregorian8bad_yearEEE = NULL;

/* Exported Object: vtable for boost::gregorian::bad_year */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9gregorian8bad_yearE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::gregorian::bad_month> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_9gregorian9bad_monthEEE = NULL;

/* Exported Object: typeinfo name for boost::gregorian::bad_month */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9gregorian9bad_monthE = NULL;

/* Exported Object: typeinfo for boost::gregorian::bad_month */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9gregorian9bad_monthE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::gregorian::bad_month> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_9gregorian9bad_monthEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian9bad_monthEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::gregorian::bad_month> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_9gregorian9bad_monthEEE = NULL;

/* Exported Object: vtable for boost::gregorian::bad_month */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9gregorian9bad_monthE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_9gregorian16bad_day_of_monthEEE = NULL;

/* Exported Object: typeinfo name for boost::gregorian::bad_day_of_month */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9gregorian16bad_day_of_monthE = NULL;

/* Exported Object: typeinfo for boost::gregorian::bad_day_of_month */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9gregorian16bad_day_of_monthE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_9gregorian16bad_day_of_monthEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian16bad_day_of_monthEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_9gregorian16bad_day_of_monthEEE = NULL;

/* Exported Object: vtable for boost::gregorian::bad_day_of_month */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9gregorian16bad_day_of_monthE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<std::runtime_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorISt13runtime_errorEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<std::runtime_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorISt13runtime_errorEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorISt13runtime_errorEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<std::runtime_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorISt13runtime_errorEE = NULL;

/* Exported Object: typeinfo name for boost::posix_time::ptime */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost10posix_time5ptimeE = NULL;

/* Exported Object: typeinfo for boost::posix_time::ptime */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost10posix_time5ptimeE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_21thread_resource_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::thread_resource_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::thread_resource_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost21thread_resource_errorE = NULL;

/* Exported Object: typeinfo name for boost::thread_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16thread_exceptionE = NULL;

/* Exported Object: typeinfo for boost::thread_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16thread_exceptionE = NULL;

/* Exported Object: typeinfo for boost::thread_resource_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost21thread_resource_errorE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::thread_resource_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_21thread_resource_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::thread_resource_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_21thread_resource_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::thread_resource_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEEE = NULL;

/* Exported Object: vtable for boost::thread_resource_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost21thread_resource_errorE = NULL;

/* Exported Object: typeinfo name for boost::thread_interrupted */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost18thread_interruptedE = NULL;

/* Exported Object: typeinfo for boost::thread_interrupted */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost18thread_interruptedE = NULL;

/* Exported Object: vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE2idE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::seconds_with_fractional_seconds_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE38seconds_with_fractional_seconds_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::seconds_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE14seconds_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::posix_zone_string_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE24posix_zone_string_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::zone_name_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE16zone_name_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::zone_abbrev_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE18zone_abbrev_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::zone_iso_extended_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE24zone_iso_extended_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::zone_iso_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE15zone_iso_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::fractional_seconds_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE25fractional_seconds_formatE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::fractional_seconds_or_none_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE33fractional_seconds_or_none_formatE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian11bad_weekdayEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_9gregorian11bad_weekdayEEE = NULL;

/* Exported Object: typeinfo name for boost::gregorian::bad_weekday */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9gregorian11bad_weekdayE = NULL;

/* Exported Object: typeinfo for boost::gregorian::bad_weekday */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9gregorian11bad_weekdayE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_9gregorian11bad_weekdayEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian11bad_weekdayEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian11bad_weekdayEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::gregorian::bad_weekday> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_9gregorian11bad_weekdayEEE = NULL;

/* Exported Object: vtable for boost::gregorian::bad_weekday */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9gregorian11bad_weekdayE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian15bad_day_of_yearEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_9gregorian15bad_day_of_yearEEE = NULL;

/* Exported Object: typeinfo name for boost::gregorian::bad_day_of_year */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9gregorian15bad_day_of_yearE = NULL;

/* Exported Object: typeinfo for boost::gregorian::bad_day_of_year */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9gregorian15bad_day_of_yearE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_9gregorian15bad_day_of_yearEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian15bad_day_of_yearEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_9gregorian15bad_day_of_yearEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_year> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_9gregorian15bad_day_of_yearEEE = NULL;

/* Exported Object: vtable for boost::gregorian::bad_day_of_year */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9gregorian15bad_day_of_yearE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::default_time_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE19default_time_formatE = NULL;

/* Exported Object: vtable for boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEEE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::duration_sign_negative_only */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE27duration_sign_negative_onlyE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::default_time_duration_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE28default_time_duration_formatE = NULL;

/* Exported Object: typeinfo name for boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo name for boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo for boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo for boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEEE = NULL;

/* Exported Object: vtable for boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEEE = NULL;

/* Exported Object: boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::short_month_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE18short_month_formatE = NULL;

/* Exported Object: boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::short_weekday_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE20short_weekday_formatE = NULL;

/* Exported Object: boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::iso_format_specifier */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE20iso_format_specifierE = NULL;

/* Exported Object: boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::iso_format_extended_specifier */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE29iso_format_extended_specifierE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::iso_time_format_specifier */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE25iso_time_format_specifierE = NULL;

/* Exported Object: boost::date_time::time_facet<boost::posix_time::ptime, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::iso_time_format_extended_specifier */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10time_facetINS_10posix_time5ptimeEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE34iso_time_format_extended_specifierE = NULL;

/* Exported Object: boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::long_weekday_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE19long_weekday_formatE = NULL;

/* Exported Object: boost::date_time::date_facet<boost::gregorian::date, char, std::__1::ostreambuf_iterator<char, std::__1::char_traits<char> > >::long_month_format */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost9date_time10date_facetINS_9gregorian4dateEcNSt3__119ostreambuf_iteratorIcNS4_11char_traitsIcEEEEE17long_month_formatE = NULL;

/* Exported Object: typeinfo name for void* (*)(void*, void*, unsigned int, void*, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFPvS_S_jS_PKiE = NULL;

/* Exported Object: typeinfo name for void* (void*, void*, unsigned int, void*, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFPvS_S_jS_PKiE = NULL;

/* Exported Object: typeinfo for void* (void*, void*, unsigned int, void*, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFPvS_S_jS_PKiE = NULL;

/* Exported Object: typeinfo for void* (*)(void*, void*, unsigned int, void*, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFPvS_S_jS_PKiE = NULL;

/* Exported Object: typeinfo name for void* (*)(void*, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFPvS_jPKiE = NULL;

/* Exported Object: typeinfo name for void* (void*, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFPvS_jPKiE = NULL;

/* Exported Object: typeinfo for void* (void*, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFPvS_jPKiE = NULL;

/* Exported Object: typeinfo for void* (*)(void*, unsigned int, int const*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFPvS_jPKiE = NULL;

/* Exported Object: typeinfo name for bool (*)(void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFbPvS_E = NULL;

/* Exported Object: typeinfo name for bool (void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFbPvS_E = NULL;

/* Exported Object: typeinfo for bool (void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFbPvS_E = NULL;

/* Exported Object: typeinfo for bool (*)(void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFbPvS_E = NULL;

/* Exported Object: typeinfo name for int (*)(void*, void*, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFiPvS_imE = NULL;

/* Exported Object: typeinfo name for int (void*, void*, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFiPvS_imE = NULL;

/* Exported Object: typeinfo for int (void*, void*, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFiPvS_imE = NULL;

/* Exported Object: typeinfo for int (*)(void*, void*, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFiPvS_imE = NULL;

/* Exported Object: typeinfo name for void (*)(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFvjPvE = NULL;

/* Exported Object: typeinfo name for void (unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFvjPvE = NULL;

/* Exported Object: typeinfo for void (unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFvjPvE = NULL;

/* Exported Object: typeinfo for void (*)(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFvjPvE = NULL;

/* Exported Object: typeinfo name for int (*)(void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSPFiPvS_E = NULL;

/* Exported Object: typeinfo name for int (void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTSFiPvS_E = NULL;

/* Exported Object: typeinfo for int (void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIFiPvS_E = NULL;

/* Exported Object: typeinfo for int (*)(void*, void*) */
extern "C" __attribute__((visibility("default"))) void* _ZTIPFiPvS_E = NULL;

/* Exported Object: typeinfo name for std::__1::default_delete<std::__1::tuple<unsigned char const*, unsigned long, bool> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114default_deleteINS_5tupleIJPKhmbEEEEE = NULL;

/* Demangled: boost::filesystem::codecvt_error_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem22codecvt_error_categoryEv(void) {
    ALOGD("_ZN5boost10filesystem22codecvt_error_categoryEv() called");
    return 0;
}

/* Demangled: boost::system::error_category::std_category::~std_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6system14error_category12std_categoryD0Ev(void) {
    ALOGD("_ZN5boost6system14error_category12std_categoryD0Ev() called");
    return 0;
}

/* Demangled: boost::system::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6system14error_categoryD0Ev(void) {
    ALOGD("_ZN5boost6system14error_categoryD0Ev() called");
    return 0;
}

/* Demangled: boost::system::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6system14error_categoryD2Ev(void) {
    ALOGD("_ZN5boost6system14error_categoryD2Ev() called");
    return 0;
}

/* Demangled: boost::system::error_category::equivalent(boost::system::error_code const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category10equivalentERKNS0_10error_codeEi(void) {
    ALOGD("_ZNK5boost6system14error_category10equivalentERKNS0_10error_codeEi() called");
    return 0;
}

/* Demangled: boost::system::error_category::equivalent(int, boost::system::error_condition const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category10equivalentEiRKNS0_15error_conditionE(void) {
    ALOGD("_ZNK5boost6system14error_category10equivalentEiRKNS0_15error_conditionE() called");
    return 0;
}

/* Demangled: boost::system::error_category::std_category::equivalent(std::__1::error_code const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category12std_category10equivalentERKNSt3__110error_codeEi(void) {
    ALOGD("_ZNK5boost6system14error_category12std_category10equivalentERKNSt3__110error_codeEi() called");
    return 0;
}

/* Demangled: boost::system::error_category::std_category::equivalent(int, std::__1::error_condition const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category12std_category10equivalentEiRKNSt3__115error_conditionE(void) {
    ALOGD("_ZNK5boost6system14error_category12std_category10equivalentEiRKNSt3__115error_conditionE() called");
    return 0;
}

/* Demangled: boost::system::error_category::std_category::default_error_condition(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category12std_category23default_error_conditionEi(void) {
    ALOGD("_ZNK5boost6system14error_category12std_category23default_error_conditionEi() called");
    return 0;
}

/* Demangled: boost::system::error_category::std_category::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category12std_category4nameEv(void) {
    ALOGD("_ZNK5boost6system14error_category12std_category4nameEv() called");
    return 0;
}

/* Demangled: boost::system::error_category::std_category::message(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category12std_category7messageEi(void) {
    ALOGD("_ZNK5boost6system14error_category12std_category7messageEi() called");
    return 0;
}

/* Demangled: boost::system::error_category::default_error_condition(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system14error_category23default_error_conditionEi(void) {
    ALOGD("_ZNK5boost6system14error_category23default_error_conditionEi() called");
    return 0;
}

/* Exported Object: typeinfo for boost::system::error_category::std_category */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6system14error_category12std_categoryE = NULL;

/* Exported Object: typeinfo for boost::system::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6system14error_categoryE = NULL;

/* Exported Object: typeinfo name for boost::system::error_category::std_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6system14error_category12std_categoryE = NULL;

/* Exported Object: typeinfo name for boost::system::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6system14error_categoryE = NULL;

/* Exported Object: vtable for boost::system::error_category::std_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6system14error_category12std_categoryE = NULL;

/* Exported Object: vtable for boost::system::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6system14error_categoryE = NULL;

/* Demangled: boost::filesystem::path_traits::dispatch(boost::filesystem::directory_entry const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem11path_traits8dispatchERKNS0_15directory_entryERNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost10filesystem11path_traits8dispatchERKNS0_15directory_entryERNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::filesystem::path_traits::dispatch(boost::filesystem::directory_entry const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::codecvt<wchar_t, char, mbstate_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem11path_traits8dispatchERKNS0_15directory_entryERNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS5_7codecvtIwc9mbstate_tEE(void) {
    ALOGD("_ZN5boost10filesystem11path_traits8dispatchERKNS0_15directory_entryERNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS5_7codecvtIwc9mbstate_tEE() called");
    return 0;
}

/* Demangled: boost::filesystem::filesystem_error::filesystem_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::system::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem16filesystem_errorC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem16filesystem_errorC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::filesystem_error::filesystem_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::filesystem::path const&, boost::system::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem16filesystem_errorC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_4pathENS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem16filesystem_errorC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_4pathENS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::filesystem_error::filesystem_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem16filesystem_errorC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_4pathESD_NS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem16filesystem_errorC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_4pathESD_NS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::filesystem_error::~filesystem_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem16filesystem_errorD0Ev(void) {
    ALOGD("_ZN5boost10filesystem16filesystem_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::filesystem::filesystem_error::~filesystem_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem16filesystem_errorD2Ev(void) {
    ALOGD("_ZN5boost10filesystem16filesystem_errorD2Ev() called");
    return 0;
}

/* Demangled: boost::filesystem::directory_iterator::directory_iterator(boost::filesystem::path const&, boost::system::error_code&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem18directory_iteratorC2ERKNS0_4pathERNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem18directory_iteratorC2ERKNS0_4pathERNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::directory_iterator::~directory_iterator() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem18directory_iteratorD2Ev(void) {
    ALOGD("_ZN5boost10filesystem18directory_iteratorD2Ev() called");
    return 0;
}

/* Demangled: boost::filesystem::path::remove_filename() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path15remove_filenameEv(void) {
    ALOGD("_ZN5boost10filesystem4path15remove_filenameEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::m_path_iterator_decrement(boost::filesystem::path::iterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path25m_path_iterator_decrementERNS1_8iteratorE(void) {
    ALOGD("_ZN5boost10filesystem4path25m_path_iterator_decrementERNS1_8iteratorE() called");
    return 0;
}

/* Demangled: boost::filesystem::path::m_path_iterator_increment(boost::filesystem::path::iterator&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path25m_path_iterator_incrementERNS1_8iteratorE(void) {
    ALOGD("_ZN5boost10filesystem4path25m_path_iterator_incrementERNS1_8iteratorE() called");
    return 0;
}

/* Demangled: boost::filesystem::path& boost::filesystem::path::assign<char*>(char*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path6assignIPcEERS1_T_S5_(void) {
    ALOGD("_ZN5boost10filesystem4path6assignIPcEERS1_T_S5_() called");
    return 0;
}

/* Demangled: boost::filesystem::path::~path() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4pathD2Ev(void) {
    ALOGD("_ZN5boost10filesystem4pathD2Ev() called");
    return 0;
}

/* Demangled: boost::filesystem::path::operator/=(boost::filesystem::path const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4pathdVERKS1_(void) {
    ALOGD("_ZN5boost10filesystem4pathdVERKS1_() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::equivalent(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail10equivalentERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail10equivalentERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::remove_all(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail10remove_allERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail10remove_allERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::permissions(boost::filesystem::path const&, boost::filesystem::perms, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail11permissionsERKNS0_4pathENS0_5permsEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail11permissionsERKNS0_4pathENS0_5permsEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::resize_file(boost::filesystem::path const&, unsigned long, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail11resize_fileERKNS0_4pathEmPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail11resize_fileERKNS0_4pathEmPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::copy_symlink(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail12copy_symlinkERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail12copy_symlinkERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::current_path(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail12current_pathERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail12current_pathERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::dot_dot_path() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail12dot_dot_pathEv(void) {
    ALOGD("_ZN5boost10filesystem6detail12dot_dot_pathEv() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::initial_path(boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail12initial_pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail12initial_pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::read_symlink(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail12read_symlinkERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail12read_symlinkERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::copy_directory(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail14copy_directoryERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail14copy_directoryERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::create_symlink(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail14create_symlinkERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail14create_symlinkERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::symlink_status(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail14symlink_statusERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail14symlink_statusERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::hard_link_count(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail15hard_link_countERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail15hard_link_countERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::last_write_time(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail15last_write_timeERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail15last_write_timeERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::last_write_time(boost::filesystem::path const&, long, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail15last_write_timeERKNS0_4pathElPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail15last_write_timeERKNS0_4pathElPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::create_hard_link(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail16create_hard_linkERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail16create_hard_linkERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::weakly_canonical(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail16weakly_canonicalERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail16weakly_canonicalERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::create_directories(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail18create_directoriesERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail18create_directoriesERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::temp_directory_path(boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail19temp_directory_pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail19temp_directory_pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::create_directory_symlink(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail24create_directory_symlinkERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail24create_directory_symlinkERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::possible_large_file_size_support() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail32possible_large_file_size_supportEv(void) {
    ALOGD("_ZN5boost10filesystem6detail32possible_large_file_size_supportEv() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::copy(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail4copyERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail4copyERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::space(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail5spaceERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail5spaceERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::remove(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail6removeERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail6removeERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::rename(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail6renameERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail6renameERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::dot_path() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail8dot_pathEv(void) {
    ALOGD("_ZN5boost10filesystem6detail8dot_pathEv() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::is_empty(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail8is_emptyERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail8is_emptyERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::relative(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail8relativeERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail8relativeERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::canonical(boost::filesystem::path const&, boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail9canonicalERKNS0_4pathES4_PNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail9canonicalERKNS0_4pathES4_PNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::copy_file(boost::filesystem::path const&, boost::filesystem::path const&, boost::filesystem::detail::copy_option, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail9copy_fileERKNS0_4pathES4_NS1_11copy_optionEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail9copy_fileERKNS0_4pathES4_NS1_11copy_optionEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::file_size(boost::filesystem::path const&, boost::system::error_code*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail9file_sizeERKNS0_4pathEPNS_6system10error_codeE(void) {
    ALOGD("_ZN5boost10filesystem6detail9file_sizeERKNS0_4pathEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::absolute(boost::filesystem::path const&, boost::filesystem::path const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem8absoluteERKNS0_4pathES3_(void) {
    ALOGD("_ZN5boost10filesystem8absoluteERKNS0_4pathES3_() called");
    return 0;
}

/* Demangled: boost::filesystem::operator/(boost::filesystem::path const&, boost::filesystem::path const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystemdvERKNS0_4pathES3_(void) {
    ALOGD("_ZN5boost10filesystemdvERKNS0_4pathES3_() called");
    return 0;
}

/* Demangled: boost::shared_ptr<boost::filesystem::filesystem_error::m_imp>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10shared_ptrINS_10filesystem16filesystem_error5m_impEED2Ev(void) {
    ALOGD("_ZN5boost10shared_ptrINS_10filesystem16filesystem_error5m_impEED2Ev() called");
    return 0;
}

/* Demangled: boost::shared_ptr<boost::filesystem::detail::dir_itr_imp>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10shared_ptrINS_10filesystem6detail11dir_itr_impEED2Ev(void) {
    ALOGD("_ZN5boost10shared_ptrINS_10filesystem6detail11dir_itr_impEED2Ev() called");
    return 0;
}

/* Demangled: boost::detail::shared_count::shared_count<boost::filesystem::filesystem_error::m_imp>(boost::filesystem::filesystem_error::m_imp*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail12shared_countC2INS_10filesystem16filesystem_error5m_impEEEPT_(void) {
    ALOGD("_ZN5boost6detail12shared_countC2INS_10filesystem16filesystem_error5m_impEEEPT_() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp>::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp>::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp>::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp>::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp>::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEED0Ev() called");
    return 0;
}

/* Demangled: void boost::detail::sp_pointer_construct<boost::filesystem::detail::dir_itr_imp, boost::filesystem::detail::dir_itr_imp>(boost::shared_ptr<boost::filesystem::detail::dir_itr_imp>*, boost::filesystem::detail::dir_itr_imp*, boost::detail::shared_count&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail20sp_pointer_constructINS_10filesystem6detail11dir_itr_impES4_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE(void) {
    ALOGD("_ZN5boost6detail20sp_pointer_constructINS_10filesystem6detail11dir_itr_impES4_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE() called");
    return 0;
}

/* Demangled: boost::system::system_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6system15system_categoryEv(void) {
    ALOGD("_ZN5boost6system15system_categoryEv() called");
    return 0;
}

/* Demangled: boost::filesystem::directory_entry::m_get_status(boost::system::error_code*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem15directory_entry12m_get_statusEPNS_6system10error_codeE(void) {
    ALOGD("_ZNK5boost10filesystem15directory_entry12m_get_statusEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::directory_entry::m_get_symlink_status(boost::system::error_code*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem15directory_entry20m_get_symlink_statusEPNS_6system10error_codeE(void) {
    ALOGD("_ZNK5boost10filesystem15directory_entry20m_get_symlink_statusEPNS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::filesystem::filesystem_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem16filesystem_error4whatEv(void) {
    ALOGD("_ZNK5boost10filesystem16filesystem_error4whatEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::relative_path() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path13relative_pathEv(void) {
    ALOGD("_ZNK5boost10filesystem4path13relative_pathEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::lexically_normal() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path16lexically_normalEv(void) {
    ALOGD("_ZNK5boost10filesystem4path16lexically_normalEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::lexically_relative(boost::filesystem::path const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path18lexically_relativeERKS1_(void) {
    ALOGD("_ZNK5boost10filesystem4path18lexically_relativeERKS1_() called");
    return 0;
}

/* Demangled: boost::filesystem::path::end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path3endEv(void) {
    ALOGD("_ZNK5boost10filesystem4path3endEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::begin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path5beginEv(void) {
    ALOGD("_ZNK5boost10filesystem4path5beginEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::compare(boost::filesystem::path const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path7compareERKS1_(void) {
    ALOGD("_ZNK5boost10filesystem4path7compareERKS1_() called");
    return 0;
}

/* Demangled: boost::filesystem::path::filename() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path8filenameEv(void) {
    ALOGD("_ZNK5boost10filesystem4path8filenameEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::root_name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path9root_nameEv(void) {
    ALOGD("_ZNK5boost10filesystem4path9root_nameEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::root_path() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path9root_pathEv(void) {
    ALOGD("_ZNK5boost10filesystem4path9root_pathEv() called");
    return 0;
}

/* Exported Object: typeinfo for boost::filesystem::filesystem_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost10filesystem16filesystem_errorE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEEE = NULL;

/* Exported Object: typeinfo name for boost::filesystem::filesystem_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost10filesystem16filesystem_errorE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEEE = NULL;

/* Exported Object: vtable for boost::filesystem::filesystem_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost10filesystem16filesystem_errorE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::filesystem::filesystem_error::m_imp> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pINS_10filesystem16filesystem_error5m_impEEE = NULL;

/* Demangled: boost::filesystem::path::replace_extension(boost::filesystem::path const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path17replace_extensionERKS1_(void) {
    ALOGD("_ZN5boost10filesystem4path17replace_extensionERKS1_() called");
    return 0;
}

/* Demangled: boost::filesystem::path::remove_trailing_separator() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path25remove_trailing_separatorEv(void) {
    ALOGD("_ZN5boost10filesystem4path25remove_trailing_separatorEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::m_erase_redundant_separator(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path27m_erase_redundant_separatorEm(void) {
    ALOGD("_ZN5boost10filesystem4path27m_erase_redundant_separatorEm() called");
    return 0;
}

/* Demangled: boost::filesystem::path::m_append_separator_if_needed() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path28m_append_separator_if_neededEv(void) {
    ALOGD("_ZN5boost10filesystem4path28m_append_separator_if_neededEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path5imbueERKNSt3__16localeE(void) {
    ALOGD("_ZN5boost10filesystem4path5imbueERKNSt3__16localeE() called");
    return 0;
}

/* Demangled: boost::filesystem::path::codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path7codecvtEv(void) {
    ALOGD("_ZN5boost10filesystem4path7codecvtEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::iterator::~iterator() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4path8iteratorD2Ev(void) {
    ALOGD("_ZN5boost10filesystem4path8iteratorD2Ev() called");
    return 0;
}

/* Demangled: boost::filesystem::path::path<char const*>(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4pathC2IPKcEET_S5_(void) {
    ALOGD("_ZN5boost10filesystem4pathC2IPKcEET_S5_() called");
    return 0;
}

/* Demangled: boost::filesystem::path::operator/=(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem4pathdVEPKc(void) {
    ALOGD("_ZN5boost10filesystem4pathdVEPKc() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::lex_compare(boost::filesystem::path::iterator, boost::filesystem::path::iterator, boost::filesystem::path::iterator, boost::filesystem::path::iterator) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail11lex_compareENS0_4path8iteratorES3_S3_S3_(void) {
    ALOGD("_ZN5boost10filesystem6detail11lex_compareENS0_4path8iteratorES3_S3_S3_() called");
    return 0;
}

/* Demangled: boost::filesystem::detail::mismatch(boost::filesystem::path::iterator, boost::filesystem::path::iterator, boost::filesystem::path::iterator, boost::filesystem::path::iterator) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6detail8mismatchENS0_4path8iteratorES3_S3_S3_(void) {
    ALOGD("_ZN5boost10filesystem6detail8mismatchENS0_4path8iteratorES3_S3_S3_() called");
    return 0;
}

/* Demangled: boost::filesystem::path::m_parent_path_end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path17m_parent_path_endEv(void) {
    ALOGD("_ZNK5boost10filesystem4path17m_parent_path_endEv() called");
    return 0;
}

/* Demangled: boost::filesystem::path::extension() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost10filesystem4path9extensionEv(void) {
    ALOGD("_ZNK5boost10filesystem4path9extensionEv() called");
    return 0;
}

/* Demangled: boost::filesystem::windows_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem12windows_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost10filesystem12windows_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::filesystem::portable_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem13portable_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost10filesystem13portable_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::filesystem::portable_file_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem18portable_file_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost10filesystem18portable_file_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::filesystem::portable_posix_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem19portable_posix_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost10filesystem19portable_posix_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::filesystem::portable_directory_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem23portable_directory_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost10filesystem23portable_directory_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::filesystem::native(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10filesystem6nativeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost10filesystem6nativeERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_name::get_string_from_id(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix14attribute_name18get_string_from_idEj(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix14attribute_name18get_string_from_idEj() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::limitation_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::~limitation_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_errorD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::~limitation_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_errorD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& boost::log::v2s_mt_posix::operator<< <char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posixlsIcNSt3__111char_traitsIcEEEERNS3_13basic_ostreamIT_T0_EESA_RKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posixlsIcNSt3__111char_traitsIcEEEERNS3_13basic_ostreamIT_T0_EESA_RKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> >& boost::log::v2s_mt_posix::operator<< <wchar_t, std::__1::char_traits<wchar_t> >(std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> >&, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posixlsIwNSt3__111char_traitsIwEEEERNS3_13basic_ostreamIT_T0_EESA_RKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posixlsIwNSt3__111char_traitsIwEEEERNS3_13basic_ostreamIT_T0_EESA_RKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE7rethrowEv() called");
    return 0;
}

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::limitation_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix16limitation_errorE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::limitation_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix16limitation_errorE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::limitation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16limitation_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::end() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set3endEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set3endEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::find(boost::log::v2s_mt_posix::attribute_name) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set4findENS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set4findENS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::begin() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set5beginEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set5beginEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set5clearEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set5clearEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::erase(boost::log::v2s_mt_posix::attribute_name) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set5eraseENS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set5eraseENS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::erase(boost::log::v2s_mt_posix::attribute_set::iter<false>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set5eraseENS2_4iterILb0EEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set5eraseENS2_4iterILb0EEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::erase(boost::log::v2s_mt_posix::attribute_set::iter<false>, boost::log::v2s_mt_posix::attribute_set::iter<false>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_set5eraseENS2_4iterILb0EEES4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_set5eraseENS2_4iterILb0EEES4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::attribute_set(boost::log::v2s_mt_posix::attribute_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_setC2ERKS2_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_setC2ERKS2_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::attribute_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_setC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_setC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::~attribute_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13attribute_setD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13attribute_setD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix13attribute_set3endEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix13attribute_set3endEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix13attribute_set4sizeEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix13attribute_set4sizeEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_set::begin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix13attribute_set5beginEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix13attribute_set5beginEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::freeze() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_set6freezeEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_set6freezeEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::insert(boost::log::v2s_mt_posix::attribute_name, boost::log::v2s_mt_posix::attribute_value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_set6insertENS1_14attribute_nameERKNS1_15attribute_valueE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_set6insertENS1_14attribute_nameERKNS1_15attribute_valueE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::construct(boost::log::v2s_mt_posix::attribute_value_set&, boost::log::v2s_mt_posix::attribute_set const&, boost::log::v2s_mt_posix::attribute_set const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_set9constructERS2_RKNS1_13attribute_setES6_m(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_set9constructERS2_RKNS1_13attribute_setES6_m() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(boost::log::v2s_mt_posix::attribute_set const&, boost::log::v2s_mt_posix::attribute_set const&, boost::log::v2s_mt_posix::attribute_set const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC1ERKNS1_13attribute_setES5_S5_m(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC1ERKNS1_13attribute_setES5_S5_m() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(boost::log::v2s_mt_posix::attribute_value_set const&, boost::log::v2s_mt_posix::attribute_set const&, boost::log::v2s_mt_posix::attribute_set const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC1ERKS2_RKNS1_13attribute_setES7_m(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC1ERKS2_RKNS1_13attribute_setES7_m() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC1Em(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC1Em() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(boost::log::v2s_mt_posix::attribute_set const&, boost::log::v2s_mt_posix::attribute_set const&, boost::log::v2s_mt_posix::attribute_set const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC2ERKNS1_13attribute_setES5_S5_m(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC2ERKNS1_13attribute_setES5_S5_m() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(boost::log::v2s_mt_posix::attribute_value_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC2ERKS2_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC2ERKS2_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(boost::log::v2s_mt_posix::attribute_value_set const&, boost::log::v2s_mt_posix::attribute_set const&, boost::log::v2s_mt_posix::attribute_set const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC2ERKS2_RKNS1_13attribute_setES7_m(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC2ERKS2_RKNS1_13attribute_setES7_m() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::attribute_value_set(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setC2Em(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setC2Em() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::~attribute_value_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix19attribute_value_setD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix19attribute_value_setD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix19attribute_value_set4sizeEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix19attribute_value_set4sizeEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::attribute_value_set::begin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix19attribute_value_set5beginEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix19attribute_value_set5beginEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_error6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_error6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char32_t const*, unsigned long, std::__1::basic_string<char16_t, std::__1::char_traits<char16_t>, std::__1::allocator<char16_t> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDimRNSt3__112basic_stringIDsNS5_11char_traitsIDsEENS5_9allocatorIDsEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDimRNSt3__112basic_stringIDsNS5_11char_traitsIDsEENS5_9allocatorIDsEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char32_t const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDimRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDimRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char32_t const*, unsigned long, std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDimRNSt3__112basic_stringIwNS5_11char_traitsIwEENS5_9allocatorIwEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDimRNSt3__112basic_stringIwNS5_11char_traitsIwEENS5_9allocatorIwEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char16_t const*, unsigned long, std::__1::basic_string<char32_t, std::__1::char_traits<char32_t>, std::__1::allocator<char32_t> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDsmRNSt3__112basic_stringIDiNS5_11char_traitsIDiEENS5_9allocatorIDiEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDsmRNSt3__112basic_stringIDiNS5_11char_traitsIDiEENS5_9allocatorIDiEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char16_t const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDsmRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDsmRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char16_t const*, unsigned long, std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDsmRNSt3__112basic_stringIwNS5_11char_traitsIwEENS5_9allocatorIwEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKDsmRNSt3__112basic_stringIwNS5_11char_traitsIwEENS5_9allocatorIwEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char const*, unsigned long, std::__1::basic_string<char32_t, std::__1::char_traits<char32_t>, std::__1::allocator<char32_t> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKcmRNSt3__112basic_stringIDiNS5_11char_traitsIDiEENS5_9allocatorIDiEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKcmRNSt3__112basic_stringIDiNS5_11char_traitsIDiEENS5_9allocatorIDiEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char const*, unsigned long, std::__1::basic_string<char16_t, std::__1::char_traits<char16_t>, std::__1::allocator<char16_t> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKcmRNSt3__112basic_stringIDsNS5_11char_traitsIDsEENS5_9allocatorIDsEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKcmRNSt3__112basic_stringIDsNS5_11char_traitsIDsEENS5_9allocatorIDsEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::code_convert_impl(char const*, unsigned long, std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >&, unsigned long, std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKcmRNSt3__112basic_stringIwNS5_11char_traitsIwEENS5_9allocatorIwEEEEmRKNS5_6localeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17code_convert_implEPKcmRNSt3__112basic_stringIwNS5_11char_traitsIwEENS5_9allocatorIwEEEEmRKNS5_6localeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::set_filter(boost::log::v2s_mt_posix::filter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core10set_filterERKNS1_6filterE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core10set_filterERKNS1_6filterE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::open_record(boost::log::v2s_mt_posix::attribute_value_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core11open_recordERKNS1_19attribute_value_setE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core11open_recordERKNS1_19attribute_value_setE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::remove_sink(boost::shared_ptr<boost::log::v2s_mt_posix::sinks::sink> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core11remove_sinkERKNS_10shared_ptrINS1_5sinks4sinkEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core11remove_sinkERKNS_10shared_ptrINS1_5sinks4sinkEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::reset_filter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core12reset_filterEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core12reset_filterEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::open_record_move(boost::log::v2s_mt_posix::attribute_value_set&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core16open_record_moveERNS1_19attribute_value_setE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core16open_record_moveERNS1_19attribute_value_setE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::remove_all_sinks() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core16remove_all_sinksEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core16remove_all_sinksEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::set_logging_enabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core19set_logging_enabledEb(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core19set_logging_enabledEb() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::add_thread_attribute(boost::log::v2s_mt_posix::attribute_name const&, boost::log::v2s_mt_posix::attribute const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core20add_thread_attributeERKNS1_14attribute_nameERKNS1_9attributeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core20add_thread_attributeERKNS1_14attribute_nameERKNS1_9attributeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::set_exception_handler(boost::log::v2s_mt_posix::aux::light_function<void ()> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core21set_exception_handlerERKNS1_3aux14light_functionIFvvEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core21set_exception_handlerERKNS1_3aux14light_functionIFvvEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::set_global_attributes(boost::log::v2s_mt_posix::attribute_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core21set_global_attributesERKNS1_13attribute_setE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core21set_global_attributesERKNS1_13attribute_setE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::set_thread_attributes(boost::log::v2s_mt_posix::attribute_set const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core21set_thread_attributesERKNS1_13attribute_setE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core21set_thread_attributesERKNS1_13attribute_setE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::remove_global_attribute(boost::log::v2s_mt_posix::attribute_set::iter<false>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core23remove_global_attributeENS1_13attribute_set4iterILb0EEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core23remove_global_attributeENS1_13attribute_set4iterILb0EEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::remove_thread_attribute(boost::log::v2s_mt_posix::attribute_set::iter<false>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core23remove_thread_attributeENS1_13attribute_set4iterILb0EEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core23remove_thread_attributeENS1_13attribute_set4iterILb0EEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix4core5flushEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix4core5flushEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::record::lock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix6record4lockEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix6record4lockEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::get_global_attributes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix4core21get_global_attributesEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix4core21get_global_attributesEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::core::get_thread_attributes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix4core21get_thread_attributesEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix4core21get_thread_attributesEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::basic_record_ostream<char>::init_stream() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix20basic_record_ostreamIcE11init_streamEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix20basic_record_ostreamIcE11init_streamEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::basic_record_ostream<char>::detach_from_record() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix20basic_record_ostreamIcE18detach_from_recordEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix20basic_record_ostreamIcE18detach_from_recordEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::basic_record_ostream<wchar_t>::init_stream() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix20basic_record_ostreamIwE11init_streamEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix20basic_record_ostreamIwE11init_streamEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::basic_record_ostream<wchar_t>::detach_from_record() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix20basic_record_ostreamIwE18detach_from_recordEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix20basic_record_ostreamIwE18detach_from_recordEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::stream_provider<wchar_t>::release_compound(boost::log::v2s_mt_posix::aux::stream_provider<wchar_t>::stream_compound*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux15stream_providerIwE16release_compoundEPNS4_15stream_compoundE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux15stream_providerIwE16release_compoundEPNS4_15stream_compoundE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::stream_provider<wchar_t>::allocate_compound(boost::log::v2s_mt_posix::record&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux15stream_providerIwE17allocate_compoundERNS1_6recordE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux15stream_providerIwE17allocate_compoundERNS1_6recordE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__113basic_ostreamIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_streambuf<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__115basic_streambufIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: typeinfo for std::__1::basic_ios<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__19basic_iosIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_ostream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_ostreamIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_streambuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__115basic_streambufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_streambuf<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__115basic_streambufIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_ios<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__19basic_iosIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_ios<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__19basic_iosIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_ostreamIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_streambuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_streambuf<wchar_t, std::__1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_streambufIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: boost::log::v2s_mt_posix::aux::thread_specific_base::thread_specific_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::thread_specific_base::~thread_specific_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseD2Ev() called");
    return 0;
}

/* Demangled: boost::detail::add_thread_exit_function(boost::detail::thread_exit_function_base*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail24add_thread_exit_functionEPNS0_25thread_exit_function_baseE(void) {
    ALOGD("_ZN5boost6detail24add_thread_exit_functionEPNS0_25thread_exit_function_baseE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::thread_specific_base::get_content() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix3aux20thread_specific_base11get_contentEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix3aux20thread_specific_base11get_contentEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::thread_specific_base::set_content(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix3aux20thread_specific_base11set_contentEPv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix3aux20thread_specific_base11set_contentEPv() called");
    return 0;
}

/* Demangled: boost::lock_error::~lock_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10lock_errorD0Ev(void) {
    ALOGD("_ZN5boost10lock_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(boost::lock_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEEC2ERKS2_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEEC2ERKS2_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::lock_error>::error_info_injector(boost::exception_detail::error_info_injector<boost::lock_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEEC2ERKS3_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEEC2ERKS3_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_10lock_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(boost::thread_resource_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEEC2ERKS2_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEEC2ERKS2_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::thread_resource_error>::error_info_injector(boost::exception_detail::error_info_injector<boost::thread_resource_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEEC2ERKS3_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_21thread_resource_errorEEC2ERKS3_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violation6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violation6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE7rethrowEv() called");
    return 0;
}

/* Exported Object: typeinfo for boost::lock_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost10lock_errorE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::lock_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_10lock_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::lock_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost10lock_errorE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::lock_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_10lock_errorEEE = NULL;

/* Exported Object: vtable for boost::lock_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost10lock_errorE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::lock_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_10lock_errorEEE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED0Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED1Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail19error_info_injectorINS_10lock_errorEED0Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail19error_info_injectorINS_10lock_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::lock_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail19error_info_injectorINS_10lock_errorEED1Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail19error_info_injectorINS_10lock_errorEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::lock_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_10lock_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& boost::log::v2s_mt_posix::aux::operator<< <char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, boost::log::v2s_mt_posix::aux::id<boost::log::v2s_mt_posix::aux::process> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3auxlsIcNSt3__111char_traitsIcEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_7processEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3auxlsIcNSt3__111char_traitsIcEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_7processEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> >& boost::log::v2s_mt_posix::aux::operator<< <wchar_t, std::__1::char_traits<wchar_t> >(std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> >&, boost::log::v2s_mt_posix::aux::id<boost::log::v2s_mt_posix::aux::process> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3auxlsIwNSt3__111char_traitsIwEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_7processEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3auxlsIwNSt3__111char_traitsIwEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_7processEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::throw_(char const*, unsigned long, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmS4_i(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmS4_i() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> >& boost::log::v2s_mt_posix::aux::operator<< <wchar_t, std::__1::char_traits<wchar_t> >(std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> >&, boost::log::v2s_mt_posix::aux::id<boost::log::v2s_mt_posix::aux::thread> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3auxlsIwNSt3__111char_traitsIwEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_6threadEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3auxlsIwNSt3__111char_traitsIwEEEERNS4_13basic_ostreamIT_T0_EESB_RKNS2_2idINS2_6threadEEE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::clone_impl(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEC1ERKS7_NS7_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEC1ERKS7_NS7_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEEC1ERKS7_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEEC1ERKS7_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error>::error_info_injector(boost::log::v2s_mt_posix::system_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error>::error_info_injector(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEC2ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEC2ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached>::error_info_injector(boost::log::v2s_mt_posix::capacity_limit_reached const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached>::error_info_injector(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEC2ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEC2ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc>::error_info_injector(boost::log::v2s_mt_posix::bad_alloc const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc>::error_info_injector(boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEC2ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEC2ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::logic_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11logic_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11logic_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::logic_error::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11logic_error6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11logic_error6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::logic_error::logic_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11logic_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11logic_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::logic_error::logic_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11logic_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11logic_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11logic_errorD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11logic_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11logic_errorD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11logic_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11logic_errorD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11logic_errorD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::throw_(char const*, unsigned long, char const*, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmS4_RKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmS4_RKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::throw_(char const*, unsigned long, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmS4_m(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_error6throw_EPKcmS4_m() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::parse_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::parse_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_errorC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_errorC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::parse_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::parse_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_errorC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_errorC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::~parse_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_errorD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::~parse_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_errorD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::parse_error::~parse_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11parse_errorD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11parse_errorD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_error6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_error6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_error6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_error6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::setup_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::setup_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_errorC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_errorC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::setup_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::setup_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_errorC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_errorC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::~setup_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_errorD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::~setup_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_errorD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::setup_error::~setup_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix11setup_errorD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix11setup_errorD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::log::v2s_mt_posix::attribute_name const&, boost::typeindex::stl_type_index const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameERKNS_9typeindex14stl_type_indexE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameERKNS_9typeindex14stl_type_indexE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::typeindex::stl_type_index const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS_9typeindex14stl_type_indexE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS_9typeindex14stl_type_indexE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, char const*, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_RKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_RKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, char const*, boost::log::v2s_mt_posix::attribute_name const&, boost::typeindex::stl_type_index const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_RKNS1_14attribute_nameERKNS_9typeindex14stl_type_indexE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_RKNS1_14attribute_nameERKNS_9typeindex14stl_type_indexE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::throw_(char const*, unsigned long, char const*, boost::typeindex::stl_type_index const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_RKNS_9typeindex14stl_type_indexE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_type6throw_EPKcmS4_RKNS_9typeindex14stl_type_indexE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::invalid_type(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_typeC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_typeC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::invalid_type() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_typeC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_typeC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::invalid_type(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_typeC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_typeC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::invalid_type() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_typeC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_typeC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::~invalid_type() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_typeD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_typeD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::~invalid_type() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_typeD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_typeD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_type::~invalid_type() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12invalid_typeD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12invalid_typeD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::system::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENS_6system10error_codeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::throw_(char const*, unsigned long, char const*, boost::system::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmS4_NS_6system10error_codeE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_error6throw_EPKcmS4_NS_6system10error_codeE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::system_error(boost::system::error_code, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_errorC1ENS_6system10error_codeERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_errorC1ENS_6system10error_codeERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::system_error(boost::system::error_code, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_errorC2ENS_6system10error_codeERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_errorC2ENS_6system10error_codeERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_errorD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_errorD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix12system_errorD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix12system_errorD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_value6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_value6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_value6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_value6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_value6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_value6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::invalid_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_valueC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_valueC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::invalid_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_valueC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_valueC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::invalid_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_valueC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_valueC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::invalid_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_valueC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_valueC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::~invalid_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_valueD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_valueD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::~invalid_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_valueD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_valueD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::invalid_value::~invalid_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13invalid_valueD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13invalid_valueD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::throw_(char const*, unsigned long, char const*, boost::log::v2s_mt_posix::attribute_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmS4_RKNS1_14attribute_nameE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_value6throw_EPKcmS4_RKNS1_14attribute_nameE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::missing_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_valueC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_valueC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::missing_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_valueC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_valueC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::missing_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_valueC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_valueC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::missing_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_valueC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_valueC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::~missing_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_valueD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_valueD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::~missing_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_valueD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_valueD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::missing_value::~missing_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13missing_valueD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13missing_valueD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violation6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violation6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violation6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violation6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::odr_violation(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violationC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violationC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::odr_violation() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violationC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violationC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::odr_violation(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violationC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violationC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::odr_violation() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violationC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violationC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::~odr_violation() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violationD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violationD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::~odr_violation() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violationD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violationD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::odr_violation::~odr_violation() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13odr_violationD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13odr_violationD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::runtime_error::runtime_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13runtime_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13runtime_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::runtime_error::runtime_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13runtime_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13runtime_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13runtime_errorD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13runtime_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13runtime_errorD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13runtime_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix13runtime_errorD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix13runtime_errorD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_call6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_call6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_call6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_call6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_call6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_call6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::unexpected_call(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_callC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_callC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::unexpected_call() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_callC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_callC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::unexpected_call(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_callC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_callC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::unexpected_call() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_callC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_callC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::~unexpected_call() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_callD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_callD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::~unexpected_call() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_callD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_callD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::unexpected_call::~unexpected_call() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix15unexpected_callD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix15unexpected_callD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_error6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_error6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::conversion_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_errorC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::conversion_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_errorC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_errorC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::conversion_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::conversion_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_errorC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_errorC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::~conversion_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_errorD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::~conversion_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_errorD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::conversion_error::~conversion_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16conversion_errorD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16conversion_errorD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::throw_(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_error6throw_EPKcm(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_error6throw_EPKcm() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_error6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_error6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_error6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::limitation_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_errorC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_errorC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::limitation_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_errorC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::limitation_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_errorC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_errorC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::limitation_error::~limitation_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix16limitation_errorD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix16limitation_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reached6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reached6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reached6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reached6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::capacity_limit_reached(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC1EPKc(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC1EPKc() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::capacity_limit_reached(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::capacity_limit_reached(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC2EPKc(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC2EPKc() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::capacity_limit_reached(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reachedC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::~capacity_limit_reached() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reachedD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reachedD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::~capacity_limit_reached() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reachedD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reachedD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::capacity_limit_reached::~capacity_limit_reached() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix22capacity_limit_reachedD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix22capacity_limit_reachedD2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::throw_(char const*, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_alloc6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_alloc6throw_EPKcmRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::throw_(char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_alloc6throw_EPKcmS4_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_alloc6throw_EPKcmS4_() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::bad_alloc(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_allocC1EPKc(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_allocC1EPKc() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::bad_alloc(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_allocC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_allocC1ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::bad_alloc(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_allocC2EPKc(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_allocC2EPKc() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::bad_alloc(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_allocC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_allocC2ERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_allocD0Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_allocD0Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_allocD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_allocD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix9bad_allocD2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix9bad_allocD2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::bad_alloc::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3log12v2s_mt_posix9bad_alloc4whatEv(void) {
    ALOGD("_ZNK5boost3log12v2s_mt_posix9bad_alloc4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix11logic_errorE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix11parse_errorE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::setup_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix11setup_errorE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::invalid_type */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix12invalid_typeE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix12system_errorE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::invalid_value */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix13invalid_valueE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::missing_value */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix13missing_valueE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::odr_violation */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix13odr_violationE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix13runtime_errorE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::unexpected_call */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix15unexpected_callE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::conversion_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix16conversion_errorE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::capacity_limit_reached */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix22capacity_limit_reachedE = NULL;

/* Exported Object: typeinfo for boost::log::v2s_mt_posix::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3log12v2s_mt_posix9bad_allocE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix11logic_errorE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix11parse_errorE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::setup_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix11setup_errorE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::invalid_type */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix12invalid_typeE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix12system_errorE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::invalid_value */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix13invalid_valueE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::missing_value */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix13missing_valueE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::odr_violation */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix13odr_violationE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix13runtime_errorE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::unexpected_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix15unexpected_callE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::conversion_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix16conversion_errorE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::limitation_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix16limitation_errorE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::capacity_limit_reached */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix22capacity_limit_reachedE = NULL;

/* Exported Object: typeinfo name for boost::log::v2s_mt_posix::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3log12v2s_mt_posix9bad_allocE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix11logic_errorE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix11parse_errorE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::setup_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix11setup_errorE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::invalid_type */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix12invalid_typeE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix12system_errorE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::invalid_value */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix13invalid_valueE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::missing_value */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix13missing_valueE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::odr_violation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix13odr_violationE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix13runtime_errorE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::unexpected_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix15unexpected_callE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::conversion_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix16conversion_errorE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::capacity_limit_reached */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix22capacity_limit_reachedE = NULL;

/* Exported Object: vtable for boost::log::v2s_mt_posix::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3log12v2s_mt_posix9bad_allocE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED0Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED1Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED0Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED1Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED0Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED1Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED0Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED1Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED0Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED1Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED0Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED1Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail19error_info_injectorINS_3log12v2s_mt_posix12system_errorEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11logic_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::parse_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11parse_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::setup_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix11setup_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_type> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12invalid_typeEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::system_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix12system_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::invalid_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13invalid_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::missing_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13missing_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::odr_violation> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix13odr_violationEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::unexpected_call> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix15unexpected_callEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::conversion_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix16conversion_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::capacity_limit_reached> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix22capacity_limit_reachedEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::log::v2s_mt_posix::bad_alloc> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_3log12v2s_mt_posix9bad_allocEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::default_attribute_names::channel() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux23default_attribute_names7channelEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux23default_attribute_names7channelEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcEC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcEC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<char>::~basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcED2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIcED2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::add_stream(boost::shared_ptr<std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE10add_streamERKNS_10shared_ptrINSt3__113basic_ostreamIwNS6_11char_traitsIwEEEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE10add_streamERKNS_10shared_ptrINSt3__113basic_ostreamIwNS6_11char_traitsIwEEEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::auto_flush(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE10auto_flushEb(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE10auto_flushEb() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::remove_stream(boost::shared_ptr<std::__1::basic_ostream<wchar_t, std::__1::char_traits<wchar_t> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE13remove_streamERKNS_10shared_ptrINSt3__113basic_ostreamIwNS6_11char_traitsIwEEEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE13remove_streamERKNS_10shared_ptrINSt3__113basic_ostreamIwNS6_11char_traitsIwEEEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE5flushEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE5flushEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::consume(boost::log::v2s_mt_posix::record_view const&, std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE7consumeERKNS1_11record_viewERKNSt3__112basic_stringIwNS8_11char_traitsIwEENS8_9allocatorIwEEEE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwE7consumeERKNS1_11record_viewERKNSt3__112basic_stringIwNS8_11char_traitsIwEENS8_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwEC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwEC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwEC2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwEC2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::~basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwED1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwED1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::sinks::basic_text_ostream_backend<wchar_t>::~basic_text_ostream_backend() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwED2Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix5sinks26basic_text_ostream_backendIwED2Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::thread_specific_base::thread_specific_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseC1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseC1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::thread_specific_base::~thread_specific_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseD1Ev(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux20thread_specific_baseD1Ev() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::trivial::logger::construct_logger() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7trivial6logger16construct_loggerEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7trivial6logger16construct_loggerEv() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::trivial::logger::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7trivial6logger3getEv(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7trivial6logger3getEv() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& boost::log::v2s_mt_posix::trivial::operator>><char, std::__1::char_traits<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, boost::log::v2s_mt_posix::trivial::severity_level&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7trivialrsIcNSt3__111char_traitsIcEEEERNS4_13basic_istreamIT_T0_EESB_RNS2_14severity_levelE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7trivialrsIcNSt3__111char_traitsIcEEEERNS4_13basic_istreamIT_T0_EESB_RNS2_14severity_levelE() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<wchar_t, std::__1::char_traits<wchar_t> >& boost::log::v2s_mt_posix::trivial::operator>><wchar_t, std::__1::char_traits<wchar_t> >(std::__1::basic_istream<wchar_t, std::__1::char_traits<wchar_t> >&, boost::log::v2s_mt_posix::trivial::severity_level&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix7trivialrsIwNSt3__111char_traitsIwEEEERNS4_13basic_istreamIT_T0_EESB_RNS2_14severity_levelE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix7trivialrsIwNSt3__111char_traitsIwEEEERNS4_13basic_istreamIT_T0_EESB_RNS2_14severity_levelE() called");
    return 0;
}

/* Demangled: boost::log::v2s_mt_posix::aux::format_description<wchar_t> boost::log::v2s_mt_posix::aux::parse_format<wchar_t>(wchar_t const*, wchar_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux12parse_formatIwEENS2_18format_descriptionIT_EEPKS5_S8_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux12parse_formatIwEENS2_18format_descriptionIT_EEPKS5_S8_() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::put_integer<wchar_t>(boost::log::v2s_mt_posix::aux::basic_ostringstreambuf<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >&, unsigned int, unsigned int, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux11put_integerIwEEvRNS2_22basic_ostringstreambufIT_NSt3__111char_traitsIS5_EENS6_9allocatorIS5_EEEEjjS5_(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux11put_integerIwEEvRNS2_22basic_ostringstreambufIT_NSt3__111char_traitsIS5_EENS6_9allocatorIS5_EEEEjjS5_() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::parse_date_format<char>(char const*, char const*, boost::log::v2s_mt_posix::aux::date_format_parser_callback<char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17parse_date_formatIcEEvPKT_S6_RNS2_27date_format_parser_callbackIS4_EE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17parse_date_formatIcEEvPKT_S6_RNS2_27date_format_parser_callbackIS4_EE() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::parse_date_format<wchar_t>(wchar_t const*, wchar_t const*, boost::log::v2s_mt_posix::aux::date_format_parser_callback<wchar_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17parse_date_formatIwEEvPKT_S6_RNS2_27date_format_parser_callbackIS4_EE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17parse_date_formatIwEEvPKT_S6_RNS2_27date_format_parser_callbackIS4_EE() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::parse_time_format<char>(char const*, char const*, boost::log::v2s_mt_posix::aux::time_format_parser_callback<char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17parse_time_formatIcEEvPKT_S6_RNS2_27time_format_parser_callbackIS4_EE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17parse_time_formatIcEEvPKT_S6_RNS2_27time_format_parser_callbackIS4_EE() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::parse_time_format<wchar_t>(wchar_t const*, wchar_t const*, boost::log::v2s_mt_posix::aux::time_format_parser_callback<wchar_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux17parse_time_formatIwEEvPKT_S6_RNS2_27time_format_parser_callbackIS4_EE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux17parse_time_formatIwEEvPKT_S6_RNS2_27time_format_parser_callbackIS4_EE() called");
    return 0;
}

/* Demangled: void boost::log::v2s_mt_posix::aux::parse_date_time_format<wchar_t>(wchar_t const*, wchar_t const*, boost::log::v2s_mt_posix::aux::date_time_format_parser_callback<wchar_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3log12v2s_mt_posix3aux22parse_date_time_formatIwEEvPKT_S6_RNS2_32date_time_format_parser_callbackIS4_EE(void) {
    ALOGD("_ZN5boost3log12v2s_mt_posix3aux22parse_date_time_formatIwEEvPKT_S6_RNS2_32date_time_format_parser_callbackIS4_EE() called");
    return 0;
}

/* Exported Object: boost::log::v2s_mt_posix::aux::dump_data_char */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost3log12v2s_mt_posix3aux14dump_data_charE = NULL;

/* Exported Object: boost::log::v2s_mt_posix::aux::dump_data_wchar */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost3log12v2s_mt_posix3aux15dump_data_wcharE = NULL;

/* Exported Object: boost::log::v2s_mt_posix::aux::dump_data_char16 */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost3log12v2s_mt_posix3aux16dump_data_char16E = NULL;

/* Exported Object: boost::log::v2s_mt_posix::aux::dump_data_char32 */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost3log12v2s_mt_posix3aux16dump_data_char32E = NULL;

/* Demangled: boost::char_separator<char, std::__1::char_traits<char> >::char_separator(char const*, char const*, boost::empty_token_policy) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost14char_separatorIcNSt3__111char_traitsIcEEEC2EPKcS6_NS_18empty_token_policyE(void) {
    ALOGD("_ZN5boost14char_separatorIcNSt3__111char_traitsIcEEEC2EPKcS6_NS_18empty_token_policyE() called");
    return 0;
}

/* Demangled: boost::char_separator<char, std::__1::char_traits<char> >::char_separator(boost::char_separator<char, std::__1::char_traits<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost14char_separatorIcNSt3__111char_traitsIcEEEC2ERKS4_(void) {
    ALOGD("_ZN5boost14char_separatorIcNSt3__111char_traitsIcEEEC2ERKS4_() called");
    return 0;
}

/* Demangled: bool boost::char_separator<char, std::__1::char_traits<char> >::operator()<std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__wrap_iter<char const*>&, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost14char_separatorIcNSt3__111char_traitsIcEEEclINS1_11__wrap_iterIPKcEENS1_12basic_stringIcS3_NS1_9allocatorIcEEEEEEbRT_SE_RT0_(void) {
    ALOGD("_ZN5boost14char_separatorIcNSt3__111char_traitsIcEEEclINS1_11__wrap_iterIPKcEENS1_12basic_stringIcS3_NS1_9allocatorIcEEEEEEbRT_SE_RT0_() called");
    return 0;
}

/* Demangled: boost::token_iterator<boost::char_separator<char, std::__1::char_traits<char> >, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::token_iterator(boost::char_separator<char, std::__1::char_traits<char> >, std::__1::__wrap_iter<char const*>, std::__1::__wrap_iter<char const*>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost14token_iteratorINS_14char_separatorIcNSt3__111char_traitsIcEEEENS2_11__wrap_iterIPKcEENS2_12basic_stringIcS4_NS2_9allocatorIcEEEEEC2ES5_S9_S9_(void) {
    ALOGD("_ZN5boost14token_iteratorINS_14char_separatorIcNSt3__111char_traitsIcEEEENS2_11__wrap_iterIPKcEENS2_12basic_stringIcS4_NS2_9allocatorIcEEEEEC2ES5_S9_S9_() called");
    return 0;
}

/* Demangled: boost::program_options::unknown_option::unknown_option(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options14unknown_optionC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options14unknown_optionC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::unknown_option::~unknown_option() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options14unknown_optionD0Ev(void) {
    ALOGD("_ZN5boost15program_options14unknown_optionD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::ambiguous_option::ambiguous_option(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options16ambiguous_optionC2ERKNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE(void) {
    ALOGD("_ZN5boost15program_options16ambiguous_optionC2ERKNSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEE() called");
    return 0;
}

/* Demangled: boost::program_options::ambiguous_option::~ambiguous_option() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options16ambiguous_optionD2Ev(void) {
    ALOGD("_ZN5boost15program_options16ambiguous_optionD2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::set_name(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_description8set_nameEPKc(void) {
    ALOGD("_ZN5boost15program_options18option_description8set_nameEPKc() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::option_description(char const*, boost::program_options::value_semantic const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionC1EPKcPKNS0_14value_semanticE(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionC1EPKcPKNS0_14value_semanticE() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::option_description(char const*, boost::program_options::value_semantic const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionC1EPKcPKNS0_14value_semanticES3_(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionC1EPKcPKNS0_14value_semanticES3_() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::option_description() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionC1Ev(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionC1Ev() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::option_description(char const*, boost::program_options::value_semantic const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionC2EPKcPKNS0_14value_semanticE(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionC2EPKcPKNS0_14value_semanticE() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::option_description(char const*, boost::program_options::value_semantic const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionC2EPKcPKNS0_14value_semanticES3_(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionC2EPKcPKNS0_14value_semanticES3_() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::option_description() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionC2Ev(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionC2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::~option_description() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionD0Ev(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::~option_description() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionD1Ev(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionD1Ev() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::~option_description() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18option_descriptionD2Ev(void) {
    ALOGD("_ZN5boost15program_options18option_descriptionD2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::add_options() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_description11add_optionsEv(void) {
    ALOGD("_ZN5boost15program_options19options_description11add_optionsEv() called");
    return 0;
}

/* Exported Object: boost::program_options::options_description::m_default_line_length */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost15program_options19options_description21m_default_line_lengthE = NULL;

/* Demangled: boost::program_options::options_description::add(boost::shared_ptr<boost::program_options::option_description>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_description3addENS_10shared_ptrINS0_18option_descriptionEEE(void) {
    ALOGD("_ZN5boost15program_options19options_description3addENS_10shared_ptrINS0_18option_descriptionEEE() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::add(boost::program_options::options_description const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_description3addERKS1_(void) {
    ALOGD("_ZN5boost15program_options19options_description3addERKS1_() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::options_description(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_descriptionC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjj(void) {
    ALOGD("_ZN5boost15program_options19options_descriptionC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjj() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::options_description(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_descriptionC1Ejj(void) {
    ALOGD("_ZN5boost15program_options19options_descriptionC1Ejj() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::options_description(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_descriptionC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjj(void) {
    ALOGD("_ZN5boost15program_options19options_descriptionC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjj() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::options_description(boost::program_options::options_description const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_descriptionC2ERKS1_(void) {
    ALOGD("_ZN5boost15program_options19options_descriptionC2ERKS1_() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::options_description(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_descriptionC2Ejj(void) {
    ALOGD("_ZN5boost15program_options19options_descriptionC2Ejj() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::~options_description() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options19options_descriptionD2Ev(void) {
    ALOGD("_ZN5boost15program_options19options_descriptionD2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::error_with_option_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_nameC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_SA_i(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_nameC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_SA_i() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::error_with_option_name(boost::program_options::error_with_option_name const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_nameC2ERKS1_(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_nameC2ERKS1_() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::~error_with_option_name() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_nameD2Ev(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_nameD2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_no_option_name::set_option_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options25error_with_no_option_name15set_option_nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options25error_with_no_option_name15set_option_nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_no_option_name::~error_with_no_option_name() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options25error_with_no_option_nameD0Ev(void) {
    ALOGD("_ZN5boost15program_options25error_with_no_option_nameD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::options_description_easy_init::options_description_easy_init(boost::program_options::options_description*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options29options_description_easy_initC1EPNS0_19options_descriptionE(void) {
    ALOGD("_ZN5boost15program_options29options_description_easy_initC1EPNS0_19options_descriptionE() called");
    return 0;
}

/* Demangled: boost::program_options::options_description_easy_init::options_description_easy_init(boost::program_options::options_description*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options29options_description_easy_initC2EPNS0_19options_descriptionE(void) {
    ALOGD("_ZN5boost15program_options29options_description_easy_initC2EPNS0_19options_descriptionE() called");
    return 0;
}

/* Demangled: boost::program_options::options_description_easy_init::operator()(char const*, boost::program_options::value_semantic const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options29options_description_easy_initclEPKcPKNS0_14value_semanticE(void) {
    ALOGD("_ZN5boost15program_options29options_description_easy_initclEPKcPKNS0_14value_semanticE() called");
    return 0;
}

/* Demangled: boost::program_options::options_description_easy_init::operator()(char const*, boost::program_options::value_semantic const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options29options_description_easy_initclEPKcPKNS0_14value_semanticES3_(void) {
    ALOGD("_ZN5boost15program_options29options_description_easy_initclEPKcPKNS0_14value_semanticES3_() called");
    return 0;
}

/* Demangled: boost::program_options::options_description_easy_init::operator()(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options29options_description_easy_initclEPKcS3_(void) {
    ALOGD("_ZN5boost15program_options29options_description_easy_initclEPKcS3_() called");
    return 0;
}

/* Demangled: boost::program_options::error::~error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options5errorD0Ev(void) {
    ALOGD("_ZN5boost15program_options5errorD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, boost::program_options::options_description const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_optionslsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS0_19options_descriptionE(void) {
    ALOGD("_ZN5boost15program_optionslsERNSt3__113basic_ostreamIcNS1_11char_traitsIcEEEERKNS0_19options_descriptionE() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::program_options::unknown_option>(boost::program_options::unknown_option const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15program_options14unknown_optionEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15program_options14unknown_optionEEEvRKT_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::program_options::ambiguous_option>(boost::program_options::ambiguous_option const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15program_options16ambiguous_optionEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15program_options16ambiguous_optionEEEvRKT_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::program_options::error>(boost::program_options::error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15program_options5errorEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15program_options5errorEEEvRKT_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEEC1ERKS6_NS6_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEEC1ERKS6_NS6_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::clone_impl(boost::exception_detail::error_info_injector<boost::program_options::error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEC1ERKS6_NS6_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEC1ERKS6_NS6_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::unknown_option>::error_info_injector(boost::exception_detail::error_info_injector<boost::program_options::unknown_option> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::unknown_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::unknown_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option>::error_info_injector(boost::program_options::ambiguous_option const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEEC2ERKS3_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEEC2ERKS3_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option>::error_info_injector(boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options5errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options5errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options5errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options5errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::detail::shared_count::shared_count<boost::program_options::options_description>(boost::program_options::options_description*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail12shared_countC2INS_15program_options19options_descriptionEEEPT_(void) {
    ALOGD("_ZN5boost6detail12shared_countC2INS_15program_options19options_descriptionEEEPT_() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const>::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const>::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const>::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const>::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const>::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEED0Ev() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::option_description>::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::option_description>::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::option_description>::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::option_description>::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::option_description>::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEED0Ev() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::options_description>::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::options_description>::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::options_description>::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::options_description>::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::program_options::options_description>::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEED0Ev() called");
    return 0;
}

/* Demangled: void boost::detail::sp_pointer_construct<boost::program_options::value_semantic const, boost::program_options::value_semantic const>(boost::shared_ptr<boost::program_options::value_semantic const>*, boost::program_options::value_semantic const*, boost::detail::shared_count&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail20sp_pointer_constructIKNS_15program_options14value_semanticES4_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE(void) {
    ALOGD("_ZN5boost6detail20sp_pointer_constructIKNS_15program_options14value_semanticES4_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE() called");
    return 0;
}

/* Demangled: void boost::detail::sp_pointer_construct<boost::program_options::option_description, boost::program_options::option_description>(boost::shared_ptr<boost::program_options::option_description>*, boost::program_options::option_description*, boost::detail::shared_count&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail20sp_pointer_constructINS_15program_options18option_descriptionES3_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE(void) {
    ALOGD("_ZN5boost6detail20sp_pointer_constructINS_15program_options18option_descriptionES3_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE() called");
    return 0;
}

/* Demangled: boost::program_options::ambiguous_option::substitute_placeholders(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options16ambiguous_option23substitute_placeholdersERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK5boost15program_options16ambiguous_option23substitute_placeholdersERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::description() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description11descriptionEv(void) {
    ALOGD("_ZNK5boost15program_options18option_description11descriptionEv() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::format_name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description11format_nameEv(void) {
    ALOGD("_ZNK5boost15program_options18option_description11format_nameEv() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::format_parameter() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description16format_parameterEv(void) {
    ALOGD("_ZNK5boost15program_options18option_description16format_parameterEv() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::canonical_display_name(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description22canonical_display_nameEi(void) {
    ALOGD("_ZNK5boost15program_options18option_description22canonical_display_nameEi() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::key(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description3keyERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK5boost15program_options18option_description3keyERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::match(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description5matchERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbbb(void) {
    ALOGD("_ZNK5boost15program_options18option_description5matchERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbbb() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::semantic() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description8semanticEv(void) {
    ALOGD("_ZNK5boost15program_options18option_description8semanticEv() called");
    return 0;
}

/* Demangled: boost::program_options::option_description::long_name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options18option_description9long_nameEv(void) {
    ALOGD("_ZNK5boost15program_options18option_description9long_nameEv() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::find_nothrow(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options19options_description12find_nothrowERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbbb(void) {
    ALOGD("_ZNK5boost15program_options19options_description12find_nothrowERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbbb() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::get_option_column_width() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options19options_description23get_option_column_widthEv(void) {
    ALOGD("_ZNK5boost15program_options19options_description23get_option_column_widthEv() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::find(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options19options_description4findERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbbb(void) {
    ALOGD("_ZNK5boost15program_options19options_description4findERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbbb() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::print(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options19options_description5printERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEEj(void) {
    ALOGD("_ZNK5boost15program_options19options_description5printERNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEEj() called");
    return 0;
}

/* Demangled: boost::program_options::options_description::options() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options19options_description7optionsEv(void) {
    ALOGD("_ZNK5boost15program_options19options_description7optionsEv() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::substitute_placeholders(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options22error_with_option_name23substitute_placeholdersERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZNK5boost15program_options22error_with_option_name23substitute_placeholdersERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options22error_with_option_name4whatEv(void) {
    ALOGD("_ZNK5boost15program_options22error_with_option_name4whatEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::tokenizer<boost::char_separator<char, std::__1::char_traits<char> >, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost9tokenizerINS_14char_separatorIcNSt3__111char_traitsIcEEEENS2_11__wrap_iterIPKcEENS2_12basic_stringIcS4_NS2_9allocatorIcEEEEE3endEv(void) {
    ALOGD("_ZNK5boost9tokenizerINS_14char_separatorIcNSt3__111char_traitsIcEEEENS2_11__wrap_iterIPKcEENS2_12basic_stringIcS4_NS2_9allocatorIcEEEEE3endEv() called");
    return 0;
}

/* Demangled: boost::tokenizer<boost::char_separator<char, std::__1::char_traits<char> >, std::__1::__wrap_iter<char const*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::begin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost9tokenizerINS_14char_separatorIcNSt3__111char_traitsIcEEEENS2_11__wrap_iterIPKcEENS2_12basic_stringIcS4_NS2_9allocatorIcEEEEE5beginEv(void) {
    ALOGD("_ZNK5boost9tokenizerINS_14char_separatorIcNSt3__111char_traitsIcEEEENS2_11__wrap_iterIPKcEENS2_12basic_stringIcS4_NS2_9allocatorIcEEEEE5beginEv() called");
    return 0;
}

/* Demangled: _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignINS_11__wrap_iterIPKcEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISC_EE5valueERS5_E4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignINS_11__wrap_iterIPKcEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISC_EE5valueERS5_E4typeESC_SC_(void) {
    ALOGD("_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignINS_11__wrap_iterIPKcEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISC_EE5valueERS5_E4typeESC_SC_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::pair(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14pairIKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS0_IS6_S6_EEEC2ERKS9_(void) {
    ALOGD("_ZNSt3__14pairIKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS0_IS6_S6_EEEC2ERKS9_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_SJ_EElEERPNS_15__tree_end_nodeISL_EESM_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_SJ_EElEERPNS_15__tree_end_nodeISL_EESM_RKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE30__emplace_hint_unique_key_argsIS7_JRKNS8_IKS7_S9_EEEEENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEENS_21__tree_const_iteratorISA_SQ_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE30__emplace_hint_unique_key_argsIS7_JRKNS8_IKS7_S9_EEEEENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEENS_21__tree_const_iteratorISA_SQ_lEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_4pairIKS7_S7_EEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISO_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_4pairIKS7_S7_EEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISO_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<boost::shared_ptr<boost::program_options::option_description>, std::__1::allocator<boost::shared_ptr<boost::program_options::option_description> > >::__push_back_slow_path<boost::shared_ptr<boost::program_options::option_description> const&>(boost::shared_ptr<boost::program_options::option_description> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options18option_descriptionEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options18option_descriptionEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<boost::shared_ptr<boost::program_options::option_description>, std::__1::allocator<boost::shared_ptr<boost::program_options::option_description> > >::vector(std::__1::vector<boost::shared_ptr<boost::program_options::option_description>, std::__1::allocator<boost::shared_ptr<boost::program_options::option_description> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options18option_descriptionEEENS_9allocatorIS5_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options18option_descriptionEEENS_9allocatorIS5_EEEC2ERKS8_() called");
    return 0;
}

/* Demangled: void std::__1::vector<boost::shared_ptr<boost::program_options::options_description>, std::__1::allocator<boost::shared_ptr<boost::program_options::options_description> > >::__push_back_slow_path<boost::shared_ptr<boost::program_options::options_description> const&>(boost::shared_ptr<boost::program_options::options_description> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options19options_descriptionEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options19options_descriptionEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<boost::shared_ptr<boost::program_options::options_description>, std::__1::allocator<boost::shared_ptr<boost::program_options::options_description> > >::vector(std::__1::vector<boost::shared_ptr<boost::program_options::options_description>, std::__1::allocator<boost::shared_ptr<boost::program_options::options_description> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options19options_descriptionEEENS_9allocatorIS5_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost10shared_ptrINS1_15program_options19options_descriptionEEENS_9allocatorIS5_EEEC2ERKS8_() called");
    return 0;
}

/* Exported Object: typeinfo for boost::program_options::unknown_option */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options14unknown_optionE = NULL;

/* Exported Object: typeinfo for boost::program_options::ambiguous_option */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options16ambiguous_optionE = NULL;

/* Exported Object: typeinfo for boost::program_options::option_description */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options18option_descriptionE = NULL;

/* Exported Object: typeinfo for boost::program_options::error_with_option_name */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options22error_with_option_nameE = NULL;

/* Exported Object: typeinfo for boost::program_options::error_with_no_option_name */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options25error_with_no_option_nameE = NULL;

/* Exported Object: typeinfo for boost::program_options::error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options5errorE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::program_options::unknown_option> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::program_options::error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15program_options5errorEEE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEEE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::program_options::option_description> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEEE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::program_options::options_description> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEEE = NULL;

/* Exported Object: typeinfo name for boost::program_options::unknown_option */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options14unknown_optionE = NULL;

/* Exported Object: typeinfo name for boost::program_options::option_description */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options18option_descriptionE = NULL;

/* Exported Object: typeinfo name for boost::program_options::error_with_no_option_name */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options25error_with_no_option_nameE = NULL;

/* Exported Object: typeinfo name for boost::program_options::error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options5errorE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::program_options::unknown_option> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::program_options::error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15program_options5errorEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::program_options::option_description> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::program_options::options_description> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_istream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__113basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__1::basic_iostream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__114basic_iostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for boost::program_options::untyped_value */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options13untyped_valueE = NULL;

/* Exported Object: vtable for boost::program_options::unknown_option */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options14unknown_optionE = NULL;

/* Exported Object: vtable for boost::program_options::ambiguous_option */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options16ambiguous_optionE = NULL;

/* Exported Object: vtable for boost::program_options::option_description */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options18option_descriptionE = NULL;

/* Exported Object: vtable for boost::program_options::error_with_option_name */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options22error_with_option_nameE = NULL;

/* Exported Object: vtable for boost::program_options::error_with_no_option_name */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options25error_with_no_option_nameE = NULL;

/* Exported Object: vtable for boost::program_options::error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options5errorE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::program_options::unknown_option> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::program_options::error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15program_options5errorEEE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::program_options::value_semantic const> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pIKNS_15program_options14value_semanticEEE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::program_options::option_description> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pINS_15program_options18option_descriptionEEE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::program_options::options_description> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pINS_15program_options19options_descriptionEEE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED0Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED1Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::unknown_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED0Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::unknown_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED1Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options14unknown_optionEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn144_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED0Ev(void) {
    ALOGD("_ZThn144_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn144_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED1Ev(void) {
    ALOGD("_ZThn144_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn144_N5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED0Ev(void) {
    ALOGD("_ZThn144_N5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn144_N5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED1Ev(void) {
    ALOGD("_ZThn144_N5boost16exception_detail19error_info_injectorINS_15program_options16ambiguous_optionEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_15program_options5errorEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_15program_options5errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorINS_15program_options5errorEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorINS_15program_options5errorEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::unknown_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options14unknown_optionEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::ambiguous_option> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16ambiguous_optionEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options5errorEEEED1Ev() called");
    return 0;
}

/* Exported Object: guard variable for std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const& boost::program_options::validators::get_single_string<char>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, bool)::empty */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5boost15program_options10validators17get_single_stringIcEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEbE5empty = NULL;

/* Exported Object: guard variable for std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const& boost::program_options::validators::get_single_string<wchar_t>(std::__1::vector<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >, std::__1::allocator<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > > const&, bool)::empty */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5boost15program_options10validators17get_single_stringIwEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEbE5empty = NULL;

/* Demangled: boost::to_local_8_bit(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost14to_local_8_bitERKNSt3__112basic_stringIwNS0_11char_traitsIwEENS0_9allocatorIwEEEE(void) {
    ALOGD("_ZN5boost14to_local_8_bitERKNSt3__112basic_stringIwNS0_11char_traitsIwEENS0_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const& boost::program_options::validators::get_single_string<char>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options10validators17get_single_stringIcEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEb(void) {
    ALOGD("_ZN5boost15program_options10validators17get_single_stringIcEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEb() called");
    return 0;
}

/* Demangled: std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const& boost::program_options::validators::get_single_string<wchar_t>(std::__1::vector<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >, std::__1::allocator<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options10validators17get_single_stringIwEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEb(void) {
    ALOGD("_ZN5boost15program_options10validators17get_single_stringIwEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEb() called");
    return 0;
}

/* Demangled: boost::program_options::validators::check_first_occurrence(boost::any const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options10validators22check_first_occurrenceERKNS_3anyE(void) {
    ALOGD("_ZN5boost15program_options10validators22check_first_occurrenceERKNS_3anyE() called");
    return 0;
}

/* Demangled: boost::program_options::bool_switch(bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options11bool_switchEPb(void) {
    ALOGD("_ZN5boost15program_options11bool_switchEPb() called");
    return 0;
}

/* Demangled: boost::program_options::bool_switch() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options11bool_switchEv(void) {
    ALOGD("_ZN5boost15program_options11bool_switchEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::~typed_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options11typed_valueIbcED0Ev(void) {
    ALOGD("_ZN5boost15program_options11typed_valueIbcED0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::~typed_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options11typed_valueIbcED2Ev(void) {
    ALOGD("_ZN5boost15program_options11typed_valueIbcED2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::~untyped_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options13untyped_valueD0Ev(void) {
    ALOGD("_ZN5boost15program_options13untyped_valueD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::strip_prefixes(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options14strip_prefixesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options14strip_prefixesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::value_semantic::~value_semantic() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options14value_semanticD2Ev(void) {
    ALOGD("_ZN5boost15program_options14value_semanticD2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::multiple_values::multiple_values() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options15multiple_valuesC2Ev(void) {
    ALOGD("_ZN5boost15program_options15multiple_valuesC2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::multiple_values::~multiple_values() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options15multiple_valuesD0Ev(void) {
    ALOGD("_ZN5boost15program_options15multiple_valuesD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::ambiguous_option::~ambiguous_option() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options16ambiguous_optionD0Ev(void) {
    ALOGD("_ZN5boost15program_options16ambiguous_optionD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::validation_error::get_template(boost::program_options::validation_error::kind_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options16validation_error12get_templateENS1_6kind_tE(void) {
    ALOGD("_ZN5boost15program_options16validation_error12get_templateENS1_6kind_tE() called");
    return 0;
}

/* Demangled: boost::program_options::validation_error::validation_error(boost::program_options::validation_error::kind_t, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options16validation_errorC2ENS1_6kind_tERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_i(void) {
    ALOGD("_ZN5boost15program_options16validation_errorC2ENS1_6kind_tERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESB_i() called");
    return 0;
}

/* Demangled: boost::program_options::validation_error::~validation_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options16validation_errorD0Ev(void) {
    ALOGD("_ZN5boost15program_options16validation_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_bool_value::invalid_bool_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18invalid_bool_valueC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options18invalid_bool_valueC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_bool_value::invalid_bool_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18invalid_bool_valueC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options18invalid_bool_valueC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_bool_value::~invalid_bool_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options18invalid_bool_valueD0Ev(void) {
    ALOGD("_ZN5boost15program_options18invalid_bool_valueD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_option_value::invalid_option_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options20invalid_option_valueC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options20invalid_option_valueC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_option_value::invalid_option_value(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options20invalid_option_valueC1ERKNSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEE(void) {
    ALOGD("_ZN5boost15program_options20invalid_option_valueC1ERKNSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_option_value::invalid_option_value(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options20invalid_option_valueC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options20invalid_option_valueC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_option_value::invalid_option_value(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options20invalid_option_valueC2ERKNSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEE(void) {
    ALOGD("_ZN5boost15program_options20invalid_option_valueC2ERKNSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::invalid_option_value::~invalid_option_value() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options20invalid_option_valueD0Ev(void) {
    ALOGD("_ZN5boost15program_options20invalid_option_valueD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::multiple_occurrences::multiple_occurrences() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options20multiple_occurrencesC2Ev(void) {
    ALOGD("_ZN5boost15program_options20multiple_occurrencesC2Ev() called");
    return 0;
}

/* Demangled: boost::program_options::multiple_occurrences::~multiple_occurrences() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options20multiple_occurrencesD0Ev(void) {
    ALOGD("_ZN5boost15program_options20multiple_occurrencesD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::set_substitute(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_name14set_substituteERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_name14set_substituteERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::set_option_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_name15set_option_nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_name15set_option_nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::set_substitute_default(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_name22set_substitute_defaultERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_SA_(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_name22set_substitute_defaultERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_SA_() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::error_with_option_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_nameC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_SA_i(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_nameC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_SA_i() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::~error_with_option_name() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options22error_with_option_nameD0Ev(void) {
    ALOGD("_ZN5boost15program_options22error_with_option_nameD0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::value_semantic_codecvt_helper<char>::~value_semantic_codecvt_helper() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options29value_semantic_codecvt_helperIcED0Ev(void) {
    ALOGD("_ZN5boost15program_options29value_semantic_codecvt_helperIcED0Ev() called");
    return 0;
}

/* Demangled: boost::program_options::value_semantic_codecvt_helper<wchar_t>::~value_semantic_codecvt_helper() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options29value_semantic_codecvt_helperIwED0Ev(void) {
    ALOGD("_ZN5boost15program_options29value_semantic_codecvt_helperIwED0Ev() called");
    return 0;
}

/* Exported Object: boost::program_options::arg */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost15program_options3argE = NULL;

/* Demangled: boost::program_options::validate(boost::any&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEEPSA_i(void) {
    ALOGD("_ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEEPSA_i() called");
    return 0;
}

/* Demangled: boost::program_options::validate(boost::any&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, bool*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEEPbi(void) {
    ALOGD("_ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEEPbi() called");
    return 0;
}

/* Demangled: boost::program_options::validate(boost::any&, std::__1::vector<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >, std::__1::allocator<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIwNS3_11char_traitsIwEENS3_9allocatorIwEEEENS8_ISA_EEEEPNS5_IcNS6_IcEENS8_IcEEEEi(void) {
    ALOGD("_ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIwNS3_11char_traitsIwEENS3_9allocatorIwEEEENS8_ISA_EEEEPNS5_IcNS6_IcEENS8_IcEEEEi() called");
    return 0;
}

/* Demangled: boost::program_options::validate(boost::any&, std::__1::vector<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >, std::__1::allocator<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > > const&, bool*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIwNS3_11char_traitsIwEENS3_9allocatorIwEEEENS8_ISA_EEEEPbi(void) {
    ALOGD("_ZN5boost15program_options8validateERNS_3anyERKNSt3__16vectorINS3_12basic_stringIwNS3_11char_traitsIwEENS3_9allocatorIwEEEENS8_ISA_EEEEPbi() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::program_options::multiple_values>(boost::program_options::multiple_values const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15program_options15multiple_valuesEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15program_options15multiple_valuesEEEvRKT_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::program_options::validation_error>(boost::program_options::validation_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15program_options16validation_errorEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15program_options16validation_errorEEEvRKT_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::program_options::invalid_bool_value>(boost::program_options::invalid_bool_value const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15program_options18invalid_bool_valueEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15program_options18invalid_bool_valueEEEvRKT_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::program_options::multiple_occurrences>(boost::program_options::multiple_occurrences const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15program_options20multiple_occurrencesEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15program_options20multiple_occurrencesEEEvRKT_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEEC1ERKS6_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEEC1ERKS6_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::multiple_values>::error_info_injector(boost::exception_detail::error_info_injector<boost::program_options::multiple_values> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::multiple_values>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::multiple_values>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::validation_error>::error_info_injector(boost::exception_detail::error_info_injector<boost::program_options::validation_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::validation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::validation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value>::error_info_injector(boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences>::error_info_injector(boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEEC2ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEEC2ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED2Ev() called");
    return 0;
}

/* Demangled: boost::from_local_8_bit(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16from_local_8_bitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost16from_local_8_bitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::any::holder<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > >::~holder() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEED0Ev(void) {
    ALOGD("_ZN5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::any::holder<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > >::~holder() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEED2Ev(void) {
    ALOGD("_ZN5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEED2Ev() called");
    return 0;
}

/* Demangled: boost::from_utf8(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost9from_utf8ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost9from_utf8ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::function1<void, bool const&>::dummy::nonnull() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost9function1IvRKbE5dummy7nonnullEv(void) {
    ALOGD("_ZN5boost9function1IvRKbE5dummy7nonnullEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::max_tokens() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE10max_tokensEv(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE10max_tokensEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::min_tokens() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE10min_tokensEv(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE10min_tokensEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::value_type() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE10value_typeEv(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE10value_typeEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::is_required() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE11is_requiredEv(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE11is_requiredEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::is_composing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE12is_composingEv(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE12is_composingEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::apply_default(boost::any&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE13apply_defaultERNS_3anyE(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE13apply_defaultERNS_3anyE() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE4nameEv(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE4nameEv() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::notify(boost::any const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE6notifyERKNS_3anyE(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE6notifyERKNS_3anyE() called");
    return 0;
}

/* Demangled: boost::program_options::typed_value<bool, char>::xparse(boost::any&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options11typed_valueIbcE6xparseERNS_3anyERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZNK5boost15program_options11typed_valueIbcE6xparseERNS_3anyERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::max_tokens() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value10max_tokensEv(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value10max_tokensEv() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::min_tokens() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value10min_tokensEv(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value10min_tokensEv() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::is_required() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value11is_requiredEv(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value11is_requiredEv() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::is_composing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value12is_composingEv(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value12is_composingEv() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::apply_default(boost::any&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value13apply_defaultERNS_3anyE(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value13apply_defaultERNS_3anyE() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value4nameEv(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value4nameEv() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::notify(boost::any const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value6notifyERKNS_3anyE(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value6notifyERKNS_3anyE() called");
    return 0;
}

/* Demangled: boost::program_options::untyped_value::xparse(boost::any&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options13untyped_value6xparseERNS_3anyERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE(void) {
    ALOGD("_ZNK5boost15program_options13untyped_value6xparseERNS_3anyERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::replace_token(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options22error_with_option_name13replace_tokenERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_(void) {
    ALOGD("_ZNK5boost15program_options22error_with_option_name13replace_tokenERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::get_canonical_option_name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options22error_with_option_name25get_canonical_option_nameEv(void) {
    ALOGD("_ZNK5boost15program_options22error_with_option_name25get_canonical_option_nameEv() called");
    return 0;
}

/* Demangled: boost::program_options::error_with_option_name::get_canonical_option_prefix() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options22error_with_option_name27get_canonical_option_prefixEv(void) {
    ALOGD("_ZNK5boost15program_options22error_with_option_name27get_canonical_option_prefixEv() called");
    return 0;
}

/* Demangled: boost::program_options::value_semantic_codecvt_helper<char>::parse(boost::any&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options29value_semantic_codecvt_helperIcE5parseERNS_3anyERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEb(void) {
    ALOGD("_ZNK5boost15program_options29value_semantic_codecvt_helperIcE5parseERNS_3anyERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEb() called");
    return 0;
}

/* Demangled: boost::program_options::value_semantic_codecvt_helper<wchar_t>::parse(boost::any&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options29value_semantic_codecvt_helperIwE5parseERNS_3anyERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEb(void) {
    ALOGD("_ZNK5boost15program_options29value_semantic_codecvt_helperIwE5parseERNS_3anyERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEEb() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::any::holder<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > >::type() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEE4typeEv(void) {
    ALOGD("_ZNK5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEE4typeEv() called");
    return 0;
}

/* Demangled: boost::any::holder<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEE5cloneEv() called");
    return 0;
}

/* Demangled: unsigned long std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__count_unique<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE14__count_uniqueIS7_EEmRKT_(void) {
    ALOGD("_ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE14__count_uniqueIS7_EEmRKT_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >::basic_string(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >::~basic_string() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(void) {
    ALOGD("_ZNSt3__112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSL_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISA_PvEENS_22__tree_node_destructorINS5_IST_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4pairIS7_S7_EEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSL_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISA_PvEENS_22__tree_node_destructorINS5_IST_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__construct_at_endINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESH_SH_m */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__construct_at_endINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESH_SH_m(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE18__construct_at_endINS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESH_SH_m() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2INS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISG_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISG_E9referenceEEE5valueESG_E4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2INS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISG_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISG_E9referenceEEE5valueESG_E4typeE(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2INS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISG_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISG_E9referenceEEE5valueESG_E4typeE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >, std::__1::allocator<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > >::__push_back_slow_path<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > >(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES6_RKS9_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES6_RKS9_() called");
    return 0;
}

/* Exported Object: typeinfo for boost::program_options::typed_value<bool, char> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options11typed_valueIbcEE = NULL;

/* Exported Object: typeinfo for boost::program_options::untyped_value */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options13untyped_valueE = NULL;

/* Exported Object: typeinfo for boost::program_options::value_semantic */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options14value_semanticE = NULL;

/* Exported Object: typeinfo for boost::program_options::multiple_values */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options15multiple_valuesE = NULL;

/* Exported Object: typeinfo for boost::program_options::typed_value_base */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options16typed_value_baseE = NULL;

/* Exported Object: typeinfo for boost::program_options::validation_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options16validation_errorE = NULL;

/* Exported Object: typeinfo for boost::program_options::invalid_bool_value */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options18invalid_bool_valueE = NULL;

/* Exported Object: typeinfo for boost::program_options::invalid_option_value */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options20invalid_option_valueE = NULL;

/* Exported Object: typeinfo for boost::program_options::multiple_occurrences */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options20multiple_occurrencesE = NULL;

/* Exported Object: typeinfo for boost::program_options::value_semantic_codecvt_helper<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options29value_semantic_codecvt_helperIcEE = NULL;

/* Exported Object: typeinfo for boost::program_options::value_semantic_codecvt_helper<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options29value_semantic_codecvt_helperIwEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::program_options::multiple_values> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::program_options::validation_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEEE = NULL;

/* Exported Object: typeinfo for boost::any::holder<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEEE = NULL;

/* Exported Object: typeinfo name for boost::program_options::typed_value<bool, char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options11typed_valueIbcEE = NULL;

/* Exported Object: typeinfo name for boost::program_options::untyped_value */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options13untyped_valueE = NULL;

/* Exported Object: typeinfo name for boost::program_options::value_semantic */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options14value_semanticE = NULL;

/* Exported Object: typeinfo name for boost::program_options::multiple_values */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options15multiple_valuesE = NULL;

/* Exported Object: typeinfo name for boost::program_options::ambiguous_option */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options16ambiguous_optionE = NULL;

/* Exported Object: typeinfo name for boost::program_options::typed_value_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options16typed_value_baseE = NULL;

/* Exported Object: typeinfo name for boost::program_options::validation_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options16validation_errorE = NULL;

/* Exported Object: typeinfo name for boost::program_options::invalid_bool_value */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options18invalid_bool_valueE = NULL;

/* Exported Object: typeinfo name for boost::program_options::invalid_option_value */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options20invalid_option_valueE = NULL;

/* Exported Object: typeinfo name for boost::program_options::multiple_occurrences */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options20multiple_occurrencesE = NULL;

/* Exported Object: typeinfo name for boost::program_options::error_with_option_name */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options22error_with_option_nameE = NULL;

/* Exported Object: typeinfo name for boost::program_options::value_semantic_codecvt_helper<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options29value_semantic_codecvt_helperIcEE = NULL;

/* Exported Object: typeinfo name for boost::program_options::value_semantic_codecvt_helper<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options29value_semantic_codecvt_helperIwEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::program_options::multiple_values> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::program_options::validation_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEEE = NULL;

/* Exported Object: typeinfo name for boost::any::holder<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEEE = NULL;

/* Exported Object: vtable for boost::program_options::typed_value<bool, char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options11typed_valueIbcEE = NULL;

/* Exported Object: vtable for boost::program_options::multiple_values */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options15multiple_valuesE = NULL;

/* Exported Object: vtable for boost::program_options::validation_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options16validation_errorE = NULL;

/* Exported Object: vtable for boost::program_options::invalid_bool_value */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options18invalid_bool_valueE = NULL;

/* Exported Object: vtable for boost::program_options::invalid_option_value */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options20invalid_option_valueE = NULL;

/* Exported Object: vtable for boost::program_options::multiple_occurrences */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options20multiple_occurrencesE = NULL;

/* Exported Object: vtable for boost::program_options::value_semantic_codecvt_helper<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options29value_semantic_codecvt_helperIcEE = NULL;

/* Exported Object: vtable for boost::program_options::value_semantic_codecvt_helper<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options29value_semantic_codecvt_helperIwEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::program_options::multiple_values> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::program_options::validation_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEEE = NULL;

/* Exported Object: vtable for boost::any::holder<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost3any6holderINSt3__112basic_stringIwNS2_11char_traitsIwEENS2_9allocatorIwEEEEEE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED0Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED1Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED0Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED1Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::multiple_values>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED0Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::multiple_values>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED1Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options15multiple_valuesEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED0Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED1Ev(void) {
    ALOGD("_ZThn120_N5boost16exception_detail19error_info_injectorINS_15program_options20multiple_occurrencesEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED0Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED1Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED0Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED1Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::validation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED0Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::validation_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED1Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options16validation_errorEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED0Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED1Ev(void) {
    ALOGD("_ZThn128_N5boost16exception_detail19error_info_injectorINS_15program_options18invalid_bool_valueEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::program_options::typed_value<bool, char>::~typed_value() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5boost15program_options11typed_valueIbcED0Ev(void) {
    ALOGD("_ZThn8_N5boost15program_options11typed_valueIbcED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::program_options::typed_value<bool, char>::~typed_value() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5boost15program_options11typed_valueIbcED1Ev(void) {
    ALOGD("_ZThn8_N5boost15program_options11typed_valueIbcED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::program_options::typed_value<bool, char>::value_type() const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5boost15program_options11typed_valueIbcE10value_typeEv(void) {
    ALOGD("_ZThn8_NK5boost15program_options11typed_valueIbcE10value_typeEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_values> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options15multiple_valuesEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::validation_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options16validation_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::invalid_bool_value> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options18invalid_bool_valueEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::program_options::multiple_occurrences> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15program_options20multiple_occurrencesEEEED1Ev() called");
    return 0;
}

/* Exported Object: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const& boost::program_options::validators::get_single_string<char>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, bool)::empty */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost15program_options10validators17get_single_stringIcEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEbE5empty = NULL;

/* Exported Object: std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const& boost::program_options::validators::get_single_string<wchar_t>(std::__1::vector<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> >, std::__1::allocator<std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > > > const&, bool)::empty */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost15program_options10validators17get_single_stringIwEERKNSt3__112basic_stringIT_NS3_11char_traitsIS5_EENS3_9allocatorIS5_EEEERKNS3_6vectorISA_NS8_ISA_EEEEbE5empty = NULL;

/* Demangled: boost::from_8_bit(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::codecvt<wchar_t, char, mbstate_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10from_8_bitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKNS0_7codecvtIwc9mbstate_tEE(void) {
    ALOGD("_ZN5boost10from_8_bitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERKNS0_7codecvtIwc9mbstate_tEE() called");
    return 0;
}

/* Demangled: boost::program_options::to_internal(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options11to_internalERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost15program_options11to_internalERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::to_internal(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options11to_internalERKNSt3__112basic_stringIwNS1_11char_traitsIwEENS1_9allocatorIwEEEE(void) {
    ALOGD("_ZN5boost15program_options11to_internalERKNSt3__112basic_stringIwNS1_11char_traitsIwEENS1_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::utf8_codecvt_facet(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options6detail18utf8_codecvt_facetC1Em(void) {
    ALOGD("_ZN5boost15program_options6detail18utf8_codecvt_facetC1Em() called");
    return 0;
}

/* Demangled: void boost::throw_exception<std::logic_error>(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionISt11logic_errorEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionISt11logic_errorEEvRKT_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::clone_impl(boost::exception_detail::error_info_injector<std::logic_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEC1ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEC1ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEC1ERKS5_NS5_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEC1ERKS5_NS5_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<std::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorISt11logic_errorED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorISt11logic_errorED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<std::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorISt11logic_errorED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorISt11logic_errorED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > boost::detail::convert<char, wchar_t, boost::_bi::bind_t<std::__1::codecvt_base::result, boost::_mfi::cmf7<std::__1::codecvt_base::result, std::__1::codecvt<wchar_t, char, mbstate_t>, mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&>, boost::_bi::list8<boost::_bi::value<std::__1::codecvt<wchar_t, char, mbstate_t> const*>, boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::arg<5>, boost::arg<6>, boost::arg<7> > > >(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&, boost::_bi::bind_t<std::__1::codecvt_base::result, boost::_mfi::cmf7<std::__1::codecvt_base::result, std::__1::codecvt<wchar_t, char, mbstate_t>, mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&>, boost::_bi::list8<boost::_bi::value<std::__1::codecvt<wchar_t, char, mbstate_t> const*>, boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::arg<5>, boost::arg<6>, boost::arg<7> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail7convertIcwNS_3_bi6bind_tINSt3__112codecvt_base6resultENS_4_mfi4cmf7IS6_NS4_7codecvtIwc9mbstate_tEERSA_PKwSE_RSE_PcSG_RSG_EENS2_5list8INS2_5valueIPKSB_EENS_3argILi1EEENSO_ILi2EEENSO_ILi3EEENSO_ILi4EEENSO_ILi5EEENSO_ILi6EEENSO_ILi7EEEEEEEEENS4_12basic_stringIT_NS4_11char_traitsISZ_EENS4_9allocatorISZ_EEEERKNSY_IT0_NS10_IS15_EENS12_IS15_EEEET1_(void) {
    ALOGD("_ZN5boost6detail7convertIcwNS_3_bi6bind_tINSt3__112codecvt_base6resultENS_4_mfi4cmf7IS6_NS4_7codecvtIwc9mbstate_tEERSA_PKwSE_RSE_PcSG_RSG_EENS2_5list8INS2_5valueIPKSB_EENS_3argILi1EEENSO_ILi2EEENSO_ILi3EEENSO_ILi4EEENSO_ILi5EEENSO_ILi6EEENSO_ILi7EEEEEEEEENS4_12basic_stringIT_NS4_11char_traitsISZ_EENS4_9allocatorISZ_EEEERKNSY_IT0_NS10_IS15_EENS12_IS15_EEEET1_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > boost::detail::convert<wchar_t, char, boost::_bi::bind_t<std::__1::codecvt_base::result, boost::_mfi::cmf7<std::__1::codecvt_base::result, std::__1::codecvt<wchar_t, char, mbstate_t>, mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&>, boost::_bi::list8<boost::_bi::value<std::__1::codecvt<wchar_t, char, mbstate_t> const*>, boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::arg<5>, boost::arg<6>, boost::arg<7> > > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::_bi::bind_t<std::__1::codecvt_base::result, boost::_mfi::cmf7<std::__1::codecvt_base::result, std::__1::codecvt<wchar_t, char, mbstate_t>, mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&>, boost::_bi::list8<boost::_bi::value<std::__1::codecvt<wchar_t, char, mbstate_t> const*>, boost::arg<1>, boost::arg<2>, boost::arg<3>, boost::arg<4>, boost::arg<5>, boost::arg<6>, boost::arg<7> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail7convertIwcNS_3_bi6bind_tINSt3__112codecvt_base6resultENS_4_mfi4cmf7IS6_NS4_7codecvtIwc9mbstate_tEERSA_PKcSE_RSE_PwSG_RSG_EENS2_5list8INS2_5valueIPKSB_EENS_3argILi1EEENSO_ILi2EEENSO_ILi3EEENSO_ILi4EEENSO_ILi5EEENSO_ILi6EEENSO_ILi7EEEEEEEEENS4_12basic_stringIT_NS4_11char_traitsISZ_EENS4_9allocatorISZ_EEEERKNSY_IT0_NS10_IS15_EENS12_IS15_EEEET1_(void) {
    ALOGD("_ZN5boost6detail7convertIwcNS_3_bi6bind_tINSt3__112codecvt_base6resultENS_4_mfi4cmf7IS6_NS4_7codecvtIwc9mbstate_tEERSA_PKcSE_RSE_PwSG_RSG_EENS2_5list8INS2_5valueIPKSB_EENS_3argILi1EEENSO_ILi2EEENSO_ILi3EEENSO_ILi4EEENSO_ILi5EEENSO_ILi6EEENSO_ILi7EEEEEEEEENS4_12basic_stringIT_NS4_11char_traitsISZ_EENS4_9allocatorISZ_EEEERKNSY_IT0_NS10_IS15_EENS12_IS15_EEEET1_() called");
    return 0;
}

/* Demangled: boost::to_utf8(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost7to_utf8ERKNSt3__112basic_stringIwNS0_11char_traitsIwEENS0_9allocatorIwEEEE(void) {
    ALOGD("_ZN5boost7to_utf8ERKNSt3__112basic_stringIwNS0_11char_traitsIwEENS0_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: boost::to_8_bit(std::__1::basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > const&, std::__1::codecvt<wchar_t, char, mbstate_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost8to_8_bitERKNSt3__112basic_stringIwNS0_11char_traitsIwEENS0_9allocatorIwEEEERKNS0_7codecvtIwc9mbstate_tEE(void) {
    ALOGD("_ZN5boost8to_8_bitERKNSt3__112basic_stringIwNS0_11char_traitsIwEENS0_9allocatorIwEEEERKNS0_7codecvtIwc9mbstate_tEE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE7rethrowEv() called");
    return 0;
}

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<std::logic_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorISt11logic_errorEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<std::logic_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorISt11logic_errorEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<std::logic_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorISt11logic_errorEE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<std::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorISt11logic_errorED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorISt11logic_errorED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<std::logic_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorISt11logic_errorED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorISt11logic_errorED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::logic_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt11logic_errorEEED1Ev() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::get_octet_count(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options6detail18utf8_codecvt_facet15get_octet_countEh(void) {
    ALOGD("_ZN5boost15program_options6detail18utf8_codecvt_facet15get_octet_countEh() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::utf8_codecvt_facet(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options6detail18utf8_codecvt_facetC2Em(void) {
    ALOGD("_ZN5boost15program_options6detail18utf8_codecvt_facetC2Em() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::~utf8_codecvt_facet() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options6detail18utf8_codecvt_facetD0Ev(void) {
    ALOGD("_ZN5boost15program_options6detail18utf8_codecvt_facetD0Ev() called");
    return 0;
}

/* Demangled: int boost::program_options::detail::detail::get_cont_octet_out_count_impl<4ul>(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15program_options6detail6detail29get_cont_octet_out_count_implILm4EEEiw(void) {
    ALOGD("_ZN5boost15program_options6detail6detail29get_cont_octet_out_count_implILm4EEEiw() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet10do_unshiftER9mbstate_tPcS5_RS5_(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet10do_unshiftER9mbstate_tPcS5_RS5_() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet11do_encodingEv(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet11do_encodingEv() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet13do_max_lengthEv(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet13do_max_lengthEv() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet16do_always_noconvEv(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet16do_always_noconvEv() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::get_cont_octet_out_count(wchar_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet24get_cont_octet_out_countEw(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet24get_cont_octet_out_countEw() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet5do_inER9mbstate_tPKcS6_RS6_PwS8_RS8_(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet5do_inER9mbstate_tPKcS6_RS6_PwS8_RS8_() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet6do_outER9mbstate_tPKwS6_RS6_PcS8_RS8_(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet6do_outER9mbstate_tPKwS6_RS6_PcS8_RS8_() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet9do_lengthER9mbstate_tPKcS6_m(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet9do_lengthER9mbstate_tPKcS6_m() called");
    return 0;
}

/* Demangled: boost::program_options::detail::utf8_codecvt_facet::do_length(mbstate_t const&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost15program_options6detail18utf8_codecvt_facet9do_lengthERK9mbstate_tPKcS7_m(void) {
    ALOGD("_ZNK5boost15program_options6detail18utf8_codecvt_facet9do_lengthERK9mbstate_tPKcS7_m() called");
    return 0;
}

/* Exported Object: typeinfo for boost::program_options::detail::utf8_codecvt_facet */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15program_options6detail18utf8_codecvt_facetE = NULL;

/* Exported Object: typeinfo name for boost::program_options::detail::utf8_codecvt_facet */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15program_options6detail18utf8_codecvt_facetE = NULL;

/* Exported Object: vtable for boost::program_options::detail::utf8_codecvt_facet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15program_options6detail18utf8_codecvt_facetE = NULL;

/* Demangled: boost::system::detail::system_error_category::~system_error_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6system6detail21system_error_categoryD0Ev(void) {
    ALOGD("_ZN5boost6system6detail21system_error_categoryD0Ev() called");
    return 0;
}

/* Demangled: boost::system::detail::generic_error_category::~generic_error_category() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6system6detail22generic_error_categoryD0Ev(void) {
    ALOGD("_ZN5boost6system6detail22generic_error_categoryD0Ev() called");
    return 0;
}

/* Demangled: boost::system::detail::system_error_category::default_error_condition(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system6detail21system_error_category23default_error_conditionEi(void) {
    ALOGD("_ZNK5boost6system6detail21system_error_category23default_error_conditionEi() called");
    return 0;
}

/* Demangled: boost::system::detail::system_error_category::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system6detail21system_error_category4nameEv(void) {
    ALOGD("_ZNK5boost6system6detail21system_error_category4nameEv() called");
    return 0;
}

/* Demangled: boost::system::detail::system_error_category::message(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system6detail21system_error_category7messageEi(void) {
    ALOGD("_ZNK5boost6system6detail21system_error_category7messageEi() called");
    return 0;
}

/* Demangled: boost::system::detail::generic_error_category::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system6detail22generic_error_category4nameEv(void) {
    ALOGD("_ZNK5boost6system6detail22generic_error_category4nameEv() called");
    return 0;
}

/* Demangled: boost::system::detail::generic_error_category::message(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6system6detail22generic_error_category7messageEi(void) {
    ALOGD("_ZNK5boost6system6detail22generic_error_category7messageEi() called");
    return 0;
}

/* Exported Object: typeinfo for boost::system::detail::system_error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6system6detail21system_error_categoryE = NULL;

/* Exported Object: typeinfo for boost::system::detail::generic_error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6system6detail22generic_error_categoryE = NULL;

/* Exported Object: typeinfo name for boost::system::detail::system_error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6system6detail21system_error_categoryE = NULL;

/* Exported Object: typeinfo name for boost::system::detail::generic_error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6system6detail22generic_error_categoryE = NULL;

/* Exported Object: vtable for boost::system::detail::system_error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6system6detail21system_error_categoryE = NULL;

/* Exported Object: vtable for boost::system::detail::generic_error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6system6detail22generic_error_categoryE = NULL;

/* Demangled: void boost::shared_ptr<boost::detail::thread_data_base>::reset<boost::detail::thread_data_base>(boost::detail::thread_data_base*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10shared_ptrINS_6detail16thread_data_baseEE5resetIS2_EEvPT_(void) {
    ALOGD("_ZN5boost10shared_ptrINS_6detail16thread_data_baseEE5resetIS2_EEvPT_() called");
    return 0;
}

/* Demangled: boost::shared_ptr<boost::detail::thread_data_base>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10shared_ptrINS_6detail16thread_data_baseEED2Ev(void) {
    ALOGD("_ZN5boost10shared_ptrINS_6detail16thread_data_baseEED2Ev() called");
    return 0;
}

/* Demangled: boost::this_thread::interruption_point() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread18interruption_pointEv(void) {
    ALOGD("_ZN5boost11this_thread18interruption_pointEv() called");
    return 0;
}

/* Demangled: boost::this_thread::disable_interruption::disable_interruption() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20disable_interruptionC1Ev(void) {
    ALOGD("_ZN5boost11this_thread20disable_interruptionC1Ev() called");
    return 0;
}

/* Demangled: boost::this_thread::disable_interruption::disable_interruption() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20disable_interruptionC2Ev(void) {
    ALOGD("_ZN5boost11this_thread20disable_interruptionC2Ev() called");
    return 0;
}

/* Demangled: boost::this_thread::disable_interruption::~disable_interruption() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20disable_interruptionD1Ev(void) {
    ALOGD("_ZN5boost11this_thread20disable_interruptionD1Ev() called");
    return 0;
}

/* Demangled: boost::this_thread::disable_interruption::~disable_interruption() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20disable_interruptionD2Ev(void) {
    ALOGD("_ZN5boost11this_thread20disable_interruptionD2Ev() called");
    return 0;
}

/* Demangled: boost::this_thread::interruption_enabled() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20interruption_enabledEv(void) {
    ALOGD("_ZN5boost11this_thread20interruption_enabledEv() called");
    return 0;
}

/* Demangled: boost::this_thread::restore_interruption::restore_interruption(boost::this_thread::disable_interruption&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20restore_interruptionC1ERNS0_20disable_interruptionE(void) {
    ALOGD("_ZN5boost11this_thread20restore_interruptionC1ERNS0_20disable_interruptionE() called");
    return 0;
}

/* Demangled: boost::this_thread::restore_interruption::restore_interruption(boost::this_thread::disable_interruption&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20restore_interruptionC2ERNS0_20disable_interruptionE(void) {
    ALOGD("_ZN5boost11this_thread20restore_interruptionC2ERNS0_20disable_interruptionE() called");
    return 0;
}

/* Demangled: boost::this_thread::restore_interruption::~restore_interruption() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20restore_interruptionD1Ev(void) {
    ALOGD("_ZN5boost11this_thread20restore_interruptionD1Ev() called");
    return 0;
}

/* Demangled: boost::this_thread::restore_interruption::~restore_interruption() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread20restore_interruptionD2Ev(void) {
    ALOGD("_ZN5boost11this_thread20restore_interruptionD2Ev() called");
    return 0;
}

/* Demangled: boost::this_thread::no_interruption_point::hidden::sleep_for_internal(boost::detail::platform_duration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread21no_interruption_point6hidden18sleep_for_internalERKNS_6detail17platform_durationE(void) {
    ALOGD("_ZN5boost11this_thread21no_interruption_point6hidden18sleep_for_internalERKNS_6detail17platform_durationE() called");
    return 0;
}

/* Demangled: boost::this_thread::interruption_requested() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread22interruption_requestedEv(void) {
    ALOGD("_ZN5boost11this_thread22interruption_requestedEv() called");
    return 0;
}

/* Demangled: boost::this_thread::yield() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11this_thread5yieldEv(void) {
    ALOGD("_ZN5boost11this_thread5yieldEv() called");
    return 0;
}

/* Demangled: boost::unique_lock<boost::mutex>::lock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11unique_lockINS_5mutexEE4lockEv(void) {
    ALOGD("_ZN5boost11unique_lockINS_5mutexEE4lockEv() called");
    return 0;
}

/* Demangled: boost::unique_lock<boost::mutex>::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11unique_lockINS_5mutexEE6unlockEv(void) {
    ALOGD("_ZN5boost11unique_lockINS_5mutexEE6unlockEv() called");
    return 0;
}

/* Demangled: boost::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost12bad_weak_ptrD0Ev(void) {
    ALOGD("_ZN5boost12bad_weak_ptrD0Ev() called");
    return 0;
}

/* Demangled: boost::thread_detail::enter_once_region(boost::once_flag&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost13thread_detail17enter_once_regionERNS_9once_flagE(void) {
    ALOGD("_ZN5boost13thread_detail17enter_once_regionERNS_9once_flagE() called");
    return 0;
}

/* Demangled: boost::thread_detail::commit_once_region(boost::once_flag&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost13thread_detail18commit_once_regionERNS_9once_flagE(void) {
    ALOGD("_ZN5boost13thread_detail18commit_once_regionERNS_9once_flagE() called");
    return 0;
}

/* Demangled: boost::thread_detail::rollback_once_region(boost::once_flag&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost13thread_detail20rollback_once_regionERNS_9once_flagE(void) {
    ALOGD("_ZN5boost13thread_detail20rollback_once_regionERNS_9once_flagE() called");
    return 0;
}

/* Demangled: boost::condition_error::~condition_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15condition_errorD0Ev(void) {
    ALOGD("_ZN5boost15condition_errorD0Ev() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_12bad_weak_ptrEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_12bad_weak_ptrEEEvRKT_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::condition_error>(boost::condition_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_15condition_errorEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_15condition_errorEEEvRKT_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::bad_lexical_cast>(boost::bad_lexical_cast const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_16bad_lexical_castEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_16bad_lexical_castEEEvRKT_() called");
    return 0;
}

/* Demangled: boost::bad_lexical_cast::~bad_lexical_cast() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16bad_lexical_castD0Ev(void) {
    ALOGD("_ZN5boost16bad_lexical_castD0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC1ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC1ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC1ERKS5_NS5_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEC1ERKS5_NS5_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::clone_impl(boost::exception_detail::error_info_injector<boost::bad_lexical_cast> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC1ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC1ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC1ERKS5_NS5_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEC1ERKS5_NS5_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(boost::condition_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEEC2ERKS2_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEEC2ERKS2_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::condition_error>::error_info_injector(boost::exception_detail::error_info_injector<boost::condition_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEEC2ERKS3_(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEEC2ERKS3_() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_15condition_errorEED2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED2Ev() called");
    return 0;
}

/* Demangled: boost::condition_variable::do_wait_until(boost::unique_lock<boost::mutex>&, boost::detail::mono_platform_timepoint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost18condition_variable13do_wait_untilERNS_11unique_lockINS_5mutexEEERKNS_6detail23mono_platform_timepointE(void) {
    ALOGD("_ZN5boost18condition_variable13do_wait_untilERNS_11unique_lockINS_5mutexEEERKNS_6detail23mono_platform_timepointE() called");
    return 0;
}

/* Demangled: boost::condition_variable::wait(boost::unique_lock<boost::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost18condition_variable4waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZN5boost18condition_variable4waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: boost::condition_variable::condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost18condition_variableC2Ev(void) {
    ALOGD("_ZN5boost18condition_variableC2Ev() called");
    return 0;
}

/* Demangled: boost::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost18condition_variableD2Ev(void) {
    ALOGD("_ZN5boost18condition_variableD2Ev() called");
    return 0;
}

/* Demangled: boost::condition_variable_any::notify_all() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost22condition_variable_any10notify_allEv(void) {
    ALOGD("_ZN5boost22condition_variable_any10notify_allEv() called");
    return 0;
}

/* Demangled: boost::enable_shared_from_this<boost::detail::thread_data_base>::~enable_shared_from_this() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost23enable_shared_from_thisINS_6detail16thread_data_baseEED2Ev(void) {
    ALOGD("_ZN5boost23enable_shared_from_thisINS_6detail16thread_data_baseEED2Ev() called");
    return 0;
}

/* Demangled: boost::notify_all_at_thread_exit(boost::condition_variable&, boost::unique_lock<boost::mutex>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost25notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZN5boost25notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: boost::mutex::~mutex() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost5mutexD2Ev(void) {
    ALOGD("_ZN5boost5mutexD2Ev() called");
    return 0;
}

/* Demangled: boost::detail::find_tss_data(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail13find_tss_dataEPKv(void) {
    ALOGD("_ZN5boost6detail13find_tss_dataEPKv() called");
    return 0;
}

/* Demangled: boost::detail::erase_tss_node(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail14erase_tss_nodeEPKv(void) {
    ALOGD("_ZN5boost6detail14erase_tss_nodeEPKv() called");
    return 0;
}

/* Demangled: boost::detail::add_new_tss_node(void const*, boost::shared_ptr<boost::detail::tss_cleanup_function>, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail16add_new_tss_nodeEPKvNS_10shared_ptrINS0_20tss_cleanup_functionEEEPv(void) {
    ALOGD("_ZN5boost6detail16add_new_tss_nodeEPKvNS_10shared_ptrINS0_20tss_cleanup_functionEEEPv() called");
    return 0;
}

/* Demangled: boost::detail::thread_data_base::notify_all_at_thread_exit(boost::condition_variable*, boost::mutex*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail16thread_data_base25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE(void) {
    ALOGD("_ZN5boost6detail16thread_data_base25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE() called");
    return 0;
}

/* Demangled: boost::detail::thread_data_base::thread_data_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail16thread_data_baseC2Ev(void) {
    ALOGD("_ZN5boost6detail16thread_data_baseC2Ev() called");
    return 0;
}

/* Demangled: boost::detail::thread_data_base::~thread_data_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail16thread_data_baseD0Ev(void) {
    ALOGD("_ZN5boost6detail16thread_data_baseD0Ev() called");
    return 0;
}

/* Demangled: boost::detail::thread_data_base::~thread_data_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail16thread_data_baseD1Ev(void) {
    ALOGD("_ZN5boost6detail16thread_data_baseD1Ev() called");
    return 0;
}

/* Demangled: boost::detail::thread_data_base::~thread_data_base() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail16thread_data_baseD2Ev(void) {
    ALOGD("_ZN5boost6detail16thread_data_baseD2Ev() called");
    return 0;
}

/* Demangled: boost::detail::shared_state_base::notify_deferred() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17shared_state_base15notify_deferredEv(void) {
    ALOGD("_ZN5boost6detail17shared_state_base15notify_deferredEv() called");
    return 0;
}

/* Demangled: boost::detail::shared_state_base::mark_finished_internal(boost::unique_lock<boost::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17shared_state_base22mark_finished_internalERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZN5boost6detail17shared_state_base22mark_finished_internalERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::detail::thread_data_base>::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::detail::thread_data_base>::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::detail::thread_data_base>::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::detail::thread_data_base>::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::detail::thread_data_base>::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEED0Ev() called");
    return 0;
}

/* Demangled: boost::detail::lcast_ret_unsigned<std::__1::char_traits<char>, unsigned int, char>::convert() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail18lcast_ret_unsignedINSt3__111char_traitsIcEEjcE7convertEv(void) {
    ALOGD("_ZN5boost6detail18lcast_ret_unsignedINSt3__111char_traitsIcEEjcE7convertEv() called");
    return 0;
}

/* Demangled: boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail20interruption_checkerC2EP15pthread_mutex_tP14pthread_cond_t(void) {
    ALOGD("_ZN5boost6detail20interruption_checkerC2EP15pthread_mutex_tP14pthread_cond_t() called");
    return 0;
}

/* Demangled: void boost::detail::sp_pointer_construct<boost::detail::thread_data_base, boost::detail::thread_data_base>(boost::shared_ptr<boost::detail::thread_data_base>*, boost::detail::thread_data_base*, boost::detail::shared_count&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail20sp_pointer_constructINS0_16thread_data_baseES2_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE(void) {
    ALOGD("_ZN5boost6detail20sp_pointer_constructINS0_16thread_data_baseES2_EEvPNS_10shared_ptrIT_EEPT0_RNS0_12shared_countE() called");
    return 0;
}

/* Demangled: boost::detail::get_current_thread_data() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail23get_current_thread_dataEv(void) {
    ALOGD("_ZN5boost6detail23get_current_thread_dataEv() called");
    return 0;
}

/* Demangled: boost::detail::set_current_thread_data(boost::detail::thread_data_base*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail23set_current_thread_dataEPNS0_16thread_data_baseE(void) {
    ALOGD("_ZN5boost6detail23set_current_thread_dataEPNS0_16thread_data_baseE() called");
    return 0;
}

/* Demangled: boost::detail::make_external_thread_data() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail25make_external_thread_dataEv(void) {
    ALOGD("_ZN5boost6detail25make_external_thread_dataEv() called");
    return 0;
}

/* Demangled: boost::detail::make_ready_at_thread_exit(boost::shared_ptr<boost::detail::shared_state_base>) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail25make_ready_at_thread_exitENS_10shared_ptrINS0_17shared_state_baseEEE(void) {
    ALOGD("_ZN5boost6detail25make_ready_at_thread_exitENS_10shared_ptrINS0_17shared_state_baseEEE() called");
    return 0;
}

/* Demangled: boost::detail::externally_launched_thread::notify_all_at_thread_exit(boost::condition_variable*, boost::mutex*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail26externally_launched_thread25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE(void) {
    ALOGD("_ZN5boost6detail26externally_launched_thread25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE() called");
    return 0;
}

/* Demangled: boost::detail::externally_launched_thread::run() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail26externally_launched_thread3runEv(void) {
    ALOGD("_ZN5boost6detail26externally_launched_thread3runEv() called");
    return 0;
}

/* Demangled: boost::detail::externally_launched_thread::~externally_launched_thread() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail26externally_launched_threadD0Ev(void) {
    ALOGD("_ZN5boost6detail26externally_launched_threadD0Ev() called");
    return 0;
}

/* Demangled: boost::detail::externally_launched_thread::~externally_launched_thread() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail26externally_launched_threadD2Ev(void) {
    ALOGD("_ZN5boost6detail26externally_launched_threadD2Ev() called");
    return 0;
}

/* Demangled: boost::detail::get_or_make_current_thread_data() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail31get_or_make_current_thread_dataEv(void) {
    ALOGD("_ZN5boost6detail31get_or_make_current_thread_dataEv() called");
    return 0;
}

/* Demangled: boost::thread::join_noexcept() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread13join_noexceptEv(void) {
    ALOGD("_ZN5boost6thread13join_noexceptEv() called");
    return 0;
}

/* Demangled: boost::thread::native_handle() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread13native_handleEv(void) {
    ALOGD("_ZN5boost6thread13native_handleEv() called");
    return 0;
}

/* Demangled: boost::thread::hardware_concurrency() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread20hardware_concurrencyEv(void) {
    ALOGD("_ZN5boost6thread20hardware_concurrencyEv() called");
    return 0;
}

/* Demangled: boost::thread::physical_concurrency() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread20physical_concurrencyEv(void) {
    ALOGD("_ZN5boost6thread20physical_concurrencyEv() called");
    return 0;
}

/* Demangled: boost::thread::start_thread_noexcept(boost::thread_attributes const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread21start_thread_noexceptERKNS_17thread_attributesE(void) {
    ALOGD("_ZN5boost6thread21start_thread_noexceptERKNS_17thread_attributesE() called");
    return 0;
}

/* Demangled: boost::thread::start_thread_noexcept() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread21start_thread_noexceptEv(void) {
    ALOGD("_ZN5boost6thread21start_thread_noexceptEv() called");
    return 0;
}

/* Demangled: boost::thread::do_try_join_until_noexcept(boost::detail::mono_platform_timepoint const&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread26do_try_join_until_noexceptERKNS_6detail23mono_platform_timepointERb(void) {
    ALOGD("_ZN5boost6thread26do_try_join_until_noexceptERKNS_6detail23mono_platform_timepointERb() called");
    return 0;
}

/* Demangled: boost::thread::detach() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread6detachEv(void) {
    ALOGD("_ZN5boost6thread6detachEv() called");
    return 0;
}

/* Demangled: boost::thread::interrupt() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6thread9interruptEv(void) {
    ALOGD("_ZN5boost6thread9interruptEv() called");
    return 0;
}

/* Demangled: boost::thread::thread() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6threadC1Ev(void) {
    ALOGD("_ZN5boost6threadC1Ev() called");
    return 0;
}

/* Demangled: boost::thread::thread() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6threadC2Ev(void) {
    ALOGD("_ZN5boost6threadC2Ev() called");
    return 0;
}

/* Demangled: boost::pthread::pthread_mutex_scoped_lock::~pthread_mutex_scoped_lock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost7pthread25pthread_mutex_scoped_lockD2Ev(void) {
    ALOGD("_ZN5boost7pthread25pthread_mutex_scoped_lockD2Ev() called");
    return 0;
}

/* Demangled: void boost::algorithm::trim_left_if<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, boost::algorithm::detail::is_classifiedF>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, boost::algorithm::detail::is_classifiedF) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost9algorithm12trim_left_ifINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS0_6detail14is_classifiedFEEEvRT_T0_(void) {
    ALOGD("_ZN5boost9algorithm12trim_left_ifINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS0_6detail14is_classifiedFEEEvRT_T0_() called");
    return 0;
}

/* Demangled: void boost::algorithm::trim_right_if<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, boost::algorithm::detail::is_classifiedF>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, boost::algorithm::detail::is_classifiedF) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost9algorithm13trim_right_ifINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS0_6detail14is_classifiedFEEEvRT_T0_(void) {
    ALOGD("_ZN5boost9algorithm13trim_right_ifINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS0_6detail14is_classifiedFEEEvRT_T0_() called");
    return 0;
}

/* Demangled: void boost::algorithm::trim_if<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, boost::algorithm::detail::is_classifiedF>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, boost::algorithm::detail::is_classifiedF) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost9algorithm7trim_ifINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS0_6detail14is_classifiedFEEEvRT_T0_(void) {
    ALOGD("_ZN5boost9algorithm7trim_ifINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS0_6detail14is_classifiedFEEEvRT_T0_() called");
    return 0;
}

/* Demangled: boost::bad_weak_ptr::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost12bad_weak_ptr4whatEv(void) {
    ALOGD("_ZNK5boost12bad_weak_ptr4whatEv() called");
    return 0;
}

/* Demangled: boost::bad_lexical_cast::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16bad_lexical_cast4whatEv(void) {
    ALOGD("_ZNK5boost16bad_lexical_cast4whatEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: void boost::enable_shared_from_this<boost::detail::thread_data_base>::_internal_accept_owner<boost::detail::thread_data_base, boost::detail::thread_data_base>(boost::shared_ptr<boost::detail::thread_data_base> const*, boost::detail::thread_data_base*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost23enable_shared_from_thisINS_6detail16thread_data_baseEE22_internal_accept_ownerIS2_S2_EEvPKNS_10shared_ptrIT_EEPT0_(void) {
    ALOGD("_ZNK5boost23enable_shared_from_thisINS_6detail16thread_data_baseEE22_internal_accept_ownerIS2_S2_EEvPKNS_10shared_ptrIT_EEPT0_() called");
    return 0;
}

/* Demangled: boost::thread::get_thread_info() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6thread15get_thread_infoEv(void) {
    ALOGD("_ZNK5boost6thread15get_thread_infoEv() called");
    return 0;
}

/* Demangled: boost::thread::interruption_requested() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6thread22interruption_requestedEv(void) {
    ALOGD("_ZNK5boost6thread22interruption_requestedEv() called");
    return 0;
}

/* Demangled: boost::thread::joinable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost6thread8joinableEv(void) {
    ALOGD("_ZNK5boost6thread8joinableEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<boost::shared_ptr<boost::detail::shared_state_base>, std::__1::allocator<boost::shared_ptr<boost::detail::shared_state_base> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5boost10shared_ptrINS1_6detail17shared_state_baseEEENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5boost10shared_ptrINS1_6detail17shared_state_baseEEENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::pair<boost::condition_variable*, boost::mutex*>, std::__1::allocator<std::__1::pair<boost::condition_variable*, boost::mutex*> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_4pairIPN5boost18condition_variableEPNS2_5mutexEEENS_9allocatorIS7_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_4pairIPN5boost18condition_variableEPNS2_5mutexEEENS_9allocatorIS7_EEED2Ev() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<std::__1::__less<char, char>&, char*>(char*, char*, std::__1::__less<char, char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRNS_6__lessIccEEPcEEbT0_S5_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRNS_6__lessIccEEPcEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__1::map<void const*, boost::detail::tss_data_node, std::__1::less<void const*>, std::__1::allocator<std::__1::pair<void const* const, boost::detail::tss_data_node> > >::~map() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIPKvN5boost6detail13tss_data_nodeENS_4lessIS2_EENS_9allocatorINS_4pairIKS2_S5_EEEEED2Ev(void) {
    ALOGD("_ZNSt3__13mapIPKvN5boost6detail13tss_data_nodeENS_4lessIS2_EENS_9allocatorINS_4pairIKS2_S5_EEEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void const*, boost::detail::tss_data_node>, std::__1::__map_value_compare<void const*, std::__1::__value_type<void const*, boost::detail::tss_data_node>, std::__1::less<void const*>, true>, std::__1::allocator<std::__1::__value_type<void const*, boost::detail::tss_data_node> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<void const*, boost::detail::tss_data_node>, std::__1::__tree_node<std::__1::__value_type<void const*, boost::detail::tss_data_node>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPKvN5boost6detail13tss_data_nodeEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE5eraseENS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPKvN5boost6detail13tss_data_nodeEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE5eraseENS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void const*, boost::detail::tss_data_node>, std::__1::__map_value_compare<void const*, std::__1::__value_type<void const*, boost::detail::tss_data_node>, std::__1::less<void const*>, true>, std::__1::allocator<std::__1::__value_type<void const*, boost::detail::tss_data_node> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void const*, boost::detail::tss_data_node>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPKvN5boost6detail13tss_data_nodeEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPKvN5boost6detail13tss_data_nodeEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::pair<unsigned int, unsigned int>, std::__1::less<std::__1::pair<unsigned int, unsigned int> >, std::__1::allocator<std::__1::pair<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::pair<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_4pairIjjEENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_4pairIjjEENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<boost::shared_ptr<boost::detail::shared_state_base>, std::__1::allocator<boost::shared_ptr<boost::detail::shared_state_base> > >::__push_back_slow_path<boost::shared_ptr<boost::detail::shared_state_base> const&>(boost::shared_ptr<boost::detail::shared_state_base> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost10shared_ptrINS1_6detail17shared_state_baseEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost10shared_ptrINS1_6detail17shared_state_baseEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<boost::condition_variable*, boost::mutex*>, std::__1::allocator<std::__1::pair<boost::condition_variable*, boost::mutex*> > >::__push_back_slow_path<std::__1::pair<boost::condition_variable*, boost::mutex*> >(std::__1::pair<boost::condition_variable*, boost::mutex*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIPN5boost18condition_variableEPNS2_5mutexEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIPN5boost18condition_variableEPNS2_5mutexEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort5<std::__1::__less<char, char>&, char*>(char*, char*, char*, char*, char*, std::__1::__less<char, char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort5IRNS_6__lessIccEEPcEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt3__17__sort5IRNS_6__lessIccEEPcEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo for boost::condition_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost15condition_errorE = NULL;

/* Exported Object: typeinfo for boost::bad_lexical_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16bad_lexical_castE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::bad_weak_ptr> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::condition_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_15condition_errorEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::bad_lexical_cast> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEEE = NULL;

/* Exported Object: typeinfo for boost::enable_shared_from_this<boost::detail::thread_data_base> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost23enable_shared_from_thisINS_6detail16thread_data_baseEEE = NULL;

/* Exported Object: typeinfo for boost::detail::thread_data_base */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail16thread_data_baseE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::detail::thread_data_base> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEEE = NULL;

/* Exported Object: typeinfo for boost::detail::externally_launched_thread */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail26externally_launched_threadE = NULL;

/* Exported Object: typeinfo name for boost::condition_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost15condition_errorE = NULL;

/* Exported Object: typeinfo name for boost::bad_lexical_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16bad_lexical_castE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::bad_weak_ptr> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::condition_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_15condition_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::bad_lexical_cast> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEEE = NULL;

/* Exported Object: typeinfo name for boost::enable_shared_from_this<boost::detail::thread_data_base> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost23enable_shared_from_thisINS_6detail16thread_data_baseEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::thread_data_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail16thread_data_baseE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::detail::thread_data_base> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::externally_launched_thread */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail26externally_launched_threadE = NULL;

/* Exported Object: vtable for boost::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost12bad_weak_ptrE = NULL;

/* Exported Object: vtable for boost::condition_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost15condition_errorE = NULL;

/* Exported Object: vtable for boost::bad_lexical_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16bad_lexical_castE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::bad_weak_ptr> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::condition_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_15condition_errorEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::bad_lexical_cast> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEEE = NULL;

/* Exported Object: vtable for boost::detail::thread_data_base */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail16thread_data_baseE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::detail::thread_data_base> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pINS0_16thread_data_baseEEE = NULL;

/* Exported Object: vtable for boost::detail::externally_launched_thread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail26externally_launched_threadE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn24_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev(void) {
    ALOGD("_ZThn24_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn24_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev(void) {
    ALOGD("_ZThn24_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn24_N5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED0Ev(void) {
    ALOGD("_ZThn24_N5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::bad_lexical_cast>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn24_N5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED1Ev(void) {
    ALOGD("_ZThn24_N5boost16exception_detail19error_info_injectorINS_16bad_lexical_castEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED0Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED1Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail19error_info_injectorINS_15condition_errorEED0Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail19error_info_injectorINS_15condition_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::condition_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N5boost16exception_detail19error_info_injectorINS_15condition_errorEED1Ev(void) {
    ALOGD("_ZThn56_N5boost16exception_detail19error_info_injectorINS_15condition_errorEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev(void) {
    ALOGD("_ZThn8_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev(void) {
    ALOGD("_ZThn8_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED0Ev(void) {
    ALOGD("_ZThn8_N5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::bad_weak_ptr>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED1Ev(void) {
    ALOGD("_ZThn8_N5boost16exception_detail19error_info_injectorINS_12bad_weak_ptrEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_12bad_weak_ptrEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::condition_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_15condition_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_16bad_lexical_castEEEED1Ev() called");
    return 0;
}

/* Exported Object: guard variable for boost::object_cache<boost::re_detail_106700::cpp_regex_traits_base<char>, boost::re_detail_106700::cpp_regex_traits_implementation<char> >::do_get(boost::re_detail_106700::cpp_regex_traits_base<char> const&, unsigned long)::s_data */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE6do_getERKS3_mE6s_data = NULL;

/* Exported Object: guard variable for boost::cpp_regex_traits<char>::get_catalog_name_inst()::s_name */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5boost16cpp_regex_traitsIcE21get_catalog_name_instEvE6s_name = NULL;

/* Exported Object: guard variable for boost::re_detail_106700::cpp_regex_traits_implementation<char>::init()::null_string */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5boost16re_detail_10670031cpp_regex_traits_implementationIcE4initEvE11null_string = NULL;

/* Demangled: boost::shared_ptr<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::shared_ptr<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >(boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost10shared_ptrINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEC2IS7_EEPT_(void) {
    ALOGD("_ZN5boost10shared_ptrINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEC2IS7_EEPT_() called");
    return 0;
}

/* Demangled: boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::imbue(std::__1::locale) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11basic_regexIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE5imbueENSt3__16localeE(void) {
    ALOGD("_ZN5boost11basic_regexIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE5imbueENSt3__16localeE() called");
    return 0;
}

/* Demangled: boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::do_assign(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11basic_regexIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9do_assignEPKcS7_j(void) {
    ALOGD("_ZN5boost11basic_regexIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9do_assignEPKcS7_j() called");
    return 0;
}

/* Demangled: boost::regex_error::regex_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::regex_constants::error_type, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11regex_errorC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15regex_constants10error_typeEl(void) {
    ALOGD("_ZN5boost11regex_errorC1ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15regex_constants10error_typeEl() called");
    return 0;
}

/* Demangled: boost::regex_error::~regex_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11regex_errorD1Ev(void) {
    ALOGD("_ZN5boost11regex_errorD1Ev() called");
    return 0;
}

/* Demangled: boost::object_cache<boost::re_detail_106700::cpp_regex_traits_base<char>, boost::re_detail_106700::cpp_regex_traits_implementation<char> >::get(boost::re_detail_106700::cpp_regex_traits_base<char> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE3getERKS3_m(void) {
    ALOGD("_ZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE3getERKS3_m() called");
    return 0;
}

/* Demangled: boost::object_cache<boost::re_detail_106700::cpp_regex_traits_base<char>, boost::re_detail_106700::cpp_regex_traits_implementation<char> >::data::~data() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE4dataD2Ev(void) {
    ALOGD("_ZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE4dataD2Ev() called");
    return 0;
}

/* Demangled: boost::object_cache<boost::re_detail_106700::cpp_regex_traits_base<char>, boost::re_detail_106700::cpp_regex_traits_implementation<char> >::do_get(boost::re_detail_106700::cpp_regex_traits_base<char> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE6do_getERKS3_m(void) {
    ALOGD("_ZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE6do_getERKS3_m() called");
    return 0;
}

/* Demangled: boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > >::maybe_assign(boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS2_EEEEE12maybe_assignERKS8_(void) {
    ALOGD("_ZN5boost13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS2_EEEEE12maybe_assignERKS8_() called");
    return 0;
}

/* Demangled: boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > >::set_size(unsigned long, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS2_EEEEE8set_sizeEmS2_S2_(void) {
    ALOGD("_ZN5boost13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS2_EEEEE8set_sizeEmS2_S2_() called");
    return 0;
}

/* Demangled: boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > >::operator=(boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS2_EEEEEaSERKS8_(void) {
    ALOGD("_ZN5boost13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS2_EEEEEaSERKS8_() called");
    return 0;
}

/* Demangled: void boost::throw_exception<std::invalid_argument>(std::invalid_argument const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionISt16invalid_argumentEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionISt16invalid_argumentEEvRKT_() called");
    return 0;
}

/* Demangled: boost::cpp_regex_traits<char>::catalog_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16cpp_regex_traitsIcE12catalog_nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost16cpp_regex_traitsIcE12catalog_nameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::cpp_regex_traits<char>::get_mutex_inst() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16cpp_regex_traitsIcE14get_mutex_instEv(void) {
    ALOGD("_ZN5boost16cpp_regex_traitsIcE14get_mutex_instEv() called");
    return 0;
}

/* Demangled: boost::cpp_regex_traits<char>::get_catalog_name() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16cpp_regex_traitsIcE16get_catalog_nameEv(void) {
    ALOGD("_ZN5boost16cpp_regex_traitsIcE16get_catalog_nameEv() called");
    return 0;
}

/* Demangled: boost::cpp_regex_traits<char>::get_catalog_name_inst() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16cpp_regex_traitsIcE21get_catalog_name_instEv(void) {
    ALOGD("_ZN5boost16cpp_regex_traitsIcE21get_catalog_name_instEv() called");
    return 0;
}

/* Demangled: boost::cpp_regex_traits<char>::imbue(std::__1::locale) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16cpp_regex_traitsIcE5imbueENSt3__16localeE(void) {
    ALOGD("_ZN5boost16cpp_regex_traitsIcE5imbueENSt3__16localeE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone_impl(boost::exception_detail::error_info_injector<std::invalid_argument> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEC1ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEC1ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEC1ERKS5_NS5_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEC1ERKS5_NS5_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorISt16invalid_argumentED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorISt16invalid_argumentED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorISt16invalid_argumentED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorISt16invalid_argumentED2Ev() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::parser_buf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::parser_buf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEE7seekoffExNS2_8ios_base7seekdirEj(void) {
    ALOGD("_ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEE7seekoffExNS2_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::parser_buf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEE7seekposENS2_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEE7seekposENS2_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::parser_buf<char, std::__1::char_traits<char> >::~parser_buf() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEED0Ev(void) {
    ALOGD("_ZN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::regex_data() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670010regex_dataIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC2Ev(void) {
    ALOGD("_ZN5boost16re_detail_10670010regex_dataIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC2Ev() called");
    return 0;
}

/* Demangled: void boost::re_detail_106700::raise_error<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > >(boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > const&, boost::regex_constants::error_type) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670011raise_errorINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEEvRKT_NS_15regex_constants10error_typeE(void) {
    ALOGD("_ZN5boost16re_detail_10670011raise_errorINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEEvRKT_NS_15regex_constants10error_typeE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::raw_storage::insert(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670011raw_storage6insertEmm(void) {
    ALOGD("_ZN5boost16re_detail_10670011raw_storage6insertEmm() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::raw_storage::resize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670011raw_storage6resizeEm(void) {
    ALOGD("_ZN5boost16re_detail_10670011raw_storage6resizeEm() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_fail() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_failEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_failEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_jump() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_jumpEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_jumpEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_then() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_thenEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_thenEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_wild() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_wildEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_wildEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_alt(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10unwind_altEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10unwind_altEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_end(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10unwind_endEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10unwind_endEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_match() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11match_matchEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11match_matchEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_case(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11unwind_caseEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11unwind_caseEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_then(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11unwind_thenEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11unwind_thenEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_accept() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12match_acceptEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12match_acceptEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_commit() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12match_commitEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12match_commitEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_prefix() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12match_prefixEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12match_prefixEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_paren(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12unwind_parenEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12unwind_parenEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_backref() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13match_backrefEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13match_backrefEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_endmark() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13match_endmarkEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13match_endmarkEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_literal() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13match_literalEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13match_literalEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_commit(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13unwind_commitEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13unwind_commitEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::construct_init(boost::basic_regex<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > const&, boost::regex_constants::_match_flags) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14construct_initERKNS_11basic_regexIcSC_EENS_15regex_constants12_match_flagsE(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14construct_initERKNS_11basic_regexIcSC_EENS_15regex_constants12_match_flagsE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_backstep() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_backstepEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_backstepEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_end_line() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_end_lineEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_end_lineEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_long_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_long_setEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_long_setEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_word_end() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_word_endEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14match_word_endEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_combining() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15match_combiningEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15match_combiningEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_recursion() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15match_recursionEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15match_recursionEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_startmark() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15match_startmarkEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15match_startmarkEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find_restart_any() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16find_restart_anyEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16find_restart_anyEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find_restart_buf() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16find_restart_bufEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16find_restart_bufEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find_restart_lit() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16find_restart_litEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16find_restart_litEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_all_states() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_all_statesEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_all_statesEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_buffer_end() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_buffer_endEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_buffer_endEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_set_repeat() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_set_repeatEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_set_repeatEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_start_line() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_start_lineEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_start_lineEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_word_start() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_word_startEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_word_startEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::skip_until_paren(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16skip_until_parenEib(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16skip_until_parenEib() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_assertion(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16unwind_assertionEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16unwind_assertionEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_recursion(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16unwind_recursionEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16unwind_recursionEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find_restart_line() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17find_restart_lineEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17find_restart_lineEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find_restart_word() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17find_restart_wordEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17find_restart_wordEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_char_repeat() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17match_char_repeatEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17match_char_repeatEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_toggle_case() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17match_toggle_caseEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17match_toggle_caseEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_within_word() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17match_within_wordEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17match_within_wordEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_buffer_start() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18match_buffer_startEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18match_buffer_startEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_char_repeat(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18unwind_char_repeatEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18unwind_char_repeatEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_extra_block(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18unwind_extra_blockEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18unwind_extra_blockEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_word_boundary() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE19match_word_boundaryEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE19match_word_boundaryEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::push_repeater_count(int, boost::re_detail_106700::repeater_count<char const*>**) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE19push_repeater_countEiPPNS0_14repeater_countIS3_EE(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE19push_repeater_countEiPPNS0_14repeater_countIS3_EE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_assert_backref() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20match_assert_backrefEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20match_assert_backrefEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_recursion_pop(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20unwind_recursion_popEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20unwind_recursion_popEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_dot_repeat_fast() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_dot_repeat_fastEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_dot_repeat_fastEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_dot_repeat_slow() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_dot_repeat_slowEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_dot_repeat_slowEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_long_set_repeat() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_long_set_repeatEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_long_set_repeatEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_soft_buffer_end() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_soft_buffer_endEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21match_soft_buffer_endEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_restart_continue() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22match_restart_continueEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22match_restart_continueEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_fast_dot_repeat(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22unwind_fast_dot_repeatEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22unwind_fast_dot_repeatEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_long_set_repeat(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22unwind_long_set_repeatEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22unwind_long_set_repeatEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_slow_dot_repeat(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22unwind_slow_dot_repeatEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE22unwind_slow_dot_repeatEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_repeater_counter(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE23unwind_repeater_counterEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE23unwind_repeater_counterEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_short_set_repeat(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE23unwind_short_set_repeatEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE23unwind_short_set_repeatEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_non_greedy_repeat(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE24unwind_non_greedy_repeatEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE24unwind_non_greedy_repeatEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_recursion_stopper(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE24unwind_recursion_stopperEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE24unwind_recursion_stopperEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_dot_repeat_dispatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE25match_dot_repeat_dispatchEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE25match_dot_repeat_dispatchEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_greedy_single_repeat(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE27unwind_greedy_single_repeatEb(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE27unwind_greedy_single_repeatEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE4findEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE4findEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE5matchEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE5matchEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find_imp() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE8find_impEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE8find_impEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_alt() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_altEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_altEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_imp() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_impEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_impEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_rep() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_repEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_repEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_setEv(void) {
    ALOGD("_ZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9match_setEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::get_mem_block() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670013get_mem_blockEv(void) {
    ALOGD("_ZN5boost16re_detail_10670013get_mem_blockEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::put_mem_block(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670013put_mem_blockEPv(void) {
    ALOGD("_ZN5boost16re_detail_10670013put_mem_blockEPv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::add_single(boost::re_detail_106700::digraph<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670014basic_char_setIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10add_singleERKNS0_7digraphIcEE(void) {
    ALOGD("_ZN5boost16re_detail_10670014basic_char_setIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10add_singleERKNS0_7digraphIcEE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::add_equivalent(boost::re_detail_106700::digraph<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670014basic_char_setIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14add_equivalentERKNS0_7digraphIcEE(void) {
    ALOGD("_ZN5boost16re_detail_10670014basic_char_setIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14add_equivalentERKNS0_7digraphIcEE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::add_range(boost::re_detail_106700::digraph<char> const&, boost::re_detail_106700::digraph<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670014basic_char_setIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9add_rangeERKNS0_7digraphIcEESA_(void) {
    ALOGD("_ZN5boost16re_detail_10670014basic_char_setIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9add_rangeERKNS0_7digraphIcEESA_() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::repeater_count<char const*>::unwind_until(int, boost::re_detail_106700::repeater_count<char const*>*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670014repeater_countIPKcE12unwind_untilEiPS4_i(void) {
    ALOGD("_ZN5boost16re_detail_10670014repeater_countIPKcE12unwind_untilEiPS4_i() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::verify_options(unsigned int, boost::regex_constants::_match_flags) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670014verify_optionsEjNS_15regex_constants12_match_flagsE(void) {
    ALOGD("_ZN5boost16re_detail_10670014verify_optionsEjNS_15regex_constants12_match_flagsE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::saved_recursion<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > >::saved_recursion(int, boost::re_detail_106700::re_syntax_base const*, boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > >*, boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015saved_recursionINS_13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS4_EEEEEEEC2EiPKNS0_14re_syntax_baseEPSA_SF_(void) {
    ALOGD("_ZN5boost16re_detail_10670015saved_recursionINS_13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS4_EEEEEEEC2EiPKNS0_14re_syntax_baseEPSA_SF_() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::saved_recursion<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > >::~saved_recursion() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015saved_recursionINS_13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS4_EEEEEEED2Ev(void) {
    ALOGD("_ZN5boost16re_detail_10670015saved_recursionINS_13match_resultsIPKcNSt3__19allocatorINS_9sub_matchIS4_EEEEEEED2Ev() called");
    return 0;
}

/* Demangled: unsigned int boost::re_detail_106700::find_sort_syntax<boost::re_detail_106700::cpp_regex_traits_implementation<char>, char>(boost::re_detail_106700::cpp_regex_traits_implementation<char> const*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670016find_sort_syntaxINS0_31cpp_regex_traits_implementationIcEEcEEjPKT_PT0_(void) {
    ALOGD("_ZN5boost16re_detail_10670016find_sort_syntaxINS0_31cpp_regex_traits_implementationIcEEcEEjPKT_PT0_() called");
    return 0;
}

/* Demangled: char const* boost::re_detail_106700::re_is_set_member<char const*, char, boost::regex_traits<char, boost::cpp_regex_traits<char> >, unsigned int>(char const*, char const*, boost::re_detail_106700::re_set_long<unsigned int> const*, boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670016re_is_set_memberIPKccNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEjEET_S8_S8_PKNS0_11re_set_longIT2_EERKNS0_10regex_dataIT0_T1_EEb(void) {
    ALOGD("_ZN5boost16re_detail_10670016re_is_set_memberIPKccNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEjEET_S8_S8_PKNS0_11re_set_longIT2_EERKNS0_10regex_dataIT0_T1_EEb() called");
    return 0;
}

/* Demangled: char* boost::re_detail_106700::re_is_set_member<char*, char, boost::regex_traits<char, boost::cpp_regex_traits<char> >, unsigned int>(char*, char*, boost::re_detail_106700::re_set_long<unsigned int> const*, boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670016re_is_set_memberIPccNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEjEET_S7_S7_PKNS0_11re_set_longIT2_EERKNS0_10regex_dataIT0_T1_EEb(void) {
    ALOGD("_ZN5boost16re_detail_10670016re_is_set_memberIPccNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEjEET_S7_S7_PKNS0_11re_set_longIT2_EERKNS0_10regex_dataIT0_T1_EEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_verb(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_verbEPKc(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10match_verbEPKc() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_basic() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11parse_basicEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11parse_basicEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind_alts(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11unwind_altsEl(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE11unwind_altsEl() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_repeat(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12parse_repeatEmm(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE12parse_repeatEmm() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_backref() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13parse_backrefEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13parse_backrefEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_literal() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13parse_literalEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13parse_literalEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_options() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13parse_optionsEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE13parse_optionsEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::add_emacs_code(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14add_emacs_codeEb(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14add_emacs_codeEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_extended() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14parse_extendedEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14parse_extendedEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_inner_set(boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15parse_inner_setERNS0_14basic_char_setIcS5_EE(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15parse_inner_setERNS0_14basic_char_setIcS5_EE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_perl_verb() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15parse_perl_verbEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15parse_perl_verbEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_open_paren() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16parse_open_parenEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16parse_open_parenEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_set_literal(boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17parse_set_literalERNS0_14basic_char_setIcS5_EE(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE17parse_set_literalERNS0_14basic_char_setIcS5_EE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_basic_escape() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18parse_basic_escapeEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18parse_basic_escapeEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_repeat_range(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18parse_repeat_rangeEb(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18parse_repeat_rangeEb() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unescape_character() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18unescape_characterEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18unescape_characterEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::get_next_set_literal(boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20get_next_set_literalERNS0_14basic_char_setIcS5_EE(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20get_next_set_literalERNS0_14basic_char_setIcS5_EE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_perl_extension() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20parse_perl_extensionEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE20parse_perl_extensionEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_extended_escape() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21parse_extended_escapeEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21parse_extended_escapeEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::fail(boost::regex_constants::error_type, long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE4failENS_15regex_constants10error_typeElNSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEEl(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE4failENS_15regex_constants10error_typeElNSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEEl() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::fail(boost::regex_constants::error_type, long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE4failENS_15regex_constants10error_typeElRKNSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE4failENS_15regex_constants10error_typeElRKNSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE5parseEPKcS8_j(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE5parseEPKcS8_j() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_QE() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE8parse_QEEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE8parse_QEEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_all() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9parse_allEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9parse_allEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_alt() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9parse_altEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9parse_altEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_set() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9parse_setEv(void) {
    ALOGD("_ZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9parse_setEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::append_set(boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > const&, mpl_::bool_<false>*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10append_setERKNS0_14basic_char_setIcS5_EEPN4mpl_5bool_ILb0EEE(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10append_setERKNS0_14basic_char_setIcS5_EEPN4mpl_5bool_ILb0EEE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::append_set(boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > const&, mpl_::bool_<true>*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10append_setERKNS0_14basic_char_setIcS5_EEPN4mpl_5bool_ILb1EEE(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE10append_setERKNS0_14basic_char_setIcS5_EEPN4mpl_5bool_ILb1EEE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::append_literal(char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14append_literalEc(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14append_literalEc() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::create_startmap(boost::re_detail_106700::re_syntax_base*, unsigned char*, unsigned int*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15create_startmapEPNS0_14re_syntax_baseEPhPjh(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15create_startmapEPNS0_14re_syntax_baseEPhPjh() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::create_startmaps(boost::re_detail_106700::re_syntax_base*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16create_startmapsEPNS0_14re_syntax_baseE(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16create_startmapsEPNS0_14re_syntax_baseE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::fixup_recursions(boost::re_detail_106700::re_syntax_base*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16fixup_recursionsEPNS0_14re_syntax_baseE(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16fixup_recursionsEPNS0_14re_syntax_baseE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::calculate_backstep(boost::re_detail_106700::re_syntax_base*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18calculate_backstepEPNS0_14re_syntax_baseE(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18calculate_backstepEPNS0_14re_syntax_baseE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::finalize(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE8finalizeEPKcS8_(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE8finalizeEPKcS8_() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::basic_regex_creator(boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC2EPNS0_10regex_dataIcS5_EE(void) {
    ALOGD("_ZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC2EPNS0_10regex_dataIcS5_EE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::raise_runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670019raise_runtime_errorERKSt13runtime_error(void) {
    ALOGD("_ZN5boost16re_detail_10670019raise_runtime_errorERKSt13runtime_error() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_base<char>::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670021cpp_regex_traits_baseIcE5imbueERKNSt3__16localeE(void) {
    ALOGD("_ZN5boost16re_detail_10670021cpp_regex_traits_baseIcE5imbueERKNSt3__16localeE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::get_default_error_string(boost::regex_constants::error_type) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670024get_default_error_stringENS_15regex_constants10error_typeE(void) {
    ALOGD("_ZN5boost16re_detail_10670024get_default_error_stringENS_15regex_constants10error_typeE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::assign(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE6assignEPKcS8_j(void) {
    ALOGD("_ZN5boost16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE6assignEPKcS8_j() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_char_layer<char>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670027cpp_regex_traits_char_layerIcE4initEv(void) {
    ALOGD("_ZN5boost16re_detail_10670027cpp_regex_traits_char_layerIcE4initEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::lookup_default_collate_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670027lookup_default_collate_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN5boost16re_detail_10670027lookup_default_collate_nameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670031cpp_regex_traits_implementationIcE4initEv(void) {
    ALOGD("_ZN5boost16re_detail_10670031cpp_regex_traits_implementationIcE4initEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::cpp_regex_traits_implementation(boost::re_detail_106700::cpp_regex_traits_base<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670031cpp_regex_traits_implementationIcEC2ERKNS0_21cpp_regex_traits_baseIcEE(void) {
    ALOGD("_ZN5boost16re_detail_10670031cpp_regex_traits_implementationIcEC2ERKNS0_21cpp_regex_traits_baseIcEE() called");
    return 0;
}

/* Demangled: boost::scoped_static_mutex_lock::scoped_static_mutex_lock(boost::static_mutex&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost24scoped_static_mutex_lockC1ERNS_12static_mutexEb(void) {
    ALOGD("_ZN5boost24scoped_static_mutex_lockC1ERNS_12static_mutexEb() called");
    return 0;
}

/* Demangled: boost::scoped_static_mutex_lock::~scoped_static_mutex_lock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost24scoped_static_mutex_lockD1Ev(void) {
    ALOGD("_ZN5boost24scoped_static_mutex_lockD1Ev() called");
    return 0;
}

/* Demangled: boost::detail::shared_count::shared_count<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >(boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail12shared_countC2INS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEEPT_(void) {
    ALOGD("_ZN5boost6detail12shared_countC2INS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEEPT_() called");
    return 0;
}

/* Demangled: boost::detail::shared_count::shared_count<boost::re_detail_106700::cpp_regex_traits_implementation<char> >(boost::re_detail_106700::cpp_regex_traits_implementation<char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail12shared_countC2INS_16re_detail_10670031cpp_regex_traits_implementationIcEEEEPT_(void) {
    ALOGD("_ZN5boost6detail12shared_countC2INS_16re_detail_10670031cpp_regex_traits_implementationIcEEEEPT_() called");
    return 0;
}

/* Demangled: boost::detail::shared_count::shared_count<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > >(boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail12shared_countC2INS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEEPT_(void) {
    ALOGD("_ZN5boost6detail12shared_countC2INS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEEPT_() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> >::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> >::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> >::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> >::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> >::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEED0Ev() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::get_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE11get_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE11get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::get_local_deleter(std::type_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE17get_local_deleterERKSt9type_info(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE17get_local_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::get_untyped_deleter() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE19get_untyped_deleterEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE19get_untyped_deleterEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE7disposeEv(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEE7disposeEv() called");
    return 0;
}

/* Demangled: boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > >::~sp_counted_impl_p() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEED0Ev(void) {
    ALOGD("_ZN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::regex_error::raise() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost11regex_error5raiseEv(void) {
    ALOGD("_ZNK5boost11regex_error5raiseEv() called");
    return 0;
}

/* Demangled: boost::cpp_regex_traits<char>::toi(char const*&, char const*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16cpp_regex_traitsIcE3toiERPKcS3_i(void) {
    ALOGD("_ZNK5boost16cpp_regex_traitsIcE3toiERPKcS3_i() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE7rethrowEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::error_string(boost::regex_constants::error_type) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE12error_stringENS_15regex_constants10error_typeE(void) {
    ALOGD("_ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE12error_stringENS_15regex_constants10error_typeE() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::lookup_classname(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE16lookup_classnameEPKcS4_(void) {
    ALOGD("_ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE16lookup_classnameEPKcS4_() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::transform_primary(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE17transform_primaryEPKcS4_(void) {
    ALOGD("_ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE17transform_primaryEPKcS4_() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::lookup_collatename(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE18lookup_collatenameEPKcS4_(void) {
    ALOGD("_ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE18lookup_collatenameEPKcS4_() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::lookup_classname_imp(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE20lookup_classname_impEPKcS4_(void) {
    ALOGD("_ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE20lookup_classname_impEPKcS4_() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::cpp_regex_traits_implementation<char>::transform(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE9transformEPKcS4_(void) {
    ALOGD("_ZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE9transformEPKcS4_() called");
    return 0;
}

/* Demangled: std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_(void) {
    ALOGD("_ZNKSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::assign(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEmc(void) {
    ALOGD("_ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEmc() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >::operator>>(long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERl(void) {
    ALOGD("_ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERl() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<boost::re_detail_106700::recursion_info<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > >, std::__1::allocator<boost::re_detail_106700::recursion_info<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5boost16re_detail_10670014recursion_infoINS1_13match_resultsIPKcNS_9allocatorINS1_9sub_matchIS6_EEEEEEEERNS7_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5boost16re_detail_10670014recursion_infoINS1_13match_resultsIPKcNS_9allocatorINS1_9sub_matchIS6_EEEEEEEERNS7_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<boost::re_detail_106700::digraph<char>, std::__1::less<boost::re_detail_106700::digraph<char> >, std::__1::allocator<boost::re_detail_106700::digraph<char> > >::destroy(std::__1::__tree_node<boost::re_detail_106700::digraph<char>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5boost16re_detail_1067007digraphIcEENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN5boost16re_detail_1067007digraphIcEENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: unsigned long std::__1::__tree<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, std::__1::__map_value_compare<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, std::__1::less<boost::re_detail_106700::cpp_regex_traits_base<char> >, true>, std::__1::allocator<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> > > >::__erase_unique<boost::re_detail_106700::cpp_regex_traits_base<char> >(boost::re_detail_106700::cpp_regex_traits_base<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5boost16re_detail_10670021cpp_regex_traits_baseIcEENS_15__list_iteratorINS_4pairINS2_10shared_ptrIKNS3_31cpp_regex_traits_implementationIcEEEEPKS5_EEPvEEEENS_19__map_value_compareIS5_SI_NS_4lessIS5_EELb1EEENS_9allocatorISI_EEE14__erase_uniqueIS5_EEmRKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5boost16re_detail_10670021cpp_regex_traits_baseIcEENS_15__list_iteratorINS_4pairINS2_10shared_ptrIKNS3_31cpp_regex_traits_implementationIcEEEEPKS5_EEPvEEEENS_19__map_value_compareIS5_SI_NS_4lessIS5_EELb1EEENS_9allocatorISI_EEE14__erase_uniqueIS5_EEmRKT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, std::__1::__tree_node<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, std::__1::__map_value_compare<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, std::__1::less<boost::re_detail_106700::cpp_regex_traits_base<char> >, true>, std::__1::allocator<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> > > >::__emplace_unique_key_args<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::pair<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> > >(boost::re_detail_106700::cpp_regex_traits_base<char> const&, std::__1::pair<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5boost16re_detail_10670021cpp_regex_traits_baseIcEENS_15__list_iteratorINS_4pairINS2_10shared_ptrIKNS3_31cpp_regex_traits_implementationIcEEEEPKS5_EEPvEEEENS_19__map_value_compareIS5_SI_NS_4lessIS5_EELb1EEENS_9allocatorISI_EEE25__emplace_unique_key_argsIS5_JNS7_IS5_SH_EEEEENS7_INS_15__tree_iteratorISI_PNS_11__tree_nodeISI_SG_EElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5boost16re_detail_10670021cpp_regex_traits_baseIcEENS_15__list_iteratorINS_4pairINS2_10shared_ptrIKNS3_31cpp_regex_traits_implementationIcEEEEPKS5_EEPvEEEENS_19__map_value_compareIS5_SI_NS_4lessIS5_EELb1EEENS_9allocatorISI_EEE25__emplace_unique_key_argsIS5_JNS7_IS5_SH_EEEEENS7_INS_15__tree_iteratorISI_PNS_11__tree_nodeISI_SG_EElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, std::__1::__map_value_compare<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, std::__1::less<boost::re_detail_106700::cpp_regex_traits_base<char> >, true>, std::__1::allocator<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<boost::re_detail_106700::cpp_regex_traits_base<char>, std::__1::__list_iterator<std::__1::pair<boost::shared_ptr<boost::re_detail_106700::cpp_regex_traits_implementation<char> const>, boost::re_detail_106700::cpp_regex_traits_base<char> const*>, void*> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5boost16re_detail_10670021cpp_regex_traits_baseIcEENS_15__list_iteratorINS_4pairINS2_10shared_ptrIKNS3_31cpp_regex_traits_implementationIcEEEEPKS5_EEPvEEEENS_19__map_value_compareIS5_SI_NS_4lessIS5_EELb1EEENS_9allocatorISI_EEE7destroyEPNS_11__tree_nodeISI_SG_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5boost16re_detail_10670021cpp_regex_traits_baseIcEENS_15__list_iteratorINS_4pairINS2_10shared_ptrIKNS3_31cpp_regex_traits_implementationIcEEEEPKS5_EEPvEEEENS_19__map_value_compareIS5_SI_NS_4lessIS5_EELb1EEENS_9allocatorISI_EEE7destroyEPNS_11__tree_nodeISI_SG_EE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISR_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISR_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<boost::re_detail_106700::recursion_info<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > >, std::__1::allocator<boost::re_detail_106700::recursion_info<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > > > >::__push_back_slow_path<boost::re_detail_106700::recursion_info<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > > >(boost::re_detail_106700::recursion_info<boost::match_results<char const*, std::__1::allocator<boost::sub_match<char const*> > > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost16re_detail_10670014recursion_infoINS1_13match_resultsIPKcNS_9allocatorINS1_9sub_matchIS6_EEEEEEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost16re_detail_10670014recursion_infoINS1_13match_resultsIPKcNS_9allocatorINS1_9sub_matchIS6_EEEEEEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<boost::re_detail_106700::named_subexpressions::name, std::__1::allocator<boost::re_detail_106700::named_subexpressions::name> >::__push_back_slow_path<boost::re_detail_106700::named_subexpressions::name>(boost::re_detail_106700::named_subexpressions::name&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost16re_detail_10670020named_subexpressions4nameENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost16re_detail_10670020named_subexpressions4nameENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<boost::re_detail_106700::digraph<char>, std::__1::allocator<boost::re_detail_106700::digraph<char> > >::__push_back_slow_path<boost::re_detail_106700::digraph<char> const&>(boost::re_detail_106700::digraph<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost16re_detail_1067007digraphIcEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost16re_detail_1067007digraphIcEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5boost9sub_matchIPKcEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost9sub_matchIPKcEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost9sub_matchIPKcEENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: std::__1::vector<boost::sub_match<char const*>, std::__1::allocator<boost::sub_match<char const*> > >::insert(std::__1::__wrap_iter<boost::sub_match<char const*> const*>, unsigned long, boost::sub_match<char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost9sub_matchIPKcEENS_9allocatorIS5_EEE6insertENS_11__wrap_iterIPKS5_EEmRSA_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost9sub_matchIPKcEENS_9allocatorIS5_EEE6insertENS_11__wrap_iterIPKS5_EEmRSA_() called");
    return 0;
}

/* Demangled: std::__1::vector<boost::sub_match<char const*>, std::__1::allocator<boost::sub_match<char const*> > >::vector(std::__1::vector<boost::sub_match<char const*>, std::__1::allocator<boost::sub_match<char const*> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5boost9sub_matchIPKcEENS_9allocatorIS5_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN5boost9sub_matchIPKcEENS_9allocatorIS5_EEEC2ERKS8_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<bool, boost::re_detail_106700::re_syntax_base*>, std::__1::allocator<std::__1::pair<bool, boost::re_detail_106700::re_syntax_base*> > >::__push_back_slow_path<std::__1::pair<bool, boost::re_detail_106700::re_syntax_base*> >(std::__1::pair<bool, boost::re_detail_106700::re_syntax_base*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIbPN5boost16re_detail_10670014re_syntax_baseEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIbPN5boost16re_detail_10670014re_syntax_baseEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<unsigned long, unsigned long>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long> > >::__push_back_slow_path<std::__1::pair<unsigned long, unsigned long> >(std::__1::pair<unsigned long, unsigned long>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairImmEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairImmEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::assign(unsigned long, unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignEmRKh(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE6assignEmRKh() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_() called");
    return 0;
}

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<std::invalid_argument> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorISt16invalid_argumentEE = NULL;

/* Exported Object: typeinfo for boost::re_detail_106700::parser_buf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEEE = NULL;

/* Exported Object: typeinfo for boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<std::invalid_argument> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorISt16invalid_argumentEE = NULL;

/* Exported Object: typeinfo name for boost::re_detail_106700::parser_buf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEEE = NULL;

/* Exported Object: typeinfo name for boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<std::invalid_argument> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorISt16invalid_argumentEE = NULL;

/* Exported Object: vtable for boost::re_detail_106700::parser_buf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16re_detail_10670010parser_bufIcNSt3__111char_traitsIcEEEE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::re_detail_106700::basic_regex_implementation<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pINS_16re_detail_10670026basic_regex_implementationIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::re_detail_106700::cpp_regex_traits_implementation<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pINS_16re_detail_10670031cpp_regex_traits_implementationIcEEEE = NULL;

/* Exported Object: vtable for boost::detail::sp_counted_impl_p<boost::regex_traits_wrapper<boost::regex_traits<char, boost::cpp_regex_traits<char> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost6detail17sp_counted_impl_pINS_20regex_traits_wrapperINS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEEEE = NULL;

/* Exported Object: vtable for std::__1::basic_istream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorISt16invalid_argumentED0Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorISt16invalid_argumentED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<std::invalid_argument>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5boost16exception_detail19error_info_injectorISt16invalid_argumentED1Ev(void) {
    ALOGD("_ZThn16_N5boost16exception_detail19error_info_injectorISt16invalid_argumentED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::invalid_argument> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorISt16invalid_argumentEEED1Ev() called");
    return 0;
}

/* Exported Object: boost::object_cache<boost::re_detail_106700::cpp_regex_traits_base<char>, boost::re_detail_106700::cpp_regex_traits_implementation<char> >::get(boost::re_detail_106700::cpp_regex_traits_base<char> const&, unsigned long)::mut */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE3getERKS3_mE3mut = NULL;

/* Exported Object: boost::object_cache<boost::re_detail_106700::cpp_regex_traits_base<char>, boost::re_detail_106700::cpp_regex_traits_implementation<char> >::do_get(boost::re_detail_106700::cpp_regex_traits_base<char> const&, unsigned long)::s_data */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost12object_cacheINS_16re_detail_10670021cpp_regex_traits_baseIcEENS1_31cpp_regex_traits_implementationIcEEE6do_getERKS3_mE6s_data = NULL;

/* Exported Object: boost::cpp_regex_traits<char>::get_mutex_inst()::s_mutex */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16cpp_regex_traitsIcE14get_mutex_instEvE7s_mutex = NULL;

/* Exported Object: boost::cpp_regex_traits<char>::get_catalog_name_inst()::s_name */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16cpp_regex_traitsIcE21get_catalog_name_instEvE6s_name = NULL;

/* Exported Object: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::match_all_states()::s_match_vtable */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE16match_all_statesEvE14s_match_vtable = NULL;

/* Exported Object: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::unwind(bool)::s_unwind_table */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE6unwindEbE14s_unwind_table = NULL;

/* Exported Object: boost::re_detail_106700::perl_matcher<char const*, std::__1::allocator<boost::sub_match<char const*> >, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::find_imp()::s_find_vtable */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670012perl_matcherIPKcNSt3__19allocatorINS_9sub_matchIS3_EEEENS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE8find_impEvE13s_find_vtable = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::add_emacs_code(bool)::s_punct */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE14add_emacs_codeEbE7s_punct = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_inner_set(boost::re_detail_106700::basic_char_set<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >&)::incomplete_message */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE15parse_inner_setERNS0_14basic_char_setIcS5_EEE18incomplete_message = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_repeat_range(bool)::incomplete_message */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE18parse_repeat_rangeEbE18incomplete_message = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_extended_escape()::incomplete_message */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE21parse_extended_escapeEvE18incomplete_message = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_parser<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::parse_set()::incomplete_message */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670018basic_regex_parserIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEE9parse_setEvE18incomplete_message = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::basic_regex_creator(boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*)::a */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC1EPNS0_10regex_dataIcS5_EEE1a = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::basic_regex_creator(boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*)::l */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC1EPNS0_10regex_dataIcS5_EEE1l = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::basic_regex_creator(boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*)::s */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC1EPNS0_10regex_dataIcS5_EEE1s = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::basic_regex_creator(boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*)::u */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC1EPNS0_10regex_dataIcS5_EEE1u = NULL;

/* Exported Object: boost::re_detail_106700::basic_regex_creator<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >::basic_regex_creator(boost::re_detail_106700::regex_data<char, boost::regex_traits<char, boost::cpp_regex_traits<char> > >*)::w */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670019basic_regex_creatorIcNS_12regex_traitsIcNS_16cpp_regex_traitsIcEEEEEC1EPNS0_10regex_dataIcS5_EEE1w = NULL;

/* Exported Object: char const* boost::re_detail_106700::get_escape_R_string<char>()::e2 */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670019get_escape_R_stringIcEEPKT_vE2e2 = NULL;

/* Exported Object: int boost::re_detail_106700::get_default_class_id<char>(char const*, char const*)::ranges_end */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670020get_default_class_idIcEEiPKT_S4_E10ranges_end = NULL;

/* Exported Object: int boost::re_detail_106700::get_default_class_id<char>(char const*, char const*)::ranges_begin */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670020get_default_class_idIcEEiPKT_S4_E12ranges_begin = NULL;

/* Exported Object: int boost::re_detail_106700::get_default_class_id<char>(char const*, char const*)::data */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670020get_default_class_idIcEEiPKT_S4_E4data = NULL;

/* Exported Object: int boost::re_detail_106700::get_default_class_id<char>(char const*, char const*)::ranges */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670020get_default_class_idIcEEiPKT_S4_E6ranges = NULL;

/* Exported Object: boost::re_detail_106700::cpp_regex_traits_implementation<char>::init()::null_string */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670031cpp_regex_traits_implementationIcE4initEvE11null_string = NULL;

/* Exported Object: boost::re_detail_106700::cpp_regex_traits_implementation<char>::init()::masks */
extern "C" __attribute__((visibility("default"))) void* _ZZN5boost16re_detail_10670031cpp_regex_traits_implementationIcE4initEvE5masks = NULL;

/* Exported Object: boost::re_detail_106700::cpp_regex_traits_implementation<char>::lookup_classname_imp(char const*, char const*) const::masks */
extern "C" __attribute__((visibility("default"))) void* _ZZNK5boost16re_detail_10670031cpp_regex_traits_implementationIcE20lookup_classname_impEPKcS4_E5masks = NULL;

/* Demangled: boost::regex_error::regex_error(boost::regex_constants::error_type) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11regex_errorC1ENS_15regex_constants10error_typeE(void) {
    ALOGD("_ZN5boost11regex_errorC1ENS_15regex_constants10error_typeE() called");
    return 0;
}

/* Demangled: boost::regex_error::regex_error(boost::regex_constants::error_type) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11regex_errorC2ENS_15regex_constants10error_typeE(void) {
    ALOGD("_ZN5boost11regex_errorC2ENS_15regex_constants10error_typeE() called");
    return 0;
}

/* Demangled: boost::regex_error::regex_error(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, boost::regex_constants::error_type, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11regex_errorC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15regex_constants10error_typeEl(void) {
    ALOGD("_ZN5boost11regex_errorC2ERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15regex_constants10error_typeEl() called");
    return 0;
}

/* Demangled: boost::regex_error::~regex_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11regex_errorD0Ev(void) {
    ALOGD("_ZN5boost11regex_errorD0Ev() called");
    return 0;
}

/* Demangled: boost::regex_error::~regex_error() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost11regex_errorD2Ev(void) {
    ALOGD("_ZN5boost11regex_errorD2Ev() called");
    return 0;
}

/* Demangled: void boost::throw_exception<boost::regex_error>(boost::regex_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost15throw_exceptionINS_11regex_errorEEEvRKT_(void) {
    ALOGD("_ZN5boost15throw_exceptionINS_11regex_errorEEEvRKT_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::clone_impl(boost::exception_detail::error_info_injector<boost::regex_error> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEC1ERKS4_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEC1ERKS4_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEC1ERKS5_(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> > const&, boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::clone_tag) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEC1ERKS5_NS5_9clone_tagE(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEC1ERKS5_NS5_9clone_tagE() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED1Ev(void) {
    ALOGD("_ZN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::regex_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_11regex_errorEED0Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_11regex_errorEED0Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::error_info_injector<boost::regex_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16exception_detail19error_info_injectorINS_11regex_errorEED2Ev(void) {
    ALOGD("_ZN5boost16exception_detail19error_info_injectorINS_11regex_errorEED2Ev() called");
    return 0;
}

/* Exported Object: boost::re_detail_106700::block_cache */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost16re_detail_10670011block_cacheE = NULL;

/* Demangled: boost::re_detail_106700::mem_block_cache::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015mem_block_cache3getEv(void) {
    ALOGD("_ZN5boost16re_detail_10670015mem_block_cache3getEv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::mem_block_cache::put(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015mem_block_cache3putEPv(void) {
    ALOGD("_ZN5boost16re_detail_10670015mem_block_cache3putEPv() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::mem_block_cache::~mem_block_cache() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015mem_block_cacheD2Ev(void) {
    ALOGD("_ZN5boost16re_detail_10670015mem_block_cacheD2Ev() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE5cloneEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE7rethrowEv(void) {
    ALOGD("_ZNK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE7rethrowEv() called");
    return 0;
}

/* Exported Object: typeinfo for boost::regex_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost11regex_errorE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEE = NULL;

/* Exported Object: typeinfo for boost::exception_detail::error_info_injector<boost::regex_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTIN5boost16exception_detail19error_info_injectorINS_11regex_errorEEE = NULL;

/* Exported Object: typeinfo name for boost::regex_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost11regex_errorE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEE = NULL;

/* Exported Object: typeinfo name for boost::exception_detail::error_info_injector<boost::regex_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTSN5boost16exception_detail19error_info_injectorINS_11regex_errorEEE = NULL;

/* Exported Object: vtable for boost::regex_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost11regex_errorE = NULL;

/* Exported Object: vtable for boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEEE = NULL;

/* Exported Object: vtable for boost::exception_detail::error_info_injector<boost::regex_error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5boost16exception_detail19error_info_injectorINS_11regex_errorEEE = NULL;

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED0Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED1Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::regex_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail19error_info_injectorINS_11regex_errorEED0Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail19error_info_injectorINS_11regex_errorEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to boost::exception_detail::error_info_injector<boost::regex_error>::~error_info_injector() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5boost16exception_detail19error_info_injectorINS_11regex_errorEED1Ev(void) {
    ALOGD("_ZThn32_N5boost16exception_detail19error_info_injectorINS_11regex_errorEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::clone() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE5cloneEv(void) {
    ALOGD("_ZTv0_n24_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE5cloneEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::rethrow() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE7rethrowEv(void) {
    ALOGD("_ZTv0_n32_NK5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEE7rethrowEv() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED0Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::regex_error> >::~clone_impl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED1Ev(void) {
    ALOGD("_ZTv0_n40_N5boost16exception_detail10clone_implINS0_19error_info_injectorINS_11regex_errorEEEED1Ev() called");
    return 0;
}

/* Exported Object: boost::re_detail_106700::def_coll_names */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost16re_detail_10670014def_coll_namesE = NULL;

/* Exported Object: boost::re_detail_106700::def_multi_coll */
extern "C" __attribute__((visibility("default"))) void* _ZN5boost16re_detail_10670014def_multi_collE = NULL;

/* Demangled: boost::re_detail_106700::do_global_lower(char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015do_global_lowerEc(void) {
    ALOGD("_ZN5boost16re_detail_10670015do_global_lowerEc() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::do_global_lower(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015do_global_lowerEw(void) {
    ALOGD("_ZN5boost16re_detail_10670015do_global_lowerEw() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::do_global_upper(char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015do_global_upperEc(void) {
    ALOGD("_ZN5boost16re_detail_10670015do_global_upperEc() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::do_global_upper(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670015do_global_upperEw(void) {
    ALOGD("_ZN5boost16re_detail_10670015do_global_upperEw() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::get_default_syntax(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670018get_default_syntaxEh(void) {
    ALOGD("_ZN5boost16re_detail_10670018get_default_syntaxEh() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::get_default_syntax_type(char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670023get_default_syntax_typeEc(void) {
    ALOGD("_ZN5boost16re_detail_10670023get_default_syntax_typeEc() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::is_combining_implementation(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670027is_combining_implementationEt(void) {
    ALOGD("_ZN5boost16re_detail_10670027is_combining_implementationEt() called");
    return 0;
}

/* Demangled: boost::re_detail_106700::get_default_escape_syntax_type(char) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost16re_detail_10670030get_default_escape_syntax_typeEc(void) {
    ALOGD("_ZN5boost16re_detail_10670030get_default_escape_syntax_typeEc() called");
    return 0;
}

/* Demangled: boost::scoped_static_mutex_lock::lock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost24scoped_static_mutex_lock4lockEv(void) {
    ALOGD("_ZN5boost24scoped_static_mutex_lock4lockEv() called");
    return 0;
}

/* Demangled: boost::scoped_static_mutex_lock::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost24scoped_static_mutex_lock6unlockEv(void) {
    ALOGD("_ZN5boost24scoped_static_mutex_lock6unlockEv() called");
    return 0;
}

/* Demangled: boost::scoped_static_mutex_lock::scoped_static_mutex_lock(boost::static_mutex&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5boost24scoped_static_mutex_lockC2ERNS_12static_mutexEb(void) {
    ALOGD("_ZN5boost24scoped_static_mutex_lockC2ERNS_12static_mutexEb() called");
    return 0;
}

/* Demangled: boost::scoped_static_mutex_lock::~scoped_static_mutex_lock() */
extern "C" __attribute__((visibility("default"))) int _ZN5boost24scoped_static_mutex_lockD2Ev(void) {
    ALOGD("_ZN5boost24scoped_static_mutex_lockD2Ev() called");
    return 0;
}

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int __floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int __multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int __subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}
