/*
 * Reverse-Engineered ABI Specification for: libfeature.stereo.provider.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libfeature.stereo.provider.so
 */

#ifndef BEGONIA_RE_LIBFEATURE_STEREO_PROVIDER_H
#define BEGONIA_RE_LIBFEATURE_STEREO_PROVIDER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__move_assign(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZTIN8nlohmann6detail10type_errorE */
/* Demangled: typeinfo for nlohmann::detail::type_error */
extern void* _ZTIN8nlohmann6detail10type_errorE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN12SW_OCCTuningD1Ev */
/* Demangled: SW_OCCTuning::~SW_OCCTuning() */
int _ZN12SW_OCCTuningD1Ev(void);

/* Symbol: _ZN21StereoSettingProvider13isDualCamModeEv */
/* Demangled: StereoSettingProvider::isDualCamMode() */
int _ZN21StereoSettingProvider13isDualCamModeEv(void);

/* Symbol: _ZN21StereoSettingProvider18__featureStartTimeE */
/* Demangled: StereoSettingProvider::__featureStartTime */
extern void* _ZN21StereoSettingProvider18__featureStartTimeE;

/* Symbol: _Z13ratioToString17ENUM_STEREO_RATIO */
/* Demangled: ratioToString(ENUM_STEREO_RATIO) */
int _Z13ratioToString17ENUM_STEREO_RATIO(void);

/* Symbol: _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev */
/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void);

/* Symbol: _ZTSN8nlohmann6detail12out_of_rangeE */
/* Demangled: typeinfo name for nlohmann::detail::out_of_range */
extern void* _ZTSN8nlohmann6detail12out_of_rangeE;

/* Symbol: _ZN13StereoFDProxy13__focusedFaceE */
/* Demangled: StereoFDProxy::__focusedFace */
extern void* _ZN13StereoFDProxy13__focusedFaceE;

/* Symbol: _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE */
/* Demangled: _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE */
int _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, SW_GF_TUNING_T>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN21StereoSettingProvider16setStereoProfileE26ENUM_STEREO_SENSOR_PROFILE */
/* Demangled: StereoSettingProvider::setStereoProfile(ENUM_STEREO_SENSOR_PROFILE) */
int _ZN21StereoSettingProvider16setStereoProfileE26ENUM_STEREO_SENSOR_PROFILE(void);

/* Symbol: _ZN21StereoSettingProvider22getBokehJpegBufferListEv */
/* Demangled: StereoSettingProvider::getBokehJpegBufferList() */
int _ZN21StereoSettingProvider22getBokehJpegBufferListEv(void);

