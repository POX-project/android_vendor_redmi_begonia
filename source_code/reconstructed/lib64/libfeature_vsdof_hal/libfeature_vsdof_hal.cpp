/*
 * Reverse-Engineered Source for: libfeature.vsdof.hal.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfeature_vsdof_hal"

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
#include "libfeature_vsdof_hal.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAM_CAL_DRV "/dev/CAM_CAL_DRV"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAM_CAL_DRV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAM_CAL_DRV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAM_CAL_DRV, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: CamCalDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv11getInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv11getInstanceEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__setN3DCommonParams(StereoHAL::N3D_HAL_PARAM_COMMON&, StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL20__setN3DCommonParamsERN9StereoHAL20N3D_HAL_PARAM_COMMONERNS0_14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL20__setN3DCommonParamsERN9StereoHAL20N3D_HAL_PARAM_COMMONERNS0_14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Exported Object: typeinfo for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail10type_errorE = NULL;

/* Demangled: GF_HAL_IMP::_validateAFPoint(NSCam::MPoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP16_validateAFPointERN5NSCam6MPointE(void) {
    ALOGD("_ZN10GF_HAL_IMP16_validateAFPointERN5NSCam6MPointE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: N3D_HAL_IMP::__loadNVRAM() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP11__loadNVRAMEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP11__loadNVRAMEv() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__syncInternalNVRAM(N3D_HAL_KERNEL*, N3D_HAL_KERNEL*) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP19__syncInternalNVRAMEP14N3D_HAL_KERNELS1_(void) {
    ALOGD("_ZN11N3D_HAL_IMP19__syncInternalNVRAMEP14N3D_HAL_KERNELS1_() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::N3DHALWarpMain1(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP15N3DHALWarpMain1EPN5NSCam12IImageBufferES2_S2_(void) {
    ALOGD("_ZN11N3D_HAL_IMP15N3DHALWarpMain1EPN5NSCam12IImageBufferES2_S2_() called");
    return 0;
}

/* Exported Object: N3D_HAL_IMP::__useExternalCalibration */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP24__useExternalCalibrationE = NULL;

/* Demangled: GF_HAL_IMP::__logGFBufferInfo(GFBufferInfo const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP17__logGFBufferInfoERK12GFBufferInfoi(void) {
    ALOGD("_ZN10GF_HAL_IMP17__logGFBufferInfoERK12GFBufferInfoi() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__initN3DKernel(STEREO_KERNEL_SET_ENV_INFO_STRUCT&, NVRAM_CAMERA_GEOMETRY_STRUCT*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL15__initN3DKernelER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL15__initN3DKernelER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf() called");
    return 0;
}

/* Demangled: FEFM_RING_BUFFER_T::setHWFEFMData(StereoHAL::HWFEFM_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN18FEFM_RING_BUFFER_T13setHWFEFMDataERN9StereoHAL11HWFEFM_DATAE(void) {
    ALOGD("_ZN18FEFM_RING_BUFFER_T13setHWFEFMDataERN9StereoHAL11HWFEFM_DATAE() called");
    return 0;
}

/* Exported Object: N3D_HAL_IMP::__spCaptureKernel */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP17__spCaptureKernelE = NULL;

/* Demangled: OCC_HAL_IMP::__runOCC(StereoHAL::OCC_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP8__runOCCERN9StereoHAL14OCC_HAL_OUTPUTE(void) {
    ALOGD("_ZN11OCC_HAL_IMP8__runOCCERN9StereoHAL14OCC_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__runN3DCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL15__runN3DCaptureEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL15__runN3DCaptureEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::N3DHALRun(StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::__dumpProcInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP14__dumpProcInfoEv(void) {
    ALOGD("_ZN10GF_HAL_IMP14__dumpProcInfoEv() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD1Ev(void) {
    ALOGD("_ZN9CamCalDrvD1Ev() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__runN3DCommon(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL14__runN3DCommonEi(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL14__runN3DCommonEi() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::__logInitData() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP13__logInitDataEv(void) {
    ALOGD("_ZN10GF_HAL_IMP13__logInitDataEv() called");
    return 0;
}

/* Exported Object: N3D_HAL_IMP::__nvramSensorDevIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP21__nvramSensorDevIndexE = NULL;

/* Demangled: StereoHAL::N3D_HAL::createInstance(StereoHAL::N3D_HAL_INIT_PARAM_WPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL7N3D_HAL14createInstanceERNS_22N3D_HAL_INIT_PARAM_WPEE(void) {
    ALOGD("_ZN9StereoHAL7N3D_HAL14createInstanceERNS_22N3D_HAL_INIT_PARAM_WPEE() called");
    return 0;
}

/* Exported Object: vtable for OCC_HAL_IMP */
extern "C" __attribute__((visibility("default"))) void* _ZTV11OCC_HAL_IMP = NULL;

