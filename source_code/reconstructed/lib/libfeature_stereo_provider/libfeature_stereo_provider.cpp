/*
 * Reverse-Engineered Source for: libfeature.stereo.provider.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libfeature_stereo_provider"

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
#include "libfeature_stereo_provider.h"


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

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__move_assign(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail10type_errorE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: SW_OCCTuning::~SW_OCCTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuningD1Ev(void) {
    ALOGD("_ZN12SW_OCCTuningD1Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isDualCamMode() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider13isDualCamModeEv(void) {
    ALOGD("_ZN21StereoSettingProvider13isDualCamModeEv() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__featureStartTime */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider18__featureStartTimeE = NULL;

/* Demangled: ratioToString(ENUM_STEREO_RATIO) */
extern "C" __attribute__((visibility("default"))) int _Z13ratioToString17ENUM_STEREO_RATIO(void) {
    ALOGD("_Z13ratioToString17ENUM_STEREO_RATIO() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail12out_of_rangeE = NULL;

/* Exported Object: StereoFDProxy::__focusedFace */
extern "C" __attribute__((visibility("default"))) void* _ZN13StereoFDProxy13__focusedFaceE = NULL;

/* Demangled: _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE(void) {
    ALOGD("_ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, SW_GF_TUNING_T>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: StereoSettingProvider::setStereoProfile(ENUM_STEREO_SENSOR_PROFILE) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider16setStereoProfileE26ENUM_STEREO_SENSOR_PROFILE(void) {
    ALOGD("_ZN21StereoSettingProvider16setStereoProfileE26ENUM_STEREO_SENSOR_PROFILE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getBokehJpegBufferList() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider22getBokehJpegBufferListEv(void) {
    ALOGD("_ZN21StereoSettingProvider22getBokehJpegBufferListEv() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::__reset() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel7__resetEv(void) {
    ALOGD("_ZN27StereoSettingProviderKernel7__resetEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__detach(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE8__detachEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE8__detachEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC2Ev(void) {
    ALOGD("_ZN9CamCalDrvC2Ev() called");
    return 0;
}

/* Demangled: nlohmann::detail::dtoa_impl::boundaries nlohmann::detail::dtoa_impl::compute_boundaries<double>(double) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9dtoa_impl18compute_boundariesIdEENS1_10boundariesET_(void) {
    ALOGD("_ZN8nlohmann6detail9dtoa_impl18compute_boundariesIdEENS1_10boundariesET_() called");
    return 0;
}

/* Exported Object: guard variable for StereoHAL::StereoArea::applyRatio(ENUM_STEREO_RATIO, StereoHAL::ENUM_IMAGE_RATIO_ALIGNMENT)::RATIO_MAP */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9StereoHAL10StereoArea10applyRatioE17ENUM_STEREO_RATIONS_26ENUM_IMAGE_RATIO_ALIGNMENTEE9RATIO_MAP = NULL;

/* Demangled: HW_MDPPQTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14HW_MDPPQTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoHAL::FEFMSettingProvider::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProvider15destroyInstanceEv(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProvider15destroyInstanceEv() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getMain2FOVCropRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider20getMain2FOVCropRatioEv(void) {
    ALOGD("_ZN21StereoSettingProvider20getMain2FOVCropRatioEv() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::__queryFF(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger9__queryFFEi(void) {
    ALOGD("_ZN14MTKFEFMTrigger9__queryFFEi() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13getCamCalDataEPj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__detach(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj() called");
    return 0;
}

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE5mLockE = NULL;

/* Exported Object: StereoHAL::StereoArea::applyRatio(ENUM_STEREO_RATIO, StereoHAL::ENUM_IMAGE_RATIO_ALIGNMENT)::RATIO_MAP */
extern "C" __attribute__((visibility("default"))) void* _ZZN9StereoHAL10StereoArea10applyRatioE17ENUM_STEREO_RATIONS_26ENUM_IMAGE_RATIO_ALIGNMENTEE9RATIO_MAP = NULL;

/* Demangled: HW_BOKEHTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14HW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Exported Object: MTKFEFMTrigger::__instanceLock */
extern "C" __attribute__((visibility("default"))) void* _ZN14MTKFEFMTrigger14__instanceLockE = NULL;

/* Exported Object: vtable for NSCam::CamCalHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12CamCalHelperE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: StereoHAL::FEFMSettingProvider::FEFMSettingProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProviderC1Ev(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProviderC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: StereoHAL::FEFMSettingProvider::~FEFMSettingProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProviderD2Ev(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProviderD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Exported Object: vtable for Pass2A_B_Crop_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV26Pass2A_B_Crop_SizeProvider = NULL;

/* Demangled: SW_OCCTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN12SW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC1Ev() called");
    return 0;
}

/* Demangled: void nlohmann::detail::dtoa_impl::grisu2<double>(char*, int&, int&, double) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_(void) {
    ALOGD("_ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail11parse_errorE = NULL;

/* Demangled: StereoTuningProviderKernel::~StereoTuningProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernelD0Ev(void) {
    ALOGD("_ZN26StereoTuningProviderKernelD0Ev() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::FEFMTrigger_set_reqular_trigger(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger31FEFMTrigger_set_reqular_triggerEi(void) {
    ALOGD("_ZN14MTKFEFMTrigger31FEFMTrigger_set_reqular_triggerEi() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::~MTKFEFMTrigger() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTriggerD0Ev(void) {
    ALOGD("_ZN14MTKFEFMTriggerD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getStereoCameraFOV(SensorFOV&, SensorFOV&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider18getStereoCameraFOVER9SensorFOVS1_j(void) {
    ALOGD("_ZN21StereoSettingProvider18getStereoCameraFOVER9SensorFOVS1_j() called");
    return 0;
}

/* Demangled: SW_N3DTuning::~SW_N3DTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuningD2Ev(void) {
    ALOGD("_ZN12SW_N3DTuningD2Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD2Ev() called");
    return 0;
}

/* Demangled: StereoTuningProviderKernel::getTuningParams(StereoHAL::ENUM_STEREO_TUNING, StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernel15getTuningParamsEN9StereoHAL18ENUM_STEREO_TUNINGERNS0_13TuningQuery_TE(void) {
    ALOGD("_ZN26StereoTuningProviderKernel15getTuningParamsEN9StereoHAL18ENUM_STEREO_TUNINGERNS0_13TuningQuery_TE() called");
    return 0;
}

/* Demangled: HW_MDPPQTuning::~HW_MDPPQTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuningD1Ev(void) {
    ALOGD("_ZN14HW_MDPPQTuningD1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for HW_MDPPQTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV14HW_MDPPQTuning = NULL;

/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper14sensorPowerOffEjj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getMain2OutputFrequency(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider23getMain2OutputFrequencyEN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN21StereoSettingProvider23getMain2OutputFrequencyEN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::__emplace_unique_key_args<ENUM_STEREO_RATIO, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>, std::__1::tuple<> >(ENUM_STEREO_RATIO const&, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail10type_errorE = NULL;

/* Exported Object: vtable for nlohmann::detail::other_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail11other_errorE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE = NULL;

/* Demangled: HW_MDPPQTuning::HW_MDPPQTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14HW_MDPPQTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: CamCalDrvBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13CamCalDrvBase14createInstanceEv(void) {
    ALOGD("_ZN13CamCalDrvBase14createInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__emplace_multi<std::__1::pair<ENUM_STEREO_RATIO const, bool> const&>(std::__1::pair<ENUM_STEREO_RATIO const, bool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE15__emplace_multiIJRKNS_4pairIKS2_bEEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE15__emplace_multiIJRKNS_4pairIKS2_bEEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_() called");
    return 0;
}

/* Demangled: StereoFDProxy::setFocusedFace(MtkCameraFace&) */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy14setFocusedFaceER13MtkCameraFace(void) {
    ALOGD("_ZN13StereoFDProxy14setFocusedFaceER13MtkCameraFace() called");
    return 0;
}

/* Demangled: StereoSizeProvider::StereoSizeProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProviderC1Ev(void) {
    ALOGD("_ZN18StereoSizeProviderC1Ev() called");
    return 0;
}

/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::less<void>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::at(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_bxydS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEE2atERSF_(void) {
    ALOGD("_ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_bxydS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEE2atERSF_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isWidePlusTele(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider14isWidePlusTeleEj(void) {
    ALOGD("_ZN21StereoSettingProvider14isWidePlusTeleEj() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getISPProfileForP1YUV() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider21getISPProfileForP1YUVEv(void) {
    ALOGD("_ZN21StereoSettingProvider21getISPProfileForP1YUVEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoHAL::StereoArea> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, StereoHAL::StereoArea>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: HW_FMTuning::~HW_FMTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuningD0Ev(void) {
    ALOGD("_ZN11HW_FMTuningD0Ev() called");
    return 0;
}

/* Demangled: SW_OCCTuning::~SW_OCCTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuningD2Ev(void) {
    ALOGD("_ZN12SW_OCCTuningD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::bitset<32u>::to_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16bitsetILj32EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_(void) {
    ALOGD("_ZNKSt3__16bitsetILj32EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_N3D_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: StereoSize::getStereoArea1x(StereoSizeConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10StereoSize15getStereoArea1xERK16StereoSizeConfig(void) {
    ALOGD("_ZN10StereoSize15getStereoArea1xERK16StereoSizeConfig() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MRect>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MRect> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail12out_of_rangeE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getOCCTuningInfo(unsigned int&, std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider16getOCCTuningInfoERjRNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEENS_20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider16getOCCTuningInfoERjRNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEENS_20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__tree_node<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::__emplace_unique_key_args<StereoHAL::ENUM_STEREO_TUNING, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING const&>, std::__1::tuple<> >(StereoHAL::ENUM_STEREO_TUNING const&, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_() called");
    return 0;
}

/* Demangled: StereoSizeProvider::getPass1ActiveArrayCrop(StereoHAL::ENUM_STEREO_SENSOR, NSCam::MRect&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider23getPass1ActiveArrayCropEN9StereoHAL18ENUM_STEREO_SENSORERN5NSCam5MRectEb(void) {
    ALOGD("_ZN18StereoSizeProvider23getPass1ActiveArrayCropEN9StereoHAL18ENUM_STEREO_SENSORERN5NSCam5MRectEb() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getSWBokehDoFValue(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider18getSWBokehDoFValueEj(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider18getSWBokehDoFValueEj() called");
    return 0;
}

/* Demangled: SW_GFTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN11SW_GFTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::insert(std::__1::__wrap_iter<int const*>, int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertENS_11__wrap_iterIPKiEEOi(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6insertENS_11__wrap_iterIPKiEEOi() called");
    return 0;
}

/* Exported Object: vtable for MTKFEFMTrigger */
extern "C" __attribute__((visibility("default"))) void* _ZTV14MTKFEFMTrigger = NULL;

/* Demangled: StereoSettingProviderKernel::getSensorCombinationSetting(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel27getSensorCombinationSettingEj(void) {
    ALOGD("_ZN27StereoSettingProviderKernel27getSensorCombinationSettingEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__emplace_multi<std::__1::pair<ENUM_STEREO_RATIO const, NSCam::MSize> const&>(std::__1::pair<ENUM_STEREO_RATIO const, NSCam::MSize> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKS2_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKS2_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::vector(std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getSWBokehTuningInfo(std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider20getSWBokehTuningInfoERNSt3__16vectorINS1_4pairINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiEENS7_ISA_EEEERNS2_IiNS7_IiEEEE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider20getSWBokehTuningInfoERNSt3__16vectorINS1_4pairINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiEENS7_ISA_EEEERNS2_IiNS7_IiEEEE() called");
    return 0;
}

/* Demangled: __getSensorCombinationSetting(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29__getSensorCombinationSettingj(void) {
    ALOGD("_Z29__getSensorCombinationSettingj() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getLDCTable() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider11getLDCTableEv(void) {
    ALOGD("_ZN21StereoSettingProvider11getLDCTableEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEEEvT_SI_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEEEvT_SI_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::__fill_n_false<std::__1::__bitset<1u, 6u> >(std::__1::__bit_iterator<std::__1::__bitset<1u, 6u>, false, 0>, std::__1::__bitset<1u, 6u>::size_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__fill_n_falseINS_8__bitsetILj1ELj6EEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS4_9size_typeE(void) {
    ALOGD("_ZNSt3__114__fill_n_falseINS_8__bitsetILj1ELj6EEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS4_9size_typeE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: base64Decode(char const*, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
extern "C" __attribute__((visibility("default"))) int _Z12base64DecodePKcRNSt3__16vectorIhNS1_9allocatorIhEEEE(void) {
    ALOGD("_Z12base64DecodePKcRNSt3__16vectorIhNS1_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS8_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS8_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Exported Object: StereoTuningProviderKernel::__instanceLock */
extern "C" __attribute__((visibility("default"))) void* _ZN26StereoTuningProviderKernel14__instanceLockE = NULL;

/* Demangled: StereoHAL::FEFMSettingProvider::FEFMSettingProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProviderC2Ev(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProviderC2Ev() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_B_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: MTKFEFMTrigger::FEFMTrigger_init(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger16FEFMTrigger_initEbb(void) {
    ALOGD("_ZN14MTKFEFMTrigger16FEFMTrigger_initEbb() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: HW_FETuning::HW_FETuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11HW_FETuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::input_buffer_adapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail20input_buffer_adapterE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_S8_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_S8_EE() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: __floatundisf */
extern "C" __attribute__((visibility("default"))) int __floatundisf(void) {
    ALOGD("__floatundisf() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperC2Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperC2Ev() called");
    return 0;
}

/* Demangled: StereoTuningProviderKernel::~StereoTuningProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernelD1Ev(void) {
    ALOGD("_ZN26StereoTuningProviderKernelD1Ev() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::~MTKFEFMTrigger() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTriggerD1Ev(void) {
    ALOGD("_ZN14MTKFEFMTriggerD1Ev() called");
    return 0;
}

/* Demangled: CamCalDrv::getDumpEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv13getDumpEnableEv(void) {
    ALOGD("_ZN9CamCalDrv13getDumpEnableEv() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isSensorAF(int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider10isSensorAFEi(void) {
    ALOGD("_ZN21StereoSettingProvider10isSensorAFEi() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getVSDoFP1ResizeQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider23getVSDoFP1ResizeQualityEv(void) {
    ALOGD("_ZN21StereoSettingProvider23getVSDoFP1ResizeQualityEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: StereoFDProxy::resetFocusedFace() */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy16resetFocusedFaceEv(void) {
    ALOGD("_ZN13StereoFDProxy16resetFocusedFaceEv() called");
    return 0;
}

/* Demangled: HW_MDPPQTuning::~HW_MDPPQTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuningD2Ev(void) {
    ALOGD("_ZN14HW_MDPPQTuningD2Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper8readDataEjjjjPh() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_Crop_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: StereoHAL::StereoTuningProvider::getGFTuningInfo(unsigned int&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider15getGFTuningInfoERjRNSt3__16vectorIiNS2_9allocatorIiEEEES7_S7_RNS3_INS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS4_IcEEEEiEENS4_ISE_EEEENS_20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider15getGFTuningInfoERjRNSt3__16vectorIiNS2_9allocatorIiEEEES7_S7_RNS3_INS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS4_IcEEEEiEENS4_ISE_EEEENS_20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getCalibrationDistance(StereoHAL::ENUM_STEREO_SENSOR, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider22getCalibrationDistanceEN9StereoHAL18ENUM_STEREO_SENSORERjS2_(void) {
    ALOGD("_ZN21StereoSettingProvider22getCalibrationDistanceEN9StereoHAL18ENUM_STEREO_SENSORERjS2_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: StereoSettingProviderKernel::__instanceLock */
extern "C" __attribute__((visibility("default"))) void* _ZN27StereoSettingProviderKernel14__instanceLockE = NULL;

/* Demangled: StereoSettingProviderKernel::__saveSettingToFile(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel19__saveSettingToFileERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN27StereoSettingProviderKernel19__saveSettingToFileERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: StereoSettingProviderKernel::getSensorSetting(int) */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel16getSensorSettingEi(void) {
    ALOGD("_ZN27StereoSettingProviderKernel16getSensorSettingEi() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_3_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE5mLockE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_GF_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: StereoTuningProviderKernel::__instance */
extern "C" __attribute__((visibility("default"))) void* _ZN26StereoTuningProviderKernel10__instanceE = NULL;

/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void) {
    ALOGD("_ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__stereoShotMode */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider16__stereoShotModeE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: sizeCache1x */
extern "C" __attribute__((visibility("default"))) void* sizeCache1x = NULL;

/* Demangled: HW_MDPPQTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN14HW_MDPPQTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Exported Object: vtable for HW_OCCTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV12HW_OCCTuning = NULL;

/* Demangled: StereoSettingProvider::getSensorRawFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider18getSensorRawFormatEi(void) {
    ALOGD("_ZN21StereoSettingProvider18getSensorRawFormatEi() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getStereoSensorDevIndex(int&, int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider23getStereoSensorDevIndexERiS0_j(void) {
    ALOGD("_ZN21StereoSettingProvider23getStereoSensorDevIndexERiS0_j() called");
    return 0;
}

/* Demangled: stringToSize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _Z12stringToSizeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z12stringToSizeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: StereoFDProxy::getFocusedFaceRect() */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy18getFocusedFaceRectEv(void) {
    ALOGD("_ZN13StereoFDProxy18getFocusedFaceRectEv() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getHWOCCTuningInfo(NSCam::NSIoPipe::OCCConfig&, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider18getHWOCCTuningInfoERN5NSCam8NSIoPipe9OCCConfigENS_20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider18getHWOCCTuningInfoERN5NSCam8NSIoPipe9OCCConfigENS_20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: HW_FMTuning::HW_FMTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11HW_FMTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isBayerPlusMono() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider15isBayerPlusMonoEv(void) {
    ALOGD("_ZN21StereoSettingProvider15isBayerPlusMonoEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: StereoSizeProvider::StereoSizeProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProviderC2Ev(void) {
    ALOGD("_ZN18StereoSizeProviderC2Ev() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::SW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14SW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__tree_node<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::__emplace_unique_key_args<StereoHAL::ENUM_STEREO_TUNING, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING&&>, std::__1::tuple<> >(StereoHAL::ENUM_STEREO_TUNING const&, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger11getInstanceEv(void) {
    ALOGD("_ZN14MTKFEFMTrigger11getInstanceEv() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getStereoBaseline(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider17getStereoBaselineEj(void) {
    ALOGD("_ZN21StereoSettingProvider17getStereoBaselineEj() called");
    return 0;
}

/* Exported Object: g_sensorSettings */
extern "C" __attribute__((visibility("default"))) void* g_sensorSettings = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__swap_out_circular_buffer(std::__1::__split_buffer<float, std::__1::allocator<float>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE26__swap_out_circular_bufferERNS_14__split_bufferIfRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE26__swap_out_circular_bufferERNS_14__split_bufferIfRS2_EE() called");
    return 0;
}

/* Demangled: StereoSizeProvider::getcustomYUVSize(StereoHAL::ENUM_STEREO_SENSOR, NSImageio::NSIspio::EPortIndex, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider16getcustomYUVSizeEN9StereoHAL18ENUM_STEREO_SENSOREN9NSImageio7NSIspio10EPortIndexERN5NSCam5MSizeE(void) {
    ALOGD("_ZN18StereoSizeProvider16getcustomYUVSizeEN9StereoHAL18ENUM_STEREO_SENSOREN9NSImageio7NSIspio10EPortIndexERN5NSCam5MSizeE() called");
    return 0;
}

/* Demangled: HW_FMTuning::~HW_FMTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuningD1Ev(void) {
    ALOGD("_ZN11HW_FMTuningD1Ev() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long long&>(long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_() called");
    return 0;
}

/* Exported Object: vtable for StereoSizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV18StereoSizeProvider = NULL;

/* Exported Object: vtable for StereoTuningBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV16StereoTuningBase = NULL;

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, unsigned int, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEjLi0EEEvRKT_RT0_(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEjLi0EEEvRKT_RT0_() called");
    return 0;
}

/* Demangled: StereoSizeProvider::thirdPartyDepthmapSize(ENUM_STEREO_RATIO, StereoHAL::ENUM_STEREO_SCENARIO) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18StereoSizeProvider22thirdPartyDepthmapSizeE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZNK18StereoSizeProvider22thirdPartyDepthmapSizeE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__emplace_multi<std::__1::pair<int const, int> const&>(std::__1::pair<int const, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE15__emplace_multiIJRKNS_4pairIKiiEEEEENS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE15__emplace_multiIJRKNS_4pairIKiiEEEEENS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEDpOT_() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getGFDoFValue(unsigned int, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider13getGFDoFValueEjNS_20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider13getGFDoFValueEjNS_20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: HW_WMFTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN12HW_WMFTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Exported Object: vtable for StereoHAL::FEFMSettingProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9StereoHAL19FEFMSettingProviderE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Exported Object: vtable for Pass2A_2_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV21Pass2A_2_SizeProvider = NULL;

/* Demangled: HW_BOKEHTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN14HW_BOKEHTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEEC2EjjSA_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEEC2EjjSA_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>::push_back(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIjRNS_9allocatorIjEEE9push_backEOj(void) {
    ALOGD("_ZNSt3__114__split_bufferIjRNS_9allocatorIjEEE9push_backEOj() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getCalibrationData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider18getCalibrationDataEPvj(void) {
    ALOGD("_ZN21StereoSettingProvider18getCalibrationDataEPvj() called");
    return 0;
}

/* Demangled: std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >::__swap_out_circular_buffer(std::__1::__split_buffer<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__move_assign(std::__1::vector<float, std::__1::allocator<float> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::LDCEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider10LDCEnabledEv(void) {
    ALOGD("_ZN21StereoSettingProvider10LDCEnabledEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__1::function<bool (int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&)>::operator()(int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_(void) {
    ALOGD("_ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getPass2MDPPQParam(StereoHAL::ENUM_PASS2_ROUND, VSDOFParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider18getPass2MDPPQParamENS_16ENUM_PASS2_ROUNDER10VSDOFParam(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider18getPass2MDPPQParamENS_16ENUM_PASS2_ROUNDER10VSDOFParam() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN14SW_BOKEHTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: SW_N3DTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12SW_N3DTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: StereoSettingProvider::fefmBlockSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider13fefmBlockSizeEi(void) {
    ALOGD("_ZN21StereoSettingProvider13fefmBlockSizeEi() called");
    return 0;
}

/* Demangled: StereoSettingProvider::setStereoShotMode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider17setStereoShotModeEj(void) {
    ALOGD("_ZN21StereoSettingProvider17setStereoShotModeEj() called");
    return 0;
}

/* Demangled: std::__1::map<int, char const*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, char const*> > >::at(int const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__13mapIiPKcNS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEE2atERS7_(void) {
    ALOGD("_ZNKSt3__13mapIiPKcNS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEE2atERS7_() called");
    return 0;
}

/* Exported Object: vtable for HW_FMTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV11HW_FMTuning = NULL;

/* Demangled: StereoTuningProviderKernel::StereoTuningProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernelC1Ev(void) {
    ALOGD("_ZN26StereoTuningProviderKernelC1Ev() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::MTKFEFMTrigger() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTriggerC1Ev(void) {
    ALOGD("_ZN14MTKFEFMTriggerC1Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isLogEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider12isLogEnabledEv(void) {
    ALOGD("_ZN21StereoSettingProvider12isLogEnabledEv() called");
    return 0;
}

/* Demangled: stringToRatio(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _Z13stringToRatioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z13stringToRatioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__imageRatio */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider12__imageRatioE = NULL;

/* Demangled: StereoTuningProviderKernel::~StereoTuningProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernelD2Ev(void) {
    ALOGD("_ZN26StereoTuningProviderKernelD2Ev() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::~MTKFEFMTrigger() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTriggerD2Ev(void) {
    ALOGD("_ZN14MTKFEFMTriggerD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for StereoSettingProviderKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTV27StereoSettingProviderKernel = NULL;

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_P_Crop_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE5mLockE = NULL;

/* Demangled: HW_DPETuning::__initBBox(NSCam::NSIoPipe::DVEConfig*, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_DPETuning10__initBBoxEPN5NSCam8NSIoPipe9DVEConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN12HW_DPETuning10__initBBoxEPN5NSCam8NSIoPipe9DVEConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: HW_OCCTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_OCCTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN12HW_OCCTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::bitset<6u>::to_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__16bitsetILj6EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_(void) {
    ALOGD("_ZNKSt3__16bitsetILj6EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__assign_unique<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const*>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const*, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__assign_uniqueIPKNS_4pairIKS7_iEEEEvT_SL_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__assign_uniqueIPKNS_4pairIKS7_iEEEEvT_SL_() called");
    return 0;
}

/* Demangled: SW_N3DTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN12SW_N3DTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEj() called");
    return 0;
}

/* Demangled: StereoSettingProvider::setPreviewSize(NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider14setPreviewSizeEN5NSCam5MSizeE(void) {
    ALOGD("_ZN21StereoSettingProvider14setPreviewSizeEN5NSCam5MSizeE() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail9exceptionE = NULL;

/* Demangled: std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_P_2_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE5mLockE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: StereoHAL::FEFMSettingProvider::needToRunFEFM(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProvider13needToRunFEFMEiib(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProvider13needToRunFEFMEiib() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__logicalDeviceID */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider17__logicalDeviceIDE = NULL;

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_B_Crop_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE5mLockE = NULL;

/* Exported Object: vtable for Pass2A_P_3_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV23Pass2A_P_3_SizeProvider = NULL;

/* Demangled: StereoHAL::StereoTuningProvider::getWMFTuningInfo(std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >&, std::__1::vector<void*, std::__1::allocator<void*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider16getWMFTuningInfoERNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS1_9allocatorIS5_EEEERNS2_IPvNS6_ISA_EEEE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider16getWMFTuningInfoERNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS1_9allocatorIS5_EEEERNS2_IPvNS6_ISA_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: StereoTuningProviderKernel::init() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernel4initEv(void) {
    ALOGD("_ZN26StereoTuningProviderKernel4initEv() called");
    return 0;
}

/* Exported Object: StereoFDProxy::__faces */
extern "C" __attribute__((visibility("default"))) void* _ZN13StereoFDProxy7__facesE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__tree_node<std::__1::__value_type<int, StereoHAL::StereoArea>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoHAL::StereoArea> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: StereoSettingProvider::setStereoFeatureMode(int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider20setStereoFeatureModeEibb(void) {
    ALOGD("_ZN21StereoSettingProvider20setStereoFeatureModeEibb() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getMaxSceneInfoBufferSizeInBytes() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider32getMaxSceneInfoBufferSizeInBytesEv(void) {
    ALOGD("_ZN21StereoSettingProvider32getMaxSceneInfoBufferSizeInBytesEv() called");
    return 0;
}

/* Demangled: from_json(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, StereoSensorSetting_T&) */
extern "C" __attribute__((visibility("default"))) int _Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER21StereoSensorSetting_T(void) {
    ALOGD("_Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER21StereoSensorSetting_T() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_Crop_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE8instanceEvE9_instance = NULL;

/* Exported Object: vtable for HW_DPETuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV12HW_DPETuning = NULL;

/* Demangled: StereoSettingProvider::updateSensorScenario(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider20updateSensorScenarioEjj(void) {
    ALOGD("_ZN21StereoSettingProvider20updateSensorScenarioEjj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: StereoSizeProvider::__P1Lock */
extern "C" __attribute__((visibility("default"))) void* _ZN18StereoSizeProvider8__P1LockE = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__detach(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE8__detachEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE8__detachEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: SW_N3DTuning::SW_N3DTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12SW_N3DTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getExtraDataBufferSizeInBytes() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider29getExtraDataBufferSizeInBytesEv(void) {
    ALOGD("_ZN21StereoSettingProvider29getExtraDataBufferSizeInBytesEv() called");
    return 0;
}

/* Demangled: HW_FMTuning::~HW_FMTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuningD2Ev(void) {
    ALOGD("_ZN11HW_FMTuningD2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Exported Object: vtable for CamCalDrv */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CamCalDrv = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE = NULL;

/* Demangled: HW_OCCTuning::__updateROI(NSCam::NSIoPipe::OCCConfig&, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_OCCTuning11__updateROIERN5NSCam8NSIoPipe9OCCConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN12HW_OCCTuning11__updateROIERN5NSCam8NSIoPipe9OCCConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getDepthmapInfo(ENUM_STEREO_RATIO, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider15getDepthmapInfoE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN21StereoSettingProvider15getDepthmapInfoE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: StereoFDProxy::__focusLock */
extern "C" __attribute__((visibility("default"))) void* _ZN13StereoFDProxy11__focusLockE = NULL;

/* Demangled: StereoSizeProvider::getDualcamP2IMGOYuvCropResizeInfo(int, NSCam::MRect&, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider33getDualcamP2IMGOYuvCropResizeInfoEiRN5NSCam5MRectERNS0_5MSizeE(void) {
    ALOGD("_ZN18StereoSizeProvider33getDualcamP2IMGOYuvCropResizeInfoEiRN5NSCam5MRectERNS0_5MSizeE() called");
    return 0;
}

/* Demangled: SW_GFTuning::__getDofValue(unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN11SW_GFTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__vdeallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE13__vdeallocateEv(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE13__vdeallocateEv() called");
    return 0;
}

/* Demangled: SW_GFTuning::SW_GFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11SW_GFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: sensorScenarioToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z22sensorScenarioToStringj(void) {
    ALOGD("_Z22sensorScenarioToStringj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::push_back(bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb() called");
    return 0;
}

/* Exported Object: vtable for AutoProfileUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV15AutoProfileUtil = NULL;

/* Demangled: SW_OCCTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN12SW_OCCTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isDeNoise() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider9isDeNoiseEv(void) {
    ALOGD("_ZN21StereoSettingProvider9isDeNoiseEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_() called");
    return 0;
}

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_P_3_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE5mLockE = NULL;

/* Demangled: SW_BOKEHTuning::~SW_BOKEHTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuningD0Ev(void) {
    ALOGD("_ZN14SW_BOKEHTuningD0Ev() called");
    return 0;
}

/* Demangled: SW_N3DTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN12SW_N3DTuning3logER10FastLoggerb() called");
    return 0;
}

/* Exported Object: StereoHAL::FEFMSettingProvider::__Lock */
extern "C" __attribute__((visibility("default"))) void* _ZN9StereoHAL19FEFMSettingProvider6__LockE = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE8instanceEvE9_instance = NULL;

/* Exported Object: vtable for SW_OCCTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SW_OCCTuning = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Exported Object: vtable for FastLogger */
extern "C" __attribute__((visibility("default"))) void* _ZTV10FastLogger = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_2_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE5mLockE = NULL;

/* Exported Object: vtable for Pass2A_P_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV21Pass2A_P_SizeProvider = NULL;

/* Demangled: HW_OCCTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12HW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Demangled: __getSensorSettings(unsigned int, StereoSensorSetting_T*&, StereoSensorSetting_T*&) */
extern "C" __attribute__((visibility("default"))) int _Z19__getSensorSettingsjRP21StereoSensorSetting_TS1_(void) {
    ALOGD("_Z19__getSensorSettingsjRP21StereoSensorSetting_TS1_() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getStereoSensorIndex(int&, int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider20getStereoSensorIndexERiS0_j(void) {
    ALOGD("_ZN21StereoSettingProvider20getStereoSensorIndexERiS0_j() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail11parse_errorE = NULL;

/* Exported Object: nlohmann::detail::dtoa_impl::get_cached_power_for_binary_exponent(int)::kCachedPowers */
extern "C" __attribute__((visibility("default"))) void* _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers = NULL;

/* Demangled: HW_BOKEHTuning::HW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14HW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: HW_BOKEHTuning::~HW_BOKEHTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuningD0Ev(void) {
    ALOGD("_ZN14HW_BOKEHTuningD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__tree_node<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EEPj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EEPj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_() called");
    return 0;
}

/* Demangled: StereoTuningProviderKernel::StereoTuningProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernelC2Ev(void) {
    ALOGD("_ZN26StereoTuningProviderKernelC2Ev() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::MTKFEFMTrigger() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTriggerC2Ev(void) {
    ALOGD("_ZN14MTKFEFMTriggerC2Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::_getStereoFeatureModeString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider27_getStereoFeatureModeStringEi(void) {
    ALOGD("_ZN21StereoSettingProvider27_getStereoFeatureModeStringEi() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: HW_FMTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN11HW_FMTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Exported Object: vtable for Pass2A_B_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV21Pass2A_B_SizeProvider = NULL;

/* Exported Object: vtable for nlohmann::detail::input_stream_adapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail20input_stream_adapterE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEEE = NULL;

/* Exported Object: vtable for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail10type_errorE = NULL;

/* Demangled: StereoSizeProvider::getPass1Size(StereoHAL::ENUM_STEREO_SENSOR, NSCam::EImageFormat, NSImageio::NSIspio::EPortIndex, StereoHAL::ENUM_STEREO_SCENARIO, NSCam::MRect&, NSCam::MSize&, unsigned int&, ENUM_STEREO_RATIO) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider12getPass1SizeEN9StereoHAL18ENUM_STEREO_SENSOREN5NSCam12EImageFormatEN9NSImageio7NSIspio10EPortIndexENS0_20ENUM_STEREO_SCENARIOERNS2_5MRectERNS2_5MSizeERj17ENUM_STEREO_RATIO(void) {
    ALOGD("_ZN18StereoSizeProvider12getPass1SizeEN9StereoHAL18ENUM_STEREO_SENSOREN5NSCam12EImageFormatEN9NSImageio7NSIspio10EPortIndexENS0_20ENUM_STEREO_SCENARIOERNS2_5MRectERNS2_5MSizeERj17ENUM_STEREO_RATIO() called");
    return 0;
}

/* Demangled: HW_DPETuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_DPETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12HW_DPETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for Pass2A_P_Crop_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV26Pass2A_P_Crop_SizeProvider = NULL;

/* Demangled: HW_WMFTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN12HW_WMFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_N3D_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISR_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISR_EEEEEEDpOT_() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail9exceptionE = NULL;

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for Pass2A_Crop_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV24Pass2A_Crop_SizeProvider = NULL;

/* Demangled: HW_OCCTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN12HW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: StereoSizeProvider::__getCenterCrop(NSCam::MSize&, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider15__getCenterCropERN5NSCam5MSizeERNS0_5MRectE(void) {
    ALOGD("_ZN18StereoSizeProvider15__getCenterCropERN5NSCam5MSizeERNS0_5MRectE() called");
    return 0;
}

/* Exported Object: QUERY_KEY_BOKEH_STRENTH_NAMES */
extern "C" __attribute__((visibility("default"))) void* QUERY_KEY_BOKEH_STRENTH_NAMES = NULL;

/* Exported Object: StereoSettingProviderKernel::__instance */
extern "C" __attribute__((visibility("default"))) void* _ZN27StereoSettingProviderKernel10__instanceE = NULL;

/* Demangled: HW_WMFTuning::HW_WMFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12HW_WMFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Exported Object: MTKFEFMTrigger::__FEFMTrigger */
extern "C" __attribute__((visibility("default"))) void* _ZN14MTKFEFMTrigger13__FEFMTriggerE = NULL;

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: HW_FETuning::~HW_FETuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuningD0Ev(void) {
    ALOGD("_ZN11HW_FETuningD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_OCC_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__emplace_hint_unique_key_args<std::__1::pair<int, int>, std::__1::pair<std::__1::pair<int, int> const, ENUM_STEREO_RATIO> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*, int>, std::__1::pair<int, int> const&, std::__1::pair<std::__1::pair<int, int> const, ENUM_STEREO_RATIO> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIS3_JRKNS2_IKS3_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SM_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIS3_JRKNS2_IKS3_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SM_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >::__move_assign(std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE13__move_assignERS5_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE13__move_assignERS5_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Demangled: HW_BOKEHTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN14HW_BOKEHTuning3logER10FastLoggerb() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__vsdofScenario */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider15__vsdofScenarioE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__find_equal<std::__1::pair<int, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::pair<int, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_() called");
    return 0;
}

/* Demangled: StereoFDProxy::getFaces() */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy8getFacesEv(void) {
    ALOGD("_ZN13StereoFDProxy8getFacesEv() called");
    return 0;
}

/* Demangled: std::__1::__wrap_iter<unsigned int*> std::__1::unique<std::__1::__wrap_iter<unsigned int*>, std::__1::__equal_to<unsigned int, unsigned int> >(std::__1::__wrap_iter<unsigned int*>, std::__1::__wrap_iter<unsigned int*>, std::__1::__equal_to<unsigned int, unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16uniqueINS_11__wrap_iterIPjEENS_10__equal_toIjjEEEET_S6_S6_T0_(void) {
    ALOGD("_ZNSt3__16uniqueINS_11__wrap_iterIPjEENS_10__equal_toIjjEEEET_S6_S6_T0_() called");
    return 0;
}

/* Demangled: SW_N3DTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN12SW_N3DTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_() called");
    return 0;
}

/* Demangled: std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > >::operator[](unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIjjNS_4lessIjEENS_9allocatorINS_4pairIKjjEEEEEixERS5_(void) {
    ALOGD("_ZNSt3__13mapIjjNS_4lessIjEENS_9allocatorINS_4pairIKjjEEEEEixERS5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MRect> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_() called");
    return 0;
}

/* Demangled: featureModeToStrings(int) */
extern "C" __attribute__((visibility("default"))) int _Z20featureModeToStringsi(void) {
    ALOGD("_Z20featureModeToStringsi() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::destroy(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Exported Object: vtable for Pass2A_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV19Pass2A_SizeProvider = NULL;

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::vector<int, std::__1::allocator<int> >, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEELi0EEEvRKT_RT0_(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEELi0EEEvRKT_RT0_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail12out_of_rangeE = NULL;

/* Demangled: SW_GFTuning::~SW_GFTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuningD0Ev(void) {
    ALOGD("_ZN11SW_GFTuningD0Ev() called");
    return 0;
}

/* Demangled: SW_OCCTuning::SW_OCCTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12SW_OCCTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE(void) {
    ALOGD("_ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE5mLockE = NULL;

/* Demangled: SW_BOKEHTuning::~SW_BOKEHTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuningD1Ev(void) {
    ALOGD("_ZN14SW_BOKEHTuningD1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void) {
    ALOGD("_ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getMain1FOVCropRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider20getMain1FOVCropRatioEv(void) {
    ALOGD("_ZN21StereoSettingProvider20getMain1FOVCropRatioEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: StereoFDProxy::setFaces(MtkCameraFaceMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy8setFacesEP21MtkCameraFaceMetadata(void) {
    ALOGD("_ZN13StereoFDProxy8setFacesEP21MtkCameraFaceMetadata() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSL_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSL_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN14SW_BOKEHTuning3logER10FastLoggerb() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*> > > > std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS3_PvEENS_22__tree_node_destructorINS8_ISN_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS3_PvEENS_22__tree_node_destructorINS8_ISN_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned char, std::__1::allocator<unsigned char>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void) {
    ALOGD("_ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getDPETuningInfo(NSCam::NSIoPipe::DVEConfig*, StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider16getDPETuningInfoEPN5NSCam8NSIoPipe9DVEConfigENS_20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider16getDPETuningInfoEPN5NSCam8NSIoPipe9DVEConfigENS_20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: HW_MDPPQTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN14HW_MDPPQTuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: HW_BOKEHTuning::~HW_BOKEHTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuningD1Ev(void) {
    ALOGD("_ZN14HW_BOKEHTuningD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE() called");
    return 0;
}

/* Demangled: StereoHAL::FEFMSettingProvider::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProvider11getInstanceEv(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProvider11getInstanceEv() called");
    return 0;
}

/* Exported Object: EMPTY_LDC */
extern "C" __attribute__((visibility("default"))) void* EMPTY_LDC = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__vdeallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE13__vdeallocateEv(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE13__vdeallocateEv() called");
    return 0;
}

/* Demangled: StereoSettingProvider::enableLog() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider9enableLogEv(void) {
    ALOGD("_ZN21StereoSettingProvider9enableLogEv() called");
    return 0;
}

/* Demangled: StereoFDProxy::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy5resetEv(void) {
    ALOGD("_ZN13StereoFDProxy5resetEv() called");
    return 0;
}

/* Exported Object: StereoSizeProvider::__lock */
extern "C" __attribute__((visibility("default"))) void* _ZN18StereoSizeProvider6__lockE = NULL;

/* Demangled: StereoSettingProviderKernel::~StereoSettingProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernelD0Ev(void) {
    ALOGD("_ZN27StereoSettingProviderKernelD0Ev() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_2_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: HW_FETuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11HW_FETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail11parse_errorE = NULL;

/* Demangled: HW_MDPPQTuning::HW_MDPPQTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14HW_MDPPQTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__move_range(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE12__move_rangeEPiS4_S4_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE12__move_rangeEPiS4_S4_() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, SW_OCC_TUNING_T>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel15destroyInstanceEv(void) {
    ALOGD("_ZN27StereoSettingProviderKernel15destroyInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIS8_EERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIS8_EERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::vector(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEEC2Ej(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEEC2Ej() called");
    return 0;
}

/* Exported Object: vtable for HW_BOKEHTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV14HW_BOKEHTuning = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__find_equal<std::__1::pair<int, int> >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::pair<int, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: StereoFDProxy::isFocusedOnFace() */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy15isFocusedOnFaceEv(void) {
    ALOGD("_ZN13StereoFDProxy15isFocusedOnFaceEv() called");
    return 0;
}

/* Exported Object: vtable for HW_FETuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV11HW_FETuning = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: g_currentSensorCombination */
extern "C" __attribute__((visibility("default"))) void* g_currentSensorCombination = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__move_assign(std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getWMFInputChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider18getWMFInputChannelEv(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider18getWMFInputChannelEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__sensorScenarioMain1 */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider21__sensorScenarioMain1E = NULL;

/* Demangled: HW_FETuning::~HW_FETuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuningD1Ev(void) {
    ALOGD("_ZN11HW_FETuningD1Ev() called");
    return 0;
}

/* Demangled: SW_OCCTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12SW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: HW_FMTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN11HW_FMTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void) {
    ALOGD("_ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT() called");
    return 0;
}

/* Demangled: StereoSettingProvider::hasHWFE() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider7hasHWFEEv(void) {
    ALOGD("_ZN21StereoSettingProvider7hasHWFEEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Exported Object: StereoHAL::FEFMSettingProvider::__instance */
extern "C" __attribute__((visibility("default"))) void* _ZN9StereoHAL19FEFMSettingProvider10__instanceE = NULL;

/* Demangled: StereoHAL::FEFMSettingProvider::init(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProvider4initEii(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProvider4initEii() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isProfileLogEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider19isProfileLogEnabledEv(void) {
    ALOGD("_ZN21StereoSettingProvider19isProfileLogEnabledEv() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117bad_function_callE = NULL;

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_P_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE5mLockE = NULL;

/* Demangled: StereoSettingProvider::getFOVCropSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider17getFOVCropSettingEv(void) {
    ALOGD("_ZN21StereoSettingProvider17getFOVCropSettingEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE5mLockE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::other_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail11other_errorE = NULL;

/* Demangled: HW_WMFTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN12HW_WMFTuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: SW_GFTuning::~SW_GFTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuningD1Ev(void) {
    ALOGD("_ZN11SW_GFTuningD1Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::stereoProfile(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider13stereoProfileEj(void) {
    ALOGD("_ZN21StereoSettingProvider13stereoProfileEj() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__stereoModuleType */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider18__stereoModuleTypeE = NULL;

/* Demangled: StereoSettingProvider::setLogicalDeviceID(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider18setLogicalDeviceIDEj(void) {
    ALOGD("_ZN21StereoSettingProvider18setLogicalDeviceIDEj() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_B_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE5mLockE = NULL;

/* Exported Object: vtable for Pass2A_P_2_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV23Pass2A_P_2_SizeProvider = NULL;

/* Demangled: StereoHAL::StereoTuningProvider::getBokehTuningInfo(void*, StereoHAL::ENUM_BOKEH_STRENGTH) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider18getBokehTuningInfoEPvNS_19ENUM_BOKEH_STRENGTHE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider18getBokehTuningInfoEPvNS_19ENUM_BOKEH_STRENGTHE() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::~SW_BOKEHTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuningD2Ev(void) {
    ALOGD("_ZN14SW_BOKEHTuningD2Ev() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::init() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel4initEv(void) {
    ALOGD("_ZN27StereoSettingProviderKernel4initEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper19getSensorIndexByDevEj() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getShotMode() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider11getShotModeEv(void) {
    ALOGD("_ZN21StereoSettingProvider11getShotModeEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<char const*>(char const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_2_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: HW_BOKEHTuning::~HW_BOKEHTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuningD2Ev(void) {
    ALOGD("_ZN14HW_BOKEHTuningD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::logSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel11logSettingsEv(void) {
    ALOGD("_ZN27StereoSettingProviderKernel11logSettingsEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__find_equal<int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE7reserveEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<int, char const*>, std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*, int> std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__emplace_hint_unique_key_args<int, std::__1::pair<int const, char const*> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<int, char const*>, std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*, int>, int const&, std::__1::pair<int const, char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for HW_WMFTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV12HW_WMFTuning = NULL;

/* Demangled: HW_FMTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11HW_FMTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::~StereoSettingProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernelD1Ev(void) {
    ALOGD("_ZN27StereoSettingProviderKernelD1Ev() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getFMTuningInfo(StereoHAL::ENUM_FM_DIRECTION, NSCam::NSIoPipe::FMInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider15getFMTuningInfoENS_17ENUM_FM_DIRECTIONERN5NSCam8NSIoPipe6FMInfoE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider15getFMTuningInfoENS_17ENUM_FM_DIRECTIONERN5NSCam8NSIoPipe6FMInfoE() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: CamCalDrv::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv15destroyInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv15destroyInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::__swap_out_circular_buffer(std::__1::__split_buffer<MtkCameraFace, std::__1::allocator<MtkCameraFace>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_3_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE5mLockE = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_Crop_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE5mLockE = NULL;

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD0Ev(void) {
    ALOGD("_ZN9CamCalDrvD0Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::enableLog(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider9enableLogEPKc(void) {
    ALOGD("_ZN21StereoSettingProvider9enableLogEPKc() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MRect> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MRect>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: HW_FMTuning::HW_FMTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11HW_FMTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: CamCalDrv::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv11getInstanceEv(void) {
    ALOGD("_ZN9CamCalDrv11getInstanceEv() called");
    return 0;
}

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_Crop_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE5mLockE = NULL;

/* Demangled: SW_GFTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN11SW_GFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::__queryAF(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger9__queryAFEiiii(void) {
    ALOGD("_ZN14MTKFEFMTrigger9__queryAFEiiii() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getSensorRelativePosition(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider25getSensorRelativePositionEj(void) {
    ALOGD("_ZN21StereoSettingProvider25getSensorRelativePositionEj() called");
    return 0;
}

/* Demangled: HW_FETuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN11HW_FETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::insert(std::__1::__wrap_iter<unsigned int const*>, unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertENS_11__wrap_iterIPKjEEOj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6insertENS_11__wrap_iterIPKjEEOj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: StereoSettingProviderKernel::__loadSettingsFromCalibration() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel29__loadSettingsFromCalibrationEv(void) {
    ALOGD("_ZN27StereoSettingProviderKernel29__loadSettingsFromCalibrationEv() called");
    return 0;
}

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>::string_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isAFSyncNeeded(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider14isAFSyncNeededEj(void) {
    ALOGD("_ZN21StereoSettingProvider14isAFSyncNeededEj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<nlohmann::detail::input_adapter_protocol>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float, std::__1::allocator<float>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<float>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIfRNS_9allocatorIfEEEC2EjjS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIfRNS_9allocatorIfEEEC2EjjS3_() called");
    return 0;
}

/* Exported Object: QUERY_KEY_WMF_ROUND_NAME */
extern "C" __attribute__((visibility("default"))) void* QUERY_KEY_WMF_ROUND_NAME = NULL;

/* Demangled: HW_FETuning::~HW_FETuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuningD2Ev(void) {
    ALOGD("_ZN11HW_FETuningD2Ev() called");
    return 0;
}

/* Demangled: HW_FMTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FMTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN11HW_FMTuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: SW_GFTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11SW_GFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getMaxN3DDebugBufferSizeInBytes() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider31getMaxN3DDebugBufferSizeInBytesEv(void) {
    ALOGD("_ZN21StereoSettingProvider31getMaxN3DDebugBufferSizeInBytesEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: StereoSizeProvider::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider11getInstanceEv(void) {
    ALOGD("_ZN18StereoSizeProvider11getInstanceEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Demangled: StereoSettingProviderKernel::__parseDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel15__parseDocumentERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN27StereoSettingProviderKernel15__parseDocumentERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_B_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE5mLockE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isWideTeleVSDoF(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider15isWideTeleVSDoFEj(void) {
    ALOGD("_ZN21StereoSettingProvider15isWideTeleVSDoFEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, char const*>, std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: HW_FETuning::HW_FETuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11HW_FETuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isLogEnabled(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider12isLogEnabledEPKc(void) {
    ALOGD("_ZN21StereoSettingProvider12isLogEnabledEPKc() called");
    return 0;
}

/* Demangled: HW_DPETuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_DPETuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN12HW_DPETuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::__getDofValue(unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN14SW_BOKEHTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: CamCalDrv::Init(unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrv4InitEmPv(void) {
    ALOGD("_ZN9CamCalDrv4InitEmPv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__emplace_unique_key_args<ENUM_STEREO_RATIO, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>, std::__1::tuple<> >(ENUM_STEREO_RATIO const&, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: SW_GFTuning::~SW_GFTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuningD2Ev(void) {
    ALOGD("_ZN11SW_GFTuningD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_() called");
    return 0;
}

/* Exported Object: MTKFEFMTrigger::__runLock */
extern "C" __attribute__((visibility("default"))) void* _ZN14MTKFEFMTrigger9__runLockE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: StereoTuningProviderKernel::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernel11getInstanceEv(void) {
    ALOGD("_ZN26StereoTuningProviderKernel11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN14SW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_4pairIKS7_iEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISO_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_4pairIKS7_iEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISO_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__stereoFeatureMode */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider19__stereoFeatureModeE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: HW_WMFTuning::~HW_WMFTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuningD0Ev(void) {
    ALOGD("_ZN12HW_WMFTuningD0Ev() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getN3DTuningInfo(StereoHAL::ENUM_STEREO_SCENARIO, std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider16getN3DTuningInfoENS_20ENUM_STEREO_SCENARIOERNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider16getN3DTuningInfoENS_20ENUM_STEREO_SCENARIOERNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEE() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::StereoSettingProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernelC1Ev(void) {
    ALOGD("_ZN27StereoSettingProviderKernelC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_() called");
    return 0;
}

/* Exported Object: nlohmann::detail::serializer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::decode(unsigned char&, unsigned int&, unsigned char)::utf8d */
extern "C" __attribute__((visibility("default"))) void* _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d = NULL;

/* Demangled: StereoFDProxy::faceToMRect(MtkCameraFace&) */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy11faceToMRectER13MtkCameraFace(void) {
    ALOGD("_ZN13StereoFDProxy11faceToMRectER13MtkCameraFace() called");
    return 0;
}

/* Demangled: void std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::__push_back_slow_path<MtkCameraFace const&>(MtkCameraFace const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_3_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE5mLockE = NULL;

/* Demangled: std::__1::map<unsigned int, NSCam::MRect, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::MRect> > >::operator[](unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIjN5NSCam5MRectENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_(void) {
    ALOGD("_ZNSt3__13mapIjN5NSCam5MRectENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_() called");
    return 0;
}

/* Demangled: HW_FETuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN11HW_FETuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int, std::__1::allocator<int>&>::push_back(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIiRNS_9allocatorIiEEE9push_backEOi(void) {
    ALOGD("_ZNSt3__114__split_bufferIiRNS_9allocatorIiEEE9push_backEOi() called");
    return 0;
}

/* Exported Object: StereoSettingProvider::__sensorScenarioMain2 */
extern "C" __attribute__((visibility("default"))) void* _ZN21StereoSettingProvider21__sensorScenarioMain2E = NULL;

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Exported Object: vtable for SW_GFTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV11SW_GFTuning = NULL;

/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void) {
    ALOGD("_ZN5NSCam12CamCalHelper13sensorPowerOnEjj() called");
    return 0;
}

/* Demangled: StereoSettingProvider::__initTuningIfReady() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider19__initTuningIfReadyEv(void) {
    ALOGD("_ZN21StereoSettingProvider19__initTuningIfReadyEv() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::~StereoSettingProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernelD2Ev(void) {
    ALOGD("_ZN27StereoSettingProviderKernelD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::SW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14SW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::_updateImageSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider20_updateImageSettingsEv(void) {
    ALOGD("_ZN21StereoSettingProvider20_updateImageSettingsEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getN3DMaskMargin(StereoHAL::ENUM_STEREO_SCENARIO, StereoHAL::StereoImageMargin&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider16getN3DMaskMarginENS_20ENUM_STEREO_SCENARIOERNS_17StereoImageMarginE(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider16getN3DMaskMarginENS_20ENUM_STEREO_SCENARIOERNS_17StereoImageMarginE() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getSensorFOV(int, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider12getSensorFOVEiRfS0_(void) {
    ALOGD("_ZN21StereoSettingProvider12getSensorFOVEiRfS0_() called");
    return 0;
}

/* Demangled: SW_BOKEHTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14SW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14SW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Exported Object: CamCalDrv::StCamCalCaldata */
extern "C" __attribute__((visibility("default"))) void* _ZN9CamCalDrv15StCamCalCaldataE = NULL;

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENSG_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENSG_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD1Ev(void) {
    ALOGD("_ZN9CamCalDrvD1Ev() called");
    return 0;
}

/* Demangled: StereoSizeProvider::getBufferSize(ENUM_BUFFER_NAME, StereoHAL::ENUM_STEREO_SCENARIO, ENUM_ROTATION) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider13getBufferSizeE16ENUM_BUFFER_NAMEN9StereoHAL20ENUM_STEREO_SCENARIOE13ENUM_ROTATION(void) {
    ALOGD("_ZN18StereoSizeProvider13getBufferSizeE16ENUM_BUFFER_NAMEN9StereoHAL20ENUM_STEREO_SCENARIOE13ENUM_ROTATION() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, SW_N3D_TUNING_T>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: StereoSizeProvider::setPreviewSize(NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider14setPreviewSizeEN5NSCam5MSizeE(void) {
    ALOGD("_ZN18StereoSizeProvider14setPreviewSizeEN5NSCam5MSizeE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isBMVSDoF() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider9isBMVSDoFEv(void) {
    ALOGD("_ZN21StereoSettingProvider9isBMVSDoFEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEEEvT_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEEEvT_SH_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: SW_N3DTuning::SW_N3DTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12SW_N3DTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: StereoSizeProvider::setCaptureImageSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider19setCaptureImageSizeEii(void) {
    ALOGD("_ZN18StereoSizeProvider19setCaptureImageSizeEii() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getFETuningInfo(NSCam::NSIoPipe::FEInfo&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider15getFETuningInfoERN5NSCam8NSIoPipe6FEInfoEi(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider15getFETuningInfoERN5NSCam8NSIoPipe6FEInfoEi() called");
    return 0;
}

/* Demangled: from_json(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, StereoSensorConbinationSetting_T&) */
extern "C" __attribute__((visibility("default"))) int _Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER32StereoSensorConbinationSetting_T(void) {
    ALOGD("_Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER32StereoSensorConbinationSetting_T() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EEPi(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EEPi() called");
    return 0;
}

/* Demangled: StereoHAL::FEFMSettingProvider::~FEFMSettingProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProviderD0Ev(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProviderD0Ev() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::FEFMTrigger_get_debug_info() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger26FEFMTrigger_get_debug_infoEv(void) {
    ALOGD("_ZN14MTKFEFMTrigger26FEFMTrigger_get_debug_infoEv() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel11getInstanceEv(void) {
    ALOGD("_ZN27StereoSettingProviderKernel11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEELi0EEEvRKT_RT0_(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEELi0EEEvRKT_RT0_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_OCC_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: StereoSettingProvider::disableLog() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider10disableLogEv(void) {
    ALOGD("_ZN21StereoSettingProvider10disableLogEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_() called");
    return 0;
}

/* Demangled: HW_DPETuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_DPETuning3logER10FastLoggerb(void) {
    ALOGD("_ZN12HW_DPETuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: SW_GFTuning::SW_GFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN11SW_GFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_() called");
    return 0;
}

/* Demangled: SW_N3DTuning::~SW_N3DTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuningD0Ev(void) {
    ALOGD("_ZN12SW_N3DTuningD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD0Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD0Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: StereoSizeProvider::getSBSImageSize() */
extern "C" __attribute__((visibility("default"))) int _ZN18StereoSizeProvider15getSBSImageSizeEv(void) {
    ALOGD("_ZN18StereoSizeProvider15getSBSImageSizeEv() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_3_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_() called");
    return 0;
}

/* Demangled: StereoTuningProviderKernel::__saveTuningToFile(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernel18__saveTuningToFileERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN26StereoTuningProviderKernel18__saveTuningToFileERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::isP1YUVSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider16isP1YUVSupportedEv(void) {
    ALOGD("_ZN21StereoSettingProvider16isP1YUVSupportedEv() called");
    return 0;
}

/* Demangled: stringToFeatureMode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _Z19stringToFeatureModeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z19stringToFeatureModeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::FEFMTrigger_query(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger17FEFMTrigger_queryEiiii(void) {
    ALOGD("_ZN14MTKFEFMTrigger17FEFMTrigger_queryEiiii() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long long&>(unsigned long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<float, std::__1::allocator<float> >::__push_back_slow_path<float const&>(float const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIRKfEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIRKfEEvOT_() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_2_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE5mLockE = NULL;

/* Demangled: HW_MDPPQTuning::_initDefaultValues() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuning18_initDefaultValuesEv(void) {
    ALOGD("_ZN14HW_MDPPQTuning18_initDefaultValuesEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Exported Object: vtable for ProfileUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV11ProfileUtil = NULL;

/* Demangled: std::__1::__split_buffer<MtkCameraFace, std::__1::allocator<MtkCameraFace>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<MtkCameraFace>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI13MtkCameraFaceRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI13MtkCameraFaceRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::invalid_iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail16invalid_iteratorE = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_P_Crop_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE5mLockE = NULL;

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__move_range(unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE12__move_rangeEPjS4_S4_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE12__move_rangeEPjS4_S4_() called");
    return 0;
}

/* Exported Object: vtable for SW_N3DTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SW_N3DTuning = NULL;

/* Demangled: NSCam::CamCalHelper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper11getInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >::__push_back_slow_path<StereoSensorSetting_T*>(StereoSensorSetting_T*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: HW_FETuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11HW_FETuning3logER10FastLoggerb(void) {
    ALOGD("_ZN11HW_FETuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPKS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPKS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPKS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Demangled: __getSensorSettingsAndCombination(unsigned int, StereoSensorSetting_T*&, StereoSensorSetting_T*&, StereoSensorConbinationSetting_T*&) */
extern "C" __attribute__((visibility("default"))) int _Z33__getSensorSettingsAndCombinationjRP21StereoSensorSetting_TS1_RP32StereoSensorConbinationSetting_T(void) {
    ALOGD("_Z33__getSensorSettingsAndCombinationjRP21StereoSensorSetting_TS1_RP32StereoSensorConbinationSetting_T() called");
    return 0;
}

/* Demangled: stringToSensorScenario(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _Z22stringToSensorScenarioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z22stringToSensorScenarioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: StereoSizeProvider::__activeCropLock */
extern "C" __attribute__((visibility("default"))) void* _ZN18StereoSizeProvider16__activeCropLockE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoHAL::StereoArea> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Demangled: HW_WMFTuning::~HW_WMFTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuningD1Ev(void) {
    ALOGD("_ZN12HW_WMFTuningD1Ev() called");
    return 0;
}

/* Demangled: sizeToString(NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _Z12sizeToStringN5NSCam5MSizeE(void) {
    ALOGD("_Z12sizeToStringN5NSCam5MSizeE() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::StereoSettingProviderKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernelC2Ev(void) {
    ALOGD("_ZN27StereoSettingProviderKernelC2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::map<unsigned int, NSCam::MSize, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::MSize> > >::operator[](unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIjN5NSCam5MSizeENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_(void) {
    ALOGD("_ZNSt3__13mapIjN5NSCam5MSizeENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_() called");
    return 0;
}

/* Demangled: SW_OCCTuning::~SW_OCCTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuningD0Ev(void) {
    ALOGD("_ZN12SW_OCCTuningD0Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getSensorScenario(int, bool, unsigned int&, unsigned int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider17getSensorScenarioEibRjS0_b(void) {
    ALOGD("_ZN21StereoSettingProvider17getSensorScenarioEibRjS0_b() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__117bad_function_callE = NULL;

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_B_Crop_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE5mLockE = NULL;

/* Demangled: HW_WMFTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12HW_WMFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getFOVCropRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider15getFOVCropRatioEv(void) {
    ALOGD("_ZN21StereoSettingProvider15getFOVCropRatioEv() called");
    return 0;
}

/* Demangled: StereoSettingProviderKernel::__loadSettingsFromSensorHAL() */
extern "C" __attribute__((visibility("default"))) int _ZN27StereoSettingProviderKernel27__loadSettingsFromSensorHALEv(void) {
    ALOGD("_ZN27StereoSettingProviderKernel27__loadSettingsFromSensorHALEv() called");
    return 0;
}

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, float, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEfLi0EEEvRKT_RT0_(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEfLi0EEEvRKT_RT0_() called");
    return 0;
}

/* Demangled: StereoSizeProvider::getPass2SizeInfo(StereoHAL::ENUM_PASS2_ROUND, StereoHAL::ENUM_STEREO_SCENARIO, StereoHAL::Pass2SizeInfo&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18StereoSizeProvider16getPass2SizeInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOERNS0_13Pass2SizeInfoE(void) {
    ALOGD("_ZNK18StereoSizeProvider16getPass2SizeInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOERNS0_13Pass2SizeInfoE() called");
    return 0;
}

/* Demangled: SW_OCCTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN12SW_OCCTuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getMaxWarpingMatrixBufferSizeInBytes() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider36getMaxWarpingMatrixBufferSizeInBytesEv(void) {
    ALOGD("_ZN21StereoSettingProvider36getMaxWarpingMatrixBufferSizeInBytesEv() called");
    return 0;
}

/* Demangled: CamCalDrv::CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvC1Ev(void) {
    ALOGD("_ZN9CamCalDrvC1Ev() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getCallbackBufferList() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider21getCallbackBufferListEv(void) {
    ALOGD("_ZN21StereoSettingProvider21getCallbackBufferListEv() called");
    return 0;
}

/* Demangled: std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::vector(std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEEC2ERKS4_(void) {
    ALOGD("_ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEEC2ERKS4_() called");
    return 0;
}

/* Demangled: StereoFDProxy::getFocusedFace() */
extern "C" __attribute__((visibility("default"))) int _ZN13StereoFDProxy14getFocusedFaceEv(void) {
    ALOGD("_ZN13StereoFDProxy14getFocusedFaceEv() called");
    return 0;
}

/* Exported Object: vtable for SW_BOKEHTuning */
extern "C" __attribute__((visibility("default"))) void* _ZTV14SW_BOKEHTuning = NULL;

/* Demangled: CamCalDrv::~CamCalDrv() */
extern "C" __attribute__((visibility("default"))) int _ZN9CamCalDrvD2Ev(void) {
    ALOGD("_ZN9CamCalDrvD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Exported Object: vtable for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail9exceptionE = NULL;

/* Demangled: HW_WMFTuning::HW_WMFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12HW_WMFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: char* nlohmann::detail::to_chars<double>(char*, char*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail8to_charsIdEEPcS2_S2_T_(void) {
    ALOGD("_ZN8nlohmann6detail8to_charsIdEEPcS2_S2_T_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__117bad_function_callE = NULL;

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Exported Object: vtable for nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE = NULL;

/* Demangled: StereoSettingProvider::getModuleRotation(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider17getModuleRotationEj(void) {
    ALOGD("_ZN21StereoSettingProvider17getModuleRotationEj() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getStereoCameraFOVRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider23getStereoCameraFOVRatioEj(void) {
    ALOGD("_ZN21StereoSettingProvider23getStereoCameraFOVRatioEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::__move_assign(std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__push_back_slow_path<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::erase(std::__1::__wrap_iter<unsigned int const*>, std::__1::__wrap_iter<unsigned int const*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE5eraseENS_11__wrap_iterIPKjEES7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE5eraseENS_11__wrap_iterIPKjEES7_() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: StereoSettingProvider::setStereoModuleType(int) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider19setStereoModuleTypeEi(void) {
    ALOGD("_ZN21StereoSettingProvider19setStereoModuleTypeEi() called");
    return 0;
}

/* Exported Object: StereoFDProxy::__faceLock */
extern "C" __attribute__((visibility("default"))) void* _ZN13StereoFDProxy10__faceLockE = NULL;

/* Demangled: HW_OCCTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_OCCTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN12HW_OCCTuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_GF_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE() called");
    return 0;
}

/* Exported Object: Pass2SizeProviderBase<Pass2A_3_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: StereoHAL::FEFMSettingProvider::~FEFMSettingProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL19FEFMSettingProviderD1Ev(void) {
    ALOGD("_ZN9StereoHAL19FEFMSettingProviderD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIS8_EEEERSJ_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIS8_EEEERSJ_SJ_() called");
    return 0;
}

/* Demangled: HW_BOKEHTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN14HW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Demangled: StereoSettingProvider::setImageRatio(ENUM_STEREO_RATIO) */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider13setImageRatioE17ENUM_STEREO_RATIO(void) {
    ALOGD("_ZN21StereoSettingProvider13setImageRatioE17ENUM_STEREO_RATIO() called");
    return 0;
}

/* Demangled: StereoTuningProviderKernel::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN26StereoTuningProviderKernel15destroyInstanceEv(void) {
    ALOGD("_ZN26StereoTuningProviderKernel15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::other_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail11other_errorE = NULL;

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Exported Object: guard variable for Pass2SizeProviderBase<Pass2A_2_SizeProvider>::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE5mLockE = NULL;

/* Demangled: HW_BOKEHTuning::HW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN14HW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: SW_OCCTuning::SW_OCCTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_OCCTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void) {
    ALOGD("_ZN12SW_OCCTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_() called");
    return 0;
}

/* Demangled: StereoHAL::StereoTuningProvider::getMDPPQParam(char const*, VSDOFParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN9StereoHAL20StereoTuningProvider13getMDPPQParamEPKcR10VSDOFParam(void) {
    ALOGD("_ZN9StereoHAL20StereoTuningProvider13getMDPPQParamEPKcR10VSDOFParam() called");
    return 0;
}

/* Demangled: SW_N3DTuning::~SW_N3DTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12SW_N3DTuningD1Ev(void) {
    ALOGD("_ZN12SW_N3DTuningD1Ev() called");
    return 0;
}

/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelperD1Ev(void) {
    ALOGD("_ZN5NSCam12CamCalHelperD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: __aeabi_ul2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2f(void) {
    ALOGD("__aeabi_ul2f() called");
    return 0;
}

/* Demangled: HW_MDPPQTuning::~HW_MDPPQTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN14HW_MDPPQTuningD0Ev(void) {
    ALOGD("_ZN14HW_MDPPQTuningD0Ev() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, int, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::invalid_iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail16invalid_iteratorE = NULL;

/* Exported Object: vtable for StereoTuningProviderKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTV26StereoTuningProviderKernel = NULL;

/* Demangled: NSCam::CamCalHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12CamCalHelper4initEv(void) {
    ALOGD("_ZN5NSCam12CamCalHelper4initEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for Pass2A_3_SizeProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTV21Pass2A_3_SizeProvider = NULL;

/* Exported Object: Pass2SizeProviderBase<Pass2A_B_Crop_SizeProvider>::instance()::_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE8instanceEvE9_instance = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSL_SL_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSL_SL_() called");
    return 0;
}

/* Demangled: StereoSettingProvider::getDPECaptureRound() */
extern "C" __attribute__((visibility("default"))) int _ZN21StereoSettingProvider18getDPECaptureRoundEv(void) {
    ALOGD("_ZN21StereoSettingProvider18getDPECaptureRoundEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__detach(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE8__detachEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE8__detachEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::invalid_iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail16invalid_iteratorE = NULL;

/* Exported Object: StereoHAL::FEFMSettingProvider::__triggerInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN9StereoHAL19FEFMSettingProvider17__triggerInstanceE = NULL;

/* Demangled: HW_DPETuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_DPETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void) {
    ALOGD("_ZN12HW_DPETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE() called");
    return 0;
}

/* Exported Object: QUERY_KEY_FM_DIRECTION_NAMES */
extern "C" __attribute__((visibility("default"))) void* QUERY_KEY_FM_DIRECTION_NAMES = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__tree_node<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: SW_GFTuning::log(FastLogger&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11SW_GFTuning3logER10FastLoggerb(void) {
    ALOGD("_ZN11SW_GFTuning3logER10FastLoggerb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: HW_WMFTuning::~HW_WMFTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12HW_WMFTuningD2Ev(void) {
    ALOGD("_ZN12HW_WMFTuningD2Ev() called");
    return 0;
}

/* Demangled: MTKFEFMTrigger::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14MTKFEFMTrigger15destroyInstanceEv(void) {
    ALOGD("_ZN14MTKFEFMTrigger15destroyInstanceEv() called");
    return 0;
}
