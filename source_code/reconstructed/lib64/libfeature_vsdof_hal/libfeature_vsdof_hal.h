/*
 * Reverse-Engineered ABI Specification for: libfeature.vsdof.hal.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libfeature.vsdof.hal.so
 */

#ifndef BEGONIA_RE_LIBFEATURE_VSDOF_HAL_H
#define BEGONIA_RE_LIBFEATURE_VSDOF_HAL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9CamCalDrv11getInstanceEv */
/* Demangled: CamCalDrv::getInstance() */
int _ZN9CamCalDrv11getInstanceEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL20__setN3DCommonParamsERN9StereoHAL20N3D_HAL_PARAM_COMMONERNS0_14N3D_HAL_OUTPUTE */
/* Demangled: N3D_HAL_KERNEL::__setN3DCommonParams(StereoHAL::N3D_HAL_PARAM_COMMON&, StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN14N3D_HAL_KERNEL20__setN3DCommonParamsERN9StereoHAL20N3D_HAL_PARAM_COMMONERNS0_14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZTIN8nlohmann6detail10type_errorE */
/* Demangled: typeinfo for nlohmann::detail::type_error */
extern void* _ZTIN8nlohmann6detail10type_errorE;

/* Symbol: _ZN10GF_HAL_IMP16_validateAFPointERN5NSCam6MPointE */
/* Demangled: GF_HAL_IMP::_validateAFPoint(NSCam::MPoint&) */
int _ZN10GF_HAL_IMP16_validateAFPointERN5NSCam6MPointE(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void);

/* Symbol: _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN11N3D_HAL_IMP11__loadNVRAMEv */
/* Demangled: N3D_HAL_IMP::__loadNVRAM() */
int _ZN11N3D_HAL_IMP11__loadNVRAMEv(void);

/* Symbol: _ZN11N3D_HAL_IMP19__syncInternalNVRAMEP14N3D_HAL_KERNELS1_ */
/* Demangled: N3D_HAL_IMP::__syncInternalNVRAM(N3D_HAL_KERNEL*, N3D_HAL_KERNEL*) */
int _ZN11N3D_HAL_IMP19__syncInternalNVRAMEP14N3D_HAL_KERNELS1_(void);

/* Symbol: _ZN11N3D_HAL_IMP15N3DHALWarpMain1EPN5NSCam12IImageBufferES2_S2_ */
/* Demangled: N3D_HAL_IMP::N3DHALWarpMain1(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN11N3D_HAL_IMP15N3DHALWarpMain1EPN5NSCam12IImageBufferES2_S2_(void);

/* Symbol: _ZN11N3D_HAL_IMP24__useExternalCalibrationE */
/* Demangled: N3D_HAL_IMP::__useExternalCalibration */
extern void* _ZN11N3D_HAL_IMP24__useExternalCalibrationE;

/* Symbol: _ZN10GF_HAL_IMP17__logGFBufferInfoERK12GFBufferInfoi */
/* Demangled: GF_HAL_IMP::__logGFBufferInfo(GFBufferInfo const&, int) */
int _ZN10GF_HAL_IMP17__logGFBufferInfoERK12GFBufferInfoi(void);

/* Symbol: _ZN14N3D_HAL_KERNEL15__initN3DKernelER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf */
/* Demangled: N3D_HAL_KERNEL::__initN3DKernel(STEREO_KERNEL_SET_ENV_INFO_STRUCT&, NVRAM_CAMERA_GEOMETRY_STRUCT*, float*) */
int _ZN14N3D_HAL_KERNEL15__initN3DKernelER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf(void);

/* Symbol: _ZN18FEFM_RING_BUFFER_T13setHWFEFMDataERN9StereoHAL11HWFEFM_DATAE */
/* Demangled: FEFM_RING_BUFFER_T::setHWFEFMData(StereoHAL::HWFEFM_DATA&) */
int _ZN18FEFM_RING_BUFFER_T13setHWFEFMDataERN9StereoHAL11HWFEFM_DATAE(void);

/* Symbol: _ZN11N3D_HAL_IMP17__spCaptureKernelE */
/* Demangled: N3D_HAL_IMP::__spCaptureKernel */
extern void* _ZN11N3D_HAL_IMP17__spCaptureKernelE;

/* Symbol: _ZN11OCC_HAL_IMP8__runOCCERN9StereoHAL14OCC_HAL_OUTPUTE */
/* Demangled: OCC_HAL_IMP::__runOCC(StereoHAL::OCC_HAL_OUTPUT&) */
int _ZN11OCC_HAL_IMP8__runOCCERN9StereoHAL14OCC_HAL_OUTPUTE(void);

/* Symbol: _ZN14N3D_HAL_KERNEL15__runN3DCaptureEv */
/* Demangled: N3D_HAL_KERNEL::__runN3DCapture() */
int _ZN14N3D_HAL_KERNEL15__runN3DCaptureEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE */
/* Demangled: N3D_HAL_IMP::N3DHALRun(StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZN10GF_HAL_IMP14__dumpProcInfoEv */
/* Demangled: GF_HAL_IMP::__dumpProcInfo() */
int _ZN10GF_HAL_IMP14__dumpProcInfoEv(void);

/* Symbol: _ZN9CamCalDrvD1Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD1Ev(void);

/* Symbol: _ZN14N3D_HAL_KERNEL14__runN3DCommonEi */
/* Demangled: N3D_HAL_KERNEL::__runN3DCommon(int) */
int _ZN14N3D_HAL_KERNEL14__runN3DCommonEi(void);

/* Symbol: _ZN10GF_HAL_IMP13__logInitDataEv */
/* Demangled: GF_HAL_IMP::__logInitData() */
int _ZN10GF_HAL_IMP13__logInitDataEv(void);

/* Symbol: _ZN11N3D_HAL_IMP21__nvramSensorDevIndexE */
/* Demangled: N3D_HAL_IMP::__nvramSensorDevIndex */
extern void* _ZN11N3D_HAL_IMP21__nvramSensorDevIndexE;

/* Symbol: _ZN9StereoHAL7N3D_HAL14createInstanceERNS_22N3D_HAL_INIT_PARAM_WPEE */
/* Demangled: StereoHAL::N3D_HAL::createInstance(StereoHAL::N3D_HAL_INIT_PARAM_WPE&) */
int _ZN9StereoHAL7N3D_HAL14createInstanceERNS_22N3D_HAL_INIT_PARAM_WPEE(void);

/* Symbol: _ZTV11OCC_HAL_IMP */
/* Demangled: vtable for OCC_HAL_IMP */
extern void* _ZTV11OCC_HAL_IMP;