/* Demangled: GF_HAL_IMP::__logSetProcData() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP16__logSetProcDataEv(void) {
    ALOGD("_ZN10GF_HAL_IMP16__logSetProcDataEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__logSetProcInfo(char const*, STEREO_KERNEL_SET_PROC_INFO_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL16__logSetProcInfoEPKcRK34STEREO_KERNEL_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL16__logSetProcInfoEPKcRK34STEREO_KERNEL_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail10type_errorE = NULL;

/* Exported Object: vtable for nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE = NULL;

/* Demangled: GF_HAL_IMP::_clearTransformedImages() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP23_clearTransformedImagesEv(void) {
    ALOGD("_ZN10GF_HAL_IMP23_clearTransformedImagesEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::bitset<10ul>::to_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16bitsetILm10EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_(void) {
    ALOGD("_ZNKSt3__16bitsetILm10EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__initLensInfo(int, NS3Av3::DAF_TBL_STRUCT*&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP14__initLensInfoEiRPN6NS3Av314DAF_TBL_STRUCTERb(void) {
    ALOGD("_ZN11N3D_HAL_IMP14__initLensInfoEiRPN6NS3Av314DAF_TBL_STRUCTERb() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::__splitDisparityMapAndDump(short const*, short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP26__splitDisparityMapAndDumpEPKsS1_(void) {
    ALOGD("_ZN11OCC_HAL_IMP26__splitDisparityMapAndDumpEPKsS1_() called");
    return 0;
}

/* Demangled: CamCalDrv::getDumpEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv13getDumpEnableEv(void) {
    ALOGD("_ZN9CamCalDrv13getDumpEnableEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::logN3DResult(STEREO_KERNEL_RESULT_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL12logN3DResultER27STEREO_KERNEL_RESULT_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL12logN3DResultER27STEREO_KERNEL_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::OCCHALRun(StereoHAL::OCC_HAL_PARAMS&, StereoHAL::OCC_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP9OCCHALRunERN9StereoHAL14OCC_HAL_PARAMSERNS0_14OCC_HAL_OUTPUTE(void) {
    ALOGD("_ZN11OCC_HAL_IMP9OCCHALRunERN9StereoHAL14OCC_HAL_PARAMSERNS0_14OCC_HAL_OUTPUTE() called");
    return 0;
}

/* Exported Object: GF_HAL_IMP::s_lastGFPoint */
extern "C" __attribute__((visibility("default"))) void* _ZN10GF_HAL_IMP13s_lastGFPointE = NULL;

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: GF_HAL_IMP::_updateFDInfo(int, GFFdInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP13_updateFDInfoEiR8GFFdInfo(void) {
    ALOGD("_ZN10GF_HAL_IMP13_updateFDInfoEiR8GFFdInfo() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper11getInstanceEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::initMain1Mask(StereoHAL::StereoArea) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL13initMain1MaskEN9StereoHAL10StereoAreaE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL13initMain1MaskEN9StereoHAL10StereoAreaE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::CamCalHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12CamCalHelperE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail9exceptionE = NULL;

/* Demangled: N3D_HAL_IMP::__loadExternalCalibrationData(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP29__loadExternalCalibrationDataEPf(void) {
    ALOGD("_ZN11N3D_HAL_IMP29__loadExternalCalibrationDataEPf() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMPC2ERN9StereoHAL18N3D_HAL_INIT_PARAME(void) {
    ALOGD("_ZN11N3D_HAL_IMPC2ERN9StereoHAL18N3D_HAL_INIT_PARAME() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD0Ev(void) {
    ALOGD("_ZN9CamCalDrvD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: N3D_HAL_IMP::__getRuntimeAFParams(NS3Av3::DAF_TBL_STRUCT*, unsigned int, STEREO_KERNEL_AF_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP20__getRuntimeAFParamsEPN6NS3Av314DAF_TBL_STRUCTEjR28STEREO_KERNEL_AF_INFO_STRUCT(void) {
    ALOGD("_ZN11N3D_HAL_IMP20__getRuntimeAFParamsEPN6NS3Av314DAF_TBL_STRUCTEjR28STEREO_KERNEL_AF_INFO_STRUCT() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::_removePadding(NSCam::IImageBuffer*, NSCam::IImageBuffer*, StereoHAL::StereoArea&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP14_removePaddingEPN5NSCam12IImageBufferES2_RN9StereoHAL10StereoAreaE(void) {
    ALOGD("_ZN10GF_HAL_IMP14_removePaddingEPN5NSCam12IImageBufferES2_RN9StereoHAL10StereoAreaE() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::runLearning(StereoHAL::HWFEFM_DATA&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL11runLearningERN9StereoHAL11HWFEFM_DATAEP28STEREO_KERNEL_AF_INFO_STRUCTS4_(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL11runLearningERN9StereoHAL11HWFEFM_DATAEP28STEREO_KERNEL_AF_INFO_STRUCTS4_() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::logN3DProcInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL14logN3DProcInfoEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL14logN3DProcInfoEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__runN3DLearning() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL16__runN3DLearningEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL16__runN3DLearningEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_stream_adapter<char>, std::__1::allocator<nlohmann::detail::output_stream_adapter<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEEE = NULL;

/* Exported Object: nlohmann::detail::dtoa_impl::get_cached_power_for_binary_exponent(int)::kCachedPowers */
extern "C" __attribute__((visibility("default"))) void* _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers = NULL;

/* Demangled: N3D_HAL_IMP::runN3DLearning(StereoHAL::HWFEFM_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP14runN3DLearningERN9StereoHAL11HWFEFM_DATAE(void) {
    ALOGD("_ZN11N3D_HAL_IMP14runN3DLearningERN9StereoHAL11HWFEFM_DATAE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::N3DHALRun(StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE(void) {
    ALOGD("_ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::~N3D_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMPD2Ev(void) {
    ALOGD("_ZN11N3D_HAL_IMPD2Ev() called");
    return 0;
}

/* Demangled: StereoHAL::GF_HAL::createInstance(StereoHAL::ENUM_STEREO_SCENARIO, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL6GF_HAL14createInstanceENS_20ENUM_STEREO_SCENARIOEb(void) {
    ALOGD("_ZN9StereoHAL6GF_HAL14createInstanceENS_20ENUM_STEREO_SCENARIOEb() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::output_stream_adapter<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail21output_stream_adapterIcEE = NULL;

/* Exported Object: nlohmann::detail::serializer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >::decode(unsigned char&, unsigned int&, unsigned char)::utf8d */
extern "C" __attribute__((visibility("default"))) void* _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d = NULL;

/* Exported Object: N3D_HAL_IMP::__sRunLock */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP10__sRunLockE = NULL;

/* Demangled: N3D_HAL_IMP::__dumpNVRAM(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP11__dumpNVRAMEb(void) {
    ALOGD("_ZN11N3D_HAL_IMP11__dumpNVRAMEb() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::getWarpMapMain2(StereoHAL::N3D_HAL_PARAM_WPE&, StereoHAL::N3D_HAL_OUTPUT_WPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP15getWarpMapMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEERNS0_18N3D_HAL_OUTPUT_WPEE(void) {
    ALOGD("_ZN11N3D_HAL_IMP15getWarpMapMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEERNS0_18N3D_HAL_OUTPUT_WPEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<OCCTuningParam, std::__1::allocator<OCCTuningParam> >::__push_back_slow_path<OCCTuningParam>(OCCTuningParam&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI14OCCTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI14OCCTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Exported Object: CamCalDrv::StCamCalCaldata */
extern "C" __attribute__((visibility("default"))) void* _ZN9CamCalDrv15StCamCalCaldataE = NULL;

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: N3D_HAL_IMP::__initAFWinTransform(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP20__initAFWinTransformEN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN11N3D_HAL_IMP20__initAFWinTransformEN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMPC1ERN9StereoHAL18N3D_HAL_INIT_PARAME(void) {
    ALOGD("_ZN11N3D_HAL_IMPC1ERN9StereoHAL18N3D_HAL_INIT_PARAME() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::_getAFRect(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP10_getAFRectEi(void) {
    ALOGD("_ZN10GF_HAL_IMP10_getAFRectEi() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__logImgInfo(char const*, STEREO_KERNEL_IMG_INFO_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL12__logImgInfoEPKcRK29STEREO_KERNEL_IMG_INFO_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL12__logImgInfoEPKcRK29STEREO_KERNEL_IMG_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail9exceptionE = NULL;

/* Demangled: GF_HAL_IMP::_AFToGFPoint(NSCam::MPoint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP12_AFToGFPointERKN5NSCam6MPointE(void) {
    ALOGD("_ZN10GF_HAL_IMP12_AFToGFPointERKN5NSCam6MPointE() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::setDumpConfig(bool, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL13setDumpConfigEbPN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL13setDumpConfigEbPN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTE() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::_rotateResult(GFBufferInfo&, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP13_rotateResultER12GFBufferInfoPN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN10GF_HAL_IMP13_rotateResultER12GFBufferInfoPN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13getCamCalDataEPj() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper19getSensorIndexByDevEj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail9exceptionE = NULL;

/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper8readDataEjjjjPh() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::dumpN3DRuntimeConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL20dumpN3DRuntimeConfigEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL20dumpN3DRuntimeConfigEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__doStereoKernelInit() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL20__doStereoKernelInitEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL20__doStereoKernelInitEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::WarpMain2(StereoHAL::N3D_HAL_PARAM_WPE&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*, StereoHAL::N3D_HAL_OUTPUT_WPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_18N3D_HAL_OUTPUT_WPEE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_18N3D_HAL_OUTPUT_WPEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_stream_adapter<char>, std::__1::allocator<nlohmann::detail::output_stream_adapter<char> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::~N3D_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMPD1Ev(void) {
    ALOGD("_ZN11N3D_HAL_IMPD1Ev() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::GFHALRun(StereoHAL::GF_HAL_IN_DATA&, StereoHAL::GF_HAL_OUT_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP8GFHALRunERN9StereoHAL14GF_HAL_IN_DATAERNS0_15GF_HAL_OUT_DATAE(void) {
    ALOGD("_ZN10GF_HAL_IMP8GFHALRunERN9StereoHAL14GF_HAL_IN_DATAERNS0_15GF_HAL_OUT_DATAE() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD1Ev() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__prepareStereoExtraData() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP24__prepareStereoExtraDataEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP24__prepareStereoExtraDataEv() called");
    return 0;
}

/* Demangled: StereoHAL::OCC_HAL::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL7OCC_HAL14createInstanceEv(void) {
    ALOGD("_ZN9StereoHAL7OCC_HAL14createInstanceEv() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::__logOCCBufferInfo(OccBufferInfo*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP18__logOCCBufferInfoEP13OccBufferInfoi(void) {
    ALOGD("_ZN11OCC_HAL_IMP18__logOCCBufferInfoEP13OccBufferInfoi() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::N3D_HAL_KERNEL(N3D_HAL_KERNEL_INIT_PARAM) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNELC1E25N3D_HAL_KERNEL_INIT_PARAM(void) {
    ALOGD("_ZN14N3D_HAL_KERNELC1E25N3D_HAL_KERNEL_INIT_PARAM() called");
    return 0;
}

/* Exported Object: N3D_HAL_IMP::__hasCalibration */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP16__hasCalibrationE = NULL;

/* Demangled: OCC_HAL_IMP::OCC_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMPC2Ev(void) {
    ALOGD("_ZN11OCC_HAL_IMPC2Ev() called");
    return 0;
}

/* Exported Object: GF_HAL_IMP::s_wasAFTrigger */
extern "C" __attribute__((visibility("default"))) void* _ZN10GF_HAL_IMP14s_wasAFTriggerE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: N3D_HAL_IMP::__spVoidGeoData */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP15__spVoidGeoDataE = NULL;

/* Demangled: GF_HAL_IMP::_getTouchPoint(NSCam::MPoint) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP14_getTouchPointEN5NSCam6MPointE(void) {
    ALOGD("_ZN10GF_HAL_IMP14_getTouchPointEN5NSCam6MPointE() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper14sensorPowerOffEjj() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__createFEFMRingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL22__createFEFMRingBufferEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL22__createFEFMRingBufferEv() called");
    return 0;
}

/* Exported Object: N3D_HAL_IMP::__sLogLock */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP10__sLogLockE = NULL;

/* Demangled: StereoHAL::N3D_HAL::refineMask(StereoHAL::ENUM_STEREO_SCENARIO, NSCam::IImageBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL7N3D_HAL10refineMaskENS_20ENUM_STEREO_SCENARIOEPN5NSCam12IImageBufferEb(void) {
    ALOGD("_ZN9StereoHAL7N3D_HAL10refineMaskENS_20ENUM_STEREO_SCENARIOEPN5NSCam12IImageBufferEb() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::__logOCCResult() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP14__logOCCResultEv(void) {
    ALOGD("_ZN11OCC_HAL_IMP14__logOCCResultEv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__setFEFMData(StereoHAL::HWFEFM_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL13__setFEFMDataERN9StereoHAL11HWFEFM_DATAE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL13__setFEFMDataERN9StereoHAL11HWFEFM_DATAE() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__updateSceneInfo(StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL17__updateSceneInfoERN9StereoHAL14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL17__updateSceneInfoERN9StereoHAL14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Exported Object: vtable for FastLogger */
extern "C" __attribute__((visibility("default"))) void* _ZTV10FastLogger = NULL;

/* Demangled: N3D_HAL_IMP::__initAFInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP12__initAFInfoEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP12__initAFInfoEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::updateNVRAM(NVRAM_CAMERA_GEOMETRY_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL11updateNVRAMEP28NVRAM_CAMERA_GEOMETRY_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL11updateNVRAMEP28NVRAM_CAMERA_GEOMETRY_STRUCT() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__initN3DGeoInfo(STEREO_KERNEL_GEO_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP16__initN3DGeoInfoEP29STEREO_KERNEL_GEO_INFO_STRUCT(void) {
    ALOGD("_ZN11N3D_HAL_IMP16__initN3DGeoInfoEP29STEREO_KERNEL_GEO_INFO_STRUCT() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::~N3D_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMPD0Ev(void) {
    ALOGD("_ZN11N3D_HAL_IMPD0Ev() called");
    return 0;
}

/* Exported Object: vtable for GF_HAL_IMP */
extern "C" __attribute__((visibility("default"))) void* _ZTV10GF_HAL_IMP = NULL;

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD0Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD0Ev() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__runN3DLearningThread() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL22__runN3DLearningThreadEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL22__runN3DLearningThreadEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__setN3DCaptureParams(StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL21__setN3DCaptureParamsERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL21__setN3DCaptureParamsERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::~OCC_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMPD2Ev(void) {
    ALOGD("_ZN11OCC_HAL_IMPD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<GFTuningParam, std::__1::allocator<GFTuningParam> >::__push_back_slow_path<GFTuningParam>(GFTuningParam&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13GFTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13GFTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::getCalibrationOffsetInNVRAM() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL27getCalibrationOffsetInNVRAMEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL27getCalibrationOffsetInNVRAMEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::WarpMain1(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL9WarpMain1EPN5NSCam12IImageBufferES2_S2_(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL9WarpMain1EPN5NSCam12IImageBufferES2_S2_() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::~N3D_HAL_KERNEL() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNELD2Ev(void) {
    ALOGD("_ZN14N3D_HAL_KERNELD2Ev() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__logRemapInfo(char const*, STEREO_KERNEL_FLOW_INFO_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL14__logRemapInfoEPKcRK30STEREO_KERNEL_FLOW_INFO_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL14__logRemapInfoEPKcRK30STEREO_KERNEL_FLOW_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: N3D_HAL_IMP::__saveNVRAM() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP11__saveNVRAMEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP11__saveNVRAMEv() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::OCC_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMPC1Ev(void) {
    ALOGD("_ZN11OCC_HAL_IMPC1Ev() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::~GF_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMPD2Ev(void) {
    ALOGD("_ZN10GF_HAL_IMPD2Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void) {
    ALOGD("_ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void) {
    ALOGD("_ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj() called");
    return 0;
}

/* Demangled: CamCalDrv::Init(unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv4InitEmPv(void) {
    ALOGD("_ZN9CamCalDrv4InitEmPv() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13sensorPowerOnEjj() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__getN3DLogPath(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL15__getN3DLogPathEPKc(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL15__getN3DLogPathEPKc() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__logAFInitInfo(char const*, STEREO_KERNEL_AF_INIT_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL15__logAFInitInfoEPKcRK28STEREO_KERNEL_AF_INIT_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL15__logAFInitInfoEPKcRK28STEREO_KERNEL_AF_INIT_STRUCT() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::__dumpInitInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP14__dumpInitInfoEv(void) {
    ALOGD("_ZN10GF_HAL_IMP14__dumpInitInfoEv() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail10type_errorE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void) {
    ALOGD("_ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: N3D_HAL_IMP::getStereoExtraData() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP18getStereoExtraDataEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP18getStereoExtraDataEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: CamCalDrv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv15destroyInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: N3D_HAL_KERNEL::__sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN14N3D_HAL_KERNEL7__sLockE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE = NULL;

/* Demangled: StereoHAL::N3D_HAL::createInstance(StereoHAL::N3D_HAL_INIT_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL7N3D_HAL14createInstanceERNS_18N3D_HAL_INIT_PARAME(void) {
    ALOGD("_ZN9StereoHAL7N3D_HAL14createInstanceERNS_18N3D_HAL_INIT_PARAME() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::__logInitData() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP13__logInitDataEv(void) {
    ALOGD("_ZN11OCC_HAL_IMP13__logInitDataEv() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::GF_HAL_IMP(StereoHAL::ENUM_STEREO_SCENARIO, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMPC2EN9StereoHAL20ENUM_STEREO_SCENARIOEb(void) {
    ALOGD("_ZN10GF_HAL_IMPC2EN9StereoHAL20ENUM_STEREO_SCENARIOEb() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__prepareSystemConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP21__prepareSystemConfigEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP21__prepareSystemConfigEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__logInitInfo(STEREO_KERNEL_SET_ENV_INFO_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL13__logInitInfoERK33STEREO_KERNEL_SET_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL13__logInitInfoERK33STEREO_KERNEL_SET_ENV_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for AutoProfileUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV15AutoProfileUtil = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_stream_adapter<char>, std::__1::allocator<nlohmann::detail::output_stream_adapter<char> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: OCC_HAL_IMP::~OCC_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMPD1Ev(void) {
    ALOGD("_ZN11OCC_HAL_IMPD1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper4initEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper4initEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::~N3D_HAL_KERNEL() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNELD1Ev(void) {
    ALOGD("_ZN14N3D_HAL_KERNELD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: N3D_HAL_IMP::__getFEOInputInfo(StereoHAL::ENUM_PASS2_ROUND, StereoHAL::ENUM_STEREO_SCENARIO, STEREO_KERNEL_IMG_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP17__getFEOInputInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOER29STEREO_KERNEL_IMG_INFO_STRUCT(void) {
    ALOGD("_ZN11N3D_HAL_IMP17__getFEOInputInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOER29STEREO_KERNEL_IMG_INFO_STRUCT() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::__setOCCParams(StereoHAL::OCC_HAL_PARAMS&) */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP14__setOCCParamsERN9StereoHAL14OCC_HAL_PARAMSE(void) {
    ALOGD("_ZN11OCC_HAL_IMP14__setOCCParamsERN9StereoHAL14OCC_HAL_PARAMSE() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::__logSetProcData() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMP16__logSetProcDataEv(void) {
    ALOGD("_ZN11OCC_HAL_IMP16__logSetProcDataEv() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::_updateDACInfo(int, GFDacInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP14_updateDACInfoEiR9GFDacInfo(void) {
    ALOGD("_ZN10GF_HAL_IMP14_updateDACInfoEiR9GFDacInfo() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::__faceRectToTriggerPoint(NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP24__faceRectToTriggerPointERN5NSCam5MRectE(void) {
    ALOGD("_ZN10GF_HAL_IMP24__faceRectToTriggerPointERN5NSCam5MRectE() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::~GF_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMPD1Ev(void) {
    ALOGD("_ZN10GF_HAL_IMPD1Ev() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::dumpN3DInitConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL17dumpN3DInitConfigEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL17dumpN3DInitConfigEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::WarpMain2(StereoHAL::N3D_HAL_PARAM&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*, StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL13N3D_HAL_PARAMEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL13N3D_HAL_PARAMEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::N3D_HAL_KERNEL(N3D_HAL_KERNEL_INIT_PARAM) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNELC2E25N3D_HAL_KERNEL_INIT_PARAM(void) {
    ALOGD("_ZN14N3D_HAL_KERNELC2E25N3D_HAL_KERNEL_INIT_PARAM() called");
    return 0;
}

/* Exported Object: N3D_HAL_IMP::__spPreviewKernel */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP17__spPreviewKernelE = NULL;

/* Demangled: GF_HAL_IMP::_setGFParams(StereoHAL::GF_HAL_IN_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP12_setGFParamsERN9StereoHAL14GF_HAL_IN_DATAE(void) {
    ALOGD("_ZN10GF_HAL_IMP12_setGFParamsERN9StereoHAL14GF_HAL_IN_DATAE() called");
    return 0;
}

/* Demangled: CamCalDrvBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13CamCalDrvBase14createInstanceEv(void) {
    ALOGD("_ZN13CamCalDrvBase14createInstanceEv() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::initModel() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL9initModelEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL9initModelEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::GF_HAL_IMP(StereoHAL::ENUM_STEREO_SCENARIO, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMPC1EN9StereoHAL20ENUM_STEREO_SCENARIOEb(void) {
    ALOGD("_ZN10GF_HAL_IMPC1EN9StereoHAL20ENUM_STEREO_SCENARIOEb() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__setLensInfo(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL13__setLensInfoEPf(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL13__setLensInfoEPf() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::logN3DInitInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL14logN3DInitInfoEv(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL14logN3DInitInfoEv() called");
    return 0;
}

/* Exported Object: vtable for ProfileUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV11ProfileUtil = NULL;

/* Demangled: N3D_HAL_IMP::__getStereoRemapInfo(STEREO_KERNEL_FLOW_INFO_STRUCT&, STEREO_KERNEL_FLOW_INFO_STRUCT&, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP20__getStereoRemapInfoER30STEREO_KERNEL_FLOW_INFO_STRUCTS1_N9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN11N3D_HAL_IMP20__getStereoRemapInfoER30STEREO_KERNEL_FLOW_INFO_STRUCTS1_N9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM_WPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMPC2ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE(void) {
    ALOGD("_ZN11N3D_HAL_IMPC2ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC2Ev(void) {
    ALOGD("_ZN9CamCalDrvC2Ev() called");
    return 0;
}

/* Exported Object: N3D_HAL_KERNEL::__sLogLock */
extern "C" __attribute__((visibility("default"))) void* _ZN14N3D_HAL_KERNEL10__sLogLockE = NULL;

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::insert(std::__1::__wrap_iter<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const*>, unsigned long, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE6insertENS_11__wrap_iterIPKSB_EEmRSF_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE6insertENS_11__wrap_iterIPKSB_EEmRSF_() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__initCCImgInfo(STEREO_KERNEL_IMG_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP15__initCCImgInfoER29STEREO_KERNEL_IMG_INFO_STRUCT(void) {
    ALOGD("_ZN11N3D_HAL_IMP15__initCCImgInfoER29STEREO_KERNEL_IMG_INFO_STRUCT() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::_initAFWinTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP19_initAFWinTransformEv(void) {
    ALOGD("_ZN10GF_HAL_IMP19_initAFWinTransformEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::__logGFResult() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP13__logGFResultEv(void) {
    ALOGD("_ZN10GF_HAL_IMP13__logGFResultEv() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::_rotateAFPoint(NSCam::MPoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP14_rotateAFPointERN5NSCam6MPointE(void) {
    ALOGD("_ZN10GF_HAL_IMP14_rotateAFPointERN5NSCam6MPointE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: N3D_HAL_IMP::__dumpLDC() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP9__dumpLDCEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP9__dumpLDCEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: N3D_HAL_KERNEL::__setN3DParams(StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL14__setN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL14__setN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__initN3DHAL(StereoHAL::N3D_HAL_INIT_PARAM_COMMON*) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP12__initN3DHALEPN9StereoHAL25N3D_HAL_INIT_PARAM_COMMONE(void) {
    ALOGD("_ZN11N3D_HAL_IMP12__initN3DHALEPN9StereoHAL25N3D_HAL_INIT_PARAM_COMMONE() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::_runGF(StereoHAL::GF_HAL_OUT_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP6_runGFERN9StereoHAL15GF_HAL_OUT_DATAE(void) {
    ALOGD("_ZN10GF_HAL_IMP6_runGFERN9StereoHAL15GF_HAL_OUT_DATAE() called");
    return 0;
}

/* Exported Object: vtable for N3D_HAL_KERNEL */
extern "C" __attribute__((visibility("default"))) void* _ZTV14N3D_HAL_KERNEL = NULL;

/* Demangled: void nlohmann::detail::dtoa_impl::grisu2<double>(char*, int&, int&, double) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_(void) {
    ALOGD("_ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__transferAFWin(StereoHAL::AF_WIN_COORDINATE_STRUCT const&, StereoHAL::AF_WIN_COORDINATE_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP15__transferAFWinERKN9StereoHAL24AF_WIN_COORDINATE_STRUCTERS1_(void) {
    ALOGD("_ZN11N3D_HAL_IMP15__transferAFWinERKN9StereoHAL24AF_WIN_COORDINATE_STRUCTERS1_() called");
    return 0;
}

/* Demangled: OCC_HAL_IMP::~OCC_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN11OCC_HAL_IMPD0Ev(void) {
    ALOGD("_ZN11OCC_HAL_IMPD0Ev() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::__dumpWorkingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMP19__dumpWorkingBufferEv(void) {
    ALOGD("_ZN10GF_HAL_IMP19__dumpWorkingBufferEv() called");
    return 0;
}

/* Exported Object: vtable for CamCalDrv */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CamCalDrv = NULL;

/* Demangled: N3D_HAL_KERNEL::__logTuningInfo(char const*, STEREO_KERNEL_TUNING_PARA_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL15__logTuningInfoEPKcRK32STEREO_KERNEL_TUNING_PARA_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL15__logTuningInfoEPKcRK32STEREO_KERNEL_TUNING_PARA_STRUCT() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::setNVRAM(NVRAM_CAMERA_GEOMETRY_STRUCT const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL8setNVRAMEPK28NVRAM_CAMERA_GEOMETRY_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL8setNVRAMEPK28NVRAM_CAMERA_GEOMETRY_STRUCT() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::~N3D_HAL_KERNEL() */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNELD0Ev(void) {
    ALOGD("_ZN14N3D_HAL_KERNELD0Ev() called");
    return 0;
}

/* Demangled: GF_HAL_IMP::~GF_HAL_IMP() */
extern "C" __attribute__((visibility("default"))) int _ZN10GF_HAL_IMPD0Ev(void) {
    ALOGD("_ZN10GF_HAL_IMPD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Exported Object: N3D_HAL_IMP::__sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN11N3D_HAL_IMP7__sLockE = NULL;

/* Exported Object: vtable for N3D_HAL_IMP */
extern "C" __attribute__((visibility("default"))) void* _ZTV11N3D_HAL_IMP = NULL;

/* Demangled: N3D_HAL_KERNEL::__logResult(char const*, STEREO_KERNEL_RESULT_STRUCT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL11__logResultEPKcRK27STEREO_KERNEL_RESULT_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL11__logResultEPKcRK27STEREO_KERNEL_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM_WPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMPC1ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE(void) {
    ALOGD("_ZN11N3D_HAL_IMPC1ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__dumpDebugBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP17__dumpDebugBufferEPh(void) {
    ALOGD("_ZN11N3D_HAL_IMP17__dumpDebugBufferEPh() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD2Ev(void) {
    ALOGD("_ZN9CamCalDrvD2Ev() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__dumpN3DLog(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL12__dumpN3DLogENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL12__dumpN3DLogENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__initWorkingBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL19__initWorkingBufferEm(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL19__initWorkingBufferEm() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::__initGraphicBuffers(N3D_HAL_KERNEL_INIT_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL20__initGraphicBuffersER25N3D_HAL_KERNEL_INIT_PARAM(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL20__initGraphicBuffersER25N3D_HAL_KERNEL_INIT_PARAM() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::initN3D(STEREO_KERNEL_SET_ENV_INFO_STRUCT&, NVRAM_CAMERA_GEOMETRY_STRUCT*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL7initN3DER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL7initN3DER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf() called");
    return 0;
}

/* Demangled: N3D_HAL_KERNEL::WarpMain2(StereoHAL::N3D_HAL_PARAM_CAPTURE&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&, STEREO_KERNEL_RESULT_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL21N3D_HAL_PARAM_CAPTUREEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_22N3D_HAL_OUTPUT_CAPTUREER27STEREO_KERNEL_RESULT_STRUCT(void) {
    ALOGD("_ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL21N3D_HAL_PARAM_CAPTUREEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_22N3D_HAL_OUTPUT_CAPTUREER27STEREO_KERNEL_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__push_back_slow_path<android::sp<NSCam::IImageBuffer> const&>(android::sp<NSCam::IImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC1Ev(void) {
    ALOGD("_ZN9CamCalDrvC1Ev() called");
    return 0;
}

/* Demangled: N3D_HAL_IMP::__dumpN3DExtraData() */
extern "C" __attribute__((visibility("default"))) int _ZN11N3D_HAL_IMP18__dumpN3DExtraDataEv(void) {
    ALOGD("_ZN11N3D_HAL_IMP18__dumpN3DExtraDataEv() called");
    return 0;
}