/* Symbol: _ZN27StereoSettingProviderKernel7__resetEv */
/* Demangled: StereoSettingProviderKernel::__reset() */
int _ZN27StereoSettingProviderKernel7__resetEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE8__detachEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__detach(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE8__detachEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_ */
/* Demangled: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_ */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISE_E9referenceEEE5valueEvE4typeESE_SE_(void);

/* Symbol: _ZN9CamCalDrvC2Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC2Ev(void);

/* Symbol: _ZN8nlohmann6detail9dtoa_impl18compute_boundariesIdEENS1_10boundariesET_ */
/* Demangled: nlohmann::detail::dtoa_impl::boundaries nlohmann::detail::dtoa_impl::compute_boundaries<double>(double) */
int _ZN8nlohmann6detail9dtoa_impl18compute_boundariesIdEENS1_10boundariesET_(void);

/* Symbol: _ZGVZN9StereoHAL10StereoArea10applyRatioE17ENUM_STEREO_RATIONS_26ENUM_IMAGE_RATIO_ALIGNMENTEE9RATIO_MAP */
/* Demangled: guard variable for StereoHAL::StereoArea::applyRatio(ENUM_STEREO_RATIO, StereoHAL::ENUM_IMAGE_RATIO_ALIGNMENT)::RATIO_MAP */
extern void* _ZGVZN9StereoHAL10StereoArea10applyRatioE17ENUM_STEREO_RATIONS_26ENUM_IMAGE_RATIO_ALIGNMENTEE9RATIO_MAP;

/* Symbol: _ZN14HW_MDPPQTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_MDPPQTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN14HW_MDPPQTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProvider15destroyInstanceEv */
/* Demangled: StereoHAL::FEFMSettingProvider::destroyInstance() */
int _ZN9StereoHAL19FEFMSettingProvider15destroyInstanceEv(void);

/* Symbol: _ZN21StereoSettingProvider20getMain2FOVCropRatioEv */
/* Demangled: StereoSettingProvider::getMain2FOVCropRatio() */
int _ZN21StereoSettingProvider20getMain2FOVCropRatioEv(void);

/* Symbol: _ZN14MTKFEFMTrigger9__queryFFEi */
/* Demangled: MTKFEFMTrigger::__queryFF(int) */
int _ZN14MTKFEFMTrigger9__queryFFEi(void);

/* Symbol: _ZN5NSCam12CamCalHelper13getCamCalDataEPj */
/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__detach(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE8__detachEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned int) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj(void);

/* Symbol: _ZGVN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE5mLockE;

/* Symbol: _ZZN9StereoHAL10StereoArea10applyRatioE17ENUM_STEREO_RATIONS_26ENUM_IMAGE_RATIO_ALIGNMENTEE9RATIO_MAP */
/* Demangled: StereoHAL::StereoArea::applyRatio(ENUM_STEREO_RATIO, StereoHAL::ENUM_IMAGE_RATIO_ALIGNMENT)::RATIO_MAP */
extern void* _ZZN9StereoHAL10StereoArea10applyRatioE17ENUM_STEREO_RATIONS_26ENUM_IMAGE_RATIO_ALIGNMENTEE9RATIO_MAP;

/* Symbol: _ZN14HW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_BOKEHTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN14HW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN14MTKFEFMTrigger14__instanceLockE */
/* Demangled: MTKFEFMTrigger::__instanceLock */
extern void* _ZN14MTKFEFMTrigger14__instanceLockE;

/* Symbol: _ZTVN5NSCam12CamCalHelperE */
/* Demangled: vtable for NSCam::CamCalHelper */
extern void* _ZTVN5NSCam12CamCalHelperE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProviderC1Ev */
/* Demangled: StereoHAL::FEFMSettingProvider::FEFMSettingProvider() */
int _ZN9StereoHAL19FEFMSettingProviderC1Ev(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProviderD2Ev */
/* Demangled: StereoHAL::FEFMSettingProvider::~FEFMSettingProvider() */
int _ZN9StereoHAL19FEFMSettingProviderD2Ev(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTV26Pass2A_B_Crop_SizeProvider */
/* Demangled: vtable for Pass2A_B_Crop_SizeProvider */
extern void* _ZTV26Pass2A_B_Crop_SizeProvider;

/* Symbol: _ZN12SW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: SW_OCCTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN12SW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZN5NSCam12CamCalHelperC1Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC1Ev(void);

/* Symbol: _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_ */
/* Demangled: void nlohmann::detail::dtoa_impl::grisu2<double>(char*, int&, int&, double) */
int _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZTIN8nlohmann6detail11parse_errorE */
/* Demangled: typeinfo for nlohmann::detail::parse_error */
extern void* _ZTIN8nlohmann6detail11parse_errorE;

/* Symbol: _ZN26StereoTuningProviderKernelD0Ev */
/* Demangled: StereoTuningProviderKernel::~StereoTuningProviderKernel() */
int _ZN26StereoTuningProviderKernelD0Ev(void);

/* Symbol: _ZN14MTKFEFMTrigger31FEFMTrigger_set_reqular_triggerEi */
/* Demangled: MTKFEFMTrigger::FEFMTrigger_set_reqular_trigger(int) */
int _ZN14MTKFEFMTrigger31FEFMTrigger_set_reqular_triggerEi(void);

/* Symbol: _ZN14MTKFEFMTriggerD0Ev */
/* Demangled: MTKFEFMTrigger::~MTKFEFMTrigger() */
int _ZN14MTKFEFMTriggerD0Ev(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN21StereoSettingProvider18getStereoCameraFOVER9SensorFOVS1_j */
/* Demangled: StereoSettingProvider::getStereoCameraFOV(SensorFOV&, SensorFOV&, unsigned int) */
int _ZN21StereoSettingProvider18getStereoCameraFOVER9SensorFOVS1_j(void);

/* Symbol: _ZN12SW_N3DTuningD2Ev */
/* Demangled: SW_N3DTuning::~SW_N3DTuning() */
int _ZN12SW_N3DTuningD2Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD2Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD2Ev(void);

/* Symbol: _ZN26StereoTuningProviderKernel15getTuningParamsEN9StereoHAL18ENUM_STEREO_TUNINGERNS0_13TuningQuery_TE */
/* Demangled: StereoTuningProviderKernel::getTuningParams(StereoHAL::ENUM_STEREO_TUNING, StereoHAL::TuningQuery_T&) */
int _ZN26StereoTuningProviderKernel15getTuningParamsEN9StereoHAL18ENUM_STEREO_TUNINGERNS0_13TuningQuery_TE(void);

/* Symbol: _ZN14HW_MDPPQTuningD1Ev */
/* Demangled: HW_MDPPQTuning::~HW_MDPPQTuning() */
int _ZN14HW_MDPPQTuningD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTV14HW_MDPPQTuning */
/* Demangled: vtable for HW_MDPPQTuning */
extern void* _ZTV14HW_MDPPQTuning;

/* Symbol: _ZN5NSCam12CamCalHelper14sensorPowerOffEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN21StereoSettingProvider23getMain2OutputFrequencyEN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoSettingProvider::getMain2OutputFrequency(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN21StereoSettingProvider23getMain2OutputFrequencyEN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::__emplace_unique_key_args<ENUM_STEREO_RATIO, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>, std::__1::tuple<> >(ENUM_STEREO_RATIO const&, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTSN8nlohmann6detail10type_errorE */
/* Demangled: typeinfo name for nlohmann::detail::type_error */
extern void* _ZTSN8nlohmann6detail10type_errorE;

/* Symbol: _ZTVN8nlohmann6detail11other_errorE */
/* Demangled: vtable for nlohmann::detail::other_error */
extern void* _ZTVN8nlohmann6detail11other_errorE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE;

/* Symbol: _ZN14HW_MDPPQTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_MDPPQTuning::HW_MDPPQTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN14HW_MDPPQTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN13CamCalDrvBase14createInstanceEv */
/* Demangled: CamCalDrvBase::createInstance() */
int _ZN13CamCalDrvBase14createInstanceEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE15__emplace_multiIJRKNS_4pairIKS2_bEEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__emplace_multi<std::__1::pair<ENUM_STEREO_RATIO const, bool> const&>(std::__1::pair<ENUM_STEREO_RATIO const, bool> const&) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE15__emplace_multiIJRKNS_4pairIKS2_bEEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEDpOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void);

/* Symbol: _ZN13StereoFDProxy14setFocusedFaceER13MtkCameraFace */
/* Demangled: StereoFDProxy::setFocusedFace(MtkCameraFace&) */
int _ZN13StereoFDProxy14setFocusedFaceER13MtkCameraFace(void);

/* Symbol: _ZN18StereoSizeProviderC1Ev */
/* Demangled: StereoSizeProvider::StereoSizeProvider() */
int _ZN18StereoSizeProviderC1Ev(void);

/* Symbol: _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_bxydS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEE2atERSF_ */
/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::less<void>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::at(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_bxydS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEE2atERSF_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN21StereoSettingProvider14isWidePlusTeleEj */
/* Demangled: StereoSettingProvider::isWidePlusTele(unsigned int) */
int _ZN21StereoSettingProvider14isWidePlusTeleEj(void);

/* Symbol: _ZN21StereoSettingProvider21getISPProfileForP1YUVEv */
/* Demangled: StereoSettingProvider::getISPProfileForP1YUV() */
int _ZN21StereoSettingProvider21getISPProfileForP1YUVEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoHAL::StereoArea> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, StereoHAL::StereoArea>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN11HW_FMTuningD0Ev */
/* Demangled: HW_FMTuning::~HW_FMTuning() */
int _ZN11HW_FMTuningD0Ev(void);

/* Symbol: _ZN12SW_OCCTuningD2Ev */
/* Demangled: SW_OCCTuning::~SW_OCCTuning() */
int _ZN12SW_OCCTuningD2Ev(void);

/* Symbol: _ZNKSt3__16bitsetILj32EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::bitset<32u>::to_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, char) const */
int _ZNKSt3__16bitsetILj32EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_N3D_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN10StereoSize15getStereoArea1xERK16StereoSizeConfig */
/* Demangled: StereoSize::getStereoArea1x(StereoSizeConfig const&) */
int _ZN10StereoSize15getStereoArea1xERK16StereoSizeConfig(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MRect>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MRect> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZTIN8nlohmann6detail12out_of_rangeE */
/* Demangled: typeinfo for nlohmann::detail::out_of_range */
extern void* _ZTIN8nlohmann6detail12out_of_rangeE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider16getOCCTuningInfoERjRNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEENS_20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoHAL::StereoTuningProvider::getOCCTuningInfo(unsigned int&, std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN9StereoHAL20StereoTuningProvider16getOCCTuningInfoERjRNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEENS_20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__tree_node<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::__emplace_unique_key_args<StereoHAL::ENUM_STEREO_TUNING, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING const&>, std::__1::tuple<> >(StereoHAL::ENUM_STEREO_TUNING const&, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_(void);

/* Symbol: _ZN18StereoSizeProvider23getPass1ActiveArrayCropEN9StereoHAL18ENUM_STEREO_SENSORERN5NSCam5MRectEb */
/* Demangled: StereoSizeProvider::getPass1ActiveArrayCrop(StereoHAL::ENUM_STEREO_SENSOR, NSCam::MRect&, bool) */
int _ZN18StereoSizeProvider23getPass1ActiveArrayCropEN9StereoHAL18ENUM_STEREO_SENSORERN5NSCam5MRectEb(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider18getSWBokehDoFValueEj */
/* Demangled: StereoHAL::StereoTuningProvider::getSWBokehDoFValue(unsigned int) */
int _ZN9StereoHAL20StereoTuningProvider18getSWBokehDoFValueEj(void);

/* Symbol: _ZN11SW_GFTuning18_initDefaultValuesEv */
/* Demangled: SW_GFTuning::_initDefaultValues() */
int _ZN11SW_GFTuning18_initDefaultValuesEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertENS_11__wrap_iterIPKiEEOi */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::insert(std::__1::__wrap_iter<int const*>, int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertENS_11__wrap_iterIPKiEEOi(void);

/* Symbol: _ZTV14MTKFEFMTrigger */
/* Demangled: vtable for MTKFEFMTrigger */
extern void* _ZTV14MTKFEFMTrigger;

/* Symbol: _ZN27StereoSettingProviderKernel27getSensorCombinationSettingEj */
/* Demangled: StereoSettingProviderKernel::getSensorCombinationSetting(unsigned int) */
int _ZN27StereoSettingProviderKernel27getSensorCombinationSettingEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKS2_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__emplace_multi<std::__1::pair<ENUM_STEREO_RATIO const, NSCam::MSize> const&>(std::__1::pair<ENUM_STEREO_RATIO const, NSCam::MSize> const&) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE15__emplace_multiIJRKNS_4pairIKS2_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEDpOT_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_ */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::vector(std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > const&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider20getSWBokehTuningInfoERNSt3__16vectorINS1_4pairINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiEENS7_ISA_EEEERNS2_IiNS7_IiEEEE */
/* Demangled: StereoHAL::StereoTuningProvider::getSWBokehTuningInfo(std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN9StereoHAL20StereoTuningProvider20getSWBokehTuningInfoERNSt3__16vectorINS1_4pairINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiEENS7_ISA_EEEERNS2_IiNS7_IiEEEE(void);

/* Symbol: _Z29__getSensorCombinationSettingj */
/* Demangled: __getSensorCombinationSetting(unsigned int) */
int _Z29__getSensorCombinationSettingj(void);

/* Symbol: _ZN21StereoSettingProvider11getLDCTableEv */
/* Demangled: StereoSettingProvider::getLDCTable() */
int _ZN21StereoSettingProvider11getLDCTableEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEEEvT_SI_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEEEvT_SI_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZNSt3__114__fill_n_falseINS_8__bitsetILj1ELj6EEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS4_9size_typeE */
/* Demangled: void std::__1::__fill_n_false<std::__1::__bitset<1u, 6u> >(std::__1::__bit_iterator<std::__1::__bitset<1u, 6u>, false, 0>, std::__1::__bitset<1u, 6u>::size_type) */
int _ZNSt3__114__fill_n_falseINS_8__bitsetILj1ELj6EEEEEvNS_14__bit_iteratorIT_Lb0EXLi0EEEENS4_9size_typeE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: _Z12base64DecodePKcRNSt3__16vectorIhNS1_9allocatorIhEEEE */
/* Demangled: base64Decode(char const*, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&) */
int _Z12base64DecodePKcRNSt3__16vectorIhNS1_9allocatorIhEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS8_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS8_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZN26StereoTuningProviderKernel14__instanceLockE */
/* Demangled: StereoTuningProviderKernel::__instanceLock */
extern void* _ZN26StereoTuningProviderKernel14__instanceLockE;

/* Symbol: _ZN9StereoHAL19FEFMSettingProviderC2Ev */
/* Demangled: StereoHAL::FEFMSettingProvider::FEFMSettingProvider() */
int _ZN9StereoHAL19FEFMSettingProviderC2Ev(void);

/* Symbol: _ZZN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_B_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZN14MTKFEFMTrigger16FEFMTrigger_initEbb */
/* Demangled: MTKFEFMTrigger::FEFMTrigger_init(bool, bool) */
int _ZN14MTKFEFMTrigger16FEFMTrigger_initEbb(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11HW_FETuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_FETuning::HW_FETuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN11HW_FETuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void);

/* Symbol: _ZTVN8nlohmann6detail20input_buffer_adapterE */
/* Demangled: vtable for nlohmann::detail::input_buffer_adapter */
extern void* _ZTVN8nlohmann6detail20input_buffer_adapterE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_S8_EE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_S8_EE(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam12CamCalHelperC2Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC2Ev(void);

/* Symbol: _ZN26StereoTuningProviderKernelD1Ev */
/* Demangled: StereoTuningProviderKernel::~StereoTuningProviderKernel() */
int _ZN26StereoTuningProviderKernelD1Ev(void);

/* Symbol: _ZN14MTKFEFMTriggerD1Ev */
/* Demangled: MTKFEFMTrigger::~MTKFEFMTrigger() */
int _ZN14MTKFEFMTriggerD1Ev(void);

/* Symbol: _ZN9CamCalDrv13getDumpEnableEv */
/* Demangled: CamCalDrv::getDumpEnable() */
int _ZN9CamCalDrv13getDumpEnableEv(void);

/* Symbol: _ZN21StereoSettingProvider10isSensorAFEi */
/* Demangled: StereoSettingProvider::isSensorAF(int) */
int _ZN21StereoSettingProvider10isSensorAFEi(void);

/* Symbol: _ZN21StereoSettingProvider23getVSDoFP1ResizeQualityEv */
/* Demangled: StereoSettingProvider::getVSDoFP1ResizeQuality() */
int _ZN21StereoSettingProvider23getVSDoFP1ResizeQualityEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN13StereoFDProxy16resetFocusedFaceEv */
/* Demangled: StereoFDProxy::resetFocusedFace() */
int _ZN13StereoFDProxy16resetFocusedFaceEv(void);

/* Symbol: _ZN14HW_MDPPQTuningD2Ev */
/* Demangled: HW_MDPPQTuning::~HW_MDPPQTuning() */
int _ZN14HW_MDPPQTuningD2Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelper8readDataEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void);

/* Symbol: _ZZN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_Crop_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZN9StereoHAL20StereoTuningProvider15getGFTuningInfoERjRNSt3__16vectorIiNS2_9allocatorIiEEEES7_S7_RNS3_INS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS4_IcEEEEiEENS4_ISE_EEEENS_20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoHAL::StereoTuningProvider::getGFTuningInfo(unsigned int&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN9StereoHAL20StereoTuningProvider15getGFTuningInfoERjRNSt3__16vectorIiNS2_9allocatorIiEEEES7_S7_RNS3_INS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS4_IcEEEEiEENS4_ISE_EEEENS_20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN21StereoSettingProvider22getCalibrationDistanceEN9StereoHAL18ENUM_STEREO_SENSORERjS2_ */
/* Demangled: StereoSettingProvider::getCalibrationDistance(StereoHAL::ENUM_STEREO_SENSOR, unsigned int&, unsigned int&) */
int _ZN21StereoSettingProvider22getCalibrationDistanceEN9StereoHAL18ENUM_STEREO_SENSORERjS2_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN27StereoSettingProviderKernel14__instanceLockE */
/* Demangled: StereoSettingProviderKernel::__instanceLock */
extern void* _ZN27StereoSettingProviderKernel14__instanceLockE;

/* Symbol: _ZN27StereoSettingProviderKernel19__saveSettingToFileERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: StereoSettingProviderKernel::__saveSettingToFile(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN27StereoSettingProviderKernel19__saveSettingToFileERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN27StereoSettingProviderKernel16getSensorSettingEi */
/* Demangled: StereoSettingProviderKernel::getSensorSetting(int) */
int _ZN27StereoSettingProviderKernel16getSensorSettingEi(void);

/* Symbol: _ZN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_3_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE5mLockE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_GF_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN26StereoTuningProviderKernel10__instanceE */
/* Demangled: StereoTuningProviderKernel::__instance */
extern void* _ZN26StereoTuningProviderKernel10__instanceE;

/* Symbol: _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj */
/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void);

/* Symbol: _ZN21StereoSettingProvider16__stereoShotModeE */
/* Demangled: StereoSettingProvider::__stereoShotMode */
extern void* _ZN21StereoSettingProvider16__stereoShotModeE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: sizeCache1x */
/* Demangled: sizeCache1x */
extern void* sizeCache1x;

/* Symbol: _ZN14HW_MDPPQTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: HW_MDPPQTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN14HW_MDPPQTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZTV12HW_OCCTuning */
/* Demangled: vtable for HW_OCCTuning */
extern void* _ZTV12HW_OCCTuning;

/* Symbol: _ZN21StereoSettingProvider18getSensorRawFormatEi */
/* Demangled: StereoSettingProvider::getSensorRawFormat(int) */
int _ZN21StereoSettingProvider18getSensorRawFormatEi(void);

/* Symbol: _ZN21StereoSettingProvider23getStereoSensorDevIndexERiS0_j */
/* Demangled: StereoSettingProvider::getStereoSensorDevIndex(int&, int&, unsigned int) */
int _ZN21StereoSettingProvider23getStereoSensorDevIndexERiS0_j(void);

/* Symbol: _Z12stringToSizeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: stringToSize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _Z12stringToSizeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN13StereoFDProxy18getFocusedFaceRectEv */
/* Demangled: StereoFDProxy::getFocusedFaceRect() */
int _ZN13StereoFDProxy18getFocusedFaceRectEv(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider18getHWOCCTuningInfoERN5NSCam8NSIoPipe9OCCConfigENS_20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoHAL::StereoTuningProvider::getHWOCCTuningInfo(NSCam::NSIoPipe::OCCConfig&, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN9StereoHAL20StereoTuningProvider18getHWOCCTuningInfoERN5NSCam8NSIoPipe9OCCConfigENS_20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN11HW_FMTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_FMTuning::HW_FMTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN11HW_FMTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN21StereoSettingProvider15isBayerPlusMonoEv */
/* Demangled: StereoSettingProvider::isBayerPlusMono() */
int _ZN21StereoSettingProvider15isBayerPlusMonoEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void);

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: _ZN18StereoSizeProviderC2Ev */
/* Demangled: StereoSizeProvider::StereoSizeProvider() */
int _ZN18StereoSizeProviderC2Ev(void);

/* Symbol: _ZN14SW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_BOKEHTuning::SW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN14SW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__tree_node<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::__emplace_unique_key_args<StereoHAL::ENUM_STEREO_TUNING, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING&&>, std::__1::tuple<> >(StereoHAL::ENUM_STEREO_TUNING const&, std::__1::piecewise_construct_t const&, std::__1::tuple<StereoHAL::ENUM_STEREO_TUNING&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN14MTKFEFMTrigger11getInstanceEv */
/* Demangled: MTKFEFMTrigger::getInstance() */
int _ZN14MTKFEFMTrigger11getInstanceEv(void);

/* Symbol: _ZN21StereoSettingProvider17getStereoBaselineEj */
/* Demangled: StereoSettingProvider::getStereoBaseline(unsigned int) */
int _ZN21StereoSettingProvider17getStereoBaselineEj(void);

/* Symbol: g_sensorSettings */
/* Demangled: g_sensorSettings */
extern void* g_sensorSettings;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE26__swap_out_circular_bufferERNS_14__split_bufferIfRS2_EE */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__swap_out_circular_buffer(std::__1::__split_buffer<float, std::__1::allocator<float>&>&) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE26__swap_out_circular_bufferERNS_14__split_bufferIfRS2_EE(void);

/* Symbol: _ZN18StereoSizeProvider16getcustomYUVSizeEN9StereoHAL18ENUM_STEREO_SENSOREN9NSImageio7NSIspio10EPortIndexERN5NSCam5MSizeE */
/* Demangled: StereoSizeProvider::getcustomYUVSize(StereoHAL::ENUM_STEREO_SENSOR, NSImageio::NSIspio::EPortIndex, NSCam::MSize&) */
int _ZN18StereoSizeProvider16getcustomYUVSizeEN9StereoHAL18ENUM_STEREO_SENSOREN9NSImageio7NSIspio10EPortIndexERN5NSCam5MSizeE(void);

/* Symbol: _ZN11HW_FMTuningD1Ev */
/* Demangled: HW_FMTuning::~HW_FMTuning() */
int _ZN11HW_FMTuningD1Ev(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long long&>(long long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_(void);

/* Symbol: _ZTV18StereoSizeProvider */
/* Demangled: vtable for StereoSizeProvider */
extern void* _ZTV18StereoSizeProvider;

/* Symbol: _ZTV16StereoTuningBase */
/* Demangled: vtable for StereoTuningBase */
extern void* _ZTV16StereoTuningBase;

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEjLi0EEEvRKT_RT0_ */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, unsigned int, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, unsigned int&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEjLi0EEEvRKT_RT0_(void);

/* Symbol: _ZNK18StereoSizeProvider22thirdPartyDepthmapSizeE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoSizeProvider::thirdPartyDepthmapSize(ENUM_STEREO_RATIO, StereoHAL::ENUM_STEREO_SCENARIO) const */
int _ZNK18StereoSizeProvider22thirdPartyDepthmapSizeE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE15__emplace_multiIJRKNS_4pairIKiiEEEEENS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__emplace_multi<std::__1::pair<int const, int> const&>(std::__1::pair<int const, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE15__emplace_multiIJRKNS_4pairIKiiEEEEENS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEDpOT_(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider13getGFDoFValueEjNS_20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoHAL::StereoTuningProvider::getGFDoFValue(unsigned int, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN9StereoHAL20StereoTuningProvider13getGFDoFValueEjNS_20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZN12HW_WMFTuning18_initDefaultValuesEv */
/* Demangled: HW_WMFTuning::_initDefaultValues() */
int _ZN12HW_WMFTuning18_initDefaultValuesEv(void);

/* Symbol: _ZTVN9StereoHAL19FEFMSettingProviderE */
/* Demangled: vtable for StereoHAL::FEFMSettingProvider */
extern void* _ZTVN9StereoHAL19FEFMSettingProviderE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::destroy(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZTV21Pass2A_2_SizeProvider */
/* Demangled: vtable for Pass2A_2_SizeProvider */
extern void* _ZTV21Pass2A_2_SizeProvider;

/* Symbol: _ZN14HW_BOKEHTuning18_initDefaultValuesEv */
/* Demangled: HW_BOKEHTuning::_initDefaultValues() */
int _ZN14HW_BOKEHTuning18_initDefaultValuesEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEEC2EjjSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&) */
int _ZNSt3__114__split_bufferINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEERNS5_IS8_EEEC2EjjSA_(void);

/* Symbol: _ZNSt3__114__split_bufferIjRNS_9allocatorIjEEE9push_backEOj */
/* Demangled: std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>::push_back(unsigned int&&) */
int _ZNSt3__114__split_bufferIjRNS_9allocatorIjEEE9push_backEOj(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void);

/* Symbol: _ZN21StereoSettingProvider18getCalibrationDataEPvj */
/* Demangled: StereoSettingProvider::getCalibrationData(void*, unsigned int) */
int _ZN21StereoSettingProvider18getCalibrationDataEPvj(void);

/* Symbol: _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >::__swap_out_circular_buffer(std::__1::__split_buffer<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*>&>&) */
int _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__move_assign(std::__1::vector<float, std::__1::allocator<float> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZN21StereoSettingProvider10LDCEnabledEv */
/* Demangled: StereoSettingProvider::LDCEnabled() */
int _ZN21StereoSettingProvider10LDCEnabledEv(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_ */
/* Demangled: std::__1::function<bool (int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&)>::operator()(int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) const */
int _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider18getPass2MDPPQParamENS_16ENUM_PASS2_ROUNDER10VSDOFParam */
/* Demangled: StereoHAL::StereoTuningProvider::getPass2MDPPQParam(StereoHAL::ENUM_PASS2_ROUND, VSDOFParam&) */
int _ZN9StereoHAL20StereoTuningProvider18getPass2MDPPQParamENS_16ENUM_PASS2_ROUNDER10VSDOFParam(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN14SW_BOKEHTuning18_initDefaultValuesEv */
/* Demangled: SW_BOKEHTuning::_initDefaultValues() */
int _ZN14SW_BOKEHTuning18_initDefaultValuesEv(void);

/* Symbol: _ZN12SW_N3DTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_N3DTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN12SW_N3DTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: _ZN21StereoSettingProvider13fefmBlockSizeEi */
/* Demangled: StereoSettingProvider::fefmBlockSize(int) */
int _ZN21StereoSettingProvider13fefmBlockSizeEi(void);

/* Symbol: _ZN21StereoSettingProvider17setStereoShotModeEj */
/* Demangled: StereoSettingProvider::setStereoShotMode(unsigned int) */
int _ZN21StereoSettingProvider17setStereoShotModeEj(void);

/* Symbol: _ZNKSt3__13mapIiPKcNS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEE2atERS7_ */
/* Demangled: std::__1::map<int, char const*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, char const*> > >::at(int const&) const */
int _ZNKSt3__13mapIiPKcNS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEE2atERS7_(void);

/* Symbol: _ZTV11HW_FMTuning */
/* Demangled: vtable for HW_FMTuning */
extern void* _ZTV11HW_FMTuning;

/* Symbol: _ZN26StereoTuningProviderKernelC1Ev */
/* Demangled: StereoTuningProviderKernel::StereoTuningProviderKernel() */
int _ZN26StereoTuningProviderKernelC1Ev(void);

/* Symbol: _ZN14MTKFEFMTriggerC1Ev */
/* Demangled: MTKFEFMTrigger::MTKFEFMTrigger() */
int _ZN14MTKFEFMTriggerC1Ev(void);

/* Symbol: _ZN21StereoSettingProvider12isLogEnabledEv */
/* Demangled: StereoSettingProvider::isLogEnabled() */
int _ZN21StereoSettingProvider12isLogEnabledEv(void);

/* Symbol: _Z13stringToRatioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: stringToRatio(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _Z13stringToRatioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZN21StereoSettingProvider12__imageRatioE */
/* Demangled: StereoSettingProvider::__imageRatio */
extern void* _ZN21StereoSettingProvider12__imageRatioE;

/* Symbol: _ZN26StereoTuningProviderKernelD2Ev */
/* Demangled: StereoTuningProviderKernel::~StereoTuningProviderKernel() */
int _ZN26StereoTuningProviderKernelD2Ev(void);

/* Symbol: _ZN14MTKFEFMTriggerD2Ev */
/* Demangled: MTKFEFMTrigger::~MTKFEFMTrigger() */
int _ZN14MTKFEFMTriggerD2Ev(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void);

/* Symbol: _ZTV27StereoSettingProviderKernel */
/* Demangled: vtable for StereoSettingProviderKernel */
extern void* _ZTV27StereoSettingProviderKernel;

/* Symbol: _ZGVN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_P_Crop_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE5mLockE;

/* Symbol: _ZN12HW_DPETuning10__initBBoxEPN5NSCam8NSIoPipe9DVEConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: HW_DPETuning::__initBBox(NSCam::NSIoPipe::DVEConfig*, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN12HW_DPETuning10__initBBoxEPN5NSCam8NSIoPipe9DVEConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN12HW_OCCTuning18_initDefaultValuesEv */
/* Demangled: HW_OCCTuning::_initDefaultValues() */
int _ZN12HW_OCCTuning18_initDefaultValuesEv(void);

/* Symbol: _ZNKSt3__16bitsetILj6EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::bitset<6u>::to_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, char) const */
int _ZNKSt3__16bitsetILj6EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__assign_uniqueIPKNS_4pairIKS7_iEEEEvT_SL_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__assign_unique<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const*>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const*, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE15__assign_uniqueIPKNS_4pairIKS7_iEEEEvT_SL_(void);

/* Symbol: _ZN12SW_N3DTuning18_initDefaultValuesEv */
/* Demangled: SW_N3DTuning::_initDefaultValues() */
int _ZN12SW_N3DTuning18_initDefaultValuesEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::reserve(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE7reserveEj(void);

/* Symbol: _ZN21StereoSettingProvider14setPreviewSizeEN5NSCam5MSizeE */
/* Demangled: StereoSettingProvider::setPreviewSize(NSCam::MSize) */
int _ZN21StereoSettingProvider14setPreviewSizeEN5NSCam5MSizeE(void);

/* Symbol: _ZTSN8nlohmann6detail9exceptionE */
/* Demangled: typeinfo name for nlohmann::detail::exception */
extern void* _ZTSN8nlohmann6detail9exceptionE;

/* Symbol: _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: _ZGVN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_P_2_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE5mLockE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSE_IJEEEEEENS_4pairINS_15__tree_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProvider13needToRunFEFMEiib */
/* Demangled: StereoHAL::FEFMSettingProvider::needToRunFEFM(int, int, bool) */
int _ZN9StereoHAL19FEFMSettingProvider13needToRunFEFMEiib(void);

/* Symbol: _ZN21StereoSettingProvider17__logicalDeviceIDE */
/* Demangled: StereoSettingProvider::__logicalDeviceID */
extern void* _ZN21StereoSettingProvider17__logicalDeviceIDE;

/* Symbol: _ZGVN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_B_Crop_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE5mLockE;

/* Symbol: _ZTV23Pass2A_P_3_SizeProvider */
/* Demangled: vtable for Pass2A_P_3_SizeProvider */
extern void* _ZTV23Pass2A_P_3_SizeProvider;

/* Symbol: _ZN9StereoHAL20StereoTuningProvider16getWMFTuningInfoERNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS1_9allocatorIS5_EEEERNS2_IPvNS6_ISA_EEEE */
/* Demangled: StereoHAL::StereoTuningProvider::getWMFTuningInfo(std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >&, std::__1::vector<void*, std::__1::allocator<void*> >&) */
int _ZN9StereoHAL20StereoTuningProvider16getWMFTuningInfoERNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS1_9allocatorIS5_EEEERNS2_IPvNS6_ISA_EEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_(void);

/* Symbol: _ZN26StereoTuningProviderKernel4initEv */
/* Demangled: StereoTuningProviderKernel::init() */
int _ZN26StereoTuningProviderKernel4initEv(void);

/* Symbol: _ZN13StereoFDProxy7__facesE */
/* Demangled: StereoFDProxy::__faces */
extern void* _ZN13StereoFDProxy7__facesE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__tree_node<std::__1::__value_type<int, StereoHAL::StereoArea>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoHAL::StereoArea> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN21StereoSettingProvider20setStereoFeatureModeEibb */
/* Demangled: StereoSettingProvider::setStereoFeatureMode(int, bool, bool) */
int _ZN21StereoSettingProvider20setStereoFeatureModeEibb(void);

/* Symbol: _ZN21StereoSettingProvider32getMaxSceneInfoBufferSizeInBytesEv */
/* Demangled: StereoSettingProvider::getMaxSceneInfoBufferSizeInBytes() */
int _ZN21StereoSettingProvider32getMaxSceneInfoBufferSizeInBytesEv(void);

/* Symbol: _Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER21StereoSensorSetting_T */
/* Demangled: from_json(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, StereoSensorSetting_T&) */
int _Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER21StereoSensorSetting_T(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZZN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_Crop_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZTV12HW_DPETuning */
/* Demangled: vtable for HW_DPETuning */
extern void* _ZTV12HW_DPETuning;

/* Symbol: _ZN21StereoSettingProvider20updateSensorScenarioEjj */
/* Demangled: StereoSettingProvider::updateSensorScenario(unsigned int, unsigned int) */
int _ZN21StereoSettingProvider20updateSensorScenarioEjj(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN18StereoSizeProvider8__P1LockE */
/* Demangled: StereoSizeProvider::__P1Lock */
extern void* _ZN18StereoSizeProvider8__P1LockE;

/* Symbol: _ZZN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE8__detachEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__detach(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE8__detachEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN12SW_N3DTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_N3DTuning::SW_N3DTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN12SW_N3DTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN21StereoSettingProvider29getExtraDataBufferSizeInBytesEv */
/* Demangled: StereoSettingProvider::getExtraDataBufferSizeInBytes() */
int _ZN21StereoSettingProvider29getExtraDataBufferSizeInBytesEv(void);

/* Symbol: _ZN11HW_FMTuningD2Ev */
/* Demangled: HW_FMTuning::~HW_FMTuning() */
int _ZN11HW_FMTuningD2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE11__vallocateEj */
/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE11__vallocateEj(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZTV9CamCalDrv */
/* Demangled: vtable for CamCalDrv */
extern void* _ZTV9CamCalDrv;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZN12HW_OCCTuning11__updateROIERN5NSCam8NSIoPipe9OCCConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: HW_OCCTuning::__updateROI(NSCam::NSIoPipe::OCCConfig&, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN12HW_OCCTuning11__updateROIERN5NSCam8NSIoPipe9OCCConfigEN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN21StereoSettingProvider15getDepthmapInfoE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoSettingProvider::getDepthmapInfo(ENUM_STEREO_RATIO, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN21StereoSettingProvider15getDepthmapInfoE17ENUM_STEREO_RATION9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13StereoFDProxy11__focusLockE */
/* Demangled: StereoFDProxy::__focusLock */
extern void* _ZN13StereoFDProxy11__focusLockE;

/* Symbol: _ZN18StereoSizeProvider33getDualcamP2IMGOYuvCropResizeInfoEiRN5NSCam5MRectERNS0_5MSizeE */
/* Demangled: StereoSizeProvider::getDualcamP2IMGOYuvCropResizeInfo(int, NSCam::MRect&, NSCam::MSize&) */
int _ZN18StereoSizeProvider33getDualcamP2IMGOYuvCropResizeInfoEiRN5NSCam5MRectERNS0_5MSizeE(void);

/* Symbol: _ZN11SW_GFTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE */
/* Demangled: SW_GFTuning::__getDofValue(unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
int _ZN11SW_GFTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE13__vdeallocateEv */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__vdeallocate() */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE13__vdeallocateEv(void);

/* Symbol: _ZN11SW_GFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_GFTuning::SW_GFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN11SW_GFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _Z22sensorScenarioToStringj */
/* Demangled: sensorScenarioToString(unsigned int) */
int _Z22sensorScenarioToStringj(void);

/* Symbol: _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev */
/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::push_back(bool const&) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(void);

/* Symbol: _ZTV15AutoProfileUtil */
/* Demangled: vtable for AutoProfileUtil */
extern void* _ZTV15AutoProfileUtil;

/* Symbol: _ZN12SW_OCCTuning18_initDefaultValuesEv */
/* Demangled: SW_OCCTuning::_initDefaultValues() */
int _ZN12SW_OCCTuning18_initDefaultValuesEv(void);

/* Symbol: _ZN21StereoSettingProvider9isDeNoiseEv */
/* Demangled: StereoSettingProvider::isDeNoise() */
int _ZN21StereoSettingProvider9isDeNoiseEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_ */
/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&) */
int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_(void);

/* Symbol: _ZGVN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_P_3_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE5mLockE;

/* Symbol: _ZN14SW_BOKEHTuningD0Ev */
/* Demangled: SW_BOKEHTuning::~SW_BOKEHTuning() */
int _ZN14SW_BOKEHTuningD0Ev(void);

/* Symbol: _ZN12SW_N3DTuning3logER10FastLoggerb */
/* Demangled: SW_N3DTuning::log(FastLogger&, bool) */
int _ZN12SW_N3DTuning3logER10FastLoggerb(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProvider6__LockE */
/* Demangled: StereoHAL::FEFMSettingProvider::__Lock */
extern void* _ZN9StereoHAL19FEFMSettingProvider6__LockE;

/* Symbol: _ZZN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZTV12SW_OCCTuning */
/* Demangled: vtable for SW_OCCTuning */
extern void* _ZTV12SW_OCCTuning;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZTV10FastLogger */
/* Demangled: vtable for FastLogger */
extern void* _ZTV10FastLogger;

/* Symbol: _ZN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_2_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE5mLockE;

/* Symbol: _ZTV21Pass2A_P_SizeProvider */
/* Demangled: vtable for Pass2A_P_SizeProvider */
extern void* _ZTV21Pass2A_P_SizeProvider;

/* Symbol: _ZN12HW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_OCCTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN12HW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: _Z19__getSensorSettingsjRP21StereoSensorSetting_TS1_ */
/* Demangled: __getSensorSettings(unsigned int, StereoSensorSetting_T*&, StereoSensorSetting_T*&) */
int _Z19__getSensorSettingsjRP21StereoSensorSetting_TS1_(void);

/* Symbol: _ZN21StereoSettingProvider20getStereoSensorIndexERiS0_j */
/* Demangled: StereoSettingProvider::getStereoSensorIndex(int&, int&, unsigned int) */
int _ZN21StereoSettingProvider20getStereoSensorIndexERiS0_j(void);

/* Symbol: _ZTSN8nlohmann6detail11parse_errorE */
/* Demangled: typeinfo name for nlohmann::detail::parse_error */
extern void* _ZTSN8nlohmann6detail11parse_errorE;

/* Symbol: _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers */
/* Demangled: nlohmann::detail::dtoa_impl::get_cached_power_for_binary_exponent(int)::kCachedPowers */
extern void* _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers;

/* Symbol: _ZN14HW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_BOKEHTuning::HW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN14HW_BOKEHTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN14HW_BOKEHTuningD0Ev */
/* Demangled: HW_BOKEHTuning::~HW_BOKEHTuning() */
int _ZN14HW_BOKEHTuningD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__tree_node<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EEPj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&, unsigned int*) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EEPj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void);

/* Symbol: _ZN26StereoTuningProviderKernelC2Ev */
/* Demangled: StereoTuningProviderKernel::StereoTuningProviderKernel() */
int _ZN26StereoTuningProviderKernelC2Ev(void);

/* Symbol: _ZN14MTKFEFMTriggerC2Ev */
/* Demangled: MTKFEFMTrigger::MTKFEFMTrigger() */
int _ZN14MTKFEFMTriggerC2Ev(void);

/* Symbol: _ZN21StereoSettingProvider27_getStereoFeatureModeStringEi */
/* Demangled: StereoSettingProvider::_getStereoFeatureModeString(int) */
int _ZN21StereoSettingProvider27_getStereoFeatureModeStringEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_(void);

/* Symbol: _ZN11HW_FMTuning18_initDefaultValuesEv */
/* Demangled: HW_FMTuning::_initDefaultValues() */
int _ZN11HW_FMTuning18_initDefaultValuesEv(void);

/* Symbol: _ZTV21Pass2A_B_SizeProvider */
/* Demangled: vtable for Pass2A_B_SizeProvider */
extern void* _ZTV21Pass2A_B_SizeProvider;

/* Symbol: _ZTVN8nlohmann6detail20input_stream_adapterE */
/* Demangled: vtable for nlohmann::detail::input_stream_adapter */
extern void* _ZTVN8nlohmann6detail20input_stream_adapterE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEEE;

/* Symbol: _ZTVN8nlohmann6detail10type_errorE */
/* Demangled: vtable for nlohmann::detail::type_error */
extern void* _ZTVN8nlohmann6detail10type_errorE;

/* Symbol: _ZN18StereoSizeProvider12getPass1SizeEN9StereoHAL18ENUM_STEREO_SENSOREN5NSCam12EImageFormatEN9NSImageio7NSIspio10EPortIndexENS0_20ENUM_STEREO_SCENARIOERNS2_5MRectERNS2_5MSizeERj17ENUM_STEREO_RATIO */
/* Demangled: StereoSizeProvider::getPass1Size(StereoHAL::ENUM_STEREO_SENSOR, NSCam::EImageFormat, NSImageio::NSIspio::EPortIndex, StereoHAL::ENUM_STEREO_SCENARIO, NSCam::MRect&, NSCam::MSize&, unsigned int&, ENUM_STEREO_RATIO) */
int _ZN18StereoSizeProvider12getPass1SizeEN9StereoHAL18ENUM_STEREO_SENSOREN5NSCam12EImageFormatEN9NSImageio7NSIspio10EPortIndexENS0_20ENUM_STEREO_SCENARIOERNS2_5MRectERNS2_5MSizeERj17ENUM_STEREO_RATIO(void);

/* Symbol: _ZN12HW_DPETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_DPETuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN12HW_DPETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTV26Pass2A_P_Crop_SizeProvider */
/* Demangled: vtable for Pass2A_P_Crop_SizeProvider */
extern void* _ZTV26Pass2A_P_Crop_SizeProvider;

/* Symbol: _ZN12HW_WMFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: HW_WMFTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN12HW_WMFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_N3D_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISR_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSJ_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISR_EEEEEEDpOT_(void);

/* Symbol: _ZTIN8nlohmann6detail9exceptionE */
/* Demangled: typeinfo for nlohmann::detail::exception */
extern void* _ZTIN8nlohmann6detail9exceptionE;

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZTV24Pass2A_Crop_SizeProvider */
/* Demangled: vtable for Pass2A_Crop_SizeProvider */
extern void* _ZTV24Pass2A_Crop_SizeProvider;

/* Symbol: _ZN12HW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: HW_OCCTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN12HW_OCCTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN18StereoSizeProvider15__getCenterCropERN5NSCam5MSizeERNS0_5MRectE */
/* Demangled: StereoSizeProvider::__getCenterCrop(NSCam::MSize&, NSCam::MRect&) */
int _ZN18StereoSizeProvider15__getCenterCropERN5NSCam5MSizeERNS0_5MRectE(void);

/* Symbol: QUERY_KEY_BOKEH_STRENTH_NAMES */
/* Demangled: QUERY_KEY_BOKEH_STRENTH_NAMES */
extern void* QUERY_KEY_BOKEH_STRENTH_NAMES;

/* Symbol: _ZN27StereoSettingProviderKernel10__instanceE */
/* Demangled: StereoSettingProviderKernel::__instance */
extern void* _ZN27StereoSettingProviderKernel10__instanceE;

/* Symbol: _ZN12HW_WMFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_WMFTuning::HW_WMFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN12HW_WMFTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN14MTKFEFMTrigger13__FEFMTriggerE */
/* Demangled: MTKFEFMTrigger::__FEFMTrigger */
extern void* _ZN14MTKFEFMTrigger13__FEFMTriggerE;

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN11HW_FETuningD0Ev */
/* Demangled: HW_FETuning::~HW_FETuning() */
int _ZN11HW_FETuningD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_OCC_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIS3_JRKNS2_IKS3_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SM_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__emplace_hint_unique_key_args<std::__1::pair<int, int>, std::__1::pair<std::__1::pair<int, int> const, ENUM_STEREO_RATIO> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*, int>, std::__1::pair<int, int> const&, std::__1::pair<std::__1::pair<int, int> const, ENUM_STEREO_RATIO> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE30__emplace_hint_unique_key_argsIS3_JRKNS2_IKS3_S4_EEEEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEENS_21__tree_const_iteratorIS5_SM_iEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE13__move_assignERS5_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >::__move_assign(std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE13__move_assignERS5_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZN14HW_BOKEHTuning3logER10FastLoggerb */
/* Demangled: HW_BOKEHTuning::log(FastLogger&, bool) */
int _ZN14HW_BOKEHTuning3logER10FastLoggerb(void);

/* Symbol: _ZN21StereoSettingProvider15__vsdofScenarioE */
/* Demangled: StereoSettingProvider::__vsdofScenario */
extern void* _ZN21StereoSettingProvider15__vsdofScenarioE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__find_equal<std::__1::pair<int, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::pair<int, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_SF_EEiEERPNS_15__tree_end_nodeISH_EESI_RKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE14__assign_multiINS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEEEvT_SK_(void);

/* Symbol: _ZN13StereoFDProxy8getFacesEv */
/* Demangled: StereoFDProxy::getFaces() */
int _ZN13StereoFDProxy8getFacesEv(void);

/* Symbol: _ZNSt3__16uniqueINS_11__wrap_iterIPjEENS_10__equal_toIjjEEEET_S6_S6_T0_ */
/* Demangled: std::__1::__wrap_iter<unsigned int*> std::__1::unique<std::__1::__wrap_iter<unsigned int*>, std::__1::__equal_to<unsigned int, unsigned int> >(std::__1::__wrap_iter<unsigned int*>, std::__1::__wrap_iter<unsigned int*>, std::__1::__equal_to<unsigned int, unsigned int>) */
int _ZNSt3__16uniqueINS_11__wrap_iterIPjEENS_10__equal_toIjjEEEET_S6_S6_T0_(void);

/* Symbol: _ZN12SW_N3DTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: SW_N3DTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN12SW_N3DTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_(void);

/* Symbol: _ZNSt3__13mapIjjNS_4lessIjEENS_9allocatorINS_4pairIKjjEEEEEixERS5_ */
/* Demangled: std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > >::operator[](unsigned int const&) */
int _ZNSt3__13mapIjjNS_4lessIjEENS_9allocatorINS_4pairIKjjEEEEEixERS5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MRect> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_(void);

/* Symbol: _Z20featureModeToStringsi */
/* Demangled: featureModeToStrings(int) */
int _Z20featureModeToStringsi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::destroy(std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTV19Pass2A_SizeProvider */
/* Demangled: vtable for Pass2A_SizeProvider */
extern void* _ZTV19Pass2A_SizeProvider;

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEELi0EEEvRKT_RT0_ */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::vector<int, std::__1::allocator<int> >, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IiNS9_IiEEEELi0EEEvRKT_RT0_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVN8nlohmann6detail12out_of_rangeE */
/* Demangled: vtable for nlohmann::detail::out_of_range */
extern void* _ZTVN8nlohmann6detail12out_of_rangeE;

/* Symbol: _ZN11SW_GFTuningD0Ev */
/* Demangled: SW_GFTuning::~SW_GFTuning() */
int _ZN11SW_GFTuningD0Ev(void);

/* Symbol: _ZN12SW_OCCTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_OCCTuning::SW_OCCTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN12SW_OCCTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE */
/* Demangled: _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE */
int _ZN8nlohmann6detail20from_json_array_implINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEEEEDTcmcldtfp0_7reserveclsr3stdE7declvalINT0_9size_typeEEEEcvv_EERKT_RSG_NS0_12priority_tagILj1EEE(void);

/* Symbol: _ZN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE5mLockE;

/* Symbol: _ZN14SW_BOKEHTuningD1Ev */
/* Demangled: SW_BOKEHTuning::~SW_BOKEHTuning() */
int _ZN14SW_BOKEHTuningD1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void);

/* Symbol: _ZN21StereoSettingProvider20getMain1FOVCropRatioEv */
/* Demangled: StereoSettingProvider::getMain1FOVCropRatio() */
int _ZN21StereoSettingProvider20getMain1FOVCropRatioEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN13StereoFDProxy8setFacesEP21MtkCameraFaceMetadata */
/* Demangled: StereoFDProxy::setFaces(MtkCameraFaceMetadata*) */
int _ZN13StereoFDProxy8setFacesEP21MtkCameraFaceMetadata(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSL_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSL_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN14SW_BOKEHTuning3logER10FastLoggerb */
/* Demangled: SW_BOKEHTuning::log(FastLogger&, bool) */
int _ZN14SW_BOKEHTuning3logER10FastLoggerb(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS3_PvEENS_22__tree_node_destructorINS8_ISN_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, void*> > > > std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSF_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS3_PvEENS_22__tree_node_destructorINS8_ISN_EEEEEEDpOT_(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned char, std::__1::allocator<unsigned char>&>&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv */
/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider16getDPETuningInfoEPN5NSCam8NSIoPipe9DVEConfigENS_20ENUM_STEREO_SCENARIOE */
/* Demangled: StereoHAL::StereoTuningProvider::getDPETuningInfo(NSCam::NSIoPipe::DVEConfig*, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN9StereoHAL20StereoTuningProvider16getDPETuningInfoEPN5NSCam8NSIoPipe9DVEConfigENS_20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN14HW_MDPPQTuning3logER10FastLoggerb */
/* Demangled: HW_MDPPQTuning::log(FastLogger&, bool) */
int _ZN14HW_MDPPQTuning3logER10FastLoggerb(void);

/* Symbol: _ZN14HW_BOKEHTuningD1Ev */
/* Demangled: HW_BOKEHTuning::~HW_BOKEHTuning() */
int _ZN14HW_BOKEHTuningD1Ev(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE */
/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >&>&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS8_RS9_EE(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProvider11getInstanceEv */
/* Demangled: StereoHAL::FEFMSettingProvider::getInstance() */
int _ZN9StereoHAL19FEFMSettingProvider11getInstanceEv(void);

/* Symbol: EMPTY_LDC */
/* Demangled: EMPTY_LDC */
extern void* EMPTY_LDC;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE13__vdeallocateEv */
/* Demangled: std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__vdeallocate() */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE13__vdeallocateEv(void);

/* Symbol: _ZN21StereoSettingProvider9enableLogEv */
/* Demangled: StereoSettingProvider::enableLog() */
int _ZN21StereoSettingProvider9enableLogEv(void);

/* Symbol: _ZN13StereoFDProxy5resetEv */
/* Demangled: StereoFDProxy::reset() */
int _ZN13StereoFDProxy5resetEv(void);

/* Symbol: _ZN18StereoSizeProvider6__lockE */
/* Demangled: StereoSizeProvider::__lock */
extern void* _ZN18StereoSizeProvider6__lockE;

/* Symbol: _ZN27StereoSettingProviderKernelD0Ev */
/* Demangled: StereoSettingProviderKernel::~StereoSettingProviderKernel() */
int _ZN27StereoSettingProviderKernelD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSK_IJEEEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS5_ISS_EEEEEEDpOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZZN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_2_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI23Pass2A_P_2_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZN11HW_FETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_FETuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN11HW_FETuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZTVN8nlohmann6detail11parse_errorE */
/* Demangled: vtable for nlohmann::detail::parse_error */
extern void* _ZTVN8nlohmann6detail11parse_errorE;

/* Symbol: _ZN14HW_MDPPQTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_MDPPQTuning::HW_MDPPQTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN14HW_MDPPQTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE12__move_rangeEPiS4_S4_ */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__move_range(int*, int*, int*) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE12__move_rangeEPiS4_S4_(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, SW_OCC_TUNING_T>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN27StereoSettingProviderKernel15destroyInstanceEv */
/* Demangled: StereoSettingProviderKernel::destroyInstance() */
int _ZN27StereoSettingProviderKernel15destroyInstanceEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIS8_EERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIS8_EERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEEC2Ej */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::vector(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEEC2Ej(void);

/* Symbol: _ZTV14HW_BOKEHTuning */
/* Demangled: vtable for HW_BOKEHTuning */
extern void* _ZTV14HW_BOKEHTuning;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_S8_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, ENUM_STEREO_RATIO> > >::__find_equal<std::__1::pair<int, int> >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::pair<int, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEE17ENUM_STEREO_RATIOEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISH_EERKT_(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZN13StereoFDProxy15isFocusedOnFaceEv */
/* Demangled: StereoFDProxy::isFocusedOnFace() */
int _ZN13StereoFDProxy15isFocusedOnFaceEv(void);

/* Symbol: _ZTV11HW_FETuning */
/* Demangled: vtable for HW_FETuning */
extern void* _ZTV11HW_FETuning;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: g_currentSensorCombination */
/* Demangled: g_currentSensorCombination */
extern void* g_currentSensorCombination;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__move_assign(std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>&>&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider18getWMFInputChannelEv */
/* Demangled: StereoHAL::StereoTuningProvider::getWMFInputChannel() */
int _ZN9StereoHAL20StereoTuningProvider18getWMFInputChannelEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void);

/* Symbol: _ZN21StereoSettingProvider21__sensorScenarioMain1E */
/* Demangled: StereoSettingProvider::__sensorScenarioMain1 */
extern void* _ZN21StereoSettingProvider21__sensorScenarioMain1E;

/* Symbol: _ZN11HW_FETuningD1Ev */
/* Demangled: HW_FETuning::~HW_FETuning() */
int _ZN11HW_FETuningD1Ev(void);

/* Symbol: _ZN12SW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_OCCTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN12SW_OCCTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN11HW_FMTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: HW_FMTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN11HW_FMTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT */
/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void);

/* Symbol: _ZN21StereoSettingProvider7hasHWFEEv */
/* Demangled: StereoSettingProvider::hasHWFE() */
int _ZN21StereoSettingProvider7hasHWFEEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProvider10__instanceE */
/* Demangled: StereoHAL::FEFMSettingProvider::__instance */
extern void* _ZN9StereoHAL19FEFMSettingProvider10__instanceE;

/* Symbol: _ZN9StereoHAL19FEFMSettingProvider4initEii */
/* Demangled: StereoHAL::FEFMSettingProvider::init(int, int) */
int _ZN9StereoHAL19FEFMSettingProvider4initEii(void);

/* Symbol: _ZN21StereoSettingProvider19isProfileLogEnabledEv */
/* Demangled: StereoSettingProvider::isProfileLogEnabled() */
int _ZN21StereoSettingProvider19isProfileLogEnabledEv(void);

/* Symbol: _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZTVNSt3__117bad_function_callE */
/* Demangled: vtable for std::__1::bad_function_call */
extern void* _ZTVNSt3__117bad_function_callE;

/* Symbol: _ZGVN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_P_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_P_SizeProviderE5mLockE;

/* Symbol: _ZN21StereoSettingProvider17getFOVCropSettingEv */
/* Demangled: StereoSettingProvider::getFOVCropSetting() */
int _ZN21StereoSettingProvider17getFOVCropSettingEv(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI19Pass2A_SizeProviderE5mLockE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZTIN8nlohmann6detail11other_errorE */
/* Demangled: typeinfo for nlohmann::detail::other_error */
extern void* _ZTIN8nlohmann6detail11other_errorE;

/* Symbol: _ZN12HW_WMFTuning3logER10FastLoggerb */
/* Demangled: HW_WMFTuning::log(FastLogger&, bool) */
int _ZN12HW_WMFTuning3logER10FastLoggerb(void);

/* Symbol: _ZN11SW_GFTuningD1Ev */
/* Demangled: SW_GFTuning::~SW_GFTuning() */
int _ZN11SW_GFTuningD1Ev(void);

/* Symbol: _ZN21StereoSettingProvider13stereoProfileEj */
/* Demangled: StereoSettingProvider::stereoProfile(unsigned int) */
int _ZN21StereoSettingProvider13stereoProfileEj(void);

/* Symbol: _ZN21StereoSettingProvider18__stereoModuleTypeE */
/* Demangled: StereoSettingProvider::__stereoModuleType */
extern void* _ZN21StereoSettingProvider18__stereoModuleTypeE;

/* Symbol: _ZN21StereoSettingProvider18setLogicalDeviceIDEj */
/* Demangled: StereoSettingProvider::setLogicalDeviceID(unsigned int) */
int _ZN21StereoSettingProvider18setLogicalDeviceIDEj(void);

/* Symbol: _ZN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_B_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE5mLockE;

/* Symbol: _ZTV23Pass2A_P_2_SizeProvider */
/* Demangled: vtable for Pass2A_P_2_SizeProvider */
extern void* _ZTV23Pass2A_P_2_SizeProvider;

/* Symbol: _ZN9StereoHAL20StereoTuningProvider18getBokehTuningInfoEPvNS_19ENUM_BOKEH_STRENGTHE */
/* Demangled: StereoHAL::StereoTuningProvider::getBokehTuningInfo(void*, StereoHAL::ENUM_BOKEH_STRENGTH) */
int _ZN9StereoHAL20StereoTuningProvider18getBokehTuningInfoEPvNS_19ENUM_BOKEH_STRENGTHE(void);

/* Symbol: _ZN14SW_BOKEHTuningD2Ev */
/* Demangled: SW_BOKEHTuning::~SW_BOKEHTuning() */
int _ZN14SW_BOKEHTuningD2Ev(void);

/* Symbol: _ZN27StereoSettingProviderKernel4initEv */
/* Demangled: StereoSettingProviderKernel::init() */
int _ZN27StereoSettingProviderKernel4initEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj */
/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void);

/* Symbol: _ZN21StereoSettingProvider11getShotModeEv */
/* Demangled: StereoSettingProvider::getShotMode() */
int _ZN21StereoSettingProvider11getShotModeEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<char const*>(char const* const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void);

/* Symbol: _ZZN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_2_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZN14HW_BOKEHTuningD2Ev */
/* Demangled: HW_BOKEHTuning::~HW_BOKEHTuning() */
int _ZN14HW_BOKEHTuningD2Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN27StereoSettingProviderKernel11logSettingsEv */
/* Demangled: StereoSettingProviderKernel::logSettings() */
int _ZN27StereoSettingProviderKernel11logSettingsEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__find_equal<int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, int const&) */
int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISG_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE7reserveEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::reserve(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE7reserveEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<int, char const*>, std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*, int> std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__emplace_hint_unique_key_args<int, std::__1::pair<int const, char const*> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<int, char const*>, std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*, int>, int const&, std::__1::pair<int const, char const*> const&) */
int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE30__emplace_hint_unique_key_argsIiJRKNS_4pairIKiS3_EEEEENS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEENS_21__tree_const_iteratorIS4_SM_iEERKT_DpOT0_(void);

/* Symbol: _ZTV12HW_WMFTuning */
/* Demangled: vtable for HW_WMFTuning */
extern void* _ZTV12HW_WMFTuning;

/* Symbol: _ZN11HW_FMTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_FMTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN11HW_FMTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN27StereoSettingProviderKernelD1Ev */
/* Demangled: StereoSettingProviderKernel::~StereoSettingProviderKernel() */
int _ZN27StereoSettingProviderKernelD1Ev(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider15getFMTuningInfoENS_17ENUM_FM_DIRECTIONERN5NSCam8NSIoPipe6FMInfoE */
/* Demangled: StereoHAL::StereoTuningProvider::getFMTuningInfo(StereoHAL::ENUM_FM_DIRECTION, NSCam::NSIoPipe::FMInfo&) */
int _ZN9StereoHAL20StereoTuningProvider15getFMTuningInfoENS_17ENUM_FM_DIRECTIONERN5NSCam8NSIoPipe6FMInfoE(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN9CamCalDrv15destroyInstanceEv */
/* Demangled: CamCalDrv::destroyInstance() */
int _ZN9CamCalDrv15destroyInstanceEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::__swap_out_circular_buffer(std::__1::__split_buffer<MtkCameraFace, std::__1::allocator<MtkCameraFace>&>&) */
int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_3_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE5mLockE;

/* Symbol: _ZN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_Crop_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE5mLockE;

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE(void);

/* Symbol: _ZN9CamCalDrvD0Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD0Ev(void);

/* Symbol: _ZN21StereoSettingProvider9enableLogEPKc */
/* Demangled: StereoSettingProvider::enableLog(char const*) */
int _ZN21StereoSettingProvider9enableLogEPKc(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MRect>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MRect> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MRect>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MRectEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN11HW_FMTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_FMTuning::HW_FMTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN11HW_FMTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9CamCalDrv11getInstanceEv */
/* Demangled: CamCalDrv::getInstance() */
int _ZN9CamCalDrv11getInstanceEv(void);

/* Symbol: _ZGVN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_Crop_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI24Pass2A_Crop_SizeProviderE5mLockE;

/* Symbol: _ZN11SW_GFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: SW_GFTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN11SW_GFTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZN14MTKFEFMTrigger9__queryAFEiiii */
/* Demangled: MTKFEFMTrigger::__queryAF(int, int, int, int) */
int _ZN14MTKFEFMTrigger9__queryAFEiiii(void);

/* Symbol: _ZN21StereoSettingProvider25getSensorRelativePositionEj */
/* Demangled: StereoSettingProvider::getSensorRelativePosition(unsigned int) */
int _ZN21StereoSettingProvider25getSensorRelativePositionEj(void);

/* Symbol: _ZN11HW_FETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: HW_FETuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN11HW_FETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertENS_11__wrap_iterIPKjEEOj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::insert(std::__1::__wrap_iter<unsigned int const*>, unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6insertENS_11__wrap_iterIPKjEEOj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN27StereoSettingProviderKernel29__loadSettingsFromCalibrationEv */
/* Demangled: StereoSettingProviderKernel::__loadSettingsFromCalibration() */
int _ZN27StereoSettingProviderKernel29__loadSettingsFromCalibrationEv(void);

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>::string_t&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE(void);

/* Symbol: _ZN21StereoSettingProvider14isAFSyncNeededEj */
/* Demangled: StereoSettingProvider::isAFSyncNeeded(unsigned int) */
int _ZN21StereoSettingProvider14isAFSyncNeededEj(void);

/* Symbol: _ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev */
/* Demangled: std::__1::shared_ptr<nlohmann::detail::input_adapter_protocol>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIfRNS_9allocatorIfEEEC2EjjS3_ */
/* Demangled: std::__1::__split_buffer<float, std::__1::allocator<float>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<float>&) */
int _ZNSt3__114__split_bufferIfRNS_9allocatorIfEEEC2EjjS3_(void);

/* Symbol: QUERY_KEY_WMF_ROUND_NAME */
/* Demangled: QUERY_KEY_WMF_ROUND_NAME */
extern void* QUERY_KEY_WMF_ROUND_NAME;

/* Symbol: _ZN11HW_FETuningD2Ev */
/* Demangled: HW_FETuning::~HW_FETuning() */
int _ZN11HW_FETuningD2Ev(void);

/* Symbol: _ZN11HW_FMTuning3logER10FastLoggerb */
/* Demangled: HW_FMTuning::log(FastLogger&, bool) */
int _ZN11HW_FMTuning3logER10FastLoggerb(void);

/* Symbol: _ZN11SW_GFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_GFTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN11SW_GFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN21StereoSettingProvider31getMaxN3DDebugBufferSizeInBytesEv */
/* Demangled: StereoSettingProvider::getMaxN3DDebugBufferSizeInBytes() */
int _ZN21StereoSettingProvider31getMaxN3DDebugBufferSizeInBytesEv(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN18StereoSizeProvider11getInstanceEv */
/* Demangled: StereoSizeProvider::getInstance() */
int _ZN18StereoSizeProvider11getInstanceEv(void);

/* Symbol: _ZTSSt12out_of_range */
/* Demangled: typeinfo name for std::out_of_range */
extern void* _ZTSSt12out_of_range;

/* Symbol: _ZN27StereoSettingProviderKernel15__parseDocumentERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: StereoSettingProviderKernel::__parseDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN27StereoSettingProviderKernel15__parseDocumentERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZGVN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_B_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_B_SizeProviderE5mLockE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::MSize>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::MSize>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::MSize> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam5MSizeEEENS_19__map_value_compareIjS4_NS_4lessIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN21StereoSettingProvider15isWideTeleVSDoFEj */
/* Demangled: StereoSettingProvider::isWideTeleVSDoF(unsigned int) */
int _ZN21StereoSettingProvider15isWideTeleVSDoFEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, char const*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, char const*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, char const*> > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, char const*>, std::__1::__tree_node<std::__1::__value_type<int, char const*>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
int _ZNSt3__16__treeINS_12__value_typeIiPKcEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS4_PNS_11__tree_nodeIS4_SE_EEiEERPNS_15__tree_end_nodeISG_EESH_RKT_(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZN11HW_FETuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_FETuning::HW_FETuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN11HW_FETuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN21StereoSettingProvider12isLogEnabledEPKc */
/* Demangled: StereoSettingProvider::isLogEnabled(char const*) */
int _ZN21StereoSettingProvider12isLogEnabledEPKc(void);

/* Symbol: _ZN12HW_DPETuning18_initDefaultValuesEv */
/* Demangled: HW_DPETuning::_initDefaultValues() */
int _ZN12HW_DPETuning18_initDefaultValuesEv(void);

/* Symbol: _ZN14SW_BOKEHTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE */
/* Demangled: SW_BOKEHTuning::__getDofValue(unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
int _ZN14SW_BOKEHTuning13__getDofValueEjRNSt3__16vectorIjNS0_9allocatorIjEEEE(void);

/* Symbol: _ZN9CamCalDrv4InitEmPv */
/* Demangled: CamCalDrv::Init(unsigned long, void*) */
int _ZN9CamCalDrv4InitEmPv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__tree_node<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__emplace_unique_key_args<ENUM_STEREO_RATIO, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>, std::__1::tuple<> >(ENUM_STEREO_RATIO const&, std::__1::piecewise_construct_t const&, std::__1::tuple<ENUM_STEREO_RATIO const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11SW_GFTuningD2Ev */
/* Demangled: SW_GFTuning::~SW_GFTuning() */
int _ZN11SW_GFTuningD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE4findIS7_EENS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEERKT_(void);

/* Symbol: _ZN14MTKFEFMTrigger9__runLockE */
/* Demangled: MTKFEFMTrigger::__runLock */
extern void* _ZN14MTKFEFMTrigger9__runLockE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSK_IJEEEEEENS_4pairINS_15__tree_iteratorIS9_PNS_11__tree_nodeIS9_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FMInfo> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FMInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN26StereoTuningProviderKernel11getInstanceEv */
/* Demangled: StereoTuningProviderKernel::getInstance() */
int _ZN26StereoTuningProviderKernel11getInstanceEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void);

/* Symbol: _ZN14SW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: SW_BOKEHTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN14SW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_4pairIKS7_iEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISO_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__construct_nodeIJRKNS_4pairIKS7_iEEEEENS_10unique_ptrINS_11__tree_nodeIS8_PvEENS_22__tree_node_destructorINS5_ISO_EEEEEEDpOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::__map_value_compare<StereoHAL::ENUM_STEREO_TUNING, std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*>, std::__1::less<StereoHAL::ENUM_STEREO_TUNING>, true>, std::__1::allocator<std::__1::__value_type<StereoHAL::ENUM_STEREO_TUNING, StereoTuningBase*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN9StereoHAL18ENUM_STEREO_TUNINGEP16StereoTuningBaseEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSI_SI_(void);

/* Symbol: _ZN21StereoSettingProvider19__stereoFeatureModeE */
/* Demangled: StereoSettingProvider::__stereoFeatureMode */
extern void* _ZN21StereoSettingProvider19__stereoFeatureModeE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN12HW_WMFTuningD0Ev */
/* Demangled: HW_WMFTuning::~HW_WMFTuning() */
int _ZN12HW_WMFTuningD0Ev(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider16getN3DTuningInfoENS_20ENUM_STEREO_SCENARIOERNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEE */
/* Demangled: StereoHAL::StereoTuningProvider::getN3DTuningInfo(StereoHAL::ENUM_STEREO_SCENARIO, std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >&) */
int _ZN9StereoHAL20StereoTuningProvider16getN3DTuningInfoENS_20ENUM_STEREO_SCENARIOERNSt3__16vectorINS2_4pairINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiEENS8_ISB_EEEE(void);

/* Symbol: _ZN27StereoSettingProviderKernelC1Ev */
/* Demangled: StereoSettingProviderKernel::StereoSettingProviderKernel() */
int _ZN27StereoSettingProviderKernelC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, StereoSensorSetting_T> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE21StereoSensorSetting_TEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISK_EERKT_(void);

/* Symbol: _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d */
/* Demangled: nlohmann::detail::serializer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::decode(unsigned char&, unsigned int&, unsigned char)::utf8d */
extern void* _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d;

/* Symbol: _ZN13StereoFDProxy11faceToMRectER13MtkCameraFace */
/* Demangled: StereoFDProxy::faceToMRect(MtkCameraFace&) */
int _ZN13StereoFDProxy11faceToMRectER13MtkCameraFace(void);

/* Symbol: _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::__push_back_slow_path<MtkCameraFace const&>(MtkCameraFace const&) */
int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZGVN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_3_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE5mLockE;

/* Symbol: _ZNSt3__13mapIjN5NSCam5MRectENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_ */
/* Demangled: std::__1::map<unsigned int, NSCam::MRect, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::MRect> > >::operator[](unsigned int const&) */
int _ZNSt3__13mapIjN5NSCam5MRectENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_(void);

/* Symbol: _ZN11HW_FETuning18_initDefaultValuesEv */
/* Demangled: HW_FETuning::_initDefaultValues() */
int _ZN11HW_FETuning18_initDefaultValuesEv(void);

/* Symbol: _ZNSt3__114__split_bufferIiRNS_9allocatorIiEEE9push_backEOi */
/* Demangled: std::__1::__split_buffer<int, std::__1::allocator<int>&>::push_back(int&&) */
int _ZNSt3__114__split_bufferIiRNS_9allocatorIiEEE9push_backEOi(void);

/* Symbol: _ZN21StereoSettingProvider21__sensorScenarioMain2E */
/* Demangled: StereoSettingProvider::__sensorScenarioMain2 */
extern void* _ZN21StereoSettingProvider21__sensorScenarioMain2E;

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZTV11SW_GFTuning */
/* Demangled: vtable for SW_GFTuning */
extern void* _ZTV11SW_GFTuning;

/* Symbol: _ZN5NSCam12CamCalHelper13sensorPowerOnEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void);

/* Symbol: _ZN21StereoSettingProvider19__initTuningIfReadyEv */
/* Demangled: StereoSettingProvider::__initTuningIfReady() */
int _ZN21StereoSettingProvider19__initTuningIfReadyEv(void);

/* Symbol: _ZN27StereoSettingProviderKernelD2Ev */
/* Demangled: StereoSettingProviderKernel::~StereoSettingProviderKernel() */
int _ZN27StereoSettingProviderKernelD2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN14SW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_BOKEHTuning::SW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN14SW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN21StereoSettingProvider20_updateImageSettingsEv */
/* Demangled: StereoSettingProvider::_updateImageSettings() */
int _ZN21StereoSettingProvider20_updateImageSettingsEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider16getN3DMaskMarginENS_20ENUM_STEREO_SCENARIOERNS_17StereoImageMarginE */
/* Demangled: StereoHAL::StereoTuningProvider::getN3DMaskMargin(StereoHAL::ENUM_STEREO_SCENARIO, StereoHAL::StereoImageMargin&) */
int _ZN9StereoHAL20StereoTuningProvider16getN3DMaskMarginENS_20ENUM_STEREO_SCENARIOERNS_17StereoImageMarginE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void);

/* Symbol: _ZN21StereoSettingProvider12getSensorFOVEiRfS0_ */
/* Demangled: StereoSettingProvider::getSensorFOV(int, float&, float&) */
int _ZN21StereoSettingProvider12getSensorFOVEiRfS0_(void);

/* Symbol: _ZN14SW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_BOKEHTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN14SW_BOKEHTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN9CamCalDrv15StCamCalCaldataE */
/* Demangled: CamCalDrv::StCamCalCaldata */
extern void* _ZN9CamCalDrv15StCamCalCaldataE;

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENSG_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENSG_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN9CamCalDrvD1Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD1Ev(void);

/* Symbol: _ZN18StereoSizeProvider13getBufferSizeE16ENUM_BUFFER_NAMEN9StereoHAL20ENUM_STEREO_SCENARIOE13ENUM_ROTATION */
/* Demangled: StereoSizeProvider::getBufferSize(ENUM_BUFFER_NAME, StereoHAL::ENUM_STEREO_SCENARIO, ENUM_ROTATION) */
int _ZN18StereoSizeProvider13getBufferSizeE16ENUM_BUFFER_NAMEN9StereoHAL20ENUM_STEREO_SCENARIOE13ENUM_ROTATION(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_N3D_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_N3D_TUNING_T> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, SW_N3D_TUNING_T>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_N3D_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN18StereoSizeProvider14setPreviewSizeEN5NSCam5MSizeE */
/* Demangled: StereoSizeProvider::setPreviewSize(NSCam::MSize) */
int _ZN18StereoSizeProvider14setPreviewSizeEN5NSCam5MSizeE(void);

/* Symbol: _ZN21StereoSettingProvider9isBMVSDoFEv */
/* Demangled: StereoSettingProvider::isBMVSDoF() */
int _ZN21StereoSettingProvider9isBMVSDoFEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEEEvT_SH_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int> >(std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>, std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEEEEvT_SH_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE11__vallocateEj(void);

/* Symbol: _ZN12SW_N3DTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_N3DTuning::SW_N3DTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN12SW_N3DTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZN18StereoSizeProvider19setCaptureImageSizeEii */
/* Demangled: StereoSizeProvider::setCaptureImageSize(int, int) */
int _ZN18StereoSizeProvider19setCaptureImageSizeEii(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider15getFETuningInfoERN5NSCam8NSIoPipe6FEInfoEi */
/* Demangled: StereoHAL::StereoTuningProvider::getFETuningInfo(NSCam::NSIoPipe::FEInfo&, int) */
int _ZN9StereoHAL20StereoTuningProvider15getFETuningInfoERN5NSCam8NSIoPipe6FEInfoEi(void);

/* Symbol: _Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER32StereoSensorConbinationSetting_T */
/* Demangled: from_json(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, StereoSensorConbinationSetting_T&) */
int _Z9from_jsonRKN8nlohmann10basic_jsonINSt3__13mapENS1_6vectorENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEbxydS7_NS_14adl_serializerEEER32StereoSensorConbinationSetting_T(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EEPi */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&, int*) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EEPi(void);

/* Symbol: _ZN9StereoHAL19FEFMSettingProviderD0Ev */
/* Demangled: StereoHAL::FEFMSettingProvider::~FEFMSettingProvider() */
int _ZN9StereoHAL19FEFMSettingProviderD0Ev(void);

/* Symbol: _ZN14MTKFEFMTrigger26FEFMTrigger_get_debug_infoEv */
/* Demangled: MTKFEFMTrigger::FEFMTrigger_get_debug_info() */
int _ZN14MTKFEFMTrigger26FEFMTrigger_get_debug_infoEv(void);

/* Symbol: _ZN27StereoSettingProviderKernel11getInstanceEv */
/* Demangled: StereoSettingProviderKernel::getInstance() */
int _ZN27StereoSettingProviderKernel11getInstanceEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::FEInfo> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe6FEInfoEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEELi0EEEvRKT_RT0_ */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEENS5_IjNS9_IjEEEELi0EEEvRKT_RT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_OCC_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_OCC_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_OCC_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi15SW_OCC_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN21StereoSettingProvider10disableLogEv */
/* Demangled: StereoSettingProvider::disableLog() */
int _ZN21StereoSettingProvider10disableLogEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, bool>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, bool> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATIObEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void);

/* Symbol: _ZN12HW_DPETuning3logER10FastLoggerb */
/* Demangled: HW_DPETuning::log(FastLogger&, bool) */
int _ZN12HW_DPETuning3logER10FastLoggerb(void);

/* Symbol: _ZN11SW_GFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_GFTuning::SW_GFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN11SW_GFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void);

/* Symbol: _ZN12SW_N3DTuningD0Ev */
/* Demangled: SW_N3DTuning::~SW_N3DTuning() */
int _ZN12SW_N3DTuningD0Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN5NSCam12CamCalHelperD0Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD0Ev(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN18StereoSizeProvider15getSBSImageSizeEv */
/* Demangled: StereoSizeProvider::getSBSImageSize() */
int _ZN18StereoSizeProvider15getSBSImageSizeEv(void);

/* Symbol: _ZZN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_3_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI23Pass2A_P_3_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSK_SK_(void);

/* Symbol: _ZN26StereoTuningProviderKernel18__saveTuningToFileERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: StereoTuningProviderKernel::__saveTuningToFile(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN26StereoTuningProviderKernel18__saveTuningToFileERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN21StereoSettingProvider16isP1YUVSupportedEv */
/* Demangled: StereoSettingProvider::isP1YUVSupported() */
int _ZN21StereoSettingProvider16isP1YUVSupportedEv(void);

/* Symbol: _Z19stringToFeatureModeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: stringToFeatureMode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _Z19stringToFeatureModeNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZN14MTKFEFMTrigger17FEFMTrigger_queryEiiii */
/* Demangled: MTKFEFMTrigger::FEFMTrigger_query(int, int, int, int) */
int _ZN14MTKFEFMTrigger17FEFMTrigger_queryEiiii(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long long&>(unsigned long long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIRKfEEvOT_ */
/* Demangled: void std::__1::vector<float, std::__1::allocator<float> >::__push_back_slow_path<float const&>(float const&) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIRKfEEvOT_(void);

/* Symbol: _ZN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_2_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE5mLockE;

/* Symbol: _ZN14HW_MDPPQTuning18_initDefaultValuesEv */
/* Demangled: HW_MDPPQTuning::_initDefaultValues() */
int _ZN14HW_MDPPQTuning18_initDefaultValuesEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VSDOFParam>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE10VSDOFParamEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoSensorConbinationSetting_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoSensorConbinationSetting_T> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIi32StereoSensorConbinationSetting_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZTV11ProfileUtil */
/* Demangled: vtable for ProfileUtil */
extern void* _ZTV11ProfileUtil;

/* Symbol: _ZNSt3__114__split_bufferI13MtkCameraFaceRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<MtkCameraFace, std::__1::allocator<MtkCameraFace>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<MtkCameraFace>&) */
int _ZNSt3__114__split_bufferI13MtkCameraFaceRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN8nlohmann6detail16invalid_iteratorE */
/* Demangled: vtable for nlohmann::detail::invalid_iterator */
extern void* _ZTVN8nlohmann6detail16invalid_iteratorE;

/* Symbol: _ZN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_P_Crop_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI26Pass2A_P_Crop_SizeProviderE5mLockE;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE12__move_rangeEPjS4_S4_ */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__move_range(unsigned int*, unsigned int*, unsigned int*) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE12__move_rangeEPjS4_S4_(void);

/* Symbol: _ZTV12SW_N3DTuning */
/* Demangled: vtable for SW_N3DTuning */
extern void* _ZTV12SW_N3DTuning;

/* Symbol: _ZN5NSCam12CamCalHelper11getInstanceEv */
/* Demangled: NSCam::CamCalHelper::getInstance() */
int _ZN5NSCam12CamCalHelper11getInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<StereoSensorSetting_T*, std::__1::allocator<StereoSensorSetting_T*> >::__push_back_slow_path<StereoSensorSetting_T*>(StereoSensorSetting_T*&&) */
int _ZNSt3__16vectorIP21StereoSensorSetting_TNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN11HW_FETuning3logER10FastLoggerb */
/* Demangled: HW_FETuning::log(FastLogger&, bool) */
int _ZN11HW_FETuning3logER10FastLoggerb(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPKS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
/* Demangled: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPKS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE6assignIPKS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void);

/* Symbol: _Z33__getSensorSettingsAndCombinationjRP21StereoSensorSetting_TS1_RP32StereoSensorConbinationSetting_T */
/* Demangled: __getSensorSettingsAndCombination(unsigned int, StereoSensorSetting_T*&, StereoSensorSetting_T*&, StereoSensorConbinationSetting_T*&) */
int _Z33__getSensorSettingsAndCombinationjRP21StereoSensorSetting_TS1_RP32StereoSensorConbinationSetting_T(void);

/* Symbol: _Z22stringToSensorScenarioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: stringToSensorScenario(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _Z22stringToSensorScenarioNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZN18StereoSizeProvider16__activeCropLockE */
/* Demangled: StereoSizeProvider::__activeCropLock */
extern void* _ZN18StereoSizeProvider16__activeCropLockE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::__map_value_compare<int, std::__1::__value_type<int, StereoHAL::StereoArea>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, StereoHAL::StereoArea> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN9StereoHAL10StereoAreaEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZN12HW_WMFTuningD1Ev */
/* Demangled: HW_WMFTuning::~HW_WMFTuning() */
int _ZN12HW_WMFTuningD1Ev(void);

/* Symbol: _Z12sizeToStringN5NSCam5MSizeE */
/* Demangled: sizeToString(NSCam::MSize) */
int _Z12sizeToStringN5NSCam5MSizeE(void);

/* Symbol: _ZN27StereoSettingProviderKernelC2Ev */
/* Demangled: StereoSettingProviderKernel::StereoSettingProviderKernel() */
int _ZN27StereoSettingProviderKernelC2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__13mapIjN5NSCam5MSizeENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_ */
/* Demangled: std::__1::map<unsigned int, NSCam::MSize, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, NSCam::MSize> > >::operator[](unsigned int const&) */
int _ZNSt3__13mapIjN5NSCam5MSizeENS_4lessIjEENS_9allocatorINS_4pairIKjS2_EEEEEixERS7_(void);

/* Symbol: _ZN12SW_OCCTuningD0Ev */
/* Demangled: SW_OCCTuning::~SW_OCCTuning() */
int _ZN12SW_OCCTuningD0Ev(void);

/* Symbol: _ZN21StereoSettingProvider17getSensorScenarioEibRjS0_b */
/* Demangled: StereoSettingProvider::getSensorScenario(int, bool, unsigned int&, unsigned int&, bool) */
int _ZN21StereoSettingProvider17getSensorScenarioEibRjS0_b(void);

/* Symbol: _ZTSNSt3__117bad_function_callE */
/* Demangled: typeinfo name for std::__1::bad_function_call */
extern void* _ZTSNSt3__117bad_function_callE;

/* Symbol: _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE5mLockE */
/* Demangled: Pass2SizeProviderBase<Pass2A_B_Crop_SizeProvider>::mLock */
extern void* _ZN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE5mLockE;

/* Symbol: _ZN12HW_WMFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_WMFTuning::_loadValuesFromDocument(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZN12HW_WMFTuning23_loadValuesFromDocumentERKN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev(void);

/* Symbol: _ZN21StereoSettingProvider15getFOVCropRatioEv */
/* Demangled: StereoSettingProvider::getFOVCropRatio() */
int _ZN21StereoSettingProvider15getFOVCropRatioEv(void);

/* Symbol: _ZN27StereoSettingProviderKernel27__loadSettingsFromSensorHALEv */
/* Demangled: StereoSettingProviderKernel::__loadSettingsFromSensorHAL() */
int _ZN27StereoSettingProviderKernel27__loadSettingsFromSensorHALEv(void);

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEfLi0EEEvRKT_RT0_ */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, float, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, float&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEfLi0EEEvRKT_RT0_(void);

/* Symbol: _ZNK18StereoSizeProvider16getPass2SizeInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOERNS0_13Pass2SizeInfoE */
/* Demangled: StereoSizeProvider::getPass2SizeInfo(StereoHAL::ENUM_PASS2_ROUND, StereoHAL::ENUM_STEREO_SCENARIO, StereoHAL::Pass2SizeInfo&) const */
int _ZNK18StereoSizeProvider16getPass2SizeInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOERNS0_13Pass2SizeInfoE(void);

/* Symbol: _ZN12SW_OCCTuning3logER10FastLoggerb */
/* Demangled: SW_OCCTuning::log(FastLogger&, bool) */
int _ZN12SW_OCCTuning3logER10FastLoggerb(void);

/* Symbol: _ZN21StereoSettingProvider36getMaxWarpingMatrixBufferSizeInBytesEv */
/* Demangled: StereoSettingProvider::getMaxWarpingMatrixBufferSizeInBytes() */
int _ZN21StereoSettingProvider36getMaxWarpingMatrixBufferSizeInBytesEv(void);

/* Symbol: _ZN9CamCalDrvC1Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC1Ev(void);

/* Symbol: _ZN21StereoSettingProvider21getCallbackBufferListEv */
/* Demangled: StereoSettingProvider::getCallbackBufferList() */
int _ZN21StereoSettingProvider21getCallbackBufferListEv(void);

/* Symbol: _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEEC2ERKS4_ */
/* Demangled: std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> >::vector(std::__1::vector<MtkCameraFace, std::__1::allocator<MtkCameraFace> > const&) */
int _ZNSt3__16vectorI13MtkCameraFaceNS_9allocatorIS1_EEEC2ERKS4_(void);

/* Symbol: _ZN13StereoFDProxy14getFocusedFaceEv */
/* Demangled: StereoFDProxy::getFocusedFace() */
int _ZN13StereoFDProxy14getFocusedFaceEv(void);

/* Symbol: _ZTV14SW_BOKEHTuning */
/* Demangled: vtable for SW_BOKEHTuning */
extern void* _ZTV14SW_BOKEHTuning;

/* Symbol: _ZN9CamCalDrvD2Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD2Ev(void);

/* Symbol: _ZTISt12out_of_range */
/* Demangled: typeinfo for std::out_of_range */
extern void* _ZTISt12out_of_range;

/* Symbol: _ZTVN8nlohmann6detail9exceptionE */
/* Demangled: vtable for nlohmann::detail::exception */
extern void* _ZTVN8nlohmann6detail9exceptionE;

/* Symbol: _ZN12HW_WMFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_WMFTuning::HW_WMFTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN12HW_WMFTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZN8nlohmann6detail8to_charsIdEEPcS2_S2_T_ */
/* Demangled: char* nlohmann::detail::to_chars<double>(char*, char*, double) */
int _ZN8nlohmann6detail8to_charsIdEEPcS2_S2_T_(void);

/* Symbol: _ZTINSt3__117bad_function_callE */
/* Demangled: typeinfo for std::__1::bad_function_call */
extern void* _ZTINSt3__117bad_function_callE;

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: vtable for nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern void* _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE;

/* Symbol: _ZN21StereoSettingProvider17getModuleRotationEj */
/* Demangled: StereoSettingProvider::getModuleRotation(unsigned int) */
int _ZN21StereoSettingProvider17getModuleRotationEj(void);

/* Symbol: _ZN21StereoSettingProvider23getStereoCameraFOVRatioEj */
/* Demangled: StereoSettingProvider::getStereoCameraFOVRatio(unsigned int) */
int _ZN21StereoSettingProvider23getStereoCameraFOVRatioEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >::__move_assign(std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, StereoHAL::StereoArea> > >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION9StereoHAL10StereoAreaEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE13__move_assignERSC_NS_17integral_constantIbLb1EEE(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__push_back_slow_path<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE5eraseENS_11__wrap_iterIPKjEES7_ */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::erase(std::__1::__wrap_iter<unsigned int const*>, std::__1::__wrap_iter<unsigned int const*>) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE5eraseENS_11__wrap_iterIPKjEES7_(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN21StereoSettingProvider19setStereoModuleTypeEi */
/* Demangled: StereoSettingProvider::setStereoModuleType(int) */
int _ZN21StereoSettingProvider19setStereoModuleTypeEi(void);

/* Symbol: _ZN13StereoFDProxy10__faceLockE */
/* Demangled: StereoFDProxy::__faceLock */
extern void* _ZN13StereoFDProxy10__faceLockE;

/* Symbol: _ZN12HW_OCCTuning3logER10FastLoggerb */
/* Demangled: HW_OCCTuning::log(FastLogger&, bool) */
int _ZN12HW_OCCTuning3logER10FastLoggerb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__tree_node<std::__1::__value_type<int, SW_GF_TUNING_T>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::__map_value_compare<int, std::__1::__value_type<int, SW_GF_TUNING_T>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, SW_GF_TUNING_T> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIi14SW_GF_TUNING_TEENS_19__map_value_compareIiS3_NS_4lessIiEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void);

/* Symbol: _ZZN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_3_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI21Pass2A_3_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZN9StereoHAL19FEFMSettingProviderD1Ev */
/* Demangled: StereoHAL::FEFMSettingProvider::~FEFMSettingProvider() */
int _ZN9StereoHAL19FEFMSettingProviderD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIS8_EEEERSJ_SJ_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPvEENS_19__map_value_compareIS7_S9_NS_4lessIS7_EELb1EEENS5_IS9_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIS8_EEEERSJ_SJ_(void);

/* Symbol: _ZN14HW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: HW_BOKEHTuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN14HW_BOKEHTuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: _ZN21StereoSettingProvider13setImageRatioE17ENUM_STEREO_RATIO */
/* Demangled: StereoSettingProvider::setImageRatio(ENUM_STEREO_RATIO) */
int _ZN21StereoSettingProvider13setImageRatioE17ENUM_STEREO_RATIO(void);

/* Symbol: _ZN26StereoTuningProviderKernel15destroyInstanceEv */
/* Demangled: StereoTuningProviderKernel::destroyInstance() */
int _ZN26StereoTuningProviderKernel15destroyInstanceEv(void);

/* Symbol: _ZTSN8nlohmann6detail11other_errorE */
/* Demangled: typeinfo name for nlohmann::detail::other_error */
extern void* _ZTSN8nlohmann6detail11other_errorE;

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: _ZGVN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE5mLockE */
/* Demangled: guard variable for Pass2SizeProviderBase<Pass2A_2_SizeProvider>::mLock */
extern void* _ZGVN21Pass2SizeProviderBaseI21Pass2A_2_SizeProviderE5mLockE;

/* Symbol: _ZN14HW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: HW_BOKEHTuning::HW_BOKEHTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN14HW_BOKEHTuningC1ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: _ZN12SW_OCCTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE */
/* Demangled: SW_OCCTuning::SW_OCCTuning(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) */
int _ZN12SW_OCCTuningC2ERN8nlohmann10basic_jsonINSt3__13mapENS2_6vectorENS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEbxydS8_NS0_14adl_serializerEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSE_SE_(void);

/* Symbol: _ZN9StereoHAL20StereoTuningProvider13getMDPPQParamEPKcR10VSDOFParam */
/* Demangled: StereoHAL::StereoTuningProvider::getMDPPQParam(char const*, VSDOFParam&) */
int _ZN9StereoHAL20StereoTuningProvider13getMDPPQParamEPKcR10VSDOFParam(void);

/* Symbol: _ZN12SW_N3DTuningD1Ev */
/* Demangled: SW_N3DTuning::~SW_N3DTuning() */
int _ZN12SW_N3DTuningD1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelperD1Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD1Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: _ZN14HW_MDPPQTuningD0Ev */
/* Demangled: HW_MDPPQTuning::~HW_MDPPQTuning() */
int _ZN14HW_MDPPQTuningD0Ev(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_ */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, int, 0>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, int&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEiLi0EEEvRKT_RT0_(void);

/* Symbol: _ZTSN8nlohmann6detail16invalid_iteratorE */
/* Demangled: typeinfo name for nlohmann::detail::invalid_iterator */
extern void* _ZTSN8nlohmann6detail16invalid_iteratorE;

/* Symbol: _ZTV26StereoTuningProviderKernel */
/* Demangled: vtable for StereoTuningProviderKernel */
extern void* _ZTV26StereoTuningProviderKernel;

/* Symbol: _ZN5NSCam12CamCalHelper4initEv */
/* Demangled: NSCam::CamCalHelper::init() */
int _ZN5NSCam12CamCalHelper4initEv(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned int) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTV21Pass2A_3_SizeProvider */
/* Demangled: vtable for Pass2A_3_SizeProvider */
extern void* _ZTV21Pass2A_3_SizeProvider;

/* Symbol: _ZZN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE8instanceEvE9_instance */
/* Demangled: Pass2SizeProviderBase<Pass2A_B_Crop_SizeProvider>::instance()::_instance */
extern void* _ZZN21Pass2SizeProviderBaseI26Pass2A_B_Crop_SizeProviderE8instanceEvE9_instance;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSL_SL_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const*> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKcEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSL_SL_(void);

/* Symbol: _ZN21StereoSettingProvider18getDPECaptureRoundEv */
/* Demangled: StereoSettingProvider::getDPECaptureRound() */
int _ZN21StereoSettingProvider18getDPECaptureRoundEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE8__detachEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__detach(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE8__detachEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj(void);

/* Symbol: _ZTIN8nlohmann6detail16invalid_iteratorE */
/* Demangled: typeinfo for nlohmann::detail::invalid_iterator */
extern void* _ZTIN8nlohmann6detail16invalid_iteratorE;

/* Symbol: _ZN9StereoHAL19FEFMSettingProvider17__triggerInstanceE */
/* Demangled: StereoHAL::FEFMSettingProvider::__triggerInstance */
extern void* _ZN9StereoHAL19FEFMSettingProvider17__triggerInstanceE;

/* Symbol: _ZN12HW_DPETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE */
/* Demangled: HW_DPETuning::retrieveTuningParams(StereoHAL::TuningQuery_T&) */
int _ZN12HW_DPETuning20retrieveTuningParamsERN9StereoHAL13TuningQuery_TE(void);

/* Symbol: QUERY_KEY_FM_DIRECTION_NAMES */
/* Demangled: QUERY_KEY_FM_DIRECTION_NAMES */
extern void* QUERY_KEY_FM_DIRECTION_NAMES;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__tree_node<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _dip_x_reg_t_ volatile*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _dip_x_reg_t_ volatile*> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiPV13_dip_x_reg_t_EENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11SW_GFTuning3logER10FastLoggerb */
/* Demangled: SW_GFTuning::log(FastLogger&, bool) */
int _ZN11SW_GFTuning3logER10FastLoggerb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::__map_value_compare<ENUM_STEREO_RATIO, std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize>, std::__1::less<ENUM_STEREO_RATIO>, true>, std::__1::allocator<std::__1::__value_type<ENUM_STEREO_RATIO, NSCam::MSize> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI17ENUM_STEREO_RATION5NSCam5MSizeEEENS_19__map_value_compareIS2_S5_NS_4lessIS2_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: _ZN12HW_WMFTuningD2Ev */
/* Demangled: HW_WMFTuning::~HW_WMFTuning() */
int _ZN12HW_WMFTuningD2Ev(void);

/* Symbol: _ZN14MTKFEFMTrigger15destroyInstanceEv */
/* Demangled: MTKFEFMTrigger::destroyInstance() */
int _ZN14MTKFEFMTrigger15destroyInstanceEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFEATURE_STEREO_PROVIDER_H */