/* Symbol: _ZN10GF_HAL_IMP16__logSetProcDataEv */
/* Demangled: GF_HAL_IMP::__logSetProcData() */
int _ZN10GF_HAL_IMP16__logSetProcDataEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL16__logSetProcInfoEPKcRK34STEREO_KERNEL_SET_PROC_INFO_STRUCT */
/* Demangled: N3D_HAL_KERNEL::__logSetProcInfo(char const*, STEREO_KERNEL_SET_PROC_INFO_STRUCT const&) */
int _ZN14N3D_HAL_KERNEL16__logSetProcInfoEPKcRK34STEREO_KERNEL_SET_PROC_INFO_STRUCT(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTSN8nlohmann6detail10type_errorE */
/* Demangled: typeinfo name for nlohmann::detail::type_error */
extern void* _ZTSN8nlohmann6detail10type_errorE;

/* Symbol: _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: vtable for nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern void* _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE;

/* Symbol: _ZN10GF_HAL_IMP23_clearTransformedImagesEv */
/* Demangled: GF_HAL_IMP::_clearTransformedImages() */
int _ZN10GF_HAL_IMP23_clearTransformedImagesEv(void);

/* Symbol: _ZN5NSCam12CamCalHelperC2Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC2Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNKSt3__16bitsetILm10EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::bitset<10ul>::to_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >(char, char) const */
int _ZNKSt3__16bitsetILm10EE9to_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EES8_S8_(void);

/* Symbol: _ZN11N3D_HAL_IMP14__initLensInfoEiRPN6NS3Av314DAF_TBL_STRUCTERb */
/* Demangled: N3D_HAL_IMP::__initLensInfo(int, NS3Av3::DAF_TBL_STRUCT*&, bool&) */
int _ZN11N3D_HAL_IMP14__initLensInfoEiRPN6NS3Av314DAF_TBL_STRUCTERb(void);

/* Symbol: _ZN11OCC_HAL_IMP26__splitDisparityMapAndDumpEPKsS1_ */
/* Demangled: OCC_HAL_IMP::__splitDisparityMapAndDump(short const*, short const*) */
int _ZN11OCC_HAL_IMP26__splitDisparityMapAndDumpEPKsS1_(void);

/* Symbol: _ZN9CamCalDrv13getDumpEnableEv */
/* Demangled: CamCalDrv::getDumpEnable() */
int _ZN9CamCalDrv13getDumpEnableEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL12logN3DResultER27STEREO_KERNEL_RESULT_STRUCT */
/* Demangled: N3D_HAL_KERNEL::logN3DResult(STEREO_KERNEL_RESULT_STRUCT&) */
int _ZN14N3D_HAL_KERNEL12logN3DResultER27STEREO_KERNEL_RESULT_STRUCT(void);

/* Symbol: _ZN11OCC_HAL_IMP9OCCHALRunERN9StereoHAL14OCC_HAL_PARAMSERNS0_14OCC_HAL_OUTPUTE */
/* Demangled: OCC_HAL_IMP::OCCHALRun(StereoHAL::OCC_HAL_PARAMS&, StereoHAL::OCC_HAL_OUTPUT&) */
int _ZN11OCC_HAL_IMP9OCCHALRunERN9StereoHAL14OCC_HAL_PARAMSERNS0_14OCC_HAL_OUTPUTE(void);

/* Symbol: _ZN10GF_HAL_IMP13s_lastGFPointE */
/* Demangled: GF_HAL_IMP::s_lastGFPoint */
extern void* _ZN10GF_HAL_IMP13s_lastGFPointE;

/* Symbol: _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN10GF_HAL_IMP13_updateFDInfoEiR8GFFdInfo */
/* Demangled: GF_HAL_IMP::_updateFDInfo(int, GFFdInfo&) */
int _ZN10GF_HAL_IMP13_updateFDInfoEiR8GFFdInfo(void);

/* Symbol: _ZN5NSCam12CamCalHelper11getInstanceEv */
/* Demangled: NSCam::CamCalHelper::getInstance() */
int _ZN5NSCam12CamCalHelper11getInstanceEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL13initMain1MaskEN9StereoHAL10StereoAreaE */
/* Demangled: N3D_HAL_KERNEL::initMain1Mask(StereoHAL::StereoArea) */
int _ZN14N3D_HAL_KERNEL13initMain1MaskEN9StereoHAL10StereoAreaE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZTVN5NSCam12CamCalHelperE */
/* Demangled: vtable for NSCam::CamCalHelper */
extern void* _ZTVN5NSCam12CamCalHelperE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZTVN8nlohmann6detail9exceptionE */
/* Demangled: vtable for nlohmann::detail::exception */
extern void* _ZTVN8nlohmann6detail9exceptionE;

/* Symbol: _ZN11N3D_HAL_IMP29__loadExternalCalibrationDataEPf */
/* Demangled: N3D_HAL_IMP::__loadExternalCalibrationData(float*) */
int _ZN11N3D_HAL_IMP29__loadExternalCalibrationDataEPf(void);

/* Symbol: _ZN11N3D_HAL_IMPC2ERN9StereoHAL18N3D_HAL_INIT_PARAME */
/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM&) */
int _ZN11N3D_HAL_IMPC2ERN9StereoHAL18N3D_HAL_INIT_PARAME(void);

/* Symbol: _ZN9CamCalDrvD0Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD0Ev(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN11N3D_HAL_IMP20__getRuntimeAFParamsEPN6NS3Av314DAF_TBL_STRUCTEjR28STEREO_KERNEL_AF_INFO_STRUCT */
/* Demangled: N3D_HAL_IMP::__getRuntimeAFParams(NS3Av3::DAF_TBL_STRUCT*, unsigned int, STEREO_KERNEL_AF_INFO_STRUCT&) */
int _ZN11N3D_HAL_IMP20__getRuntimeAFParamsEPN6NS3Av314DAF_TBL_STRUCTEjR28STEREO_KERNEL_AF_INFO_STRUCT(void);

/* Symbol: _ZN10GF_HAL_IMP14_removePaddingEPN5NSCam12IImageBufferES2_RN9StereoHAL10StereoAreaE */
/* Demangled: GF_HAL_IMP::_removePadding(NSCam::IImageBuffer*, NSCam::IImageBuffer*, StereoHAL::StereoArea&) */
int _ZN10GF_HAL_IMP14_removePaddingEPN5NSCam12IImageBufferES2_RN9StereoHAL10StereoAreaE(void);

/* Symbol: _ZN14N3D_HAL_KERNEL11runLearningERN9StereoHAL11HWFEFM_DATAEP28STEREO_KERNEL_AF_INFO_STRUCTS4_ */
/* Demangled: N3D_HAL_KERNEL::runLearning(StereoHAL::HWFEFM_DATA&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*) */
int _ZN14N3D_HAL_KERNEL11runLearningERN9StereoHAL11HWFEFM_DATAEP28STEREO_KERNEL_AF_INFO_STRUCTS4_(void);

