/*
 * Reverse-Engineered ABI Specification for: libmtkcam.logicalmodule.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam.logicalmodule.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_LOGICALMODULE_H
#define BEGONIA_RE_LIBMTKCAM_LOGICALMODULE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam20HalLogicalDeviceListC1Ev */
/* Demangled: NSCam::HalLogicalDeviceList::HalLogicalDeviceList() */
int _ZN5NSCam20HalLogicalDeviceListC1Ev(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList15getVidByDrvNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERj */
/* Demangled: NSCam::HalLogicalDeviceList::getVidByDrvName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int&) const */
int _ZNK5NSCam20HalLogicalDeviceList15getVidByDrvNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void);

/* Symbol: _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev */
/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev(void);

/* Symbol: _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD2Ev */
/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE7do_copyEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEjPNS_16SensorStaticInfoE */
/* Demangled: NSCam::HalLogicalDeviceList::querySensorStaticInfo(unsigned int, NSCam::SensorStaticInfo*) const */
int _ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEjPNS_16SensorStaticInfoE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::push_back(bool const&) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC1Ev */
/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper() */
int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC1Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE8do_splatEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void);

/* Symbol: _ZN5NSCam21IHalLogicalDeviceList3getEv */
/* Demangled: NSCam::IHalLogicalDeviceList::get() */
int _ZN5NSCam21IHalLogicalDeviceList3getEv(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList11getSyncTypeEi */
/* Demangled: NSCam::HalLogicalDeviceList::getSyncType(int) const */
int _ZNK5NSCam20HalLogicalDeviceList11getSyncTypeEi(void);

/* Symbol: _ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE */
/* Demangled: XiaoMi::MiAddAeRange(XiaoMi::E_MiCamera, NSCam::IMetadata&) */
int _ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_destroyEPvj(void);

/* Symbol: _ZTTN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperE */
/* Demangled: VTT for NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper */
extern void* _ZTTN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperE;

/* Symbol: _ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev */
/* Demangled: virtual thunk to NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
int _ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void);

/* Symbol: _ZTVN5NSCam20HalLogicalDeviceList13CamDeviceInfoE */
/* Demangled: vtable for NSCam::HalLogicalDeviceList::CamDeviceInfo */
extern void* _ZTVN5NSCam20HalLogicalDeviceList13CamDeviceInfoE;

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void);

/* Symbol: _ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_ */
/* Demangled: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<char const*>(char const* const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE10do_destroyEPvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList20queryNumberOfDevicesEv */
/* Demangled: NSCam::HalLogicalDeviceList::queryNumberOfDevices() const */
int _ZNK5NSCam20HalLogicalDeviceList20queryNumberOfDevicesEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void);

/* Symbol: _ZTTN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperE */
/* Demangled: VTT for NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper */
extern void* _ZTTN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperE;

/* Symbol: _ZTVN8nlohmann6detail9exceptionE */
/* Demangled: vtable for nlohmann::detail::exception */
extern void* _ZTVN8nlohmann6detail9exceptionE;

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void);

/* Symbol: _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelper8queryVIDENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERj */
/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::queryVID(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int&) */
int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelper8queryVIDENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERj(void);

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_ */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, int, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, int&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList11getSensorIdEi */
/* Demangled: NSCam::HalLogicalDeviceList::getSensorId(int) */
int _ZN5NSCam20HalLogicalDeviceList11getSensorIdEi(void);

/* Symbol: _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper23constructStaticMetadataEiNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbRNS_9IMetadataE */
/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::constructStaticMetadata(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, NSCam::IMetadata&) */
int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper23constructStaticMetadataEiNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbRNS_9IMetadataE(void);

/* Symbol: _ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE */
/* Demangled: void std::__1::__fill_n_true<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
int _ZNSt3__113__fill_n_trueINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void);

/* Symbol: _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev */
/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList16addLogicalDeviceEN7android11KeyedVectorINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS0_14TempSensorInfoEEEP19LogicalSensorStructi */
/* Demangled: NSCam::HalLogicalDeviceList::addLogicalDevice(android::KeyedVector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo>, LogicalSensorStruct*, int) */
int _ZN5NSCam20HalLogicalDeviceList16addLogicalDeviceEN7android11KeyedVectorINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS0_14TempSensorInfoEEEP19LogicalSensorStructi(void);

/* Symbol: _ZN7android2spIN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperEEaSEPS3_ */
/* Demangled: android::sp<NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper>::operator=(NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper*) */
int _ZN7android2spIN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperEEaSEPS3_(void);

/* Symbol: _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD2Ev */
/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD2Ev(void);

/* Symbol: _ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev */
/* Demangled: virtual thunk to NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
int _ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_ */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::vector(std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > const&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void);

/* Symbol: _ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEaSEOS4_ */
/* Demangled: android::sp<NSCam::HalLogicalDeviceList::SyncTypeInfo>::operator=(android::sp<NSCam::HalLogicalDeviceList::SyncTypeInfo>&&) */
int _ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEaSEOS4_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList11getDeviceIdEi */
/* Demangled: NSCam::HalLogicalDeviceList::getDeviceId(int) */
int _ZN5NSCam20HalLogicalDeviceList11getDeviceIdEi(void);

