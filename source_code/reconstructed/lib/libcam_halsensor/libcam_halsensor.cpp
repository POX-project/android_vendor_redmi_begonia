/*
 * Reverse-Engineered Source for: libcam.halsensor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_halsensor"

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
#include "libcam_halsensor.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV "/dev/"
#define DEV_DEV_SENINF "/dev/seninf"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_SENINF, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SENINF, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SENINF, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HWSyncDrvImp::HWSyncDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImpC2Ev(void) {
    ALOGD("_ZN12HWSyncDrvImpC2Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: SeninfDrvTeeImp::SeninfDrvTeeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImpC2Ev(void) {
    ALOGD("_ZN15SeninfDrvTeeImpC2Ev() called");
    return 0;
}

/* Demangled: ImgSensorDrv::open() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv4openEv(void) {
    ALOGD("_ZN12ImgSensorDrv4openEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::isMatch(android::SortedVector<unsigned int> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor9HalSensor7isMatchERKN7android12SortedVectorIjEE(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor9HalSensor7isMatchERKN7android12SortedVectorIjEE() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorDevIdx(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList17querySensorDevIdxEj(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList17querySensorDevIdxEj() called");
    return 0;
}

/* Demangled: getUs() */
extern "C" __attribute__((visibility("default"))) int _Z5getUsv(void) {
    ALOGD("_Z5getUsv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::disableMUX(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp10disableMUXE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp10disableMUXE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::sendCommand(HW_SYNC_CMD_ENUM, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImp11sendCommandE16HW_SYNC_CMD_ENUMjjjj(void) {
    ALOGD("_ZN12HWSyncDrvImp11sendCommandE16HW_SYNC_CMD_ENUMjjjj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::powerOff(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp8powerOffEPv(void) {
    ALOGD("_ZN12SeninfDrvImp8powerOffEPv() called");
    return 0;
}

/* Exported Object: deskew_data */
extern "C" __attribute__((visibility("default"))) void* deskew_data = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfMuxCrop(SENINF_MUX_ENUM, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb(void) {
    ALOGD("_ZN12SeninfDrvImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<SINGLE_VC_INFO2>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI15SINGLE_VC_INFO2RNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI15SINGLE_VC_INFO2RNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::disableCamMUX(SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp13disableCamMUXE19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp13disableCamMUXE19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Demangled: SeninfDrvImp::debug() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp5debugEv(void) {
    ALOGD("_ZN12SeninfDrvImp5debugEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::openSensor(android::SortedVector<unsigned int> const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList10openSensorERKN7android12SortedVectorIjEEPKc(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList10openSensorERKN7android12SortedVectorIjEEPKc() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::getN3DDiffCnt(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp13getN3DDiffCntEPj(void) {
    ALOGD("_ZN12SeninfDrvImp13getN3DDiffCntEPj() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::sendCommand(int, unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp11sendCommandEimmm(void) {
    ALOGD("_ZN15SeninfDrvTeeImp11sendCommandEimmm() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::Efuse(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp5EfuseEm(void) {
    ALOGD("_ZN12SeninfDrvImp5EfuseEm() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, char const*>, std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_dphy_dbg_deskew_raw_data(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp34hal_csirx_dphy_dbg_deskew_raw_dataEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj(void) {
    ALOGD("_ZN12SeninfDrvImp34hal_csirx_dphy_dbg_deskew_raw_dataEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::setSeninfMuxCrop(SENINF_MUX_ENUM, unsigned int, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb(void) {
    ALOGD("_ZN15SeninfDrvTeeImp16setSeninfMuxCropE15SENINF_MUX_ENUMjjb() called");
    return 0;
}

/* Demangled: ImgSensorDrv::getDrvInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv10getDrvInfoEv(void) {
    ALOGD("_ZN12ImgSensorDrv10getDrvInfoEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::OpenInfo::OpenInfo(int, NSCam::NSHalSensor::HalSensor*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC2EiPNS0_9HalSensorE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC2EiPNS0_9HalSensorE() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::uninit(HW_SYNC_USER_ENUM, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImp6uninitE17HW_SYNC_USER_ENUMj(void) {
    ALOGD("_ZN12HWSyncDrvImp6uninitE17HW_SYNC_USER_ENUMj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::~SeninfDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImpD2Ev(void) {
    ALOGD("_ZN12SeninfDrvImpD2Ev() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::~HWSyncDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImpD0Ev(void) {
    ALOGD("_ZN12HWSyncDrvImpD0Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfCamTGMuxCtrl(unsigned int, SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::~SeninfDrvTeeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImpD0Ev(void) {
    ALOGD("_ZN15SeninfDrvTeeImpD0Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_phy_init(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp18hal_csirx_phy_initEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp18hal_csirx_phy_initEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: ImgSensorDrv::ImgSensorDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrvC2Ev(void) {
    ALOGD("_ZN12ImgSensorDrvC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::powerOff(char const*, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor8powerOffEPKcjPKj(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor8powerOffEPKcjPKj() called");
    return 0;
}

/* Demangled: ImgSensorDrv::featureControl(ACDK_SENSOR_FEATURE_ENUM, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv14featureControlE24ACDK_SENSOR_FEATURE_ENUMPhj(void) {
    ALOGD("_ZN12ImgSensorDrv14featureControlE24ACDK_SENSOR_FEATURE_ENUMPhj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::OpenInfo::OpenInfo(int, NSCam::NSHalSensor::HalSensor*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC1EiPNS0_9HalSensorE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList8OpenInfoC1EiPNS0_9HalSensorE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::setSeninfMuxCtrl(SENINF_MUX_ENUM, unsigned long, unsigned long, SENINF_SOURCE_ENUM, TG_FORMAT_ENUM, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj(void) {
    ALOGD("_ZN15SeninfDrvTeeImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj() called");
    return 0;
}

/* Exported Object: vtable for HWSyncDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV12HWSyncDrvImp = NULL;

/* Exported Object: mEnterIdleMutex */
extern "C" __attribute__((visibility("default"))) void* mEnterIdleMutex = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::__push_back_slow_path<NSCam::SeninfConfigInfo const&>(NSCam::SeninfConfigInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_COMMON() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::String8>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::String8>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::String8> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setMclk(unsigned char, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp7setMclkEhim(void) {
    ALOGD("_ZN12SeninfDrvImp7setMclkEhim() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE12do_constructEPvj() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setCamMuxChkPixelMode(SENINF_CAM_MUX_ENUM, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp21setCamMuxChkPixelModeE19SENINF_CAM_MUX_ENUMj(void) {
    ALOGD("_ZN12SeninfDrvImp21setCamMuxChkPixelModeE19SENINF_CAM_MUX_ENUMj() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::setSensorMclkDrivingCurrent(IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor27setSensorMclkDrivingCurrentE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor27setSensorMclkDrivingCurrentE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::configure(unsigned int, NSCam::IHalSensor::ConfigParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor9configureEjPKNS_10IHalSensor11ConfigParamE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor9configureEjPKNS_10IHalSensor11ConfigParamE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_COMMON() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_seninf_setting(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp24hal_csirx_seninf_settingEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp24hal_csirx_seninf_settingEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: ImgSensorDrv::sendCommand(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv11sendCommandEjjjj(void) {
    ALOGD("_ZN12ImgSensorDrv11sendCommandEjjjj() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::HalSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensorC2Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensorC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::enableCamMUX(SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp12enableCamMUXE19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp12enableCamMUXE19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: isXiaomiImage() */
extern "C" __attribute__((visibility("default"))) int _Z13isXiaomiImagev(void) {
    ALOGD("_Z13isXiaomiImagev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_cphy_setting(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp22hal_csirx_cphy_settingEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp22hal_csirx_cphy_settingEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Exported Object: NSCam::NSHalSensor::HalSensor::sSensorPowerOnMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam11NSHalSensor9HalSensor19sSensorPowerOnMutexE = NULL;

/* Demangled: NSCam::NSHalSensor::HalSensor::sensorPowerOnCountDec(char const*, IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountDecEPKc20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountDecEPKc20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::HalSensorList() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorListC2Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorListC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::gQuerySensorStaticInfo(IMGSENSOR_SENSOR_IDX) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList22gQuerySensorStaticInfoE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList22gQuerySensorStaticInfoE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: ImgSensorDrv::getInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv7getInfoEv(void) {
    ALOGD("_ZN12ImgSensorDrv7getInfoEv() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setAutoDeskew(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp13setAutoDeskewEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp13setAutoDeskewEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: SeninfDrvImp::seninfCamMUXArbitration(SENINF_CAM_MUX_ENUM, SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp23seninfCamMUXArbitrationE19SENINF_CAM_MUX_ENUMS0_(void) {
    ALOGD("_ZN12SeninfDrvImp23seninfCamMUXArbitrationE19SENINF_CAM_MUX_ENUMS0_() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImp15destroyInstanceEv(void) {
    ALOGD("_ZN12HWSyncDrvImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::onDestroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor9onDestroyEv(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor9onDestroyEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImp11getInstanceEv(void) {
    ALOGD("_ZN12HWSyncDrvImp11getInstanceEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::isMUXUsed(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp9isMUXUsedE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp9isMUXUsedE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::~HalSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensorD0Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensorD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSHalSensor::HalSensor::PerData */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam11NSHalSensor9HalSensor7PerDataE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfTopMuxCtrl(SENINF_MUX_ENUM, SENINF_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setMclkIODrivingCurrent(unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp23setMclkIODrivingCurrentEjm(void) {
    ALOGD("_ZN12SeninfDrvImp23setMclkIODrivingCurrentEjm() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::sendCommand(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor11sendCommandEjjjjj(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor11sendCommandEjjjjj() called");
    return 0;
}

/* Demangled: NSCam::IHalSensorList::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam14IHalSensorList3getEv(void) {
    ALOGD("_ZN5NSCam14IHalSensorList3getEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::getSensorPowerOnCount(IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor21getSensorPowerOnCountE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor21getSensorPowerOnCountE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: std::__1::vector<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2> >::__swap_out_circular_buffer(std::__1::__split_buffer<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfCamMuxSrc(SENINF_MUX_ENUM, SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::onCreate(android::SortedVector<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor8onCreateERKN7android12SortedVectorIjEE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor8onCreateERKN7android12SortedVectorIjEE() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::HWSyncDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImpC1Ev(void) {
    ALOGD("_ZN12HWSyncDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: mStateMutex */
extern "C" __attribute__((visibility("default"))) void* mStateMutex = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_GC2375_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::SeninfDrvTeeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImpC1Ev(void) {
    ALOGD("_ZN15SeninfDrvTeeImpC1Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Exported Object: cameraIdRoles */
extern "C" __attribute__((visibility("default"))) void* cameraIdRoles = NULL;

/* Exported Object: moduleInfoExt */
extern "C" __attribute__((visibility("default"))) void* moduleInfoExt = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC5035_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC5035_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_GC5035_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::disableCamMUX(SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp13disableCamMUXE19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp13disableCamMUXE19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorIjEE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor15destroyInstanceEPKc() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSHalSensor::HalSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam11NSHalSensor9HalSensorE = NULL;

/* Demangled: HWSyncDrvImp::init(HW_SYNC_USER_ENUM, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImp4initE17HW_SYNC_USER_ENUMji(void) {
    ALOGD("_ZN12HWSyncDrvImp4initE17HW_SYNC_USER_ENUMji() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_cphy_init(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp19hal_csirx_cphy_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void) {
    ALOGD("_ZN12SeninfDrvImp19hal_csirx_cphy_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE() called");
    return 0;
}

/* Demangled: SeninfDrvImp::getSeninfCamTGMuxCtrl(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp21getSeninfCamTGMuxCtrlEj(void) {
    ALOGD("_ZN12SeninfDrvImp21getSeninfCamTGMuxCtrlEj() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor5resetEv(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor5resetEv() called");
    return 0;
}

/* Exported Object: moduleInfo */
extern "C" __attribute__((visibility("default"))) void* moduleInfo = NULL;

/* Demangled: __aeabi_f2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2ulz(void) {
    ALOGD("__aeabi_f2ulz() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_dphy_dbg_deskew_ana_delay_code(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp40hal_csirx_dphy_dbg_deskew_ana_delay_codeEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEj(void) {
    ALOGD("_ZN12SeninfDrvImp40hal_csirx_dphy_dbg_deskew_ana_delay_codeEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSHalSensor::HalSensorList */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam11NSHalSensor13HalSensorListE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::mutexLock() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp9mutexLockEv(void) {
    ALOGD("_ZN12SeninfDrvImp9mutexLockEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::queryEnumInfoByIndex(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList20queryEnumInfoByIndexEj(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList20queryEnumInfoByIndexEj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEEE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::~SeninfDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImpD1Ev(void) {
    ALOGD("_ZN12SeninfDrvImpD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::configureParallel(NSCam::NSHalSensor::HalSensor::HALSENSOR_SENINF_CSI&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor17configureParallelERNS1_20HALSENSOR_SENINF_CSIE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor17configureParallelERNS1_20HALSENSOR_SENINF_CSIE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX519_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX519_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX519_MIPI_RAW() called");
    return 0;
}

/* Exported Object: vtable for SeninfDrvTeeImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV15SeninfDrvTeeImp = NULL;

/* Demangled: HWSyncDrv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9HWSyncDrv14createInstanceEv(void) {
    ALOGD("_ZN9HWSyncDrv14createInstanceEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_dphy_dbg_deskew_result(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp32hal_csirx_dphy_dbg_deskew_resultEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj(void) {
    ALOGD("_ZN12SeninfDrvImp32hal_csirx_dphy_dbg_deskew_resultEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEPjj() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::createSensor(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcj(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcj() called");
    return 0;
}

/* Demangled: ImgSensorDrv::ImgSensorDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrvC1Ev(void) {
    ALOGD("_ZN12ImgSensorDrvC1Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX576_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX576_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX576_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrv::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SeninfDrv11getInstanceEi(void) {
    ALOGD("_ZN9SeninfDrv11getInstanceEi() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Exported Object: NSCam::NSHalSensor::HalSensor::sSensorPowerOnCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam11NSHalSensor9HalSensor19sSensorPowerOnCountE = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfCamMuxVC(SENINF_CAM_MUX_ENUM, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp17setSeninfCamMuxVCE19SENINF_CAM_MUX_ENUMjjjj(void) {
    ALOGD("_ZN12SeninfDrvImp17setSeninfCamMuxVCE19SENINF_CAM_MUX_ENUMjjjj() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::enableMUX(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp9enableMUXE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp9enableMUXE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::buildStaticInfo(NSCam::NSHalSensor::Info const&, NSCam::IMetadata&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList15buildStaticInfoERKNS0_4InfoERNS_9IMetadataE(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList15buildStaticInfoERKNS0_4InfoERNS_9IMetadataE() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: SeninfDrvImp::updateIspClk(unsigned int, SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp12updateIspClkEj15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp12updateIspClkEj15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp14createInstanceEv(void) {
    ALOGD("_ZN12SeninfDrvImp14createInstanceEv() called");
    return 0;
}

/* Demangled: ImgSensorDrv::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv6uninitEv(void) {
    ALOGD("_ZN12ImgSensorDrv6uninitEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::isCamMUXUsed(SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::disableSecure(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList13disableSecureEPKc(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList13disableSecureEPKc() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEEE = NULL;

/* Demangled: SeninfDrvImp::getCSIInfo(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp10getCSIInfoEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void) {
    ALOGD("_ZN12SeninfDrvImp10getCSIInfoEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::seninfMUXArbitration(SENINF_MUX_ENUM, SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor20seninfMUXArbitrationE15SENINF_MUX_ENUMS2_(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor20seninfMUXArbitrationE15SENINF_MUX_ENUMS2_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Exported Object: vtable for SeninfDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SeninfDrvImp = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::HalSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensorC1Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensorC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::createSensor(char const*, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcjPKj(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList12createSensorEPKcjPKj() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX258_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX258_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX258_MIPI_RAW() called");
    return 0;
}

/* Demangled: ImgSensorDrv::getInstance(IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv11getInstanceE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN12ImgSensorDrv11getInstanceE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: __fixunssfdi */
extern "C" __attribute__((visibility("default"))) int __fixunssfdi(void) {
    ALOGD("__fixunssfdi() called");
    return 0;
}

/* Demangled: SeninfDrvImp::enableMUX(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp9enableMUXE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp9enableMUXE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: SeninfDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9SeninfDrv11getInstanceEv(void) {
    ALOGD("_ZN9SeninfDrv11getInstanceEv() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::getSeninfCamTGMuxCtrl(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp21getSeninfCamTGMuxCtrlEj(void) {
    ALOGD("_ZN15SeninfDrvTeeImp21getSeninfCamTGMuxCtrlEj() called");
    return 0;
}

/* Demangled: SeninfDrvImp::sendCommand(int, unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp11sendCommandEimmm(void) {
    ALOGD("_ZN12SeninfDrvImp11sendCommandEimmm() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::powerOn(char const*, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor7powerOnEPKcjPKj(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor7powerOnEPKcjPKj() called");
    return 0;
}

/* Demangled: ImgSensorDrv::getName() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv7getNameEv(void) {
    ALOGD("_ZN12ImgSensorDrv7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::HalSensorList() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorListC1Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorListC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorStaticInfo(unsigned int, NSCam::SensorStaticInfo*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEjPNS_16SensorStaticInfoE(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEjPNS_16SensorStaticInfoE() called");
    return 0;
}

/* Demangled: void std::__1::vector<SINGLE_VC_INFO2, std::__1::allocator<SINGLE_VC_INFO2> >::__push_back_slow_path<SINGLE_VC_INFO2 const&>(SINGLE_VC_INFO2 const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI15SINGLE_VC_INFO2NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::~HWSyncDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImpD2Ev(void) {
    ALOGD("_ZN12HWSyncDrvImpD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::~SeninfDrvTeeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImpD2Ev(void) {
    ALOGD("_ZN15SeninfDrvTeeImpD2Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX350_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2P8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2P8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2P8_MIPI_RAW() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::SeninfConfigInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam16SeninfConfigInfoERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam16SeninfConfigInfoERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Exported Object: vtable for android::List<NSCam::NSHalSensor::HalSensorList::OpenInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIN5NSCam11NSHalSensor13HalSensorList8OpenInfoEEE = NULL;

/* Demangled: SeninfDrvImp::configMclk(SENINF_MCLK_PARA*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp10configMclkEP16SENINF_MCLK_PARAm(void) {
    ALOGD("_ZN12SeninfDrvImp10configMclkEP16SENINF_MCLK_PARAm() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::getSeninfTopMuxCtrl(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_ana_get_dbg_value(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp27hal_csirx_ana_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjPjS2_(void) {
    ALOGD("_ZN12SeninfDrvImp27hal_csirx_ana_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjPjS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE10do_compareEPKvS3_(void) {
    ALOGD("_ZNK7android12SortedVectorIjE10do_compareEPKvS3_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_phyA_power_on(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp23hal_csirx_phyA_power_onEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEb(void) {
    ALOGD("_ZN12SeninfDrvImp23hal_csirx_phyA_power_onEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEb() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::showCustInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor12showCustInfoEv(void) {
    ALOGD("_ZN5NSCam11NSHalSensor12showCustInfoEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3M2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3M2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3M2_MIPI_RAW() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::isMUXUsed(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp9isMUXUsedE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp9isMUXUsedE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorStaticInfo(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEj(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList21querySensorStaticInfoEj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setTestModel(bool, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp12setTestModelEbjjjj(void) {
    ALOGD("_ZN12SeninfDrvImp12setTestModelEbjjjj() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::getSeninfTopMuxCtrl(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp19getSeninfTopMuxCtrlE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX386_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp6uninitEv(void) {
    ALOGD("_ZN12SeninfDrvImp6uninitEv() called");
    return 0;
}

/* Demangled: SeninfDrvImp::SeninfDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImpC2Ev(void) {
    ALOGD("_ZN12SeninfDrvImpC2Ev() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::setSeninfTopMuxCtrl(SENINF_MUX_ENUM, SENINF_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp19setSeninfTopMuxCtrlE15SENINF_MUX_ENUM11SENINF_ENUM() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: ImgSensorDrv::~ImgSensorDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrvD2Ev(void) {
    ALOGD("_ZN12ImgSensorDrvD2Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: ImgSensorDrv::setScenario(MSDK_SCENARIO_ID_ENUM, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv11setScenarioE21MSDK_SCENARIO_ID_ENUMjjj(void) {
    ALOGD("_ZN12ImgSensorDrv11setScenarioE21MSDK_SCENARIO_ID_ENUMjjj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfMuxCtrl(SENINF_MUX_ENUM, unsigned long, unsigned long, SENINF_SOURCE_ENUM, TG_FORMAT_ENUM, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj(void) {
    ALOGD("_ZN12SeninfDrvImp16setSeninfMuxCtrlE15SENINF_MUX_ENUMmm18SENINF_SOURCE_ENUM14TG_FORMAT_ENUMj() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::PerData::PerData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor7PerDataC2Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor7PerDataC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::buildSensorMetadata(IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList19buildSensorMetadataE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList19buildSensorMetadataE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::queryType(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList9queryTypeEj(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList9queryTypeEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, android::String8>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::String8>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::String8> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, android::String8>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_phyA_init(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp19hal_csirx_phyA_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void) {
    ALOGD("_ZN12SeninfDrvImp19hal_csirx_phyA_initEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::setSeninfCamTGMuxCtrl(unsigned int, SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp21setSeninfCamTGMuxCtrlEj15SENINF_MUX_ENUM() called");
    return 0;
}

/* Exported Object: mpHwSyncDrv */
extern "C" __attribute__((visibility("default"))) void* mpHwSyncDrv = NULL;

/* Demangled: NSCam::NSHalSensor::HalSensorList::closeSensor(NSCam::NSHalSensor::HalSensor*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList11closeSensorEPNS0_9HalSensorEPKc(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList11closeSensorEPNS0_9HalSensorEPKc() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_dphy_setting(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp22hal_csirx_dphy_settingEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp22hal_csirx_dphy_settingEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: SeninfDrvImp::~SeninfDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImpD0Ev(void) {
    ALOGD("_ZN12SeninfDrvImpD0Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2735_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2735_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV2735_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_A5142_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_A5142_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_A5142_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::enableCamMUX(SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp12enableCamMUXE19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp12enableCamMUXE19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::setDebugInfo(IBaseCamExif*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor12setDebugInfoEP12IBaseCamExif(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor12setDebugInfoEP12IBaseCamExif() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::enableSecure(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList12enableSecureEPKc(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList12enableSecureEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::searchSensors() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList13searchSensorsEv(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList13searchSensorsEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV02A10_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_dphy_get_dbg_value(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp28hal_csirx_dphy_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjjPj(void) {
    ALOGD("_ZN12SeninfDrvImp28hal_csirx_dphy_get_dbg_valueEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEjjPj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfCsiMipi(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp16setSeninfCsiMipiEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp16setSeninfCsiMipiEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: ImgSensorDrv::getType() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv7getTypeEv(void) {
    ALOGD("_ZN12ImgSensorDrv7getTypeEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::~HalSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensorD2Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensorD2Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfVC(SENINF_ENUM, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp11setSeninfVCE11SENINF_ENUMjjjjjj(void) {
    ALOGD("_ZN12SeninfDrvImp11setSeninfVCE11SENINF_ENUMjjjjjj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::dphy_hw_deskew_en(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp17dphy_hw_deskew_enEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEh(void) {
    ALOGD("_ZN12SeninfDrvImp17dphy_hw_deskew_enEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTEh() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV5648_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV5648_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV5648_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K2T7SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K5E2YA_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::addAndInitSensorEnumInfo_Locked(IMGSENSOR_SENSOR_IDX, unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList31addAndInitSensorEnumInfo_LockedE20IMGSENSOR_SENSOR_IDXjPc(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList31addAndInitSensorEnumInfo_LockedE20IMGSENSOR_SENSOR_IDXjPc() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::queryNumberOfSensors() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList20queryNumberOfSensorsEv(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList20queryNumberOfSensorsEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, char const*>, std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, char const*>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, char const*>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, char const*> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, char const*> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, char const*>, std::__1::__tree_node<std::__1::__value_type<unsigned int, char const*>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjPKcEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_MONO */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_MONO(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX386_MIPI_MONO() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::seninfLowPowerConfigure(MSDK_SCENARIO_ID_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor23seninfLowPowerConfigureE21MSDK_SCENARIO_ID_ENUM(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor23seninfLowPowerConfigureE21MSDK_SCENARIO_ID_ENUM() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList9singletonEv(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList9singletonEv() called");
    return 0;
}

/* Demangled: ImgSensorDrv::searchSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv12searchSensorEv(void) {
    ALOGD("_ZN12ImgSensorDrv12searchSensorEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2281_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2281_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_OV2281_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX230_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX230_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX230_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: ImgSensorDrv::init(IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv4initE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN12ImgSensorDrv4initE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: moduleRoleName */
extern "C" __attribute__((visibility("default"))) void* moduleRoleName = NULL;

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2LQSX_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::convertTgEnum2CamMux(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp20convertTgEnum2CamMuxEi(void) {
    ALOGD("_ZN12SeninfDrvImp20convertTgEnum2CamMuxEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: HWSyncDrvImp::~HWSyncDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12HWSyncDrvImpD1Ev(void) {
    ALOGD("_ZN12HWSyncDrvImpD1Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_phyA_setting(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp22hal_csirx_phyA_settingEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp22hal_csirx_phyA_settingEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_seninf_top_setting(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp28hal_csirx_seninf_top_settingEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp28hal_csirx_seninf_top_settingEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::~SeninfDrvTeeImp() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImpD1Ev(void) {
    ALOGD("_ZN15SeninfDrvTeeImpD1Ev() called");
    return 0;
}

/* Demangled: XiaoMi::MiAddAeRange(XiaoMi::E_MiCamera, NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN6XiaoMi12MiAddAeRangeENS_10E_MiCameraERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX586_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX586_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX586_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::mutexUnlock() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp11mutexUnlockEv(void) {
    ALOGD("_ZN12SeninfDrvImp11mutexUnlockEv() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::setSeninfCamMuxSrc(SENINF_MUX_ENUM, SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp18setSeninfCamMuxSrcE15SENINF_MUX_ENUM19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: ImgSensorDrv::close() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv5closeEv(void) {
    ALOGD("_ZN12ImgSensorDrv5closeEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::seninfMUXReleaseAll(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor19seninfMUXReleaseAllEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor19seninfMUXReleaseAllEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, android::String8>, std::__1::__tree_node<std::__1::__value_type<unsigned int, android::String8>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, android::String8>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, android::String8>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, android::String8> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN7android7String8EEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::reset(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void) {
    ALOGD("_ZN12SeninfDrvImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::disableMUX(SENINF_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp10disableMUXE15SENINF_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp10disableMUXE15SENINF_MUX_ENUM() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::querySensorInfo(IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList15querySensorInfoE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList15querySensorInfoE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: SeninfDrvImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp4initEv(void) {
    ALOGD("_ZN12SeninfDrvImp4initEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV13855MAIN2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8858_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8858_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_OV8858_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_COMMON() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp6uninitEv(void) {
    ALOGD("_ZN15SeninfDrvTeeImp6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::queryFacingDirection(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList20queryFacingDirectionEj(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList20queryFacingDirectionEj() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_phy_setting(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp21hal_csirx_phy_settingEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp21hal_csirx_phy_settingEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T2_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T2_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3T2_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4E6_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4E6_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K4E6_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_COMMON */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_COMMON(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_COMMON() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5KGW1SUNNY_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_work_on_deskew_result(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp31hal_csirx_work_on_deskew_resultEPjS0_(void) {
    ALOGD("_ZN12SeninfDrvImp31hal_csirx_work_on_deskew_resultEPjS0_() called");
    return 0;
}

/* Demangled: SeninfDrvImp::SeninfDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImpC1Ev(void) {
    ALOGD("_ZN12SeninfDrvImpC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV23850_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV23850_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_OV23850_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSHalSensor::HalSensorList::EnumInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam11NSHalSensor13HalSensorList8EnumInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: ImgSensorDrv::~ImgSensorDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrvD1Ev(void) {
    ALOGD("_ZN12ImgSensorDrvD1Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX376_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX376_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX376_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2680_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2680_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV2680_MIPI_RAW() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::NSHalSensor::HalSensor::PerData::PerData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor7PerDataC1Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor7PerDataC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::querySecureState() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor13HalSensorList16querySecureStateEv(void) {
    ALOGD("_ZN5NSCam11NSHalSensor13HalSensorList16querySecureStateEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX377_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX377_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX377_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2X8_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2X8_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K2X8_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_dphy_init(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp19hal_csirx_dphy_initEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp19hal_csirx_dphy_initEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::setSensorMclk(IMGSENSOR_SENSOR_IDX, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor13setSensorMclkE20IMGSENSOR_SENSOR_IDXi(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor13setSensorMclkE20IMGSENSOR_SENSOR_IDXi() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::querySensorDynamicInfo(unsigned int, NSCam::SensorDynamicInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor22querySensorDynamicInfoEjPNS_17SensorDynamicInfoE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor22querySensorDynamicInfoEjPNS_17SensorDynamicInfoE() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::queryStaticInfo(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList15queryStaticInfoEj(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList15queryStaticInfoEj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_S5KGW1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3T1OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSHalSensor::HalSensor::PerData>::sp(NSCam::NSHalSensor::HalSensor::PerData*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEC2EPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEC2EPS4_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIjE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIjE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX398_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::reset(NSCamCustomSensor::CUSTOM_CFG_CSI_PORT) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE(void) {
    ALOGD("_ZN15SeninfDrvTeeImp5resetEN17NSCamCustomSensor19CUSTOM_CFG_CSI_PORTE() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensorList::queryDriverName(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam11NSHalSensor13HalSensorList15queryDriverNameEj(void) {
    ALOGD("_ZNK5NSCam11NSHalSensor13HalSensorList15queryDriverNameEj() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K3P8SP_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX499_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX499_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_IMX499_MIPI_RAW() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSHalSensor::HalSensor::PerData> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam11NSHalSensor9HalSensor7PerDataEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: ImgSensorDrv::getID() */
extern "C" __attribute__((visibility("default"))) int _ZN12ImgSensorDrv5getIDEv(void) {
    ALOGD("_ZN12ImgSensorDrv5getIDEv() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX338_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX338_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_IMX338_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_SENSOR_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_OV8856OFILM_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2L7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2L7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_S5K2L7_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::debug() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp5debugEv(void) {
    ALOGD("_ZN15SeninfDrvTeeImp5debugEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::configureSerial(NSCam::NSHalSensor::HalSensor::HALSENSOR_SENINF_CSI&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor15configureSerialERNS1_20HALSENSOR_SENINF_CSIE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor15configureSerialERNS1_20HALSENSOR_SENINF_CSIE() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::sensorPowerOnCountInc(char const*, IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountIncEPKc20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor21sensorPowerOnCountIncEPKc20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_LENS_SENSOR_DRVNAME_S5K3P3SX_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp4initEv(void) {
    ALOGD("_ZN15SeninfDrvTeeImp4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::configureMipi(NSCam::NSHalSensor::HalSensor::HALSENSOR_SENINF_CSI&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensor13configureMipiERNS1_20HALSENSOR_SENINF_CSIE(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensor13configureMipiERNS1_20HALSENSOR_SENINF_CSIE() called");
    return 0;
}

/* Demangled: NSCam::NSHalSensor::HalSensor::~HalSensor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11NSHalSensor9HalSensorD1Ev(void) {
    ALOGD("_ZN5NSCam11NSHalSensor9HalSensorD1Ev() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4H7_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4H7_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_CAMERA_SENSOR_DRVNAME_S5K4H7_MIPI_RAW() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375AF_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375AF_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_GC2375AF_MIPI_RAW() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX214_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX214_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_TUNING_3A_SENSOR_DRVNAME_IMX214_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::setSeninfCsi(void*, SENINF_SOURCE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp12setSeninfCsiEPv18SENINF_SOURCE_ENUM(void) {
    ALOGD("_ZN12SeninfDrvImp12setSeninfCsiEPv18SENINF_SOURCE_ENUM() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::isCamMUXUsed(SENINF_CAM_MUX_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM(void) {
    ALOGD("_ZN15SeninfDrvTeeImp12isCamMUXUsedE19SENINF_CAM_MUX_ENUM() called");
    return 0;
}

/* Demangled: constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX318_MIPI_RAW */
extern "C" __attribute__((visibility("default"))) int constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX318_MIPI_RAW(void) {
    ALOGD("constructCustStaticMetadata_DEVICE_FLASHLIGHT_SENSOR_DRVNAME_IMX318_MIPI_RAW() called");
    return 0;
}

/* Demangled: SeninfDrvImp::hal_csirx_seninf_csi2_setting(SENINF_CSI_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SeninfDrvImp29hal_csirx_seninf_csi2_settingEP15SENINF_CSI_MIPI(void) {
    ALOGD("_ZN12SeninfDrvImp29hal_csirx_seninf_csi2_settingEP15SENINF_CSI_MIPI() called");
    return 0;
}

/* Demangled: SeninfDrvTeeImp::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15SeninfDrvTeeImp14createInstanceEv(void) {
    ALOGD("_ZN15SeninfDrvTeeImp14createInstanceEv() called");
    return 0;
}