/* Symbol: _ZN14N3D_HAL_KERNEL14logN3DProcInfoEv */
/* Demangled: N3D_HAL_KERNEL::logN3DProcInfo() */
int _ZN14N3D_HAL_KERNEL14logN3DProcInfoEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL16__runN3DLearningEv */
/* Demangled: N3D_HAL_KERNEL::__runN3DLearning() */
int _ZN14N3D_HAL_KERNEL16__runN3DLearningEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_stream_adapter<char>, std::__1::allocator<nlohmann::detail::output_stream_adapter<char> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEEE;

/* Symbol: _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers */
/* Demangled: nlohmann::detail::dtoa_impl::get_cached_power_for_binary_exponent(int)::kCachedPowers */
extern void* _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers;

/* Symbol: _ZN11N3D_HAL_IMP14runN3DLearningERN9StereoHAL11HWFEFM_DATAE */
/* Demangled: N3D_HAL_IMP::runN3DLearning(StereoHAL::HWFEFM_DATA&) */
int _ZN11N3D_HAL_IMP14runN3DLearningERN9StereoHAL11HWFEFM_DATAE(void);

/* Symbol: _ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE */
/* Demangled: N3D_HAL_IMP::N3DHALRun(StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
int _ZN11N3D_HAL_IMP9N3DHALRunERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE(void);

/* Symbol: _ZN11N3D_HAL_IMPD2Ev */
/* Demangled: N3D_HAL_IMP::~N3D_HAL_IMP() */
int _ZN11N3D_HAL_IMPD2Ev(void);

/* Symbol: _ZN9StereoHAL6GF_HAL14createInstanceENS_20ENUM_STEREO_SCENARIOEb */
/* Demangled: StereoHAL::GF_HAL::createInstance(StereoHAL::ENUM_STEREO_SCENARIO, bool) */
int _ZN9StereoHAL6GF_HAL14createInstanceENS_20ENUM_STEREO_SCENARIOEb(void);

/* Symbol: _ZN5NSCam12CamCalHelperD2Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD2Ev(void);

/* Symbol: _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev */
/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE */
/* Demangled: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE(void);

/* Symbol: _ZTVN8nlohmann6detail21output_stream_adapterIcEE */
/* Demangled: vtable for nlohmann::detail::output_stream_adapter<char> */
extern void* _ZTVN8nlohmann6detail21output_stream_adapterIcEE;

/* Symbol: _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d */
/* Demangled: nlohmann::detail::serializer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >::decode(unsigned char&, unsigned int&, unsigned char)::utf8d */
extern void* _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d;

/* Symbol: _ZN11N3D_HAL_IMP10__sRunLockE */
/* Demangled: N3D_HAL_IMP::__sRunLock */
extern void* _ZN11N3D_HAL_IMP10__sRunLockE;

/* Symbol: _ZN11N3D_HAL_IMP11__dumpNVRAMEb */
/* Demangled: N3D_HAL_IMP::__dumpNVRAM(bool) */
int _ZN11N3D_HAL_IMP11__dumpNVRAMEb(void);

/* Symbol: _ZN11N3D_HAL_IMP15getWarpMapMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEERNS0_18N3D_HAL_OUTPUT_WPEE */
/* Demangled: N3D_HAL_IMP::getWarpMapMain2(StereoHAL::N3D_HAL_PARAM_WPE&, StereoHAL::N3D_HAL_OUTPUT_WPE&) */
int _ZN11N3D_HAL_IMP15getWarpMapMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEERNS0_18N3D_HAL_OUTPUT_WPEE(void);

/* Symbol: _ZNSt3__16vectorI14OCCTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<OCCTuningParam, std::__1::allocator<OCCTuningParam> >::__push_back_slow_path<OCCTuningParam>(OCCTuningParam&&) */
int _ZNSt3__16vectorI14OCCTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN9CamCalDrv15StCamCalCaldataE */
/* Demangled: CamCalDrv::StCamCalCaldata */
extern void* _ZN9CamCalDrv15StCamCalCaldataE;

/* Symbol: _ZN5NSCam12CamCalHelperC1Ev */
/* Demangled: NSCam::CamCalHelper::CamCalHelper() */
int _ZN5NSCam12CamCalHelperC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZN11N3D_HAL_IMP20__initAFWinTransformEN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: N3D_HAL_IMP::__initAFWinTransform(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN11N3D_HAL_IMP20__initAFWinTransformEN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN11N3D_HAL_IMPC1ERN9StereoHAL18N3D_HAL_INIT_PARAME */
/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM&) */
int _ZN11N3D_HAL_IMPC1ERN9StereoHAL18N3D_HAL_INIT_PARAME(void);

/* Symbol: _ZN10GF_HAL_IMP10_getAFRectEi */
/* Demangled: GF_HAL_IMP::_getAFRect(int) */
int _ZN10GF_HAL_IMP10_getAFRectEi(void);

/* Symbol: _ZN14N3D_HAL_KERNEL12__logImgInfoEPKcRK29STEREO_KERNEL_IMG_INFO_STRUCT */
/* Demangled: N3D_HAL_KERNEL::__logImgInfo(char const*, STEREO_KERNEL_IMG_INFO_STRUCT const&) */
int _ZN14N3D_HAL_KERNEL12__logImgInfoEPKcRK29STEREO_KERNEL_IMG_INFO_STRUCT(void);

/* Symbol: _ZTIN8nlohmann6detail9exceptionE */
/* Demangled: typeinfo for nlohmann::detail::exception */
extern void* _ZTIN8nlohmann6detail9exceptionE;

/* Symbol: _ZN10GF_HAL_IMP12_AFToGFPointERKN5NSCam6MPointE */
/* Demangled: GF_HAL_IMP::_AFToGFPoint(NSCam::MPoint const&) */
int _ZN10GF_HAL_IMP12_AFToGFPointERKN5NSCam6MPointE(void);

/* Symbol: _ZN14N3D_HAL_KERNEL13setDumpConfigEbPN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTE */
/* Demangled: N3D_HAL_KERNEL::setDumpConfig(bool, NSCam::TuningUtils::FILE_DUMP_NAMING_HINT*) */
int _ZN14N3D_HAL_KERNEL13setDumpConfigEbPN5NSCam11TuningUtils21FILE_DUMP_NAMING_HINTE(void);

/* Symbol: _ZN10GF_HAL_IMP13_rotateResultER12GFBufferInfoPN5NSCam12IImageBufferE */
/* Demangled: GF_HAL_IMP::_rotateResult(GFBufferInfo&, NSCam::IImageBuffer*) */
int _ZN10GF_HAL_IMP13_rotateResultER12GFBufferInfoPN5NSCam12IImageBufferE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN5NSCam12CamCalHelper13getCamCalDataEPj */
/* Demangled: NSCam::CamCalHelper::getCamCalData(unsigned int*) */
int _ZN5NSCam12CamCalHelper13getCamCalDataEPj(void);

