/*
 * Reverse-Engineered ABI Specification for: libcam.halsensor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.halsensor.so
 */

#ifndef BEGONIA_RE_LIBCAM_HALSENSOR_H
#define BEGONIA_RE_LIBCAM_HALSENSOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12HWSyncDrvImpC2Ev */
/* Demangled: HWSyncDrvImp::HWSyncDrvImp() */
int _ZN12HWSyncDrvImpC2Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN15SeninfDrvTeeImpC2Ev */
/* Demangled: SeninfDrvTeeImp::SeninfDrvTeeImp() */
int _ZN15SeninfDrvTeeImpC2Ev(void);

/* Symbol: _ZN12ImgSensorDrv4openEv */
/* Demangled: ImgSensorDrv::open() */
int _ZN12ImgSensorDrv4openEv(void);

/* Symbol: _ZNK5NSCam11NSHalSensor9HalSensor7isMatchERKN7android12SortedVectorIjEE */
/* Demangled: NSCam::NSHalSensor::HalSensor::isMatch(android::SortedVector<unsigned int> const&) const */
int _ZNK5NSCam11NSHalSensor9HalSensor7isMatchERKN7android12SortedVectorIjEE(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList17querySensorDevIdxEj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorDevIdx(unsigned int) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList17querySensorDevIdxEj(void);

/* Symbol: _Z5getUsv */
/* Demangled: getUs() */
int _Z5getUsv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX318_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX318_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX318_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp10disableMUXE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvImp::disableMUX(SENINF_MUX_ENUM) */
int _ZN12SeninfDrvImp10disableMUXE15SENINF_MUX_ENUM(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN12HWSyncDrvImp11sendCommandE16HW_SYNC_CMD_ENUMjjjj */
/* Demangled: HWSyncDrvImp::sendCommand(HW_SYNC_CMD_ENUM, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12HWSyncDrvImp11sendCommandE16HW_SYNC_CMD_ENUMjjjj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX376_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX376_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX376_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp8powerOffEPv */
/* Demangled: SeninfDrvImp::powerOff(void*) */
int _ZN12SeninfDrvImp8powerOffEPv(void);

/* Symbol: deskew_data */
/* Demangled: deskew_data */
extern void* deskew_data;

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC5035_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC5035_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC5035_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2680_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2680_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2680_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV23850_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV23850_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV23850_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb */
/* Demangled: SeninfDrvImp::setSeninfMuxCrop(SENINF_MUX_ENUM, unsigned int, unsigned int, bool) */
int _ZN12SeninfDrvImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb(void);

/* Symbol: _ZNSt3__114__split_bufferI15SINGLE_VC_INFO2RNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<SINGLE_VC_INFO2>&) */
int _ZNSt3__114__split_bufferI15SINGLE_VC_INFO2RNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX214_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX214_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX214_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX377_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX377_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX377_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp13disableCamMUXE19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvImp::disableCamMUX(SENINF_CAM_MUX_ENUM) */
int _ZN12SeninfDrvImp13disableCamMUXE19SENINF_CAM_MUX_ENUM(void);

/* Symbol: _ZN12SeninfDrvImp5debugEv */
/* Demangled: SeninfDrvImp::debug() */
int _ZN12SeninfDrvImp5debugEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList10openSensorERKN7android12SortedVectorIjEEPKc */
/* Demangled: NSCam::NSHalSensor::HalSensorList::openSensor(android::SortedVector<unsigned int> const&, char const*) */
int _ZN5NSCam11NSHalSensor13HalSensorList10openSensorERKN7android12SortedVectorIjEEPKc(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX376_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX376_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX376_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp13getN3DDiffCntEPj */
/* Demangled: SeninfDrvImp::getN3DDiffCnt(unsigned int*) */
int _ZN12SeninfDrvImp13getN3DDiffCntEPj(void);

/* Symbol: _ZN15SeninfDrvTeeImp11sendCommandEimmm */
/* Demangled: SeninfDrvTeeImp::sendCommand(int, unsigned long, unsigned long, unsigned long) */
int _ZN15SeninfDrvTeeImp11sendCommandEimmm(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC5035_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC5035_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC5035_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2680_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2680_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2680_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV23850_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV23850_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV23850_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp5EfuseEm */
/* Demangled: SeninfDrvImp::Efuse(unsigned long) */
int _ZN12SeninfDrvImp5EfuseEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, char const*>, std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX377_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX377_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX377_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp34hal_csirx_dphy_dbg_deskew_raw_dataEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj */
/* Demangled: SeninfDrvImp::hal_csirx_dphy_dbg_deskew_raw_data(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int*, unsigned int) */
int _ZN12SeninfDrvImp34hal_csirx_dphy_dbg_deskew_raw_dataEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj(void);

/* Symbol: _ZN15SeninfDrvTeeImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb */
/* Demangled: SeninfDrvTeeImp::setSeninfMuxCrop(SENINF_MUX_ENUM, unsigned int, unsigned int, bool) */
int _ZN15SeninfDrvTeeImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb(void);

/* Symbol: _ZN12ImgSensorDrv10getDrvInfoEv */
/* Demangled: ImgSensorDrv::getDrvInfo() */
int _ZN12ImgSensorDrv10getDrvInfoEv(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC2EiPNS0_9HalSensorE */
/* Demangled: NSCam::NSHalSensor::HalSensorList::OpenInfo::OpenInfo(int, NSCam::NSHalSensor::HalSensor*) */
int _ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC2EiPNS0_9HalSensorE(void);

/* Symbol: _ZN12HWSyncDrvImp6uninitE17HW_SYNC_USER_ENUMj */
/* Demangled: HWSyncDrvImp::uninit(HW_SYNC_USER_ENUM, unsigned int) */
int _ZN12HWSyncDrvImp6uninitE17HW_SYNC_USER_ENUMj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImpD2Ev */
/* Demangled: SeninfDrvImp::~SeninfDrvImp() */
int _ZN12SeninfDrvImpD2Ev(void);

/* Symbol: _ZN12HWSyncDrvImpD0Ev */
/* Demangled: HWSyncDrvImp::~HWSyncDrvImp() */
int _ZN12HWSyncDrvImpD0Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvImp::setSeninfCamTGMuxCtrl(unsigned int, SENINF_MUX_ENUM) */
int _ZN12SeninfDrvImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM(void);

/* Symbol: _ZN15SeninfDrvTeeImpD0Ev */
/* Demangled: SeninfDrvTeeImp::~SeninfDrvTeeImp() */
int _ZN15SeninfDrvTeeImpD0Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp18hal_csirx_phy_initEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_phy_init(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp18hal_csirx_phy_initEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN12ImgSensorDrvC2Ev */
/* Demangled: ImgSensorDrv::ImgSensorDrv() */
int _ZN12ImgSensorDrvC2Ev(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor8powerOffEPKcjPKj */
/* Demangled: NSCam::NSHalSensor::HalSensor::powerOff(char const*, unsigned int, unsigned int const*) */
int _ZN5NSCam11NSHalSensor9HalSensor8powerOffEPKcjPKj(void);

/* Symbol: _ZN12ImgSensorDrv14featureControlE24ACDK_SENSOR_FEATURE_ENUMPhj */
/* Demangled: ImgSensorDrv::featureControl(ACDK_SENSOR_FEATURE_ENUM, unsigned char*, unsigned int) */
int _ZN12ImgSensorDrv14featureControlE24ACDK_SENSOR_FEATURE_ENUMPhj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC1EiPNS0_9HalSensorE */
/* Demangled: NSCam::NSHalSensor::HalSensorList::OpenInfo::OpenInfo(int, NSCam::NSHalSensor::HalSensor*) */
int _ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC1EiPNS0_9HalSensorE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj */
/* Demangled: SeninfDrvTeeImp::setSeninfMuxCtrl(SENINF_MUX_ENUM, unsigned long, unsigned long, SENINF_SOURCE_ENUM, TG_FORMAT_ENUM, unsigned int) */
int _ZN15SeninfDrvTeeImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj(void);

/* Symbol: _ZTV12HWSyncDrvImp */
/* Demangled: vtable for HWSyncDrvImp */
extern void* _ZTV12HWSyncDrvImp;

/* Symbol: mEnterIdleMutex */
/* Demangled: mEnterIdleMutex */
extern void* mEnterIdleMutex;

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX214_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX214_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX214_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX499_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX499_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX499_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375_MIPI_RAW(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::__push_back_slow_path<NSCam::SeninfConfigInfo const&>(NSCam::SeninfConfigInfo const&) */
int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_A5142_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_A5142_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_A5142_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_COMMON */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_COMMON */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_COMMON(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::String8>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::String8>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::String8> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX214_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX214_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX214_MIPI_RAW(void);

/* Symbol: _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp7setMclkEhim */
/* Demangled: SeninfDrvImp::setMclk(unsigned char, int, unsigned long) */
int _ZN12SeninfDrvImp7setMclkEhim(void);

/* Symbol: _ZNK7android12SortedVectorIjE12do_constructEPvj */
/* Demangled: android::SortedVector<unsigned int>::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorIjE12do_constructEPvj(void);

/* Symbol: _ZN12SeninfDrvImp21setCamMuxChkPixelModeE19SENINF_CAM_MUX_ENUMj */
/* Demangled: SeninfDrvImp::setCamMuxChkPixelMode(SENINF_CAM_MUX_ENUM, unsigned int) */
int _ZN12SeninfDrvImp21setCamMuxChkPixelModeE19SENINF_CAM_MUX_ENUMj(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor27setSensorMclkDrivingCurrentE20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCam::NSHalSensor::HalSensor::setSensorMclkDrivingCurrent(IMGSENSOR_SENSOR_IDX) */
int _ZN5NSCam11NSHalSensor9HalSensor27setSensorMclkDrivingCurrentE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor9configureEjPKNS_10IHalSensor11ConfigParamE */
/* Demangled: NSCam::NSHalSensor::HalSensor::configure(unsigned int, NSCam::IHalSensor::ConfigParam const*) */
int _ZN5NSCam11NSHalSensor9HalSensor9configureEjPKNS_10IHalSensor11ConfigParamE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX519_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX519_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX519_MIPI_RAW(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_destroyEPvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_COMMON */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_COMMON */
int constructCustStaticMetadata_DEVICE_LENS_COMMON(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_A5142_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_A5142_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_A5142_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp24hal_csirx_seninf_settingEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_seninf_setting(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp24hal_csirx_seninf_settingEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN12ImgSensorDrv11sendCommandEjjjj */
/* Demangled: ImgSensorDrv::sendCommand(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12ImgSensorDrv11sendCommandEjjjj(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensorC2Ev */
/* Demangled: NSCam::NSHalSensor::HalSensor::HalSensor() */
int _ZN5NSCam11NSHalSensor9HalSensorC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_MONO */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_MONO */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_MONO(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX318_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX318_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX318_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX576_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX576_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX576_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImp12enableCamMUXE19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::enableCamMUX(SENINF_CAM_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp12enableCamMUXE19SENINF_CAM_MUX_ENUM(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo>&>&) */
int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX258_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX258_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX258_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX519_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX519_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX519_MIPI_RAW(void);

/* Symbol: _Z13isXiaomiImagev */
/* Demangled: isXiaomiImage() */
int _Z13isXiaomiImagev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE8do_splatEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN12SeninfDrvImp22hal_csirx_cphy_settingEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_cphy_setting(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp22hal_csirx_cphy_settingEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor19sSensorPowerOnMutexE */
/* Demangled: NSCam::NSHalSensor::HalSensor::sSensorPowerOnMutex */
extern void* _ZN5NSCam11NSHalSensor9HalSensor19sSensorPowerOnMutexE;

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountDecEPKc20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCam::NSHalSensor::HalSensor::sensorPowerOnCountDec(char const*, IMGSENSOR_SENSOR_IDX) */
int _ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountDecEPKc20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorListC2Ev */
/* Demangled: NSCam::NSHalSensor::HalSensorList::HalSensorList() */
int _ZN5NSCam11NSHalSensor13HalSensorListC2Ev(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList22gQuerySensorStaticInfoE20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCam::NSHalSensor::HalSensorList::gQuerySensorStaticInfo(IMGSENSOR_SENSOR_IDX) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList22gQuerySensorStaticInfoE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: _ZN12ImgSensorDrv7getInfoEv */
/* Demangled: ImgSensorDrv::getInfo() */
int _ZN12ImgSensorDrv7getInfoEv(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX318_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX318_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX318_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX576_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX576_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX576_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp13setAutoDeskewEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::setAutoDeskew(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp13setAutoDeskewEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN12SeninfDrvImp23seninfCamMUXArbitrationE19SENINF_CAM_MUX_ENUMS0_ */
/* Demangled: SeninfDrvImp::seninfCamMUXArbitration(SENINF_CAM_MUX_ENUM, SENINF_CAM_MUX_ENUM) */
int _ZN12SeninfDrvImp23seninfCamMUXArbitrationE19SENINF_CAM_MUX_ENUMS0_(void);

/* Symbol: _ZNK7android12SortedVectorIjE10do_destroyEPvj */
/* Demangled: android::SortedVector<unsigned int>::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorIjE10do_destroyEPvj(void);

/* Symbol: _ZN12HWSyncDrvImp15destroyInstanceEv */
/* Demangled: HWSyncDrvImp::destroyInstance() */
int _ZN12HWSyncDrvImp15destroyInstanceEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV23850_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV23850_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV23850_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX258_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX258_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX258_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX376_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX376_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX376_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC5035_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC5035_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC5035_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2680_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2680_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2680_MIPI_RAW(void);

/* Symbol: _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE10do_destroyEPvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX377_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX377_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX377_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor9onDestroyEv */
/* Demangled: NSCam::NSHalSensor::HalSensor::onDestroy() */
int _ZN5NSCam11NSHalSensor9HalSensor9onDestroyEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE12do_constructEPvj(void);

/* Symbol: _ZN12HWSyncDrvImp11getInstanceEv */
/* Demangled: HWSyncDrvImp::getInstance() */
int _ZN12HWSyncDrvImp11getInstanceEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX519_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX519_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX519_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC5035_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC5035_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC5035_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp9isMUXUsedE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvImp::isMUXUsed(SENINF_MUX_ENUM) */
int _ZN12SeninfDrvImp9isMUXUsedE15SENINF_MUX_ENUM(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensorD0Ev */
/* Demangled: NSCam::NSHalSensor::HalSensor::~HalSensor() */
int _ZN5NSCam11NSHalSensor9HalSensorD0Ev(void);

/* Symbol: _ZTVN5NSCam11NSHalSensor9HalSensor7PerDataE */
/* Demangled: vtable for NSCam::NSHalSensor::HalSensor::PerData */
extern void* _ZTVN5NSCam11NSHalSensor9HalSensor7PerDataE;

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN12SeninfDrvImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM */
/* Demangled: SeninfDrvImp::setSeninfTopMuxCtrl(SENINF_MUX_ENUM, SENINF_ENUM) */
int _ZN12SeninfDrvImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM(void);

/* Symbol: _ZN12SeninfDrvImp23setMclkIODrivingCurrentEjm */
/* Demangled: SeninfDrvImp::setMclkIODrivingCurrent(unsigned int, unsigned long) */
int _ZN12SeninfDrvImp23setMclkIODrivingCurrentEjm(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor11sendCommandEjjjjj */
/* Demangled: NSCam::NSHalSensor::HalSensor::sendCommand(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam11NSHalSensor9HalSensor11sendCommandEjjjjj(void);

/* Symbol: _ZN5NSCam14IHalSensorList3getEv */
/* Demangled: NSCam::IHalSensorList::get() */
int _ZN5NSCam14IHalSensorList3getEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX318_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX318_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX318_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX576_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX576_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX576_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor21getSensorPowerOnCountE20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCam::NSHalSensor::HalSensor::getSensorPowerOnCount(IMGSENSOR_SENSOR_IDX) */
int _ZN5NSCam11NSHalSensor9HalSensor21getSensorPowerOnCountE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV5648_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV5648_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV5648_MIPI_RAW(void);

/* Symbol: _ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2> >::__swap_out_circular_buffer(std::__1::__split_buffer<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2>&>&) */
int _ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvImp::setSeninfCamMuxSrc(SENINF_MUX_ENUM, SENINF_CAM_MUX_ENUM) */
int _ZN12SeninfDrvImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor8onCreateERKN7android12SortedVectorIjEE */
/* Demangled: NSCam::NSHalSensor::HalSensor::onCreate(android::SortedVector<unsigned int> const&) */
int _ZN5NSCam11NSHalSensor9HalSensor8onCreateERKN7android12SortedVectorIjEE(void);

/* Symbol: _ZN12HWSyncDrvImpC1Ev */
/* Demangled: HWSyncDrvImp::HWSyncDrvImp() */
int _ZN12HWSyncDrvImpC1Ev(void);

/* Symbol: mStateMutex */
/* Demangled: mStateMutex */
extern void* mStateMutex;

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImpC1Ev */
/* Demangled: SeninfDrvTeeImp::SeninfDrvTeeImp() */
int _ZN15SeninfDrvTeeImpC1Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX376_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX376_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX376_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void);

/* Symbol: cameraIdRoles */
/* Demangled: cameraIdRoles */
extern void* cameraIdRoles;

/* Symbol: moduleInfoExt */
/* Demangled: moduleInfoExt */
extern void* moduleInfoExt;

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC5035_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC5035_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC5035_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2680_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2680_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2680_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImp13disableCamMUXE19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::disableCamMUX(SENINF_CAM_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp13disableCamMUXE19SENINF_CAM_MUX_ENUM(void);

/* Symbol: _ZTVN7android12SortedVectorIjEE */
/* Demangled: vtable for android::SortedVector<unsigned int> */
extern void* _ZTVN7android12SortedVectorIjEE;

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX377_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX377_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX377_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor15destroyInstanceEPKc */
/* Demangled: NSCam::NSHalSensor::HalSensor::destroyInstance(char const*) */
int _ZN5NSCam11NSHalSensor9HalSensor15destroyInstanceEPKc(void);

/* Symbol: _ZTVN5NSCam11NSHalSensor9HalSensorE */
/* Demangled: vtable for NSCam::NSHalSensor::HalSensor */
extern void* _ZTVN5NSCam11NSHalSensor9HalSensorE;

/* Symbol: _ZN12HWSyncDrvImp4initE17HW_SYNC_USER_ENUMji */
/* Demangled: HWSyncDrvImp::init(HW_SYNC_USER_ENUM, unsigned int, int) */
int _ZN12HWSyncDrvImp4initE17HW_SYNC_USER_ENUMji(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_MONO */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_MONO */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_MONO(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN12SeninfDrvImp19hal_csirx_cphy_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE */
/* Demangled: SeninfDrvImp::hal_csirx_cphy_init(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
int _ZN12SeninfDrvImp19hal_csirx_cphy_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void);

/* Symbol: _ZN12SeninfDrvImp21getSeninfCamTGMuxCtrlEj */
/* Demangled: SeninfDrvImp::getSeninfCamTGMuxCtrl(unsigned int) */
int _ZN12SeninfDrvImp21getSeninfCamTGMuxCtrlEj(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor5resetEv */
/* Demangled: NSCam::NSHalSensor::HalSensor::reset() */
int _ZN5NSCam11NSHalSensor9HalSensor5resetEv(void);

/* Symbol: moduleInfo */
/* Demangled: moduleInfo */
extern void* moduleInfo;

/* Symbol: __aeabi_f2ulz */
/* Demangled: __aeabi_f2ulz */
int __aeabi_f2ulz(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX519_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX519_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX519_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp40hal_csirx_dphy_dbg_deskew_ana_delay_codeEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEj */
/* Demangled: SeninfDrvImp::hal_csirx_dphy_dbg_deskew_ana_delay_code(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int) */
int _ZN12SeninfDrvImp40hal_csirx_dphy_dbg_deskew_ana_delay_codeEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEj(void);

/* Symbol: _ZTVN5NSCam11NSHalSensor13HalSensorListE */
/* Demangled: vtable for NSCam::NSHalSensor::HalSensorList */
extern void* _ZTVN5NSCam11NSHalSensor13HalSensorListE;

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp9mutexLockEv */
/* Demangled: SeninfDrvImp::mutexLock() */
int _ZN12SeninfDrvImp9mutexLockEv(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList20queryEnumInfoByIndexEj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::queryEnumInfoByIndex(unsigned int) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList20queryEnumInfoByIndexEj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEEE;

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX576_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX576_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX576_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImpD1Ev */
/* Demangled: SeninfDrvImp::~SeninfDrvImp() */
int _ZN12SeninfDrvImpD1Ev(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor17configureParallelERNS1_20HALSENSOR_SENINF_CSIE */
/* Demangled: NSCam::NSHalSensor::HalSensor::configureParallel(NSCam::NSHalSensor::HalSensor::HALSENSOR_SENINF_CSI&) */
int _ZN5NSCam11NSHalSensor9HalSensor17configureParallelERNS1_20HALSENSOR_SENINF_CSIE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX519_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX519_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX519_MIPI_RAW(void);

/* Symbol: _ZTV15SeninfDrvTeeImp */
/* Demangled: vtable for SeninfDrvTeeImp */
extern void* _ZTV15SeninfDrvTeeImp;

/* Symbol: _ZN9HWSyncDrv14createInstanceEv */
/* Demangled: HWSyncDrv::createInstance() */
int _ZN9HWSyncDrv14createInstanceEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2735_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2735_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2735_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp32hal_csirx_dphy_dbg_deskew_resultEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj */
/* Demangled: SeninfDrvImp::hal_csirx_dphy_dbg_deskew_result(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int*, unsigned int) */
int _ZN12SeninfDrvImp32hal_csirx_dphy_dbg_deskew_resultEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::createSensor(char const*, unsigned int) */
int _ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcj(void);

/* Symbol: _ZN12ImgSensorDrvC1Ev */
/* Demangled: ImgSensorDrv::ImgSensorDrv() */
int _ZN12ImgSensorDrvC1Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX576_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX576_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX576_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void);

/* Symbol: _ZN9SeninfDrv11getInstanceEi */
/* Demangled: SeninfDrv::getInstance(int) */
int _ZN9SeninfDrv11getInstanceEi(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_A5142_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_A5142_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_A5142_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_MONO */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_MONO */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_MONO(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2735_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2735_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2735_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX258_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX258_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX258_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor19sSensorPowerOnCountE */
/* Demangled: NSCam::NSHalSensor::HalSensor::sSensorPowerOnCount */
extern void* _ZN5NSCam11NSHalSensor9HalSensor19sSensorPowerOnCountE;

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN12SeninfDrvImp17setSeninfCamMuxVCE19SENINF_CAM_MUX_ENUMjjjj */
/* Demangled: SeninfDrvImp::setSeninfCamMuxVC(SENINF_CAM_MUX_ENUM, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12SeninfDrvImp17setSeninfCamMuxVCE19SENINF_CAM_MUX_ENUMjjjj(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV5648_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV5648_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV5648_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX258_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX258_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX258_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImp9enableMUXE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::enableMUX(SENINF_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp9enableMUXE15SENINF_MUX_ENUM(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList15buildStaticInfoERKNS0_4InfoERNS_9IMetadataE */
/* Demangled: NSCam::NSHalSensor::HalSensorList::buildStaticInfo(NSCam::NSHalSensor::Info const&, NSCam::IMetadata&) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList15buildStaticInfoERKNS0_4InfoERNS_9IMetadataE(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN12SeninfDrvImp12updateIspClkEj15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvImp::updateIspClk(unsigned int, SENINF_MUX_ENUM) */
int _ZN12SeninfDrvImp12updateIspClkEj15SENINF_MUX_ENUM(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp14createInstanceEv */
/* Demangled: SeninfDrvImp::createInstance() */
int _ZN12SeninfDrvImp14createInstanceEv(void);

/* Symbol: _ZN12ImgSensorDrv6uninitEv */
/* Demangled: ImgSensorDrv::uninit() */
int _ZN12ImgSensorDrv6uninitEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV5648_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV5648_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV5648_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvImp::isCamMUXUsed(SENINF_CAM_MUX_ENUM) */
int _ZN12SeninfDrvImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList13disableSecureEPKc */
/* Demangled: NSCam::NSHalSensor::HalSensorList::disableSecure(char const*) */
int _ZN5NSCam11NSHalSensor13HalSensorList13disableSecureEPKc(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo> */
extern void* _ZTVN7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEEE;

/* Symbol: _ZN12SeninfDrvImp10getCSIInfoEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE */
/* Demangled: SeninfDrvImp::getCSIInfo(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
int _ZN12SeninfDrvImp10getCSIInfoEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor20seninfMUXArbitrationE15SENINF_MUX_ENUMS2_ */
/* Demangled: NSCam::NSHalSensor::HalSensor::seninfMUXArbitration(SENINF_MUX_ENUM, SENINF_MUX_ENUM) */
int _ZN5NSCam11NSHalSensor9HalSensor20seninfMUXArbitrationE15SENINF_MUX_ENUMS2_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW(void);

/* Symbol: _ZTV12SeninfDrvImp */
/* Demangled: vtable for SeninfDrvImp */
extern void* _ZTV12SeninfDrvImp;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensorC1Ev */
/* Demangled: NSCam::NSHalSensor::HalSensor::HalSensor() */
int _ZN5NSCam11NSHalSensor9HalSensorC1Ev(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcjPKj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::createSensor(char const*, unsigned int, unsigned int const*) */
int _ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcjPKj(void);

/* Symbol: _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX258_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX258_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX258_MIPI_RAW(void);

/* Symbol: _ZN12ImgSensorDrv11getInstanceE20IMGSENSOR_SENSOR_IDX */
/* Demangled: ImgSensorDrv::getInstance(IMGSENSOR_SENSOR_IDX) */
int _ZN12ImgSensorDrv11getInstanceE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void);

/* Symbol: __fixunssfdi */
/* Demangled: __fixunssfdi */
int __fixunssfdi(void);

/* Symbol: _ZN12SeninfDrvImp9enableMUXE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvImp::enableMUX(SENINF_MUX_ENUM) */
int _ZN12SeninfDrvImp9enableMUXE15SENINF_MUX_ENUM(void);

/* Symbol: _ZN9SeninfDrv11getInstanceEv */
/* Demangled: SeninfDrv::getInstance() */
int _ZN9SeninfDrv11getInstanceEv(void);

/* Symbol: _ZN15SeninfDrvTeeImp21getSeninfCamTGMuxCtrlEj */
/* Demangled: SeninfDrvTeeImp::getSeninfCamTGMuxCtrl(unsigned int) */
int _ZN15SeninfDrvTeeImp21getSeninfCamTGMuxCtrlEj(void);

/* Symbol: _ZN12SeninfDrvImp11sendCommandEimmm */
/* Demangled: SeninfDrvImp::sendCommand(int, unsigned long, unsigned long, unsigned long) */
int _ZN12SeninfDrvImp11sendCommandEimmm(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor7powerOnEPKcjPKj */
/* Demangled: NSCam::NSHalSensor::HalSensor::powerOn(char const*, unsigned int, unsigned int const*) */
int _ZN5NSCam11NSHalSensor9HalSensor7powerOnEPKcjPKj(void);

/* Symbol: _ZN12ImgSensorDrv7getNameEv */
/* Demangled: ImgSensorDrv::getName() */
int _ZN12ImgSensorDrv7getNameEv(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorListC1Ev */
/* Demangled: NSCam::NSHalSensor::HalSensorList::HalSensorList() */
int _ZN5NSCam11NSHalSensor13HalSensorListC1Ev(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEjPNS_16SensorStaticInfoE */
/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorStaticInfo(unsigned int, NSCam::SensorStaticInfo*) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEjPNS_16SensorStaticInfoE(void);

/* Symbol: _ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2> >::__push_back_slow_path<SINGLE_VC_INFO2 const&>(SINGLE_VC_INFO2 const&) */
int _ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN12HWSyncDrvImpD2Ev */
/* Demangled: HWSyncDrvImp::~HWSyncDrvImp() */
int _ZN12HWSyncDrvImpD2Ev(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN15SeninfDrvTeeImpD2Ev */
/* Demangled: SeninfDrvTeeImp::~SeninfDrvTeeImp() */
int _ZN15SeninfDrvTeeImpD2Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX586_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX586_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX586_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam16SeninfConfigInfoERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::SeninfConfigInfo>&) */
int _ZNSt3__114__split_bufferIN5NSCam16SeninfConfigInfoERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZTVN7android4ListIN5NSCam11NSHalSensor13HalSensorList8OpenInfoEEE */
/* Demangled: vtable for android::List<NSCam::NSHalSensor::HalSensorList::OpenInfo> */
extern void* _ZTVN7android4ListIN5NSCam11NSHalSensor13HalSensorList8OpenInfoEEE;

/* Symbol: _ZN12SeninfDrvImp10configMclkEP16SENINF_MCLK_PARAm */
/* Demangled: SeninfDrvImp::configMclk(SENINF_MCLK_PARA*, unsigned long) */
int _ZN12SeninfDrvImp10configMclkEP16SENINF_MCLK_PARAm(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_A5142_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_A5142_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_A5142_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvImp::getSeninfTopMuxCtrl(SENINF_MUX_ENUM) */
int _ZN12SeninfDrvImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM(void);

/* Symbol: _ZN12SeninfDrvImp27hal_csirx_ana_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjPjS2_ */
/* Demangled: SeninfDrvImp::hal_csirx_ana_get_dbg_value(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int, unsigned int*, unsigned int*) */
int _ZN12SeninfDrvImp27hal_csirx_ana_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjPjS2_(void);

/* Symbol: _ZNK7android12SortedVectorIjE10do_compareEPKvS3_ */
/* Demangled: android::SortedVector<unsigned int>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIjE10do_compareEPKvS3_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX586_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX586_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX586_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp23hal_csirx_phyA_power_onEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEb */
/* Demangled: SeninfDrvImp::hal_csirx_phyA_power_on(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, bool) */
int _ZN12SeninfDrvImp23hal_csirx_phyA_power_onEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEb(void);

/* Symbol: _ZN5NSCam11NSHalSensor12showCustInfoEv */
/* Demangled: NSCam::NSHalSensor::showCustInfo() */
int _ZN5NSCam11NSHalSensor12showCustInfoEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8858_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8858_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8858_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImp9isMUXUsedE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::isMUXUsed(SENINF_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp9isMUXUsedE15SENINF_MUX_ENUM(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorStaticInfo(unsigned int) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp12setTestModelEbjjjj */
/* Demangled: SeninfDrvImp::setTestModel(bool, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12SeninfDrvImp12setTestModelEbjjjj(void);

/* Symbol: _ZN15SeninfDrvTeeImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::getSeninfTopMuxCtrl(SENINF_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2281_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2281_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2281_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2735_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2735_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2735_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp6uninitEv */
/* Demangled: SeninfDrvImp::uninit() */
int _ZN12SeninfDrvImp6uninitEv(void);

/* Symbol: _ZN12SeninfDrvImpC2Ev */
/* Demangled: SeninfDrvImp::SeninfDrvImp() */
int _ZN12SeninfDrvImpC2Ev(void);

/* Symbol: _ZN15SeninfDrvTeeImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM */
/* Demangled: SeninfDrvTeeImp::setSeninfTopMuxCtrl(SENINF_MUX_ENUM, SENINF_ENUM) */
int _ZN15SeninfDrvTeeImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8858_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8858_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8858_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX230_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX230_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX230_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_MONO */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_MONO */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_MONO(void);

/* Symbol: _ZN12ImgSensorDrvD2Ev */
/* Demangled: ImgSensorDrv::~ImgSensorDrv() */
int _ZN12ImgSensorDrvD2Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void);

/* Symbol: _ZN12ImgSensorDrv11setScenarioE21MSDK_SCENARIO_ID_ENUMjjj */
/* Demangled: ImgSensorDrv::setScenario(MSDK_SCENARIO_ID_ENUM, unsigned int, unsigned int, unsigned int) */
int _ZN12ImgSensorDrv11setScenarioE21MSDK_SCENARIO_ID_ENUMjjj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2281_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2281_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2281_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2735_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2735_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2735_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj */
/* Demangled: SeninfDrvImp::setSeninfMuxCtrl(SENINF_MUX_ENUM, unsigned long, unsigned long, SENINF_SOURCE_ENUM, TG_FORMAT_ENUM, unsigned int) */
int _ZN12SeninfDrvImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor7PerDataC2Ev */
/* Demangled: NSCam::NSHalSensor::HalSensor::PerData::PerData() */
int _ZN5NSCam11NSHalSensor9HalSensor7PerDataC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX230_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX230_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX230_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList19buildSensorMetadataE20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCam::NSHalSensor::HalSensorList::buildSensorMetadata(IMGSENSOR_SENSOR_IDX) */
int _ZN5NSCam11NSHalSensor13HalSensorList19buildSensorMetadataE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList9queryTypeEj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::queryType(unsigned int) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList9queryTypeEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::String8>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::String8>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::String8> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, android::String8>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV5648_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV5648_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV5648_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp19hal_csirx_phyA_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE */
/* Demangled: SeninfDrvImp::hal_csirx_phyA_init(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
int _ZN12SeninfDrvImp19hal_csirx_phyA_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void);

/* Symbol: _ZN15SeninfDrvTeeImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::setSeninfCamTGMuxCtrl(unsigned int, SENINF_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM(void);

/* Symbol: mpHwSyncDrv */
/* Demangled: mpHwSyncDrv */
extern void* mpHwSyncDrv;

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList11closeSensorEPNS0_9HalSensorEPKc */
/* Demangled: NSCam::NSHalSensor::HalSensorList::closeSensor(NSCam::NSHalSensor::HalSensor*, char const*) */
int _ZN5NSCam11NSHalSensor13HalSensorList11closeSensorEPNS0_9HalSensorEPKc(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp22hal_csirx_dphy_settingEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_dphy_setting(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp22hal_csirx_dphy_settingEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN12SeninfDrvImpD0Ev */
/* Demangled: SeninfDrvImp::~SeninfDrvImp() */
int _ZN12SeninfDrvImpD0Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2281_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2281_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2281_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2735_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2735_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2735_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_A5142_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_A5142_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_A5142_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp12enableCamMUXE19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvImp::enableCamMUX(SENINF_CAM_MUX_ENUM) */
int _ZN12SeninfDrvImp12enableCamMUXE19SENINF_CAM_MUX_ENUM(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX230_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX230_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX230_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor12setDebugInfoEP12IBaseCamExif */
/* Demangled: NSCam::NSHalSensor::HalSensor::setDebugInfo(IBaseCamExif*) */
int _ZN5NSCam11NSHalSensor9HalSensor12setDebugInfoEP12IBaseCamExif(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList12enableSecureEPKc */
/* Demangled: NSCam::NSHalSensor::HalSensorList::enableSecure(char const*) */
int _ZN5NSCam11NSHalSensor13HalSensorList12enableSecureEPKc(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList13searchSensorsEv */
/* Demangled: NSCam::NSHalSensor::HalSensorList::searchSensors() */
int _ZN5NSCam11NSHalSensor13HalSensorList13searchSensorsEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp28hal_csirx_dphy_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjjPj */
/* Demangled: SeninfDrvImp::hal_csirx_dphy_get_dbg_value(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int, unsigned int, unsigned int*) */
int _ZN12SeninfDrvImp28hal_csirx_dphy_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjjPj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX338_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX338_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX338_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp16setSeninfCsiMipiEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::setSeninfCsiMipi(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp16setSeninfCsiMipiEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN12ImgSensorDrv7getTypeEv */
/* Demangled: ImgSensorDrv::getType() */
int _ZN12ImgSensorDrv7getTypeEv(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensorD2Ev */
/* Demangled: NSCam::NSHalSensor::HalSensor::~HalSensor() */
int _ZN5NSCam11NSHalSensor9HalSensorD2Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN12SeninfDrvImp11setSeninfVCE11SENINF_ENUMjjjjjj */
/* Demangled: SeninfDrvImp::setSeninfVC(SENINF_ENUM, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12SeninfDrvImp11setSeninfVCE11SENINF_ENUMjjjjjj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp17dphy_hw_deskew_enEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEh */
/* Demangled: SeninfDrvImp::dphy_hw_deskew_en(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned char) */
int _ZN12SeninfDrvImp17dphy_hw_deskew_enEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEh(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV5648_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV5648_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV5648_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX338_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX338_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX338_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX586_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX586_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX586_MIPI_RAW(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList31addAndInitSensorEnumInfo_LockedE20IMGSENSOR_SENSOR_IDXjPc */
/* Demangled: NSCam::NSHalSensor::HalSensorList::addAndInitSensorEnumInfo_Locked(IMGSENSOR_SENSOR_IDX, unsigned int, char*) */
int _ZN5NSCam11NSHalSensor13HalSensorList31addAndInitSensorEnumInfo_LockedE20IMGSENSOR_SENSOR_IDXjPc(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2281_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2281_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2281_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX586_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX586_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX586_MIPI_RAW(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList20queryNumberOfSensorsEv */
/* Demangled: NSCam::NSHalSensor::HalSensorList::queryNumberOfSensors() const */
int _ZNK5NSCam11NSHalSensor13HalSensorList20queryNumberOfSensorsEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, char const*>, std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, char const*> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, char const*>, std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, char const*> const&) */
int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_MONO */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_MONO */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_MONO(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX230_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX230_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX230_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor23seninfLowPowerConfigureE21MSDK_SCENARIO_ID_ENUM */
/* Demangled: NSCam::NSHalSensor::HalSensor::seninfLowPowerConfigure(MSDK_SCENARIO_ID_ENUM) */
int _ZN5NSCam11NSHalSensor9HalSensor23seninfLowPowerConfigureE21MSDK_SCENARIO_ID_ENUM(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8858_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8858_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8858_MIPI_RAW(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList9singletonEv */
/* Demangled: NSCam::NSHalSensor::HalSensorList::singleton() */
int _ZN5NSCam11NSHalSensor13HalSensorList9singletonEv(void);

/* Symbol: _ZN12ImgSensorDrv12searchSensorEv */
/* Demangled: ImgSensorDrv::searchSensor() */
int _ZN12ImgSensorDrv12searchSensorEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2281_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2281_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2281_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX230_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX230_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX230_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void);

/* Symbol: _ZN12ImgSensorDrv4initE20IMGSENSOR_SENSOR_IDX */
/* Demangled: ImgSensorDrv::init(IMGSENSOR_SENSOR_IDX) */
int _ZN12ImgSensorDrv4initE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE8do_splatEPvPKvj(void);

/* Symbol: moduleRoleName */
/* Demangled: moduleRoleName */
extern void* moduleRoleName;

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX499_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX499_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX499_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8858_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8858_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8858_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp20convertTgEnum2CamMuxEi */
/* Demangled: SeninfDrvImp::convertTgEnum2CamMux(int) */
int _ZN12SeninfDrvImp20convertTgEnum2CamMuxEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZN12HWSyncDrvImpD1Ev */
/* Demangled: HWSyncDrvImp::~HWSyncDrvImp() */
int _ZN12HWSyncDrvImpD1Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp22hal_csirx_phyA_settingEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_phyA_setting(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp22hal_csirx_phyA_settingEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN12SeninfDrvImp28hal_csirx_seninf_top_settingEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_seninf_top_setting(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp28hal_csirx_seninf_top_settingEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN15SeninfDrvTeeImpD1Ev */
/* Demangled: SeninfDrvTeeImp::~SeninfDrvTeeImp() */
int _ZN15SeninfDrvTeeImpD1Ev(void);

/* Symbol: _ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE */
/* Demangled: XiaoMi::MiAddAeRange(XiaoMi::E_MiCamera, NSCam::IMetadata&) */
int _ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX586_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX586_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX586_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV23850_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV23850_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV23850_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp11mutexUnlockEv */
/* Demangled: SeninfDrvImp::mutexUnlock() */
int _ZN12SeninfDrvImp11mutexUnlockEv(void);

/* Symbol: _ZN15SeninfDrvTeeImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::setSeninfCamMuxSrc(SENINF_MUX_ENUM, SENINF_CAM_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void);

/* Symbol: _ZN12ImgSensorDrv5closeEv */
/* Demangled: ImgSensorDrv::close() */
int _ZN12ImgSensorDrv5closeEv(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor19seninfMUXReleaseAllEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE */
/* Demangled: NSCam::NSHalSensor::HalSensor::seninfMUXReleaseAll(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
int _ZN5NSCam11NSHalSensor9HalSensor19seninfMUXReleaseAllEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, android::String8>, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::String8>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, android::String8>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::String8>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::String8> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE */
/* Demangled: SeninfDrvImp::reset(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
int _ZN12SeninfDrvImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void);

/* Symbol: _ZN15SeninfDrvTeeImp10disableMUXE15SENINF_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::disableMUX(SENINF_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp10disableMUXE15SENINF_MUX_ENUM(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList15querySensorInfoE20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorInfo(IMGSENSOR_SENSOR_IDX) */
int _ZN5NSCam11NSHalSensor13HalSensorList15querySensorInfoE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: _ZNK7android12SortedVectorIjE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE8do_splatEPvPKvj(void);

/* Symbol: _ZN12SeninfDrvImp4initEv */
/* Demangled: SeninfDrvImp::init() */
int _ZN12SeninfDrvImp4initEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX499_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX499_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX499_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8858_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8858_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8858_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_COMMON */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_COMMON */
int constructCustStaticMetadata_DEVICE_TUNING_3A_COMMON(void);

/* Symbol: _ZN15SeninfDrvTeeImp6uninitEv */
/* Demangled: SeninfDrvTeeImp::uninit() */
int _ZN15SeninfDrvTeeImp6uninitEv(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList20queryFacingDirectionEj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::queryFacingDirection(unsigned int) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList20queryFacingDirectionEj(void);

/* Symbol: _ZN12SeninfDrvImp21hal_csirx_phy_settingEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_phy_setting(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp21hal_csirx_phy_settingEP15SENINF_CSI_MIPI(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_COMMON */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_COMMON */
int constructCustStaticMetadata_DEVICE_SENSOR_COMMON(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp31hal_csirx_work_on_deskew_resultEPjS0_ */
/* Demangled: SeninfDrvImp::hal_csirx_work_on_deskew_result(unsigned int*, unsigned int*) */
int _ZN12SeninfDrvImp31hal_csirx_work_on_deskew_resultEPjS0_(void);

/* Symbol: _ZN12SeninfDrvImpC1Ev */
/* Demangled: SeninfDrvImp::SeninfDrvImp() */
int _ZN12SeninfDrvImpC1Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV23850_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV23850_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV23850_MIPI_RAW(void);

/* Symbol: _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN12ImgSensorDrvD1Ev */
/* Demangled: ImgSensorDrv::~ImgSensorDrv() */
int _ZN12ImgSensorDrvD1Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX338_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX338_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX338_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX376_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX376_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX376_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2680_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2680_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2680_MIPI_RAW(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor7PerDataC1Ev */
/* Demangled: NSCam::NSHalSensor::HalSensor::PerData::PerData() */
int _ZN5NSCam11NSHalSensor9HalSensor7PerDataC1Ev(void);

/* Symbol: _ZN5NSCam11NSHalSensor13HalSensorList16querySecureStateEv */
/* Demangled: NSCam::NSHalSensor::HalSensorList::querySecureState() */
int _ZN5NSCam11NSHalSensor13HalSensorList16querySecureStateEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX377_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX377_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX377_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX338_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX338_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX338_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp19hal_csirx_dphy_initEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_dphy_init(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp19hal_csirx_dphy_initEP15SENINF_CSI_MIPI(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor13setSensorMclkE20IMGSENSOR_SENSOR_IDXi */
/* Demangled: NSCam::NSHalSensor::HalSensor::setSensorMclk(IMGSENSOR_SENSOR_IDX, int) */
int _ZN5NSCam11NSHalSensor9HalSensor13setSensorMclkE20IMGSENSOR_SENSOR_IDXi(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor22querySensorDynamicInfoEjPNS_17SensorDynamicInfoE */
/* Demangled: NSCam::NSHalSensor::HalSensor::querySensorDynamicInfo(unsigned int, NSCam::SensorDynamicInfo*) */
int _ZN5NSCam11NSHalSensor9HalSensor22querySensorDynamicInfoEjPNS_17SensorDynamicInfoE(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList15queryStaticInfoEj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::queryStaticInfo(unsigned int) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList15queryStaticInfoEj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX499_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX499_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX499_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void);

/* Symbol: _ZN7android2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEC2EPS4_ */
/* Demangled: android::sp<NSCam::NSHalSensor::HalSensor::PerData>::sp(NSCam::NSHalSensor::HalSensor::PerData*) */
int _ZN7android2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEC2EPS4_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android12SortedVectorIjE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIjE7do_copyEPvPKvj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN15SeninfDrvTeeImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE */
/* Demangled: SeninfDrvTeeImp::reset(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
int _ZN15SeninfDrvTeeImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void);

/* Symbol: _ZNK5NSCam11NSHalSensor13HalSensorList15queryDriverNameEj */
/* Demangled: NSCam::NSHalSensor::HalSensorList::queryDriverName(unsigned int) const */
int _ZNK5NSCam11NSHalSensor13HalSensorList15queryDriverNameEj(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX499_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX499_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX499_MIPI_RAW(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN12ImgSensorDrv5getIDEv */
/* Demangled: ImgSensorDrv::getID() */
int _ZN12ImgSensorDrv5getIDEv(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX338_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX338_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX338_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX214_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX214_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX214_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImp5debugEv */
/* Demangled: SeninfDrvTeeImp::debug() */
int _ZN15SeninfDrvTeeImp5debugEv(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor15configureSerialERNS1_20HALSENSOR_SENINF_CSIE */
/* Demangled: NSCam::NSHalSensor::HalSensor::configureSerial(NSCam::NSHalSensor::HalSensor::HALSENSOR_SENINF_CSI&) */
int _ZN5NSCam11NSHalSensor9HalSensor15configureSerialERNS1_20HALSENSOR_SENINF_CSIE(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountIncEPKc20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCam::NSHalSensor::HalSensor::sensorPowerOnCountInc(char const*, IMGSENSOR_SENSOR_IDX) */
int _ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountIncEPKc20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void);

/* Symbol: _ZN15SeninfDrvTeeImp4initEv */
/* Demangled: SeninfDrvTeeImp::init() */
int _ZN15SeninfDrvTeeImp4initEv(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensor13configureMipiERNS1_20HALSENSOR_SENINF_CSIE */
/* Demangled: NSCam::NSHalSensor::HalSensor::configureMipi(NSCam::NSHalSensor::HalSensor::HALSENSOR_SENINF_CSI&) */
int _ZN5NSCam11NSHalSensor9HalSensor13configureMipiERNS1_20HALSENSOR_SENINF_CSIE(void);

/* Symbol: _ZN5NSCam11NSHalSensor9HalSensorD1Ev */
/* Demangled: NSCam::NSHalSensor::HalSensor::~HalSensor() */
int _ZN5NSCam11NSHalSensor9HalSensorD1Ev(void);

/* Symbol: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void);

/* Symbol: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX214_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX214_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX214_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp12setSeninfCsiEPv18SENINF_SOURCE_ENUM */
/* Demangled: SeninfDrvImp::setSeninfCsi(void*, SENINF_SOURCE_ENUM) */
int _ZN12SeninfDrvImp12setSeninfCsiEPv18SENINF_SOURCE_ENUM(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN15SeninfDrvTeeImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM */
/* Demangled: SeninfDrvTeeImp::isCamMUXUsed(SENINF_CAM_MUX_ENUM) */
int _ZN15SeninfDrvTeeImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM(void);

/* Symbol: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX318_MIPI_RAW */
/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX318_MIPI_RAW */
int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX318_MIPI_RAW(void);

/* Symbol: _ZN12SeninfDrvImp29hal_csirx_seninf_csi2_settingEP15SENINF_CSI_MIPI */
/* Demangled: SeninfDrvImp::hal_csirx_seninf_csi2_setting(SENINF_CSI_MIPI*) */
int _ZN12SeninfDrvImp29hal_csirx_seninf_csi2_settingEP15SENINF_CSI_MIPI(void);

/* Symbol: _ZN15SeninfDrvTeeImp14createInstanceEv */
/* Demangled: SeninfDrvTeeImp::createInstance() */
int _ZN15SeninfDrvTeeImp14createInstanceEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_HALSENSOR_H */
