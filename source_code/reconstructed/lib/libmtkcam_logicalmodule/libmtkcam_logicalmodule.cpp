/*
 * Reverse-Engineered Source for: libmtkcam.logicalmodule.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_logicalmodule"

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
#include "libmtkcam_logicalmodule.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::HalLogicalDeviceList::HalLogicalDeviceList() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceListC1Ev(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceListC1Ev() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getVidByDrvName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList15getVidByDrvNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList15getVidByDrvNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev(void) {
    ALOGD("_ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD2Ev(void) {
    ALOGD("_ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::querySensorStaticInfo(unsigned int, NSCam::SensorStaticInfo*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEjPNS_16SensorStaticInfoE(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEjPNS_16SensorStaticInfoE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::push_back(bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC1Ev(void) {
    ALOGD("_ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC1Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: NSCam::IHalLogicalDeviceList::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam21IHalLogicalDeviceList3getEv(void) {
    ALOGD("_ZN5NSCam21IHalLogicalDeviceList3getEv() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getSyncType(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList11getSyncTypeEi(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList11getSyncTypeEi() called");
    return 0;
}

/* Demangled: XiaoMi::MiAddAeRange(XiaoMi::E_MiCamera, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperE = NULL;

/* Demangled: virtual thunk to NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::HalLogicalDeviceList::CamDeviceInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam20HalLogicalDeviceList13CamDeviceInfoE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Demangled: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_(void) {
    ALOGD("_ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<char const*>(char const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::queryNumberOfDevices() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList20queryNumberOfDevicesEv(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList20queryNumberOfDevicesEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperE = NULL;

/* Exported Object: vtable for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail9exceptionE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::queryVID(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelper8queryVIDENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERj(void) {
    ALOGD("_ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelper8queryVIDENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, int, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getSensorId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList11getSensorIdEi(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList11getSensorIdEi() called");
    return 0;
}

/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::constructStaticMetadata(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper23constructStaticMetadataEiNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbRNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper23constructStaticMetadataEiNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbRNS_9IMetadataE() called");
    return 0;
}

/* Demangled: void std::__1::__fill_n_true<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void) {
    ALOGD("_ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE() called");
    return 0;
}

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev(void) {
    ALOGD("_ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::addLogicalDevice(android::KeyedVector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo>, LogicalSensorStruct*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList16addLogicalDeviceEN7android11KeyedVectorINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS0_14TempSensorInfoEEEP19LogicalSensorStructi(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList16addLogicalDeviceEN7android11KeyedVectorINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS0_14TempSensorInfoEEEP19LogicalSensorStructi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper>::operator=(NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperEEaSEPS3_() called");
    return 0;
}

/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD2Ev(void) {
    ALOGD("_ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::vector(std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::HalLogicalDeviceList::SyncTypeInfo>::operator=(android::sp<NSCam::HalLogicalDeviceList::SyncTypeInfo>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEaSEOS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEaSEOS4_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getDeviceId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList11getDeviceIdEi(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList11getDeviceIdEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper>::operator=(NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperEEaSEPS3_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail11parse_errorE = NULL;

/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::showCustInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam29NSLogicalDeviceMetadataHelper12showCustInfoEv(void) {
    ALOGD("_ZN5NSCam29NSLogicalDeviceMetadataHelper12showCustInfoEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, unsigned int> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, unsigned int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_jEEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_jEEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE = NULL;

/* Demangled: NSCam::HalLogicalDeviceList::queryNumberOfSensors() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList20queryNumberOfSensorsEv(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList20queryNumberOfSensorsEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__deallocate_node(std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS8_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS8_PvEEEE() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::querySensorDevIdx(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList17querySensorDevIdxEj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList17querySensorDevIdxEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getSensorSyncMasterDevId(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList24getSensorSyncMasterDevIdEi(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList24getSensorSyncMasterDevIdEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long long&>(unsigned long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::queryType(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList9queryTypeEj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList9queryTypeEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long long&>(long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::__fill_n_false<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void) {
    ALOGD("_ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::impConstructStaticMetadata_by_SymbolName(int, android::String8 const&, bool, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper40impConstructStaticMetadata_by_SymbolNameEiRKN7android7String8EbRNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper40impConstructStaticMetadata_by_SymbolNameEiRKN7android7String8EbRNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getSupportedFeature(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList19getSupportedFeatureEi(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList19getSupportedFeatureEi() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEEE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail12out_of_rangeE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev(void) {
    ALOGD("_ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::updateMultiCamSensorMetadata(int, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList28updateMultiCamSensorMetadataEiRNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList28updateMultiCamSensorMetadataEiRNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::HalLogicalDeviceList() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceListC2Ev(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceListC2Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev(void) {
    ALOGD("_ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: android::sp<NSCam::HalLogicalDeviceList::SyncTypeInfo>::sp(NSCam::HalLogicalDeviceList::SyncTypeInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEC2EPS3_() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getVirtualInstanceId(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList20getVirtualInstanceIdEj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList20getVirtualInstanceIdEj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::createDeviceMap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList15createDeviceMapEv(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList15createDeviceMapEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::HalLogicalDeviceList::SyncTypeInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam20HalLogicalDeviceList12SyncTypeInfoE = NULL;

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC2Ev(void) {
    ALOGD("_ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC2Ev() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE = NULL;

/* Exported Object: vtable for nlohmann::detail::input_buffer_adapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail20input_buffer_adapterE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE = NULL;

/* Demangled: NSCam::HalLogicalDeviceList::querySensorStaticInfo(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::dumpDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList13dumpDebugInfoEv(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList13dumpDebugInfoEv() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::querySyncMode(std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList13querySyncModeERNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList13querySyncModeERNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::__vdeallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE13__vdeallocateEv(void) {
    ALOGD("_ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE13__vdeallocateEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::queryDriverName(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList15queryDriverNameEj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList15queryDriverNameEj() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::queryFacingDirection(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList20queryFacingDirectionEj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList20queryFacingDirectionEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::HalLogicalDeviceList */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam20HalLogicalDeviceListE = NULL;

/* Exported Object: vtable for NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperE = NULL;

/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::searchDevices() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList13searchDevicesEv(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList13searchDevicesEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo>::sp(NSCam::HalLogicalDeviceList::CamDeviceInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEC2EPS3_() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::queryStaticInfo(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam20HalLogicalDeviceList15queryStaticInfoEj(void) {
    ALOGD("_ZNK5NSCam20HalLogicalDeviceList15queryStaticInfoEj() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::vector(unsigned int, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb() called");
    return 0;
}

/* Demangled: std::__1::function<bool (int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&)>::operator()(int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_(void) {
    ALOGD("_ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperE = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getDeviceIdByVID(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList16getDeviceIdByVIDEi(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList16getDeviceIdByVIDEi() called");
    return 0;
}

/* Demangled: NSCam::HalLogicalDeviceList::getRemappingSensorId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20HalLogicalDeviceList20getRemappingSensorIdEi(void) {
    ALOGD("_ZN5NSCam20HalLogicalDeviceList20getRemappingSensorIdEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom() called");
    return 0;
}