/* Symbol: _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj */
/* Demangled: NSCam::CamCalHelper::getSensorIndexByDev(unsigned int) */
int _ZN5NSCam12CamCalHelper19getSensorIndexByDevEj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZTSN8nlohmann6detail9exceptionE */
/* Demangled: typeinfo name for nlohmann::detail::exception */
extern void* _ZTSN8nlohmann6detail9exceptionE;

/* Symbol: _ZN5NSCam12CamCalHelper8readDataEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper8readDataEjjjjPh(void);

/* Symbol: _ZN14N3D_HAL_KERNEL20dumpN3DRuntimeConfigEv */
/* Demangled: N3D_HAL_KERNEL::dumpN3DRuntimeConfig() */
int _ZN14N3D_HAL_KERNEL20dumpN3DRuntimeConfigEv(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN14N3D_HAL_KERNEL20__doStereoKernelInitEv */
/* Demangled: N3D_HAL_KERNEL::__doStereoKernelInit() */
int _ZN14N3D_HAL_KERNEL20__doStereoKernelInitEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_18N3D_HAL_OUTPUT_WPEE */
/* Demangled: N3D_HAL_KERNEL::WarpMain2(StereoHAL::N3D_HAL_PARAM_WPE&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*, StereoHAL::N3D_HAL_OUTPUT_WPE&) */
int _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL17N3D_HAL_PARAM_WPEEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_18N3D_HAL_OUTPUT_WPEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_stream_adapter<char>, std::__1::allocator<nlohmann::detail::output_stream_adapter<char> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11N3D_HAL_IMPD1Ev */
/* Demangled: N3D_HAL_IMP::~N3D_HAL_IMP() */
int _ZN11N3D_HAL_IMPD1Ev(void);

/* Symbol: _ZN10GF_HAL_IMP8GFHALRunERN9StereoHAL14GF_HAL_IN_DATAERNS0_15GF_HAL_OUT_DATAE */
/* Demangled: GF_HAL_IMP::GFHALRun(StereoHAL::GF_HAL_IN_DATA&, StereoHAL::GF_HAL_OUT_DATA&) */
int _ZN10GF_HAL_IMP8GFHALRunERN9StereoHAL14GF_HAL_IN_DATAERNS0_15GF_HAL_OUT_DATAE(void);

/* Symbol: _ZN5NSCam12CamCalHelperD1Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD1Ev(void);

/* Symbol: _ZN11N3D_HAL_IMP24__prepareStereoExtraDataEv */
/* Demangled: N3D_HAL_IMP::__prepareStereoExtraData() */
int _ZN11N3D_HAL_IMP24__prepareStereoExtraDataEv(void);

/* Symbol: _ZN9StereoHAL7OCC_HAL14createInstanceEv */
/* Demangled: StereoHAL::OCC_HAL::createInstance() */
int _ZN9StereoHAL7OCC_HAL14createInstanceEv(void);

/* Symbol: _ZN11OCC_HAL_IMP18__logOCCBufferInfoEP13OccBufferInfoi */
/* Demangled: OCC_HAL_IMP::__logOCCBufferInfo(OccBufferInfo*, int) */
int _ZN11OCC_HAL_IMP18__logOCCBufferInfoEP13OccBufferInfoi(void);

/* Symbol: _ZN14N3D_HAL_KERNELC1E25N3D_HAL_KERNEL_INIT_PARAM */
/* Demangled: N3D_HAL_KERNEL::N3D_HAL_KERNEL(N3D_HAL_KERNEL_INIT_PARAM) */
int _ZN14N3D_HAL_KERNELC1E25N3D_HAL_KERNEL_INIT_PARAM(void);

/* Symbol: _ZN11N3D_HAL_IMP16__hasCalibrationE */
/* Demangled: N3D_HAL_IMP::__hasCalibration */
extern void* _ZN11N3D_HAL_IMP16__hasCalibrationE;

/* Symbol: _ZN11OCC_HAL_IMPC2Ev */
/* Demangled: OCC_HAL_IMP::OCC_HAL_IMP() */
int _ZN11OCC_HAL_IMPC2Ev(void);

/* Symbol: _ZN10GF_HAL_IMP14s_wasAFTriggerE */
/* Demangled: GF_HAL_IMP::s_wasAFTrigger */
extern void* _ZN10GF_HAL_IMP14s_wasAFTriggerE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN11N3D_HAL_IMP15__spVoidGeoDataE */
/* Demangled: N3D_HAL_IMP::__spVoidGeoData */
extern void* _ZN11N3D_HAL_IMP15__spVoidGeoDataE;

/* Symbol: _ZN10GF_HAL_IMP14_getTouchPointEN5NSCam6MPointE */
/* Demangled: GF_HAL_IMP::_getTouchPoint(NSCam::MPoint) */
int _ZN10GF_HAL_IMP14_getTouchPointEN5NSCam6MPointE(void);

/* Symbol: _ZN5NSCam12CamCalHelper14sensorPowerOffEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOff(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper14sensorPowerOffEjj(void);

/* Symbol: _ZN14N3D_HAL_KERNEL22__createFEFMRingBufferEv */
/* Demangled: N3D_HAL_KERNEL::__createFEFMRingBuffer() */
int _ZN14N3D_HAL_KERNEL22__createFEFMRingBufferEv(void);

/* Symbol: _ZN11N3D_HAL_IMP10__sLogLockE */
/* Demangled: N3D_HAL_IMP::__sLogLock */
extern void* _ZN11N3D_HAL_IMP10__sLogLockE;

/* Symbol: _ZN9StereoHAL7N3D_HAL10refineMaskENS_20ENUM_STEREO_SCENARIOEPN5NSCam12IImageBufferEb */
/* Demangled: StereoHAL::N3D_HAL::refineMask(StereoHAL::ENUM_STEREO_SCENARIO, NSCam::IImageBuffer*, bool) */
int _ZN9StereoHAL7N3D_HAL10refineMaskENS_20ENUM_STEREO_SCENARIOEPN5NSCam12IImageBufferEb(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEED2Ev */
/* Demangled: android::sp<NSCam::IImageBuffer>::~sp() */
int _ZN7android2spIN5NSCam12IImageBufferEED2Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev */
/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void);

/* Symbol: _ZN11OCC_HAL_IMP14__logOCCResultEv */
/* Demangled: OCC_HAL_IMP::__logOCCResult() */
int _ZN11OCC_HAL_IMP14__logOCCResultEv(void);

/* Symbol: _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh */
/* Demangled: NSCam::CamCalHelper::readDataFromEeprom(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _ZN5NSCam12CamCalHelper18readDataFromEepromEjjjjPh(void);

/* Symbol: _ZN14N3D_HAL_KERNEL13__setFEFMDataERN9StereoHAL11HWFEFM_DATAE */
/* Demangled: N3D_HAL_KERNEL::__setFEFMData(StereoHAL::HWFEFM_DATA&) */
int _ZN14N3D_HAL_KERNEL13__setFEFMDataERN9StereoHAL11HWFEFM_DATAE(void);

/* Symbol: _ZN14N3D_HAL_KERNEL17__updateSceneInfoERN9StereoHAL14N3D_HAL_OUTPUTE */
/* Demangled: N3D_HAL_KERNEL::__updateSceneInfo(StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN14N3D_HAL_KERNEL17__updateSceneInfoERN9StereoHAL14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZTV10FastLogger */
/* Demangled: vtable for FastLogger */
extern void* _ZTV10FastLogger;

/* Symbol: _ZN11N3D_HAL_IMP12__initAFInfoEv */
/* Demangled: N3D_HAL_IMP::__initAFInfo() */
int _ZN11N3D_HAL_IMP12__initAFInfoEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL11updateNVRAMEP28NVRAM_CAMERA_GEOMETRY_STRUCT */
/* Demangled: N3D_HAL_KERNEL::updateNVRAM(NVRAM_CAMERA_GEOMETRY_STRUCT*) */
int _ZN14N3D_HAL_KERNEL11updateNVRAMEP28NVRAM_CAMERA_GEOMETRY_STRUCT(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN11N3D_HAL_IMP16__initN3DGeoInfoEP29STEREO_KERNEL_GEO_INFO_STRUCT */
/* Demangled: N3D_HAL_IMP::__initN3DGeoInfo(STEREO_KERNEL_GEO_INFO_STRUCT*) */
int _ZN11N3D_HAL_IMP16__initN3DGeoInfoEP29STEREO_KERNEL_GEO_INFO_STRUCT(void);

/* Symbol: _ZN11N3D_HAL_IMPD0Ev */
/* Demangled: N3D_HAL_IMP::~N3D_HAL_IMP() */
int _ZN11N3D_HAL_IMPD0Ev(void);

/* Symbol: _ZTV10GF_HAL_IMP */
/* Demangled: vtable for GF_HAL_IMP */
extern void* _ZTV10GF_HAL_IMP;

/* Symbol: _ZN5NSCam12CamCalHelperD0Ev */
/* Demangled: NSCam::CamCalHelper::~CamCalHelper() */
int _ZN5NSCam12CamCalHelperD0Ev(void);

/* Symbol: _ZN14N3D_HAL_KERNEL22__runN3DLearningThreadEv */
/* Demangled: N3D_HAL_KERNEL::__runN3DLearningThread() */
int _ZN14N3D_HAL_KERNEL22__runN3DLearningThreadEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN14N3D_HAL_KERNEL21__setN3DCaptureParamsERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE */
/* Demangled: N3D_HAL_KERNEL::__setN3DCaptureParams(StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
int _ZN14N3D_HAL_KERNEL21__setN3DCaptureParamsERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS0_22N3D_HAL_OUTPUT_CAPTUREE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS5_IS8_EEED2Ev(void);

/* Symbol: _ZN11OCC_HAL_IMPD2Ev */
/* Demangled: OCC_HAL_IMP::~OCC_HAL_IMP() */
int _ZN11OCC_HAL_IMPD2Ev(void);

/* Symbol: _ZNSt3__16vectorI13GFTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<GFTuningParam, std::__1::allocator<GFTuningParam> >::__push_back_slow_path<GFTuningParam>(GFTuningParam&&) */
int _ZNSt3__16vectorI13GFTuningParamNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN14N3D_HAL_KERNEL27getCalibrationOffsetInNVRAMEv */
/* Demangled: N3D_HAL_KERNEL::getCalibrationOffsetInNVRAM() */
int _ZN14N3D_HAL_KERNEL27getCalibrationOffsetInNVRAMEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL9WarpMain1EPN5NSCam12IImageBufferES2_S2_ */
/* Demangled: N3D_HAL_KERNEL::WarpMain1(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN14N3D_HAL_KERNEL9WarpMain1EPN5NSCam12IImageBufferES2_S2_(void);

/* Symbol: _ZN14N3D_HAL_KERNELD2Ev */
/* Demangled: N3D_HAL_KERNEL::~N3D_HAL_KERNEL() */
int _ZN14N3D_HAL_KERNELD2Ev(void);

/* Symbol: _ZN14N3D_HAL_KERNEL14__logRemapInfoEPKcRK30STEREO_KERNEL_FLOW_INFO_STRUCT */
/* Demangled: N3D_HAL_KERNEL::__logRemapInfo(char const*, STEREO_KERNEL_FLOW_INFO_STRUCT const&) */
int _ZN14N3D_HAL_KERNEL14__logRemapInfoEPKcRK30STEREO_KERNEL_FLOW_INFO_STRUCT(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZN11N3D_HAL_IMP11__saveNVRAMEv */
/* Demangled: N3D_HAL_IMP::__saveNVRAM() */
int _ZN11N3D_HAL_IMP11__saveNVRAMEv(void);

/* Symbol: _ZN11OCC_HAL_IMPC1Ev */
/* Demangled: OCC_HAL_IMP::OCC_HAL_IMP() */
int _ZN11OCC_HAL_IMPC1Ev(void);

/* Symbol: _ZN10GF_HAL_IMPD2Ev */
/* Demangled: GF_HAL_IMP::~GF_HAL_IMP() */
int _ZN10GF_HAL_IMPD2Ev(void);

/* Symbol: _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv */
/* Demangled: CamCalDrv::GetCamCalCalData(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*) */
int _ZN9CamCalDrv16GetCamCalCalDataEm24CAMERA_CAM_CAL_TYPE_ENUMPv(void);

/* Symbol: _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj */
/* Demangled: CamCalDrv::GetCamCalCalDataV2(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, void*, unsigned int) */
int _ZN9CamCalDrv18GetCamCalCalDataV2Em24CAMERA_CAM_CAL_TYPE_ENUMPvj(void);

/* Symbol: _ZN9CamCalDrv4InitEmPv */
/* Demangled: CamCalDrv::Init(unsigned long, void*) */
int _ZN9CamCalDrv4InitEmPv(void);

/* Symbol: _ZN5NSCam12CamCalHelper13sensorPowerOnEjj */
/* Demangled: NSCam::CamCalHelper::sensorPowerOn(unsigned int, unsigned int) */
int _ZN5NSCam12CamCalHelper13sensorPowerOnEjj(void);

/* Symbol: _ZN14N3D_HAL_KERNEL15__getN3DLogPathEPKc */
/* Demangled: N3D_HAL_KERNEL::__getN3DLogPath(char const*) */
int _ZN14N3D_HAL_KERNEL15__getN3DLogPathEPKc(void);

/* Symbol: _ZN14N3D_HAL_KERNEL15__logAFInitInfoEPKcRK28STEREO_KERNEL_AF_INIT_STRUCT */
/* Demangled: N3D_HAL_KERNEL::__logAFInitInfo(char const*, STEREO_KERNEL_AF_INIT_STRUCT const&) */
int _ZN14N3D_HAL_KERNEL15__logAFInitInfoEPKcRK28STEREO_KERNEL_AF_INIT_STRUCT(void);

/* Symbol: _ZN10GF_HAL_IMP14__dumpInitInfoEv */
/* Demangled: GF_HAL_IMP::__dumpInitInfo() */
int _ZN10GF_HAL_IMP14__dumpInitInfoEv(void);

/* Symbol: _ZTVN8nlohmann6detail10type_errorE */
/* Demangled: vtable for nlohmann::detail::type_error */
extern void* _ZTVN8nlohmann6detail10type_errorE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT */
/* Demangled: CamCalDrv::GetCamCalCalDataBase(unsigned long, CAMERA_CAM_CAL_TYPE_ENUM, CAM_CAL_DATA_STRUCT*) */
int _ZN9CamCalDrv20GetCamCalCalDataBaseEm24CAMERA_CAM_CAL_TYPE_ENUMP19CAM_CAL_DATA_STRUCT(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZN11N3D_HAL_IMP18getStereoExtraDataEv */
/* Demangled: N3D_HAL_IMP::getStereoExtraData() */
int _ZN11N3D_HAL_IMP18getStereoExtraDataEv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN9CamCalDrv15destroyInstanceEv */
/* Demangled: CamCalDrv::destroyInstance() */
int _ZN9CamCalDrv15destroyInstanceEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL7__sLockE */
/* Demangled: N3D_HAL_KERNEL::__sLock */
extern void* _ZN14N3D_HAL_KERNEL7__sLockE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE;

/* Symbol: _ZN9StereoHAL7N3D_HAL14createInstanceERNS_18N3D_HAL_INIT_PARAME */
/* Demangled: StereoHAL::N3D_HAL::createInstance(StereoHAL::N3D_HAL_INIT_PARAM&) */
int _ZN9StereoHAL7N3D_HAL14createInstanceERNS_18N3D_HAL_INIT_PARAME(void);

/* Symbol: _ZN11OCC_HAL_IMP13__logInitDataEv */
/* Demangled: OCC_HAL_IMP::__logInitData() */
int _ZN11OCC_HAL_IMP13__logInitDataEv(void);

/* Symbol: _ZN10GF_HAL_IMPC2EN9StereoHAL20ENUM_STEREO_SCENARIOEb */
/* Demangled: GF_HAL_IMP::GF_HAL_IMP(StereoHAL::ENUM_STEREO_SCENARIO, bool) */
int _ZN10GF_HAL_IMPC2EN9StereoHAL20ENUM_STEREO_SCENARIOEb(void);

/* Symbol: _ZN11N3D_HAL_IMP21__prepareSystemConfigEv */
/* Demangled: N3D_HAL_IMP::__prepareSystemConfig() */
int _ZN11N3D_HAL_IMP21__prepareSystemConfigEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL13__logInitInfoERK33STEREO_KERNEL_SET_ENV_INFO_STRUCT */
/* Demangled: N3D_HAL_KERNEL::__logInitInfo(STEREO_KERNEL_SET_ENV_INFO_STRUCT const&) */
int _ZN14N3D_HAL_KERNEL13__logInitInfoERK33STEREO_KERNEL_SET_ENV_INFO_STRUCT(void);

/* Symbol: _ZTV15AutoProfileUtil */
/* Demangled: vtable for AutoProfileUtil */
extern void* _ZTV15AutoProfileUtil;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_stream_adapter<char>, std::__1::allocator<nlohmann::detail::output_stream_adapter<char> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_stream_adapterIcEENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN11OCC_HAL_IMPD1Ev */
/* Demangled: OCC_HAL_IMP::~OCC_HAL_IMP() */
int _ZN11OCC_HAL_IMPD1Ev(void);

/* Symbol: _ZN5NSCam12CamCalHelper4initEv */
/* Demangled: NSCam::CamCalHelper::init() */
int _ZN5NSCam12CamCalHelper4initEv(void);

/* Symbol: _ZN14N3D_HAL_KERNELD1Ev */
/* Demangled: N3D_HAL_KERNEL::~N3D_HAL_KERNEL() */
int _ZN14N3D_HAL_KERNELD1Ev(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZN11N3D_HAL_IMP17__getFEOInputInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOER29STEREO_KERNEL_IMG_INFO_STRUCT */
/* Demangled: N3D_HAL_IMP::__getFEOInputInfo(StereoHAL::ENUM_PASS2_ROUND, StereoHAL::ENUM_STEREO_SCENARIO, STEREO_KERNEL_IMG_INFO_STRUCT&) */
int _ZN11N3D_HAL_IMP17__getFEOInputInfoEN9StereoHAL16ENUM_PASS2_ROUNDENS0_20ENUM_STEREO_SCENARIOER29STEREO_KERNEL_IMG_INFO_STRUCT(void);

/* Symbol: _ZN11OCC_HAL_IMP14__setOCCParamsERN9StereoHAL14OCC_HAL_PARAMSE */
/* Demangled: OCC_HAL_IMP::__setOCCParams(StereoHAL::OCC_HAL_PARAMS&) */
int _ZN11OCC_HAL_IMP14__setOCCParamsERN9StereoHAL14OCC_HAL_PARAMSE(void);

/* Symbol: _ZN11OCC_HAL_IMP16__logSetProcDataEv */
/* Demangled: OCC_HAL_IMP::__logSetProcData() */
int _ZN11OCC_HAL_IMP16__logSetProcDataEv(void);

/* Symbol: _ZN10GF_HAL_IMP14_updateDACInfoEiR9GFDacInfo */
/* Demangled: GF_HAL_IMP::_updateDACInfo(int, GFDacInfo&) */
int _ZN10GF_HAL_IMP14_updateDACInfoEiR9GFDacInfo(void);

/* Symbol: _ZN10GF_HAL_IMP24__faceRectToTriggerPointERN5NSCam5MRectE */
/* Demangled: GF_HAL_IMP::__faceRectToTriggerPoint(NSCam::MRect&) */
int _ZN10GF_HAL_IMP24__faceRectToTriggerPointERN5NSCam5MRectE(void);

/* Symbol: _ZN10GF_HAL_IMPD1Ev */
/* Demangled: GF_HAL_IMP::~GF_HAL_IMP() */
int _ZN10GF_HAL_IMPD1Ev(void);

/* Symbol: _ZN14N3D_HAL_KERNEL17dumpN3DInitConfigEv */
/* Demangled: N3D_HAL_KERNEL::dumpN3DInitConfig() */
int _ZN14N3D_HAL_KERNEL17dumpN3DInitConfigEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL13N3D_HAL_PARAMEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_14N3D_HAL_OUTPUTE */
/* Demangled: N3D_HAL_KERNEL::WarpMain2(StereoHAL::N3D_HAL_PARAM&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*, StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL13N3D_HAL_PARAMEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZN14N3D_HAL_KERNELC2E25N3D_HAL_KERNEL_INIT_PARAM */
/* Demangled: N3D_HAL_KERNEL::N3D_HAL_KERNEL(N3D_HAL_KERNEL_INIT_PARAM) */
int _ZN14N3D_HAL_KERNELC2E25N3D_HAL_KERNEL_INIT_PARAM(void);

/* Symbol: _ZN11N3D_HAL_IMP17__spPreviewKernelE */
/* Demangled: N3D_HAL_IMP::__spPreviewKernel */
extern void* _ZN11N3D_HAL_IMP17__spPreviewKernelE;

/* Symbol: _ZN10GF_HAL_IMP12_setGFParamsERN9StereoHAL14GF_HAL_IN_DATAE */
/* Demangled: GF_HAL_IMP::_setGFParams(StereoHAL::GF_HAL_IN_DATA&) */
int _ZN10GF_HAL_IMP12_setGFParamsERN9StereoHAL14GF_HAL_IN_DATAE(void);

/* Symbol: _ZN13CamCalDrvBase14createInstanceEv */
/* Demangled: CamCalDrvBase::createInstance() */
int _ZN13CamCalDrvBase14createInstanceEv(void);

/* Symbol: _ZN14N3D_HAL_KERNEL9initModelEv */
/* Demangled: N3D_HAL_KERNEL::initModel() */
int _ZN14N3D_HAL_KERNEL9initModelEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN10GF_HAL_IMPC1EN9StereoHAL20ENUM_STEREO_SCENARIOEb */
/* Demangled: GF_HAL_IMP::GF_HAL_IMP(StereoHAL::ENUM_STEREO_SCENARIO, bool) */
int _ZN10GF_HAL_IMPC1EN9StereoHAL20ENUM_STEREO_SCENARIOEb(void);

/* Symbol: _ZN14N3D_HAL_KERNEL13__setLensInfoEPf */
/* Demangled: N3D_HAL_KERNEL::__setLensInfo(float*) */
int _ZN14N3D_HAL_KERNEL13__setLensInfoEPf(void);

/* Symbol: _ZN14N3D_HAL_KERNEL14logN3DInitInfoEv */
/* Demangled: N3D_HAL_KERNEL::logN3DInitInfo() */
int _ZN14N3D_HAL_KERNEL14logN3DInitInfoEv(void);

/* Symbol: _ZTV11ProfileUtil */
/* Demangled: vtable for ProfileUtil */
extern void* _ZTV11ProfileUtil;

/* Symbol: _ZN11N3D_HAL_IMP20__getStereoRemapInfoER30STEREO_KERNEL_FLOW_INFO_STRUCTS1_N9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: N3D_HAL_IMP::__getStereoRemapInfo(STEREO_KERNEL_FLOW_INFO_STRUCT&, STEREO_KERNEL_FLOW_INFO_STRUCT&, StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN11N3D_HAL_IMP20__getStereoRemapInfoER30STEREO_KERNEL_FLOW_INFO_STRUCTS1_N9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN11N3D_HAL_IMPC2ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE */
/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM_WPE&) */
int _ZN11N3D_HAL_IMPC2ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE(void);

/* Symbol: _ZN9CamCalDrvC2Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC2Ev(void);

/* Symbol: _ZN14N3D_HAL_KERNEL10__sLogLockE */
/* Demangled: N3D_HAL_KERNEL::__sLogLock */
extern void* _ZN14N3D_HAL_KERNEL10__sLogLockE;

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE6insertENS_11__wrap_iterIPKSB_EEmRSF_ */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::insert(std::__1::__wrap_iter<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const*>, unsigned long, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE6insertENS_11__wrap_iterIPKSB_EEmRSF_(void);

/* Symbol: _ZN11N3D_HAL_IMP15__initCCImgInfoER29STEREO_KERNEL_IMG_INFO_STRUCT */
/* Demangled: N3D_HAL_IMP::__initCCImgInfo(STEREO_KERNEL_IMG_INFO_STRUCT&) */
int _ZN11N3D_HAL_IMP15__initCCImgInfoER29STEREO_KERNEL_IMG_INFO_STRUCT(void);

/* Symbol: _ZN10GF_HAL_IMP19_initAFWinTransformEv */
/* Demangled: GF_HAL_IMP::_initAFWinTransform() */
int _ZN10GF_HAL_IMP19_initAFWinTransformEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_(void);

/* Symbol: _ZN10GF_HAL_IMP13__logGFResultEv */
/* Demangled: GF_HAL_IMP::__logGFResult() */
int _ZN10GF_HAL_IMP13__logGFResultEv(void);

/* Symbol: _ZN10GF_HAL_IMP14_rotateAFPointERN5NSCam6MPointE */
/* Demangled: GF_HAL_IMP::_rotateAFPoint(NSCam::MPoint&) */
int _ZN10GF_HAL_IMP14_rotateAFPointERN5NSCam6MPointE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN11N3D_HAL_IMP9__dumpLDCEv */
/* Demangled: N3D_HAL_IMP::__dumpLDC() */
int _ZN11N3D_HAL_IMP9__dumpLDCEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN14N3D_HAL_KERNEL14__setN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE */
/* Demangled: N3D_HAL_KERNEL::__setN3DParams(StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN14N3D_HAL_KERNEL14__setN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS0_14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZN11N3D_HAL_IMP12__initN3DHALEPN9StereoHAL25N3D_HAL_INIT_PARAM_COMMONE */
/* Demangled: N3D_HAL_IMP::__initN3DHAL(StereoHAL::N3D_HAL_INIT_PARAM_COMMON*) */
int _ZN11N3D_HAL_IMP12__initN3DHALEPN9StereoHAL25N3D_HAL_INIT_PARAM_COMMONE(void);

/* Symbol: _ZN10GF_HAL_IMP6_runGFERN9StereoHAL15GF_HAL_OUT_DATAE */
/* Demangled: GF_HAL_IMP::_runGF(StereoHAL::GF_HAL_OUT_DATA&) */
int _ZN10GF_HAL_IMP6_runGFERN9StereoHAL15GF_HAL_OUT_DATAE(void);

/* Symbol: _ZTV14N3D_HAL_KERNEL */
/* Demangled: vtable for N3D_HAL_KERNEL */
extern void* _ZTV14N3D_HAL_KERNEL;

/* Symbol: _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_ */
/* Demangled: void nlohmann::detail::dtoa_impl::grisu2<double>(char*, int&, int&, double) */
int _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void);

/* Symbol: _ZN11N3D_HAL_IMP15__transferAFWinERKN9StereoHAL24AF_WIN_COORDINATE_STRUCTERS1_ */
/* Demangled: N3D_HAL_IMP::__transferAFWin(StereoHAL::AF_WIN_COORDINATE_STRUCT const&, StereoHAL::AF_WIN_COORDINATE_STRUCT&) */
int _ZN11N3D_HAL_IMP15__transferAFWinERKN9StereoHAL24AF_WIN_COORDINATE_STRUCTERS1_(void);

/* Symbol: _ZN11OCC_HAL_IMPD0Ev */
/* Demangled: OCC_HAL_IMP::~OCC_HAL_IMP() */
int _ZN11OCC_HAL_IMPD0Ev(void);

/* Symbol: _ZN10GF_HAL_IMP19__dumpWorkingBufferEv */
/* Demangled: GF_HAL_IMP::__dumpWorkingBuffer() */
int _ZN10GF_HAL_IMP19__dumpWorkingBufferEv(void);

/* Symbol: _ZTV9CamCalDrv */
/* Demangled: vtable for CamCalDrv */
extern void* _ZTV9CamCalDrv;

/* Symbol: _ZN14N3D_HAL_KERNEL15__logTuningInfoEPKcRK32STEREO_KERNEL_TUNING_PARA_STRUCT */
/* Demangled: N3D_HAL_KERNEL::__logTuningInfo(char const*, STEREO_KERNEL_TUNING_PARA_STRUCT const&) */
int _ZN14N3D_HAL_KERNEL15__logTuningInfoEPKcRK32STEREO_KERNEL_TUNING_PARA_STRUCT(void);

/* Symbol: _ZN14N3D_HAL_KERNEL8setNVRAMEPK28NVRAM_CAMERA_GEOMETRY_STRUCT */
/* Demangled: N3D_HAL_KERNEL::setNVRAM(NVRAM_CAMERA_GEOMETRY_STRUCT const*) */
int _ZN14N3D_HAL_KERNEL8setNVRAMEPK28NVRAM_CAMERA_GEOMETRY_STRUCT(void);

/* Symbol: _ZN14N3D_HAL_KERNELD0Ev */
/* Demangled: N3D_HAL_KERNEL::~N3D_HAL_KERNEL() */
int _ZN14N3D_HAL_KERNELD0Ev(void);

/* Symbol: _ZN10GF_HAL_IMPD0Ev */
/* Demangled: GF_HAL_IMP::~GF_HAL_IMP() */
int _ZN10GF_HAL_IMPD0Ev(void);

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: _ZN11N3D_HAL_IMP7__sLockE */
/* Demangled: N3D_HAL_IMP::__sLock */
extern void* _ZN11N3D_HAL_IMP7__sLockE;

/* Symbol: _ZTV11N3D_HAL_IMP */
/* Demangled: vtable for N3D_HAL_IMP */
extern void* _ZTV11N3D_HAL_IMP;

/* Symbol: _ZN14N3D_HAL_KERNEL11__logResultEPKcRK27STEREO_KERNEL_RESULT_STRUCT */
/* Demangled: N3D_HAL_KERNEL::__logResult(char const*, STEREO_KERNEL_RESULT_STRUCT const&) */
int _ZN14N3D_HAL_KERNEL11__logResultEPKcRK27STEREO_KERNEL_RESULT_STRUCT(void);

/* Symbol: _ZN11N3D_HAL_IMPC1ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE */
/* Demangled: N3D_HAL_IMP::N3D_HAL_IMP(StereoHAL::N3D_HAL_INIT_PARAM_WPE&) */
int _ZN11N3D_HAL_IMPC1ERN9StereoHAL22N3D_HAL_INIT_PARAM_WPEE(void);

/* Symbol: _ZN11N3D_HAL_IMP17__dumpDebugBufferEPh */
/* Demangled: N3D_HAL_IMP::__dumpDebugBuffer(unsigned char*) */
int _ZN11N3D_HAL_IMP17__dumpDebugBufferEPh(void);

/* Symbol: _ZN9CamCalDrvD2Ev */
/* Demangled: CamCalDrv::~CamCalDrv() */
int _ZN9CamCalDrvD2Ev(void);

/* Symbol: _ZN14N3D_HAL_KERNEL12__dumpN3DLogENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: N3D_HAL_KERNEL::__dumpN3DLog(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN14N3D_HAL_KERNEL12__dumpN3DLogENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN14N3D_HAL_KERNEL19__initWorkingBufferEm */
/* Demangled: N3D_HAL_KERNEL::__initWorkingBuffer(unsigned long) */
int _ZN14N3D_HAL_KERNEL19__initWorkingBufferEm(void);

/* Symbol: _ZN14N3D_HAL_KERNEL20__initGraphicBuffersER25N3D_HAL_KERNEL_INIT_PARAM */
/* Demangled: N3D_HAL_KERNEL::__initGraphicBuffers(N3D_HAL_KERNEL_INIT_PARAM&) */
int _ZN14N3D_HAL_KERNEL20__initGraphicBuffersER25N3D_HAL_KERNEL_INIT_PARAM(void);

/* Symbol: _ZN14N3D_HAL_KERNEL7initN3DER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf */
/* Demangled: N3D_HAL_KERNEL::initN3D(STEREO_KERNEL_SET_ENV_INFO_STRUCT&, NVRAM_CAMERA_GEOMETRY_STRUCT*, float*) */
int _ZN14N3D_HAL_KERNEL7initN3DER33STEREO_KERNEL_SET_ENV_INFO_STRUCTP28NVRAM_CAMERA_GEOMETRY_STRUCTPf(void);

/* Symbol: _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL21N3D_HAL_PARAM_CAPTUREEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_22N3D_HAL_OUTPUT_CAPTUREER27STEREO_KERNEL_RESULT_STRUCT */
/* Demangled: N3D_HAL_KERNEL::WarpMain2(StereoHAL::N3D_HAL_PARAM_CAPTURE&, STEREO_KERNEL_AF_INFO_STRUCT*, STEREO_KERNEL_AF_INFO_STRUCT*, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&, STEREO_KERNEL_RESULT_STRUCT&) */
int _ZN14N3D_HAL_KERNEL9WarpMain2ERN9StereoHAL21N3D_HAL_PARAM_CAPTUREEP28STEREO_KERNEL_AF_INFO_STRUCTS4_RNS0_22N3D_HAL_OUTPUT_CAPTUREER27STEREO_KERNEL_RESULT_STRUCT(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::IImageBuffer>, std::__1::allocator<android::sp<NSCam::IImageBuffer> > >::__push_back_slow_path<android::sp<NSCam::IImageBuffer> const&>(android::sp<NSCam::IImageBuffer> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam12IImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN9CamCalDrvC1Ev */
/* Demangled: CamCalDrv::CamCalDrv() */
int _ZN9CamCalDrvC1Ev(void);

/* Symbol: _ZN11N3D_HAL_IMP18__dumpN3DExtraDataEv */
/* Demangled: N3D_HAL_IMP::__dumpN3DExtraData() */
int _ZN11N3D_HAL_IMP18__dumpN3DExtraDataEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFEATURE_VSDOF_HAL_H */