/* Symbol: _ZN7android2spIN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperEEaSEPS3_ */
/* Demangled: android::sp<NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper>::operator=(NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper*) */
int _ZN7android2spIN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperEEaSEPS3_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN8nlohmann6detail11parse_errorE */
/* Demangled: vtable for nlohmann::detail::parse_error */
extern void* _ZTVN8nlohmann6detail11parse_errorE;

/* Symbol: _ZN5NSCam29NSLogicalDeviceMetadataHelper12showCustInfoEv */
/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::showCustInfo() */
int _ZN5NSCam29NSLogicalDeviceMetadataHelper12showCustInfoEv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_jEEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, unsigned int> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, unsigned int>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JNS_4pairIKS7_jEEEEENSK_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev */
/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void);

/* Symbol: _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList20queryNumberOfSensorsEv */
/* Demangled: NSCam::HalLogicalDeviceList::queryNumberOfSensors() const */
int _ZNK5NSCam20HalLogicalDeviceList20queryNumberOfSensorsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE10do_compareEPKvSF_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS8_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::__deallocate_node(std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, void*>*>*) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS8_PvEEEE(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList17querySensorDevIdxEj */
/* Demangled: NSCam::HalLogicalDeviceList::querySensorDevIdx(unsigned int) const */
int _ZNK5NSCam20HalLogicalDeviceList17querySensorDevIdxEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEE6rehashEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned int) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList24getSensorSyncMasterDevIdEi */
/* Demangled: NSCam::HalLogicalDeviceList::getSensorSyncMasterDevId(int) const */
int _ZNK5NSCam20HalLogicalDeviceList24getSensorSyncMasterDevIdEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE12do_constructEPvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long long&>(unsigned long long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_(void);

/* Symbol: _ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev */
/* Demangled: virtual thunk to NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
int _ZTv0_n12_N5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList9queryTypeEj */
/* Demangled: NSCam::HalLogicalDeviceList::queryType(unsigned int) const */
int _ZNK5NSCam20HalLogicalDeviceList9queryTypeEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE12do_constructEPvj(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long long&>(long long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_(void);

/* Symbol: _ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE */
/* Demangled: void std::__1::__fill_n_false<std::__1::vector<bool, std::__1::allocator<bool> > >(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::vector<bool, std::__1::allocator<bool> >::size_type) */
int _ZNSt3__114__fill_n_falseINS_6vectorIbNS_9allocatorIbEEEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS6_9size_typeE(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>&>&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__vector_base<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::~__vector_base() */
int _ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper40impConstructStaticMetadata_by_SymbolNameEiRKN7android7String8EbRNS_9IMetadataE */
/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::impConstructStaticMetadata_by_SymbolName(int, android::String8 const&, bool, NSCam::IMetadata&) */
int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelper40impConstructStaticMetadata_by_SymbolNameEiRKN7android7String8EbRNS_9IMetadataE(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList19getSupportedFeatureEi */
/* Demangled: NSCam::HalLogicalDeviceList::getSupportedFeature(int) const */
int _ZNK5NSCam20HalLogicalDeviceList19getSupportedFeatureEi(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEEE;

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void);

/* Symbol: _ZTVN8nlohmann6detail12out_of_rangeE */
/* Demangled: vtable for nlohmann::detail::out_of_range */
extern void* _ZTVN8nlohmann6detail12out_of_rangeE;

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev */
/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::~VirtualDeviceIdsMapHelper() */
int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperD0Ev(void);

/* Symbol: _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList28updateMultiCamSensorMetadataEiRNS_9IMetadataE */
/* Demangled: NSCam::HalLogicalDeviceList::updateMultiCamSensorMetadata(int, NSCam::IMetadata&) */
int _ZN5NSCam20HalLogicalDeviceList28updateMultiCamSensorMetadataEiRNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceListC2Ev */
/* Demangled: NSCam::HalLogicalDeviceList::HalLogicalDeviceList() */
int _ZN5NSCam20HalLogicalDeviceListC2Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW_vsdof(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void);

/* Symbol: _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev */
/* Demangled: NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
int _ZN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD1Ev(void);

/* Symbol: _ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev */
/* Demangled: virtual thunk to NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper::~LogicalDeviceMetadataHelper() */
int _ZTv0_n12_N5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperD0Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEC2EPS3_ */
/* Demangled: android::sp<NSCam::HalLogicalDeviceList::SyncTypeInfo>::sp(NSCam::HalLogicalDeviceList::SyncTypeInfo*) */
int _ZN7android2spIN5NSCam20HalLogicalDeviceList12SyncTypeInfoEEC2EPS3_(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList20getVirtualInstanceIdEj */
/* Demangled: NSCam::HalLogicalDeviceList::getVirtualInstanceId(unsigned int) const */
int _ZNK5NSCam20HalLogicalDeviceList20getVirtualInstanceIdEj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList15createDeviceMapEv */
/* Demangled: NSCam::HalLogicalDeviceList::createDeviceMap() */
int _ZN5NSCam20HalLogicalDeviceList15createDeviceMapEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN5NSCam20HalLogicalDeviceList12SyncTypeInfoE */
/* Demangled: vtable for NSCam::HalLogicalDeviceList::SyncTypeInfo */
extern void* _ZTVN5NSCam20HalLogicalDeviceList12SyncTypeInfoE;

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_ */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void);

/* Symbol: _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC2Ev */
/* Demangled: NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper() */
int _ZN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperC2Ev(void);

/* Symbol: _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZTVN8nlohmann6detail20input_buffer_adapterE */
/* Demangled: vtable for nlohmann::detail::input_buffer_adapter */
extern void* _ZTVN8nlohmann6detail20input_buffer_adapterE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE;

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEj */
/* Demangled: NSCam::HalLogicalDeviceList::querySensorStaticInfo(unsigned int) const */
int _ZNK5NSCam20HalLogicalDeviceList21querySensorStaticInfoEj(void);

/* Symbol: _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev */
/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList13dumpDebugInfoEv */
/* Demangled: NSCam::HalLogicalDeviceList::dumpDebugInfo() */
int _ZN5NSCam20HalLogicalDeviceList13dumpDebugInfoEv(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList13querySyncModeERNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: NSCam::HalLogicalDeviceList::querySyncMode(std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5NSCam20HalLogicalDeviceList13querySyncModeERNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE13__vdeallocateEv */
/* Demangled: std::__1::vector<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::__vdeallocate() */
int _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE13__vdeallocateEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW_bayermono(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList15queryDriverNameEj */
/* Demangled: NSCam::HalLogicalDeviceList::queryDriverName(unsigned int) const */
int _ZNK5NSCam20HalLogicalDeviceList15queryDriverNameEj(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList20queryFacingDirectionEj */
/* Demangled: NSCam::HalLogicalDeviceList::queryFacingDirection(unsigned int) const */
int _ZNK5NSCam20HalLogicalDeviceList20queryFacingDirectionEj(void);

/* Symbol: _ZTVN5NSCam20HalLogicalDeviceListE */
/* Demangled: vtable for NSCam::HalLogicalDeviceList */
extern void* _ZTVN5NSCam20HalLogicalDeviceListE;

/* Symbol: _ZTVN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperE */
/* Demangled: vtable for NSCam::NSLogicalDeviceMetadataHelper::LogicalDeviceMetadataHelper */
extern void* _ZTVN5NSCam29NSLogicalDeviceMetadataHelper27LogicalDeviceMetadataHelperE;

/* Symbol: _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_ */
/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&) */
int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int>, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEjEENS_22__unordered_map_hasherIS7_S8_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_S8_NS_8equal_toIS7_EELb1EEENS5_IS8_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList13searchDevicesEv */
/* Demangled: NSCam::HalLogicalDeviceList::searchDevices() */
int _ZN5NSCam20HalLogicalDeviceList13searchDevicesEv(void);

/* Symbol: _ZN7android2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEC2EPS3_ */
/* Demangled: android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo>::sp(NSCam::HalLogicalDeviceList::CamDeviceInfo*) */
int _ZN7android2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEC2EPS3_(void);

/* Symbol: _ZNK5NSCam20HalLogicalDeviceList15queryStaticInfoEj */
/* Demangled: NSCam::HalLogicalDeviceList::queryStaticInfo(unsigned int) const */
int _ZNK5NSCam20HalLogicalDeviceList15queryStaticInfoEj(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::vector(unsigned int, bool const&) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb(void);

/* Symbol: _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_ */
/* Demangled: std::__1::function<bool (int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&)>::operator()(int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) const */
int _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW_vsdof(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW_vsdof(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::HalLogicalDeviceList::TempSensorInfo> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEN5NSCam20HalLogicalDeviceList14TempSensorInfoEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::HalLogicalDeviceList::CamDeviceInfo> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam20HalLogicalDeviceList13CamDeviceInfoEEEEEE8do_splatEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW_vsdof(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZTVN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperE */
/* Demangled: vtable for NSCam::NSVirtualDeviceIdsMapHelper::VirtualDeviceIdsMapHelper */
extern void* _ZTVN5NSCam27NSVirtualDeviceIdsMapHelper25VirtualDeviceIdsMapHelperE;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList16getDeviceIdByVIDEi */
/* Demangled: NSCam::HalLogicalDeviceList::getDeviceIdByVID(int) */
int _ZN5NSCam20HalLogicalDeviceList16getDeviceIdByVIDEi(void);

/* Symbol: _ZN5NSCam20HalLogicalDeviceList20getRemappingSensorIdEi */
/* Demangled: NSCam::HalLogicalDeviceList::getRemappingSensorId(int) */
int _ZN5NSCam20HalLogicalDeviceList20getRemappingSensorIdEi(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW_dualzoom(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_LOGICALMODULE_H */
