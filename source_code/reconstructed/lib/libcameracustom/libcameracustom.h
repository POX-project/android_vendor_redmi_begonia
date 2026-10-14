/*
 * Reverse-Engineered ABI Specification for: libcameracustom.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcameracustom.so
 */

#ifndef BEGONIA_RE_LIBCAMERACUSTOM_H
#define BEGONIA_RE_LIBCAMERACUSTOM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)16>() */
int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN16PD_IMX386MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t */
/* Demangled: PD_IMX386MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
int _ZN16PD_IMX386MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _Z26cust_getFlashIMapFunc_mainv */
/* Demangled: cust_getFlashIMapFunc_main() */
int _Z26cust_getFlashIMapFunc_mainv(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN21PD_S5KGW1SUNNYMIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _Z22get_asd_CustomizeData2P19ASD_Customize_PARA2 */
/* Demangled: get_asd_CustomizeData2(ASD_Customize_PARA2*) */
int _Z22get_asd_CustomizeData2P19ASD_Customize_PARA2(void);

/* Symbol: _ZNK11NSIspTuning15IspTuningCustom19get_feature_controlENS_12ESensorDev_TE */
/* Demangled: NSIspTuning::IspTuningCustom::get_feature_control(NSIspTuning::ESensorDev_T) const */
int _ZNK11NSIspTuning15IspTuningCustom19get_feature_controlENS_12ESensorDev_TE(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAWC2Ev */
/* Demangled: PD_S5K2X8MIPIRAW::PD_S5K2X8MIPIRAW() */
int _ZN16PD_S5K2X8MIPIRAWC2Ev(void);

/* Symbol: _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj12609ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<12609u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj12609ELj0EEE;

/* Symbol: _ZN10NR3DCustom12isEnabledRSCEj */
/* Demangled: NR3DCustom::isEnabledRSC(unsigned int) */
int _ZN10NR3DCustom12isEnabledRSCEj(void);

/* Symbol: customer_vignette */
/* Demangled: customer_vignette */
extern void* customer_vignette;

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE2C2Ev */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::PD_IMX586MIPIRAW_TYPE2() */
int _ZN22PD_IMX586MIPIRAW_TYPE2C2Ev(void);

/* Symbol: _ZN17PD_OV16880MIPIRAW11getInstanceEv */
/* Demangled: PD_OV16880MIPIRAW::getInstance() */
int _ZN17PD_OV16880MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN16PD_IMX398MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_IMX398MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_IMX398MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _Z21get_performance_leveljjii */
/* Demangled: get_performance_level(unsigned int, unsigned int, int, int) */
int _Z21get_performance_leveljjii(void);

/* Symbol: _Z18getZVHDRExpSettingRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_S */
/* Demangled: getZVHDRExpSetting(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&) */
int _Z18getZVHDRExpSettingRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_S(void);

/* Symbol: _ZN11NSYuvTuning27custom_GetFlashlightGain10XEi */
/* Demangled: NSYuvTuning::custom_GetFlashlightGain10X(int) */
int _ZN11NSYuvTuning27custom_GetFlashlightGain10XEi(void);

/* Symbol: _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)1>() */
int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN17PD_OV16880MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_OV16880MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN17PD_OV16880MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_IMX258MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX258MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX258MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_IMX386MIPIRAWD2Ev */
/* Demangled: PD_IMX386MIPIRAW::~PD_IMX386MIPIRAW() */
int _ZN16PD_IMX386MIPIRAWD2Ev(void);

/* Symbol: _ZN16PD_IMX486MIPIRAWD1Ev */
/* Demangled: PD_IMX486MIPIRAW::~PD_IMX486MIPIRAW() */
int _ZN16PD_IMX486MIPIRAWD1Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)16>() */
int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZTVN11NSIspTuning15IspTuningCustomE */
/* Demangled: vtable for NSIspTuning::IspTuningCustom */
extern void* _ZTVN11NSIspTuning15IspTuningCustomE;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE29IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::IsSupport(SPDProfile_t&) */
int _ZN22PD_IMX586MIPIRAW_TYPE29IsSupportER12SPDProfile_t(void);

/* Symbol: _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE16EEiv */
/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)16>() */
int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE16EEiv(void);

/* Symbol: LomoFilterGGMJni */
/* Demangled: LomoFilterGGMJni */
extern void* LomoFilterGGMJni;

/* Symbol: _Z26compareSensorIdAndModuleIdjj */
/* Demangled: compareSensorIdAndModuleId(unsigned int, unsigned int) */
int _Z26compareSensorIdAndModuleIdjj(void);

/* Symbol: _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_PDCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_PDC_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_PDC(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BNR_PDC_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_PDCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_PDC_TE(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom26map_FlashId_to_MappingInfoEi */
/* Demangled: NSIspTuning::IspTuningCustom::map_FlashId_to_MappingInfo(int) */
int _ZN11NSIspTuning15IspTuningCustom26map_FlashId_to_MappingInfoEi(void);

/* Symbol: _ZN9FSCCustom19getAfDampTimeOffsetEv */
/* Demangled: FSCCustom::getAfDampTimeOffset() */
int _ZN9FSCCustom19getAfDampTimeOffsetEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE11__vallocateEj */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE11__vallocateEj(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)1>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE */
/* Demangled: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_Cmd */
extern void* _ZN16PD_IMX230MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE;

/* Symbol: _ZN16PD_IMX486MIPIRAWC2Ev */
/* Demangled: PD_IMX486MIPIRAW::PD_IMX486MIPIRAW() */
int _ZN16PD_IMX486MIPIRAWC2Ev(void);

/* Symbol: _Z11getAFConfigiPPK11AF_CONFIG_T */
/* Demangled: getAFConfig(int, AF_CONFIG_T const**) */
int _Z11getAFConfigiPPK11AF_CONFIG_T(void);

/* Symbol: _Z25CUST_ENABLE_PRECAPTURE_AFv */
/* Demangled: CUST_ENABLE_PRECAPTURE_AF() */
int _Z25CUST_ENABLE_PRECAPTURE_AFv(void);

/* Symbol: _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE4EEiv */
/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)4>() */
int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE4EEiv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom16is_to_invoke_flcERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_flc(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom16is_to_invoke_flcERKNS_13RAWIspCamInfoE(void);

/* Symbol: Lomo_cr_param */
/* Demangled: Lomo_cr_param */
extern void* Lomo_cr_param;

/* Symbol: _Z39cust_fillDefaultStrobeNVRam_main3_part2Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_main3_part2(void*) */
int _Z39cust_fillDefaultStrobeNVRam_main3_part2Pv(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW19m_u4Reg_AdDaPair_SzE */
/* Demangled: PD_IMX338MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern void* _ZN16PD_IMX338MIPIRAW19m_u4Reg_AdDaPair_SzE;

/* Symbol: _ZTV16PD_IMX519MIPIRAW */
/* Demangled: vtable for PD_IMX519MIPIRAW */
extern void* _ZTV16PD_IMX519MIPIRAW;

/* Symbol: _ZTSN8nlohmann6detail11other_errorE */
/* Demangled: typeinfo name for nlohmann::detail::other_error */
extern void* _ZTSN8nlohmann6detail11other_errorE;

/* Symbol: _Z30CUST_GET_SYNC3A_AESTABLE_MAGICv */
/* Demangled: CUST_GET_SYNC3A_AESTABLE_MAGIC() */
int _Z30CUST_GET_SYNC3A_AESTABLE_MAGICv(void);

/* Symbol: _Z23getWorkPerCycle_Main_M6v */
/* Demangled: getWorkPerCycle_Main_M6() */
int _Z23getWorkPerCycle_Main_M6v(void);

/* Symbol: _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX338MIPIRAW::getInstance() */
int _ZN16PD_IMX338MIPIRAW11getInstanceEv(void);

/* Symbol: CustomHdrBottomFRatioGet */
/* Demangled: CustomHdrBottomFRatioGet */
int CustomHdrBottomFRatioGet(void);

/* Symbol: _Z27cust_setSpecialLongExpOnOffRKx */
/* Demangled: cust_setSpecialLongExpOnOff(long long const&) */
int _Z27cust_setSpecialLongExpOnOffRKx(void);

/* Symbol: _ZTV16PD_S5K2P8MIPIRAW */
/* Demangled: vtable for PD_S5K2P8MIPIRAW */
extern void* _ZTV16PD_S5K2P8MIPIRAW;

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom14fine_tune_ANR2ERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_16ISP_NVRAM_ANR2_TESE_RSC_ */
/* Demangled: NSIspTuning::IspTuningCustom::fine_tune_ANR2(NSIspTuning::RAWIspCamInfo const&, NSIspExifDebug::IspExifDebugInfo::IspGmaInfo const&, NSIspExifDebug::IspExifDebugInfo::IspLceInfo const&, NSIspTuning::ISP_NVRAM_ANR2_T const&, NSIspTuning::ISP_NVRAM_ANR2_T const&, NSIspTuning::ISP_NVRAM_ANR2_T&) */
int _ZN11NSIspTuning15IspTuningCustom14fine_tune_ANR2ERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_16ISP_NVRAM_ANR2_TESE_RSC_(void);

/* Symbol: _Z27XiaoMiDoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: XiaoMiDoCamCalModuleVersion(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z27XiaoMiDoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom27map_P2inSize_to_MappingInfoERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::map_P2inSize_to_MappingInfo(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom27map_P2inSize_to_MappingInfoERKNS_13RAWIspCamInfoE(void);

/* Symbol: _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EEE */
/* Demangled: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EEE;

/* Symbol: _Z24BU64748AF_getDefaultDataPvj */
/* Demangled: BU64748AF_getDefaultData(void*, unsigned int) */
int _Z24BU64748AF_getDefaultDataPvj(void);

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K3P8SXMIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN18PD_S5K3P8SXMIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_IMX519MIPIRAWD2Ev */
/* Demangled: PD_IMX519MIPIRAW::~PD_IMX519MIPIRAW() */
int _ZN16PD_IMX519MIPIRAWD2Ev(void);

/* Symbol: _Z34usingMultithreadForPipelineContextv */
/* Demangled: usingMultithreadForPipelineContext() */
int _Z34usingMultithreadForPipelineContextv(void);

/* Symbol: _Z16GetCameraCalDatajPj */
/* Demangled: GetCameraCalData(unsigned int, unsigned int*) */
int _Z16GetCameraCalDatajPj(void);

/* Symbol: _Z25CUST_FACE_AWB_CLEAR_COUNTv */
/* Demangled: CUST_FACE_AWB_CLEAR_COUNT() */
int _Z25CUST_FACE_AWB_CLEAR_COUNTv(void);

/* Symbol: _Z28cust_getFlashITab2_sub_part2Ps */
/* Demangled: cust_getFlashITab2_sub_part2(short*) */
int _Z28cust_getFlashITab2_sub_part2Ps(void);

/* Symbol: _ZN8PDBufMgr15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PDBufMgr::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN8PDBufMgr15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN17PD_OV13855MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_OV13855MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN17PD_OV13855MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_ */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::vector(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_(void);

/* Symbol: _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_IMX386MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX386MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX386MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_IMX362MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX362MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX362MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom13fine_tune_ANRERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_15ISP_NVRAM_ANR_TESE_RSC_ */
/* Demangled: NSIspTuning::IspTuningCustom::fine_tune_ANR(NSIspTuning::RAWIspCamInfo const&, NSIspExifDebug::IspExifDebugInfo::IspGmaInfo const&, NSIspExifDebug::IspExifDebugInfo::IspLceInfo const&, NSIspTuning::ISP_NVRAM_ANR_T const&, NSIspTuning::ISP_NVRAM_ANR_T const&, NSIspTuning::ISP_NVRAM_ANR_T&) */
int _ZN11NSIspTuning15IspTuningCustom13fine_tune_ANRERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_15ISP_NVRAM_ANR_TESE_RSC_(void);

/* Symbol: _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_ */
/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::find<unsigned long long>(unsigned long long const&) const */
int _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_(void);

/* Symbol: _ZN17PD_OV23850MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_OV23850MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN17PD_OV23850MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_S5K3M3MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5K3M3MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_S5K3M3MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5K3L8MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_S5K3L8MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW11sendCommandEjPvS0_S0_S0_ */
/* Demangled: PD_IMX230MIPIRAW::sendCommand(unsigned int, void*, void*, void*, void*) */
int _ZN16PD_IMX230MIPIRAW11sendCommandEjPvS0_S0_S0_(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z11GetFileSizePKc */
/* Demangled: GetFileSize(char const*) */
int _Z11GetFileSizePKc(void);

/* Symbol: _ZN16PD_IMX386MIPIRAW18GetPDInfo2HybridAFEiPi */
/* Demangled: PD_IMX386MIPIRAW::GetPDInfo2HybridAF(int, int*) */
int _ZN16PD_IMX386MIPIRAW18GetPDInfo2HybridAFEiPi(void);

/* Symbol: _ZN11NSYuvTuning31custom_GetYuvFlashlightFrameCntEi */
/* Demangled: NSYuvTuning::custom_GetYuvFlashlightFrameCnt(int) */
int _ZN11NSYuvTuning31custom_GetYuvFlashlightFrameCntEi(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_GGMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_GGM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_GGM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_GGM_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_GGMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_GGM_TE(void);

/* Symbol: power_2_lshift20_negative */
/* Demangled: power_2_lshift20_negative */
extern void* power_2_lshift20_negative;

/* Symbol: _Z49cust_fillDefaultFlashCalibrationNVRam_main3_part2Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main3_part2(void*) */
int _Z49cust_fillDefaultFlashCalibrationNVRam_main3_part2Pv(void);

/* Symbol: _Z29AK7371AF_MAIN2_getDefaultDataPvj */
/* Demangled: AK7371AF_MAIN2_getDefaultData(void*, unsigned int) */
int _Z29AK7371AF_MAIN2_getDefaultDataPvj(void);

/* Symbol: _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned int) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj(void);

/* Symbol: _Z49cust_fillDefaultFlashCalibrationNVRam_main2_part2Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main2_part2(void*) */
int _Z49cust_fillDefaultFlashCalibrationNVRam_main2_part2Pv(void);

/* Symbol: _ZN16PD_IMX386MIPIRAWD0Ev */
/* Demangled: PD_IMX386MIPIRAW::~PD_IMX386MIPIRAW() */
int _ZN16PD_IMX386MIPIRAWD0Ev(void);

/* Symbol: _Z20get_fd_CustomizeDataP17FD_Customize_PARA */
/* Demangled: get_fd_CustomizeData(FD_Customize_PARA*) */
int _Z20get_fd_CustomizeDataP17FD_Customize_PARA(void);

/* Symbol: _Z18getIVHDRExpSettingRK27IVHDRExpSettingInputParam_SR28IVHDRExpSettingOutputParam_S */
/* Demangled: getIVHDRExpSetting(IVHDRExpSettingInputParam_S const&, IVHDRExpSettingOutputParam_S&) */
int _Z18getIVHDRExpSettingRK27IVHDRExpSettingInputParam_SR28IVHDRExpSettingOutputParam_S(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE(void);

/* Symbol: _ZN17PD_OV23850MIPIRAWD2Ev */
/* Demangled: PD_OV23850MIPIRAW::~PD_OV23850MIPIRAW() */
int _ZN17PD_OV23850MIPIRAWD2Ev(void);

/* Symbol: _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::__swap_out_circular_buffer(std::__1::__split_buffer<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct>&>&) */
int _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN11NSCamCustom18get_atv_input_dataEv */
/* Demangled: NSCamCustom::get_atv_input_data() */
int _ZN11NSCamCustom18get_atv_input_dataEv(void);

/* Symbol: _Z25cust_getFlashIMapFunc_subv */
/* Demangled: cust_getFlashIMapFunc_sub() */
int _Z25cust_getFlashIMapFunc_subv(void);

/* Symbol: CustomHdrUseIspGamma */
/* Demangled: CustomHdrUseIspGamma */
int CustomHdrUseIspGamma(void);

/* Symbol: _Z19getIsCameraCallbackv */
/* Demangled: getIsCameraCallback() */
int _Z19getIsCameraCallbackv(void);

/* Symbol: _ZTINSt3__117bad_function_callE */
/* Demangled: typeinfo for std::__1::bad_function_call */
extern void* _ZTINSt3__117bad_function_callE;

/* Symbol: _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE0EEiPPK10AF_PARAM_TE9g_AFparam */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)0>(AF_PARAM_T const**)::g_AFparam */
extern void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE0EEiPPK10AF_PARAM_TE9g_AFparam;

/* Symbol: pBU64748AF_MAIN2_getDefaultData */
/* Demangled: pBU64748AF_MAIN2_getDefaultData */
extern void* pBU64748AF_MAIN2_getDefaultData;

/* Symbol: _Z17getDCMFCaptureCntv */
/* Demangled: getDCMFCaptureCnt() */
int _Z17getDCMFCaptureCntv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)4>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z16getAEManualPlineRK7MPParamR10eAETableIDS3_ */
/* Demangled: getAEManualPline(MPParam const&, eAETableID&, eAETableID&) */
int _Z16getAEManualPlineRK7MPParamR10eAETableIDS3_(void);

/* Symbol: _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE8EEiv */
/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)8>() */
int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE8EEiv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom22is_to_invoke_fine_tuneENS_12ESensorDev_TE */
/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_fine_tune(NSIspTuning::ESensorDev_T) */
int _ZN11NSIspTuning15IspTuningCustom22is_to_invoke_fine_tuneENS_12ESensorDev_TE(void);

/* Symbol: _Z18cust_getFlashITab2iPs */
/* Demangled: cust_getFlashITab2(int, short*) */
int _Z18cust_getFlashITab2iPs(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj12610ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<12610u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj12610ELj0EE11getInstanceEvE4inst;

/* Symbol: _Z33CUST_CAF_WINDOW_FOLLOW_TAF_WINDOWv */
/* Demangled: CUST_CAF_WINDOW_FOLLOW_TAF_WINDOW() */
int _Z33CUST_CAF_WINDOW_FOLLOW_TAF_WINDOWv(void);

/* Symbol: _Z17DoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalSingleLsc(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z17DoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN8PDBufMgrD2Ev */
/* Demangled: PDBufMgr::~PDBufMgr() */
int _ZN8PDBufMgrD2Ev(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE */
/* Demangled: PD_IMX338MIPIRAW::m_u4Reg_AdDaPair_PDWin_Fix_Sz */
extern void* _ZN16PD_IMX338MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE;

/* Symbol: _ZN17PD_OV13870MIPIRAWD1Ev */
/* Demangled: PD_OV13870MIPIRAW::~PD_OV13870MIPIRAW() */
int _ZN17PD_OV13870MIPIRAWD1Ev(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_NR1ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_NR1_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_NR1(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BNR_NR1_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_NR1ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_NR1_TE(void);

/* Symbol: LomoFilterGGM */
/* Demangled: LomoFilterGGM */
extern void* LomoFilterGGM;

/* Symbol: _ZN16PD_IMX386MIPIRAWC1Ev */
/* Demangled: PD_IMX386MIPIRAW::PD_IMX386MIPIRAW() */
int _ZN16PD_IMX386MIPIRAWC1Ev(void);

/* Symbol: _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN11NSCamCustom29custom_BurstFlashlightGain10XEv */
/* Demangled: NSCamCustom::custom_BurstFlashlightGain10X() */
int _ZN11NSCamCustom29custom_BurstFlashlightGain10XEv(void);

/* Symbol: _Z29Get_Camera_FuseId_FromPersistPKcPPhPj */
/* Demangled: Get_Camera_FuseId_FromPersist(char const*, unsigned char**, unsigned int*) */
int _Z29Get_Camera_FuseId_FromPersistPKcPPhPj(void);

/* Symbol: CustomHdrProlongedVdGet */
/* Demangled: CustomHdrProlongedVdGet */
int CustomHdrProlongedVdGet(void);

/* Symbol: _ZN11NSYuvTuning38custom_GetYuvFlashlightHighCurrentDutyEi */
/* Demangled: NSYuvTuning::custom_GetYuvFlashlightHighCurrentDuty(int) */
int _ZN11NSYuvTuning38custom_GetYuvFlashlightHighCurrentDutyEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE8__rehashEj(void);

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAW11getInstanceEv */
/* Demangled: PD_S5K3P8SXMIPIRAW::getInstance() */
int _ZN18PD_S5K3P8SXMIPIRAW11getInstanceEv(void);

/* Symbol: _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K2X8MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_S5K2X8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW10GetPDCalSzEv */
/* Demangled: PD_IMX230MIPIRAW::GetPDCalSz() */
int _ZN16PD_IMX230MIPIRAW10GetPDCalSzEv(void);

/* Symbol: CustomHdrThLowGet */
/* Demangled: CustomHdrThLowGet */
int CustomHdrThLowGet(void);

/* Symbol: _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE4EEiPPK10AF_PARAM_TE9g_AFparam */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)4>(AF_PARAM_T const**)::g_AFparam */
extern void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE4EEiPPK10AF_PARAM_TE9g_AFparam;

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAW11getInstanceEv */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::getInstance() */
int _ZN21PD_S5KGW1OFILMMIPIRAW11getInstanceEv(void);

/* Symbol: _ZN17PD_OV13870MIPIRAWC2Ev */
/* Demangled: PD_OV13870MIPIRAW::PD_OV13870MIPIRAW() */
int _ZN17PD_OV13870MIPIRAWC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_ */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void);

/* Symbol: _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_ */
/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::find<unsigned long long>(unsigned long long const&) const */
int _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_(void);

/* Symbol: _Z35cust_getFlashProjectPara_main_part2iiP26NVRAM_CAMERA_STROBE_STRUCT */
/* Demangled: cust_getFlashProjectPara_main_part2(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
int _Z35cust_getFlashProjectPara_main_part2iiP26NVRAM_CAMERA_STROBE_STRUCT(void);

/* Symbol: _ZN16PD_IMX519MIPIRAWD0Ev */
/* Demangled: PD_IMX519MIPIRAW::~PD_IMX519MIPIRAW() */
int _ZN16PD_IMX519MIPIRAWD0Ev(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW11ExtractPDCLEv */
/* Demangled: PD_IMX230MIPIRAW::ExtractPDCL() */
int _ZN16PD_IMX230MIPIRAW11ExtractPDCLEv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom14userSetting_EEERKNS_13RAWIspCamInfoE49mtk_camera_metadata_enum_android_control_isp_edgeRNS_14ISP_NVRAM_EE_TE */
/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EE(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_isp_edge, NSIspTuning::ISP_NVRAM_EE_T&) */
int _ZN11NSIspTuning15IspTuningCustom14userSetting_EEERKNS_13RAWIspCamInfoE49mtk_camera_metadata_enum_android_control_isp_edgeRNS_14ISP_NVRAM_EE_TE(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj34907ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<34907u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj34907ELj0EEE;

/* Symbol: _ZN16PD_IMX230MIPIRAW18GetPDInfo2HybridAFEiPi */
/* Demangled: PD_IMX230MIPIRAW::GetPDInfo2HybridAF(int, int*) */
int _ZN16PD_IMX230MIPIRAW18GetPDInfo2HybridAFEiPi(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE */
/* Demangled: PD_IMX230MIPIRAW::m_u4Reg_AdDaPair_PDWin_Flexible_Sz */
extern void* _ZN16PD_IMX230MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE;

/* Symbol: _ZN16PD_IMX230MIPIRAWD2Ev */
/* Demangled: PD_IMX230MIPIRAW::~PD_IMX230MIPIRAW() */
int _ZN16PD_IMX230MIPIRAWD2Ev(void);

/* Symbol: _ZN12CustomPQImpl29decidePQEnable_EIS30_VIDEO_4kEj */
/* Demangled: CustomPQImpl::decidePQEnable_EIS30_VIDEO_4k(unsigned int) */
int _ZN12CustomPQImpl29decidePQEnable_EIS30_VIDEO_4kEj(void);

/* Symbol: _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_T */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)4>(AF_CONFIG_T const**) */
int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_T(void);

/* Symbol: _Z23GetCameraBpciDefaultTbljjP20CAMERA_BPCI_STRUCT_t */
/* Demangled: GetCameraBpciDefaultTbl(unsigned int, unsigned int, CAMERA_BPCI_STRUCT_t*) */
int _Z23GetCameraBpciDefaultTbljjP20CAMERA_BPCI_STRUCT_t(void);

/* Symbol: _Z33cust_getFlashQuick2CalibrationExpiPiS_S_ */
/* Demangled: cust_getFlashQuick2CalibrationExp(int, int*, int*, int*) */
int _Z33cust_getFlashQuick2CalibrationExpiPiS_S_(void);

/* Symbol: _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: pBU64748AF_getDefaultData */
/* Demangled: pBU64748AF_getDefaultData */
extern void* pBU64748AF_getDefaultData;

/* Symbol: _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE(void);

/* Symbol: _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: EEPROMInit */
/* Demangled: EEPROMInit */
int EEPROMInit(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW19m_u4Reg_AdDaPair_SzE */
/* Demangled: PD_IMX230MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern void* _ZN16PD_IMX230MIPIRAW19m_u4Reg_AdDaPair_SzE;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)3>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z9GetDBSGNPi */
/* Demangled: GetDBSGNP(int) */
int _Z9GetDBSGNPi(void);

/* Symbol: _Z11isEnableSL2j */
/* Demangled: isEnableSL2(unsigned int) */
int _Z11isEnableSL2j(void);

/* Symbol: _ZTV16PD_IMX258MIPIRAW */
/* Demangled: vtable for PD_IMX258MIPIRAW */
extern void* _ZTV16PD_IMX258MIPIRAW;

/* Symbol: _ZN16PD_S5K3L8MIPIRAWD2Ev */
/* Demangled: PD_S5K3L8MIPIRAW::~PD_S5K3L8MIPIRAW() */
int _ZN16PD_S5K3L8MIPIRAWD2Ev(void);

/* Symbol: _ZTVN8nlohmann6detail11parse_errorE */
/* Demangled: vtable for nlohmann::detail::parse_error */
extern void* _ZTVN8nlohmann6detail11parse_errorE;

/* Symbol: _ZN11NSCamCustom27custom_GetYuvFlashlightStepEv */
/* Demangled: NSCamCustom::custom_GetYuvFlashlightStep() */
int _ZN11NSCamCustom27custom_GetYuvFlashlightStepEv(void);

/* Symbol: _Z16DoCamCalLensIdOPPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalLensIdOP(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z16DoCamCalLensIdOPPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN16PD_IMX519MIPIRAWC1Ev */
/* Demangled: PD_IMX519MIPIRAW::PD_IMX519MIPIRAW() */
int _ZN16PD_IMX519MIPIRAWC1Ev(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAW11getInstanceEv */
/* Demangled: PD_S5K3L8MIPIRAW::getInstance() */
int _ZN16PD_S5K3L8MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE */
/* Demangled: PD_IMX230MIPIRAW::m_u4Reg_AdDaPair_PDWin_Fix_Sz */
extern void* _ZN16PD_IMX230MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE;

/* Symbol: _ZN16PD_S5K2P8MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5K2P8MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_S5K2P8MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _Z31get_LogicalDevice_CustomizeDatav */
/* Demangled: get_LogicalDevice_CustomizeData() */
int _Z31get_LogicalDevice_CustomizeDatav(void);

/* Symbol: _Z13resetCycleCtrj */
/* Demangled: resetCycleCtr(unsigned int) */
int _Z13resetCycleCtrj(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom13is_ZHDRTuningERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::is_ZHDRTuning(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom13is_ZHDRTuningERKNS_13RAWIspCamInfoE(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T */
/* Demangled: PD_IMX338MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
int _ZN16PD_IMX338MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void);

/* Symbol: _ZTV17PD_OV12A10MIPIRAW */
/* Demangled: vtable for PD_OV12A10MIPIRAW */
extern void* _ZTV17PD_OV12A10MIPIRAW;

/* Symbol: _Z38get_zsd_cap_stored_delay_toleration_msv */
/* Demangled: get_zsd_cap_stored_delay_toleration_ms() */
int _Z38get_zsd_cap_stored_delay_toleration_msv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE8EEiv */
/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)8>() */
int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE8EEiv(void);

/* Symbol: LomoFilterG2CDefault */
/* Demangled: LomoFilterG2CDefault */
extern void* LomoFilterG2CDefault;

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN21PD_S5KGW1SUNNYMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZN12CustomPQImpl29decidePQEnable_EIS12_VIDEO_4kEj */
/* Demangled: CustomPQImpl::decidePQEnable_EIS12_VIDEO_4k(unsigned int) */
int _ZN12CustomPQImpl29decidePQEnable_EIS12_VIDEO_4kEj(void);

/* Symbol: _Z10getAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)1>() */
int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z10getAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)16>() */
int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZTV16PD_S5K3M2MIPIRAW */
/* Demangled: vtable for PD_S5K3M2MIPIRAW */
extern void* _ZTV16PD_S5K3M2MIPIRAW;

/* Symbol: _ZN17PD_OV23850MIPIRAWD0Ev */
/* Demangled: PD_OV23850MIPIRAW::~PD_OV23850MIPIRAW() */
int _ZN17PD_OV23850MIPIRAWD0Ev(void);

/* Symbol: _Z13GetPDBuf_Typejj */
/* Demangled: GetPDBuf_Type(unsigned int, unsigned int) */
int _Z13GetPDBuf_Typejj(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAW8separateEiPhiiPtj */
/* Demangled: PD_S5K3L8MIPIRAW::separate(int, unsigned char*, int, int, unsigned short*, unsigned int) */
int _ZN16PD_S5K3L8MIPIRAW8separateEiPhiiPtj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void);

/* Symbol: _ZN12CustomPQImpl21decidePQEnable_NormalEj */
/* Demangled: CustomPQImpl::decidePQEnable_Normal(unsigned int) */
int _ZN12CustomPQImpl21decidePQEnable_NormalEj(void);

/* Symbol: _Z18DoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalPartNumber(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z18DoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)1>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)4>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z24DW9718SAF_getDefaultDataPvj */
/* Demangled: DW9718SAF_getDefaultData(void*, unsigned int) */
int _Z24DW9718SAF_getDefaultDataPvj(void);

/* Symbol: _Z19DoCamCal2AGainOP519PN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCal2AGainOP519(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z19DoCamCal2AGainOP519PN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN16PD_IMX499MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_IMX499MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_IMX499MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _Z18supportDramControlv */
/* Demangled: supportDramControl() */
int _Z18supportDramControlv(void);

/* Symbol: RatTBL9cm */
/* Demangled: RatTBL9cm */
extern void* RatTBL9cm;

/* Symbol: _ZN11NSYuvTuning27custom_GetYuvFlashlightStepEi */
/* Demangled: NSYuvTuning::custom_GetYuvFlashlightStep(int) */
int _ZN11NSYuvTuning27custom_GetYuvFlashlightStepEi(void);

/* Symbol: _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)16>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z28cust_initSpecialLongExpOnOffRKi */
/* Demangled: cust_initSpecialLongExpOnOff(int const&) */
int _Z28cust_initSpecialLongExpOnOffRKi(void);

/* Symbol: _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN8PDBufMgrD0Ev */
/* Demangled: PDBufMgr::~PDBufMgr() */
int _ZN8PDBufMgrD0Ev(void);

/* Symbol: _Z15is_vhdr_profileh */
/* Demangled: is_vhdr_profile(unsigned char) */
int _Z15is_vhdr_profileh(void);

/* Symbol: _Z27cust_getFlashProjectPara_V2iiP26NVRAM_CAMERA_STROBE_STRUCT */
/* Demangled: cust_getFlashProjectPara_V2(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
int _Z27cust_getFlashProjectPara_V2iiP26NVRAM_CAMERA_STROBE_STRUCT(void);

/* Symbol: pLC898217AF_getDefaultData */
/* Demangled: pLC898217AF_getDefaultData */
extern void* pLC898217AF_getDefaultData;

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE211getInstanceEv */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::getInstance() */
int _ZN22PD_IMX586MIPIRAW_TYPE211getInstanceEv(void);

/* Symbol: _ZN17PD_OV23850MIPIRAWC1Ev */
/* Demangled: PD_OV23850MIPIRAW::PD_OV23850MIPIRAW() */
int _ZN17PD_OV23850MIPIRAWC1Ev(void);

/* Symbol: _Z23FP5516AF_getDefaultDataPvj */
/* Demangled: FP5516AF_getDefaultData(void*, unsigned int) */
int _Z23FP5516AF_getDefaultDataPvj(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW16m_u2Reg_AdDaPairE */
/* Demangled: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair */
extern void* _ZN16PD_IMX338MIPIRAW16m_u2Reg_AdDaPairE;

/* Symbol: _ZTV20NvramQueryHelperImpl */
/* Demangled: vtable for NvramQueryHelperImpl */
extern void* _ZTV20NvramQueryHelperImpl;

/* Symbol: _Z23getMVHDR3ExpoFLKBufSizev */
/* Demangled: getMVHDR3ExpoFLKBufSize() */
int _Z23getMVHDR3ExpoFLKBufSizev(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)4>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z23DW9714AF_getDefaultDataPvj */
/* Demangled: DW9714AF_getDefaultData(void*, unsigned int) */
int _Z23DW9714AF_getDefaultDataPvj(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj9077ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<9077u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9077ELj0EEE;

/* Symbol: _ZN16PD_IMX519MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t */
/* Demangled: PD_IMX519MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
int _ZN16PD_IMX519MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void);

/* Symbol: _Z9Job3AName8E_Job_3A */
/* Demangled: Job3AName(E_Job_3A) */
int _Z9Job3AName8E_Job_3A(void);

/* Symbol: _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE8EEPKiv */
/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)8>() */
int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE8EEPKiv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom11RGB2WMatrixEPKjRK10AWB_GAIN_TRNS_15ISP_NVRAM_CCM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::RGB2WMatrix(unsigned int const*, AWB_GAIN_T const&, NSIspTuning::ISP_NVRAM_CCM_T&) */
int _ZN11NSIspTuning15IspTuningCustom11RGB2WMatrixEPKjRK10AWB_GAIN_TRNS_15ISP_NVRAM_CCM_TE(void);

/* Symbol: _ZTV8PDBufMgr */
/* Demangled: vtable for PDBufMgr */
extern void* _ZTV8PDBufMgr;

/* Symbol: _ZN16PD_IMX362MIPIRAWD2Ev */
/* Demangled: PD_IMX362MIPIRAW::~PD_IMX362MIPIRAW() */
int _ZN16PD_IMX362MIPIRAWD2Ev(void);

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAWD1Ev */
/* Demangled: PD_S5K3P8SXMIPIRAW::~PD_S5K3P8SXMIPIRAW() */
int _ZN18PD_S5K3P8SXMIPIRAWD1Ev(void);

/* Symbol: _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE2EEiv */
/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)2>() */
int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE2EEiv(void);

/* Symbol: _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)8>() */
int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: customer_color_cb */
/* Demangled: customer_color_cb */
extern void* customer_color_cb;

/* Symbol: _ZN5NSCam16CamCalCustomImplC2EPNS_13ICamCalHelperE */
/* Demangled: NSCam::CamCalCustomImpl::CamCalCustomImpl(NSCam::ICamCalHelper*) */
int _ZN5NSCam16CamCalCustomImplC2EPNS_13ICamCalHelperE(void);

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE218ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN22PD_IMX586MIPIRAW_TYPE218ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZN12PDBufMgrOpen14createInstanceER12SPDProfile_t */
/* Demangled: PDBufMgrOpen::createInstance(SPDProfile_t&) */
int _ZN12PDBufMgrOpen14createInstanceER12SPDProfile_t(void);

/* Symbol: _Z18getResetFrameCountj */
/* Demangled: getResetFrameCount(unsigned int) */
int _Z18getResetFrameCountj(void);

/* Symbol: _ZN11NSYuvTuning26custom_GetYuvAfLampSupportEi */
/* Demangled: NSYuvTuning::custom_GetYuvAfLampSupport(int) */
int _ZN11NSYuvTuning26custom_GetYuvAfLampSupportEi(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom14createInstanceENS_12ESensorDev_TEj */
/* Demangled: NSIspTuning::IspTuningCustom::createInstance(NSIspTuning::ESensorDev_T, unsigned int) */
int _ZN11NSIspTuning15IspTuningCustom14createInstanceENS_12ESensorDev_TEj(void);

/* Symbol: _Z23cust_getFlashITab2_mainPs */
/* Demangled: cust_getFlashITab2_main(short*) */
int _Z23cust_getFlashITab2_mainPs(void);

/* Symbol: _Z17cust_isNeedAFLampiii */
/* Demangled: cust_isNeedAFLamp(int, int, int) */
int _Z17cust_isNeedAFLampiii(void);

/* Symbol: _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TP11strAEOutputj */
/* Demangled: ModifyCaptureParamByCustom(unsigned int, AE_MODE_CFG_T*, strAEOutput*, unsigned int) */
int _Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TP11strAEOutputj(void);

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAWD2Ev */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::~PD_S5KGW1OFILMMIPIRAW() */
int _ZN21PD_S5KGW1OFILMMIPIRAWD2Ev(void);

/* Symbol: _ZN17PD_OV13870MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_OV13870MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN17PD_OV13870MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_IMX230MIPIRAWD0Ev */
/* Demangled: PD_IMX230MIPIRAW::~PD_IMX230MIPIRAW() */
int _ZN16PD_IMX230MIPIRAWD0Ev(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj20533ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<20533u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj20533ELj0EEE;

/* Symbol: _Z32get_zsd_cap_stored_delay_time_msv */
/* Demangled: get_zsd_cap_stored_delay_time_ms() */
int _Z32get_zsd_cap_stored_delay_time_msv(void);

/* Symbol: _Z25get_Dualzoom_Switch_ratioiiRiS_ */
/* Demangled: get_Dualzoom_Switch_ratio(int, int, int&, int&) */
int _Z25get_Dualzoom_Switch_ratioiiRiS_(void);

/* Symbol: _ZN16PD_S5K2P8MIPIRAWD2Ev */
/* Demangled: PD_S5K2P8MIPIRAW::~PD_S5K2P8MIPIRAW() */
int _ZN16PD_S5K2P8MIPIRAWD2Ev(void);

/* Symbol: _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE4EEiPPK10AF_PARAM_T */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)4>(AF_PARAM_T const**) */
int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE4EEiPPK10AF_PARAM_T(void);

/* Symbol: _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EEE */
/* Demangled: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EEE;

/* Symbol: _Z18cust_getEvCompParaRiS_RPfS1_S1_ */
/* Demangled: cust_getEvCompPara(int&, int&, float*&, float*&, float*&) */
int _Z18cust_getEvCompParaRiS_RPfS1_S1_(void);

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAWC2Ev */
/* Demangled: PD_S5K3P8SXMIPIRAW::PD_S5K3P8SXMIPIRAW() */
int _ZN18PD_S5K3P8SXMIPIRAWC2Ev(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAWD0Ev */
/* Demangled: PD_S5K3L8MIPIRAW::~PD_S5K3L8MIPIRAW() */
int _ZN16PD_S5K3L8MIPIRAWD0Ev(void);

/* Symbol: _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE16EEiPPK10AF_PARAM_T */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)16>(AF_PARAM_T const**) */
int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE16EEiPPK10AF_PARAM_T(void);

/* Symbol: _Z24getWorkPerCycle_Main2_M1v */
/* Demangled: getWorkPerCycle_Main2_M1() */
int _Z24getWorkPerCycle_Main2_M1v(void);

/* Symbol: _ZN11NSCamCustom27custom_GetFlashlightGain10XEv */
/* Demangled: NSCamCustom::custom_GetFlashlightGain10X() */
int _ZN11NSCamCustom27custom_GetFlashlightGain10XEv(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj12609ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<12609u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj12609ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX386MIPIRAW11ExtractPDCLEv */
/* Demangled: PD_IMX386MIPIRAW::ExtractPDCL() */
int _ZN16PD_IMX386MIPIRAW11ExtractPDCLEv(void);

/* Symbol: _ZN16PD_S5K2P7MIPIRAW11getInstanceEv */
/* Demangled: PD_S5K2P7MIPIRAW::getInstance() */
int _ZN16PD_S5K2P7MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T */
/* Demangled: PD_IMX230MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
int _ZN16PD_IMX230MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void);

/* Symbol: _ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__split_buffer<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE(void);

/* Symbol: _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE2EEiPPK10AF_PARAM_TE9g_AFparam */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)2>(AF_PARAM_T const**)::g_AFparam */
extern void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE2EEiPPK10AF_PARAM_TE9g_AFparam;

/* Symbol: _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)1>() */
int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE(void);

/* Symbol: _ZN16PD_IMX499MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX499MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX499MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_IMX486MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_IMX486MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_IMX486MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _Z28get_stereo_cam_cpu_frequency23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIORNSt3__16vectorIiNS1_9allocatorIiEEEES6_ */
/* Demangled: get_stereo_cam_cpu_frequency(ENUM_STEREO_CAM_FEATURE, ENUM_STEREO_CAM_SCENARIO, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _Z28get_stereo_cam_cpu_frequency23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIORNSt3__16vectorIiNS1_9allocatorIiEEEES6_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJNS_4pairIyS4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long, unsigned int (*)(int, int, void*)> >(unsigned long long const&, std::__1::pair<unsigned long long, unsigned int (*)(int, int, void*)>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJNS_4pairIyS4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_(void);

/* Symbol: _Z31cust_getFlashMaxIDuty_sub_part2iiPiS_ */
/* Demangled: cust_getFlashMaxIDuty_sub_part2(int, int, int*, int*) */
int _Z31cust_getFlashMaxIDuty_sub_part2iiPiS_(void);

/* Symbol: _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)6>() */
int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj9480ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<9480u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9480ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX338MIPIRAW11sendCommandEjPvS0_S0_S0_ */
/* Demangled: PD_IMX338MIPIRAW::sendCommand(unsigned int, void*, void*, void*, void*) */
int _ZN16PD_IMX338MIPIRAW11sendCommandEjPvS0_S0_S0_(void);

/* Symbol: _ZTV16PD_S5K2L7MIPIRAW */
/* Demangled: vtable for PD_S5K2L7MIPIRAW */
extern void* _ZTV16PD_S5K2L7MIPIRAW;

/* Symbol: _ZN16PD_IMX230MIPIRAWC1Ev */
/* Demangled: PD_IMX230MIPIRAW::PD_IMX230MIPIRAW() */
int _ZN16PD_IMX230MIPIRAWC1Ev(void);

/* Symbol: _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE1EERK11AWB_PARAM_Tv */
/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)1>() */
int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE1EERK11AWB_PARAM_Tv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void);

/* Symbol: CustomHdrTopFBoundGet */
/* Demangled: CustomHdrTopFBoundGet */
int CustomHdrTopFBoundGet(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)4>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z22get_3dnr_gmv_thresholdi */
/* Demangled: get_3dnr_gmv_threshold(int) */
int _Z22get_3dnr_gmv_thresholdi(void);

/* Symbol: _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE0EEiiiiPPK14CustAF_THRES_T */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)0>(int, int, int, CustAF_THRES_T const**) */
int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE0EEiiiiPPK14CustAF_THRES_T(void);

/* Symbol: _Z49CUST_FRAME_COUNT_BYPASS_EXECUTE_FLASH_AFTER_STARTv */
/* Demangled: CUST_FRAME_COUNT_BYPASS_EXECUTE_FLASH_AFTER_START() */
int _Z49CUST_FRAME_COUNT_BYPASS_EXECUTE_FLASH_AFTER_STARTv(void);

/* Symbol: _Z20get3AThreadNiceValuej */
/* Demangled: get3AThreadNiceValue(unsigned int) */
int _Z20get3AThreadNiceValuej(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom21remap_ISP_ISO_with_LVERK29ISP_NVRAM_ISO_INTERVAL_STRUCTjji */
/* Demangled: NSIspTuning::IspTuningCustom::remap_ISP_ISO_with_LV(ISP_NVRAM_ISO_INTERVAL_STRUCT const&, unsigned int, unsigned int, int) */
int _ZN11NSIspTuning15IspTuningCustom21remap_ISP_ISO_with_LVERK29ISP_NVRAM_ISO_INTERVAL_STRUCTjji(void);

/* Symbol: _Z33cust_fillDefaultStrobeNVRam_main3Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_main3(void*) */
int _Z33cust_fillDefaultStrobeNVRam_main3Pv(void);

/* Symbol: _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z19DoCamCalLayoutCheckPN5NSCam13ICamCalHelperEPj */
/* Demangled: DoCamCalLayoutCheck(NSCam::ICamCalHelper*, unsigned int*) */
int _Z19DoCamCalLayoutCheckPN5NSCam13ICamCalHelperEPj(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAWC1Ev */
/* Demangled: PD_S5K3L8MIPIRAW::PD_S5K3L8MIPIRAW() */
int _ZN16PD_S5K3L8MIPIRAWC1Ev(void);

/* Symbol: _ZN20NvramQueryHelperImpl16queryIspModuleIDE14NvramFeatureIDRh */
/* Demangled: NvramQueryHelperImpl::queryIspModuleID(NvramFeatureID, unsigned char&) */
int _ZN20NvramQueryHelperImpl16queryIspModuleIDE14NvramFeatureIDRh(void);

/* Symbol: _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE8EERK11AWB_PARAM_Tv */
/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)8>() */
int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE8EERK11AWB_PARAM_Tv(void);

/* Symbol: _Z36cust_getFlashHalTorchDuty_main_part2PiS_ */
/* Demangled: cust_getFlashHalTorchDuty_main_part2(int*, int*) */
int _Z36cust_getFlashHalTorchDuty_main_part2PiS_(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAWD2Ev */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::~PD_S5KGW1SUNNYMIPIRAW() */
int _ZN21PD_S5KGW1SUNNYMIPIRAWD2Ev(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _Z25decodeMVHDR3ExpoStatisticiPvS_S_S_Rj */
/* Demangled: decodeMVHDR3ExpoStatistic(int, void*, void*, void*, void*, unsigned int&) */
int _Z25decodeMVHDR3ExpoStatisticiPvS_S_S_Rj(void);

/* Symbol: DEFAULT_STEREO_SETTING */
/* Demangled: DEFAULT_STEREO_SETTING */
extern void* DEFAULT_STEREO_SETTING;

/* Symbol: _ZN12CustomPQImpl26decidePQEnable_EIS35_VIDEOEj */
/* Demangled: CustomPQImpl::decidePQEnable_EIS35_VIDEO(unsigned int) */
int _ZN12CustomPQImpl26decidePQEnable_EIS35_VIDEOEj(void);

/* Symbol: _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)16>() */
int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)0>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom13refine_MIXER3ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_18ISP_NVRAM_MIXER3_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_MIXER3(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_MIXER3_T&) */
int _ZN11NSIspTuning15IspTuningCustom13refine_MIXER3ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_18ISP_NVRAM_MIXER3_TE(void);

/* Symbol: _Z21GetSensorInitFuncListPP32MSDK_SENSOR_INIT_FUNCTION_STRUCT */
/* Demangled: GetSensorInitFuncList(MSDK_SENSOR_INIT_FUNCTION_STRUCT**) */
int _Z21GetSensorInitFuncListPP32MSDK_SENSOR_INIT_FUNCTION_STRUCT(void);

/* Symbol: _Z14getVendorIndexi */
/* Demangled: getVendorIndex(int) */
int _Z14getVendorIndexi(void);

/* Symbol: _ZN16PD_S5K2L7MIPIRAWD2Ev */
/* Demangled: PD_S5K2L7MIPIRAW::~PD_S5K2L7MIPIRAW() */
int _ZN16PD_S5K2L7MIPIRAWD2Ev(void);

/* Symbol: DEFAULT_VIRTUAL_DEVICE_IDS_MAP */
/* Demangled: DEFAULT_VIRTUAL_DEVICE_IDS_MAP */
extern void* DEFAULT_VIRTUAL_DEVICE_IDS_MAP;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6rehashEj(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj12610ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<12610u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj12610ELj0EEE;

/* Symbol: _ZN16PD_IMX386MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T */
/* Demangled: PD_IMX386MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
int _ZN16PD_IMX386MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void);

/* Symbol: _ZN16PD_IMX362MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_IMX362MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_IMX362MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZTIN8nlohmann6detail9exceptionE */
/* Demangled: typeinfo for nlohmann::detail::exception */
extern void* _ZTIN8nlohmann6detail9exceptionE;

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _Z40get_normal_SWNR_ENC_enable_ISO_thresholdv */
/* Demangled: get_normal_SWNR_ENC_enable_ISO_threshold() */
int _Z40get_normal_SWNR_ENC_enable_ISO_thresholdv(void);

/* Symbol: _Z21msdkGetFlickerParaAlljjiPPP17FLICKER_CUST_PARAi */
/* Demangled: msdkGetFlickerParaAll(unsigned int, unsigned int, int, FLICKER_CUST_PARA***, int) */
int _Z21msdkGetFlickerParaAlljjiPPP17FLICKER_CUST_PARAi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _Z23XiaoMiDoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: XiaoMiDoCamCalSingleLsc(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z23XiaoMiDoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZTV18PD_S5K3P8SXMIPIRAW */
/* Demangled: vtable for PD_S5K3P8SXMIPIRAW */
extern void* _ZTV18PD_S5K3P8SXMIPIRAW;

/* Symbol: _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE2EEiv */
/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)2>() */
int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE2EEiv(void);

/* Symbol: customer_color_cr */
/* Demangled: customer_color_cr */
extern void* customer_color_cr;

/* Symbol: _Z28cust_getFlashITab1_sub_part2Ps */
/* Demangled: cust_getFlashITab1_sub_part2(short*) */
int _Z28cust_getFlashITab1_sub_part2Ps(void);

/* Symbol: _Z37get_MFB_SWNR_ENC_enable_ISO_thresholdv */
/* Demangled: get_MFB_SWNR_ENC_enable_ISO_threshold() */
int _Z37get_MFB_SWNR_ENC_enable_ISO_thresholdv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE6rehashEj(void);

/* Symbol: evL */
/* Demangled: evL */
extern void* evL;

/* Symbol: pAK7371AF_getDefaultData */
/* Demangled: pAK7371AF_getDefaultData */
extern void* pAK7371AF_getDefaultData;

/* Symbol: _ZTV22PD_IMX586MIPIRAW_TYPE2 */
/* Demangled: vtable for PD_IMX586MIPIRAW_TYPE2 */
extern void* _ZTV22PD_IMX586MIPIRAW_TYPE2;

/* Symbol: _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE30__emplace_hint_unique_key_argsIS1_JRKS1_EEENS_15__tree_iteratorIS1_PNS_11__tree_nodeIS1_PvEEiEENS_21__tree_const_iteratorIS1_SE_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<DCMF_CAMERA_OUTPUTS, std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*, int> std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__emplace_hint_unique_key_args<DCMF_CAMERA_OUTPUTS, DCMF_CAMERA_OUTPUTS const&>(std::__1::__tree_const_iterator<DCMF_CAMERA_OUTPUTS, std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*, int>, DCMF_CAMERA_OUTPUTS const&, DCMF_CAMERA_OUTPUTS const&) */
int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE30__emplace_hint_unique_key_argsIS1_JRKS1_EEENS_15__tree_iteratorIS1_PNS_11__tree_nodeIS1_PvEEiEENS_21__tree_const_iteratorIS1_SE_iEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev */
/* Demangled: std::__1::shared_ptr<nlohmann::detail::input_adapter_protocol>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev(void);

/* Symbol: _Z44cust_getFlashQuick2CalibrationExp_main_part2PiS_S_ */
/* Demangled: cust_getFlashQuick2CalibrationExp_main_part2(int*, int*, int*) */
int _Z44cust_getFlashQuick2CalibrationExp_main_part2PiS_S_(void);

/* Symbol: _ZN16PD_IMX362MIPIRAW15GetLRBufferInfoEiR12SPDOHWINFO_t */
/* Demangled: PD_IMX362MIPIRAW::GetLRBufferInfo(int, SPDOHWINFO_t&) */
int _ZN16PD_IMX362MIPIRAW15GetLRBufferInfoEiR12SPDOHWINFO_t(void);

/* Symbol: _ZN16PD_IMX362MIPIRAWD0Ev */
/* Demangled: PD_IMX362MIPIRAW::~PD_IMX362MIPIRAW() */
int _ZN16PD_IMX362MIPIRAWD0Ev(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)0>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::find<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_(void);

/* Symbol: _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EE11getInstanceEjE9singleton */
/* Demangled: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)4>::getInstance(unsigned int)::singleton */
extern void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EE11getInstanceEjE9singleton;

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZTV12CustomPQBase */
/* Demangled: vtable for CustomPQBase */
extern void* _ZTV12CustomPQBase;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)6>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z37cust_fillDefaultStrobeNVRam_sub_part2Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_sub_part2(void*) */
int _Z37cust_fillDefaultStrobeNVRam_sub_part2Pv(void);

/* Symbol: _ZN8PDBufMgr15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti */
/* Demangled: PDBufMgr::GetDualPDVCInfo(int, SDUALPDVCINFO_t&, int) */
int _ZN8PDBufMgr15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE */
/* Demangled: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_Cmd */
extern void* _ZN16PD_IMX338MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE;

/* Symbol: _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)4>() */
int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z35cust_getFlashHalTorchDuty_sub_part2PiS_ */
/* Demangled: cust_getFlashHalTorchDuty_sub_part2(int*, int*) */
int _Z35cust_getFlashHalTorchDuty_sub_part2PiS_(void);

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAWD0Ev */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::~PD_S5KGW1OFILMMIPIRAW() */
int _ZN21PD_S5KGW1OFILMMIPIRAWD0Ev(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)3>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj2418ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<2418u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj2418ELj0EEE;

/* Symbol: _Z11Scenario4AFRK13ScenarioParam */
/* Demangled: Scenario4AF(ScenarioParam const&) */
int _Z11Scenario4AFRK13ScenarioParam(void);

/* Symbol: pLC898212XDAF_BAYER_getDefaultData */
/* Demangled: pLC898212XDAF_BAYER_getDefaultData */
extern void* pLC898212XDAF_BAYER_getDefaultData;

/* Symbol: _ZN16PD_S5K2P8MIPIRAWD0Ev */
/* Demangled: PD_S5K2P8MIPIRAW::~PD_S5K2P8MIPIRAW() */
int _ZN16PD_S5K2P8MIPIRAWD0Ev(void);

/* Symbol: _ZN16PD_IMX362MIPIRAWC1Ev */
/* Demangled: PD_IMX362MIPIRAW::PD_IMX362MIPIRAW() */
int _ZN16PD_IMX362MIPIRAWC1Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _Z22GetCameraTsfDefaultTbljjP21CAMERA_TSF_TBL_STRUCT */
/* Demangled: GetCameraTsfDefaultTbl(unsigned int, unsigned int, CAMERA_TSF_TBL_STRUCT*) */
int _Z22GetCameraTsfDefaultTbljjP21CAMERA_TSF_TBL_STRUCT(void);

/* Symbol: _ZTV17PD_OV16880MIPIRAW */
/* Demangled: vtable for PD_OV16880MIPIRAW */
extern void* _ZTV17PD_OV16880MIPIRAW;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _Z17AIS_Profile2Stagej */
/* Demangled: AIS_Profile2Stage(unsigned int) */
int _Z17AIS_Profile2Stagej(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj9482ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<9482u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9482ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN17PD_OV12A10MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_OV12A10MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN17PD_OV12A10MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_IMX398MIPIRAWD1Ev */
/* Demangled: PD_IMX398MIPIRAW::~PD_IMX398MIPIRAW() */
int _ZN16PD_IMX398MIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_IMX486MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX486MIPIRAW::getInstance() */
int _ZN16PD_IMX486MIPIRAW11getInstanceEv(void);

/* Symbol: _Z20get_FB_CustomizeDataP24FB_Customize_PARA_STRUCT */
/* Demangled: get_FB_CustomizeData(FB_Customize_PARA_STRUCT*) */
int _Z20get_FB_CustomizeDataP24FB_Customize_PARA_STRUCT(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom22evaluate_Shading_RatioERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::evaluate_Shading_Ratio(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom22evaluate_Shading_RatioERKNS_13RAWIspCamInfoE(void);

/* Symbol: _Z29cust_getFlashITab2_main_part2Ps */
/* Demangled: cust_getFlashITab2_main_part2(short*) */
int _Z29cust_getFlashITab2_main_part2Ps(void);

/* Symbol: _ZN16PD_IMX258MIPIRAWD1Ev */
/* Demangled: PD_IMX258MIPIRAW::~PD_IMX258MIPIRAW() */
int _ZN16PD_IMX258MIPIRAWD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE(void);

/* Symbol: _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAWC1Ev */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::PD_S5KGW1OFILMMIPIRAW() */
int _ZN21PD_S5KGW1OFILMMIPIRAWC1Ev(void);

/* Symbol: _Z21get_hrd_CustomizeDataP18HRD_Customize_PARA */
/* Demangled: get_hrd_CustomizeData(HRD_Customize_PARA*) */
int _Z21get_hrd_CustomizeDataP18HRD_Customize_PARA(void);

/* Symbol: _Z42cust_fillDefaultFlashCalibrationNVRam_mainPv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main(void*) */
int _Z42cust_fillDefaultFlashCalibrationNVRam_mainPv(void);

/* Symbol: evX */
/* Demangled: evX */
extern void* evX;

/* Symbol: _ZN5NSCam16CamCalCustomImplC1EPNS_13ICamCalHelperE */
/* Demangled: NSCam::CamCalCustomImpl::CamCalCustomImpl(NSCam::ICamCalHelper*) */
int _ZN5NSCam16CamCalCustomImplC1EPNS_13ICamCalHelperE(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj12608ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<12608u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj12608ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN17PD_OV13855MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_OV13855MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN17PD_OV13855MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj(void);

/* Symbol: _Z15GetDeltaEVIndexj */
/* Demangled: GetDeltaEVIndex(unsigned int) */
int _Z15GetDeltaEVIndexj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_(void);

/* Symbol: evY */
/* Demangled: evY */
extern void* evY;

/* Symbol: _ZTV16PD_IMX398MIPIRAW */
/* Demangled: vtable for PD_IMX398MIPIRAW */
extern void* _ZTV16PD_IMX398MIPIRAW;

/* Symbol: _ZN16PD_IMX519MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX519MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX519MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_S5K2P8MIPIRAWC1Ev */
/* Demangled: PD_S5K2P8MIPIRAW::PD_S5K2P8MIPIRAW() */
int _ZN16PD_S5K2P8MIPIRAWC1Ev(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW10GetPDCalSzEv */
/* Demangled: PD_IMX338MIPIRAW::GetPDCalSz() */
int _ZN16PD_IMX338MIPIRAW10GetPDCalSzEv(void);

/* Symbol: _ZN16PD_S5K2P8MIPIRAW11getInstanceEv */
/* Demangled: PD_S5K2P8MIPIRAW::getInstance() */
int _ZN16PD_S5K2P8MIPIRAW11getInstanceEv(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)0>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN16PD_IMX398MIPIRAWC2Ev */
/* Demangled: PD_IMX398MIPIRAW::PD_IMX398MIPIRAW() */
int _ZN16PD_IMX398MIPIRAWC2Ev(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW11ExtractPDCLEv */
/* Demangled: PD_IMX519MIPIRAW::ExtractPDCL() */
int _ZN16PD_IMX519MIPIRAW11ExtractPDCLEv(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAWD0Ev */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::~PD_S5KGW1SUNNYMIPIRAW() */
int _ZN21PD_S5KGW1SUNNYMIPIRAWD0Ev(void);

/* Symbol: _ZN16PD_S5K3M3MIPIRAWD1Ev */
/* Demangled: PD_S5K3M3MIPIRAW::~PD_S5K3M3MIPIRAW() */
int _ZN16PD_S5K3M3MIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_S5K2P7MIPIRAWD1Ev */
/* Demangled: PD_S5K2P7MIPIRAW::~PD_S5K2P7MIPIRAW() */
int _ZN16PD_S5K2P7MIPIRAWD1Ev(void);

/* Symbol: _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)4>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z21getWorkPerCycle_Main2i */
/* Demangled: getWorkPerCycle_Main2(int) */
int _Z21getWorkPerCycle_Main2i(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj9480ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<9480u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9480ELj0EEE;

/* Symbol: _ZN16PD_S5K2L7MIPIRAWD0Ev */
/* Demangled: PD_S5K2L7MIPIRAW::~PD_S5K2L7MIPIRAW() */
int _ZN16PD_S5K2L7MIPIRAWD0Ev(void);

/* Symbol: _ZN16PD_IMX258MIPIRAWC2Ev */
/* Demangled: PD_IMX258MIPIRAW::PD_IMX258MIPIRAW() */
int _ZN16PD_IMX258MIPIRAWC2Ev(void);

/* Symbol: _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj34906ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<34906u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj34906ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_RPGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RPG_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_RPG(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_RPG_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_RPGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RPG_TE(void);

/* Symbol: _Z18msdkGetFlickerParajjiPvi */
/* Demangled: msdkGetFlickerPara(unsigned int, unsigned int, int, void*, int) */
int _Z18msdkGetFlickerParajjiPvi(void);

/* Symbol: _Z21cust_getFlashMaxIDutyiiiPiS_ */
/* Demangled: cust_getFlashMaxIDuty(int, int, int, int*, int*) */
int _Z21cust_getFlashMaxIDutyiiiPiS_(void);

/* Symbol: _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: DEFAULT_STEREO_TUNING */
/* Demangled: DEFAULT_STEREO_TUNING */
extern void* DEFAULT_STEREO_TUNING;

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN21PD_S5KGW1OFILMMIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _Z21get_VFB_CustomizeDataP25VFB_Customize_PARA_STRUCT */
/* Demangled: get_VFB_CustomizeData(VFB_Customize_PARA_STRUCT*) */
int _Z21get_VFB_CustomizeDataP25VFB_Customize_PARA_STRUCT(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)2>() */
int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z33LC898212XDAF_BAYER_getDefaultDataPvj */
/* Demangled: LC898212XDAF_BAYER_getDefaultData(void*, unsigned int) */
int _Z33LC898212XDAF_BAYER_getDefaultDataPvj(void);

/* Symbol: _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAWC1Ev */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::PD_S5KGW1SUNNYMIPIRAW() */
int _ZN21PD_S5KGW1SUNNYMIPIRAWC1Ev(void);

/* Symbol: _ZN16PD_S5K3M3MIPIRAWC2Ev */
/* Demangled: PD_S5K3M3MIPIRAW::PD_S5K3M3MIPIRAW() */
int _ZN16PD_S5K3M3MIPIRAWC2Ev(void);

/* Symbol: _ZN16PD_S5K2P7MIPIRAWC2Ev */
/* Demangled: PD_S5K2P7MIPIRAW::PD_S5K2P7MIPIRAW() */
int _ZN16PD_S5K2P7MIPIRAWC2Ev(void);

/* Symbol: _Z24getWorkPerCycle_Main2_M2v */
/* Demangled: getWorkPerCycle_Main2_M2() */
int _Z24getWorkPerCycle_Main2_M2v(void);

/* Symbol: _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EE11getInstanceEjE9singleton */
/* Demangled: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)16>::getInstance(unsigned int)::singleton */
extern void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EE11getInstanceEjE9singleton;

/* Symbol: _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EE11getInstanceEjE9singleton */
/* Demangled: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)1>::getInstance(unsigned int)::singleton */
extern void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EE11getInstanceEjE9singleton;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_HFGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_HFG_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_HFG(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_HFG_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_HFGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_HFG_TE(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE */
/* Demangled: PD_IMX338MIPIRAW::m_u4Reg_AdDaPair_PDWin_Flexible_Sz */
extern void* _ZN16PD_IMX338MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE;

/* Symbol: _ZN16PD_S5K2L7MIPIRAWC1Ev */
/* Demangled: PD_S5K2L7MIPIRAW::PD_S5K2L7MIPIRAW() */
int _ZN16PD_S5K2L7MIPIRAWC1Ev(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAW7seprateEjPhiiPtj */
/* Demangled: PD_S5K2X8MIPIRAW::seprate(unsigned int, unsigned char*, int, int, unsigned short*, unsigned int) */
int _ZN16PD_S5K2X8MIPIRAW7seprateEjPhiiPtj(void);

/* Symbol: _Z22cust_getFlashITab1_subPs */
/* Demangled: cust_getFlashITab1_sub(short*) */
int _Z22cust_getFlashITab1_subPs(void);

/* Symbol: _ZN16PD_S5K3M2MIPIRAWD2Ev */
/* Demangled: PD_S5K3M2MIPIRAW::~PD_S5K3M2MIPIRAW() */
int _ZN16PD_S5K3M2MIPIRAWD2Ev(void);

/* Symbol: _Z15smoothRatioRMGtRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S */
/* Demangled: smoothRatioRMGt(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
int _Z15smoothRatioRMGtRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void);

/* Symbol: _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE8EEiv */
/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)8>() */
int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE8EEiv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_CCRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCR_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_CCR(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_CCR_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_CCRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCR_TE(void);

/* Symbol: _Z17CAM_CALGetCalDataPj */
/* Demangled: CAM_CALGetCalData(unsigned int*) */
int _Z17CAM_CALGetCalDataPj(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE */
/* Demangled: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair_PDWin_Fix */
extern void* _ZN16PD_IMX230MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void);

/* Symbol: _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSB_SB_ */
/* Demangled: std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSB_SB_(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)2>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN17PD_OV13855MIPIRAWD2Ev */
/* Demangled: PD_OV13855MIPIRAW::~PD_OV13855MIPIRAW() */
int _ZN17PD_OV13855MIPIRAWD2Ev(void);

/* Symbol: _Z30get_3dnr_hw_power_reopen_delayv */
/* Demangled: get_3dnr_hw_power_reopen_delay() */
int _Z30get_3dnr_hw_power_reopen_delayv(void);

/* Symbol: _ZTIN8nlohmann6detail12out_of_rangeE */
/* Demangled: typeinfo for nlohmann::detail::out_of_range */
extern void* _ZTIN8nlohmann6detail12out_of_rangeE;

/* Symbol: gulPartNumberReg */
/* Demangled: gulPartNumberReg */
extern void* gulPartNumberReg;

/* Symbol: _Z23CUST_LOCK_AE_DURING_CAFv */
/* Demangled: CUST_LOCK_AE_DURING_CAF() */
int _Z23CUST_LOCK_AE_DURING_CAFv(void);

/* Symbol: _Z26queryFramesPerCycle_customi */
/* Demangled: queryFramesPerCycle_custom(int) */
int _Z26queryFramesPerCycle_customi(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom18evaluate_CCM_indexERKNS_13RAWIspCamInfoENS_10EIndex_CCME */
/* Demangled: NSIspTuning::IspTuningCustom::evaluate_CCM_index(NSIspTuning::RAWIspCamInfo const&, NSIspTuning::EIndex_CCM) */
int _ZN11NSIspTuning15IspTuningCustom18evaluate_CCM_indexERKNS_13RAWIspCamInfoENS_10EIndex_CCME(void);

/* Symbol: _ZN11NSCamCustom31custom_GetYuvFlashlightFrameCntEv */
/* Demangled: NSCamCustom::custom_GetYuvFlashlightFrameCnt() */
int _ZN11NSCamCustom31custom_GetYuvFlashlightFrameCntEv(void);

/* Symbol: _ZN16PD_IMX362MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX362MIPIRAW::getInstance() */
int _ZN16PD_IMX362MIPIRAW11getInstanceEv(void);

/* Symbol: _Z19supportMain2FullRawv */
/* Demangled: supportMain2FullRaw() */
int _Z19supportMain2FullRawv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<LogicalSensorStruct>&) */
int _ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z20XiaoMiDoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: XiaoMiDoCamCal2AGain(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z20XiaoMiDoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN12PDBufMgrOpenD2Ev */
/* Demangled: PDBufMgrOpen::~PDBufMgrOpen() */
int _ZN12PDBufMgrOpenD2Ev(void);

/* Symbol: _ZTIN8nlohmann6detail11parse_errorE */
/* Demangled: typeinfo for nlohmann::detail::parse_error */
extern void* _ZTIN8nlohmann6detail11parse_errorE;

/* Symbol: _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: CustomHdrTargetLevelSubGet */
/* Demangled: CustomHdrTargetLevelSubGet */
int CustomHdrTargetLevelSubGet(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void);

/* Symbol: _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev */
/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: pDW9714AF_getDefaultData */
/* Demangled: pDW9714AF_getDefaultData */
extern void* pDW9714AF_getDefaultData;

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj9481ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<9481u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9481ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX338MIPIRAW11ExtractPDCLEv */
/* Demangled: PD_IMX338MIPIRAW::ExtractPDCL() */
int _ZN16PD_IMX338MIPIRAW11ExtractPDCLEv(void);

/* Symbol: _ZN16PD_IMX338MIPIRAWD2Ev */
/* Demangled: PD_IMX338MIPIRAW::~PD_IMX338MIPIRAW() */
int _ZN16PD_IMX338MIPIRAWD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW16m_u2Reg_AdDaPairE */
/* Demangled: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair */
extern void* _ZN16PD_IMX519MIPIRAW16m_u2Reg_AdDaPairE;

/* Symbol: _ZN16PD_IMX519MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE */
/* Demangled: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_All */
extern void* _ZN16PD_IMX519MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE;

/* Symbol: _ZN16PD_S5K3M3MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K3M3MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_S5K3M3MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZN9FSCCustom12isSupportFSCEv */
/* Demangled: FSCCustom::isSupportFSC() */
int _ZN9FSCCustom12isSupportFSCEv(void);

/* Symbol: _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)1>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZTV16PD_IMX486MIPIRAW */
/* Demangled: vtable for PD_IMX486MIPIRAW */
extern void* _ZTV16PD_IMX486MIPIRAW;

/* Symbol: _Z22get_stereo_cam_cpu_num23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIO */
/* Demangled: get_stereo_cam_cpu_num(ENUM_STEREO_CAM_FEATURE, ENUM_STEREO_CAM_SCENARIO) */
int _Z22get_stereo_cam_cpu_num23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIO(void);

/* Symbol: _Z38cust_fillDefaultStrobeNVRam_main_part2Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_main_part2(void*) */
int _Z38cust_fillDefaultStrobeNVRam_main_part2Pv(void);

/* Symbol: _Z23AK7371AF_getDefaultDataPvj */
/* Demangled: AK7371AF_getDefaultData(void*, unsigned int) */
int _Z23AK7371AF_getDefaultDataPvj(void);

/* Symbol: _Z25get_Dualzoom_AF_TeleDACThRi */
/* Demangled: get_Dualzoom_AF_TeleDACTh(int&) */
int _Z25get_Dualzoom_AF_TeleDACThRi(void);

/* Symbol: _Z17getSyncAEInitInfov */
/* Demangled: getSyncAEInitInfo() */
int _Z17getSyncAEInitInfov(void);

/* Symbol: _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EE11getInstanceEjE9singleton */
/* Demangled: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)2>::getInstance(unsigned int)::singleton */
extern void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EE11getInstanceEjE9singleton;

/* Symbol: _ZN16PD_S5K3M2MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K3M2MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_S5K3M2MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_PGNERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_PGN_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_PGN(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_PGN_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_PGNERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_PGN_TE(void);

/* Symbol: _ZN11NSCamCustom26custom_GetYuvAfLampSupportEv */
/* Demangled: NSCamCustom::custom_GetYuvAfLampSupport() */
int _ZN11NSCamCustom26custom_GetYuvAfLampSupportEv(void);

/* Symbol: _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z27LC898217AF_W_getDefaultDataPvj */
/* Demangled: LC898217AF_W_getDefaultData(void*, unsigned int) */
int _Z27LC898217AF_W_getDefaultDataPvj(void);

/* Symbol: _Z15getMVHDR_AEInfoRK24mVHDR_SWHDR_InputParam_SR25mVHDR_SWHDR_OutputParam_S */
/* Demangled: getMVHDR_AEInfo(mVHDR_SWHDR_InputParam_S const&, mVHDR_SWHDR_OutputParam_S&) */
int _Z15getMVHDR_AEInfoRK24mVHDR_SWHDR_InputParam_SR25mVHDR_SWHDR_OutputParam_S(void);

/* Symbol: _ZN16PD_IMX258MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_IMX258MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_IMX258MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE1EEiv */
/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)1>() */
int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE1EEiv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj(void);

/* Symbol: _ZN17PD_OV23850MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_OV23850MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN17PD_OV23850MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _Z17getStereoModeTypev */
/* Demangled: getStereoModeType() */
int _Z17getStereoModeTypev(void);

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE215GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN22PD_IMX586MIPIRAW_TYPE215GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _Z26cust_getFlashMaxIDuty_mainiiPiS_ */
/* Demangled: cust_getFlashMaxIDuty_main(int, int, int*, int*) */
int _Z26cust_getFlashMaxIDuty_mainiiPiS_(void);

/* Symbol: _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z23getNvramQueryHelperImplv */
/* Demangled: getNvramQueryHelperImpl() */
int _Z23getNvramQueryHelperImplv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _Z37cust_fillDefaultFlashCalibrationNVRamiPv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam(int, void*) */
int _Z37cust_fillDefaultFlashCalibrationNVRamiPv(void);

/* Symbol: _Z24XiaoMiDoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: XiaoMiDoCamCalPartNumber(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z24XiaoMiDoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN16PD_S5K3M2MIPIRAWD0Ev */
/* Demangled: PD_S5K3M2MIPIRAW::~PD_S5K3M2MIPIRAW() */
int _ZN16PD_S5K3M2MIPIRAWD0Ev(void);

/* Symbol: CustomHdrCoreNumberGet */
/* Demangled: CustomHdrCoreNumberGet */
int CustomHdrCoreNumberGet(void);

/* Symbol: _ZTSNSt3__117bad_function_callE */
/* Demangled: typeinfo name for std::__1::bad_function_call */
extern void* _ZTSNSt3__117bad_function_callE;

/* Symbol: _Z22getWorkPerCycle_Sub_M1v */
/* Demangled: getWorkPerCycle_Sub_M1() */
int _Z22getWorkPerCycle_Sub_M1v(void);

/* Symbol: _Z30cust_getFlickerDetectFrequencyv */
/* Demangled: cust_getFlickerDetectFrequency() */
int _Z30cust_getFlickerDetectFrequencyv(void);

/* Symbol: _Z28GetCameraFlashDefaultCalDatajjP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT */
/* Demangled: GetCameraFlashDefaultCalData(unsigned int, unsigned int, NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT*) */
int _Z28GetCameraFlashDefaultCalDatajjP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT(void);

/* Symbol: _Z48cust_fillDefaultFlashCalibrationNVRam_main_part2Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main_part2(void*) */
int _Z48cust_fillDefaultFlashCalibrationNVRam_main_part2Pv(void);

/* Symbol: _ZN16PD_S5K2L7MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti */
/* Demangled: PD_S5K2L7MIPIRAW::GetDualPDVCInfo(int, SDUALPDVCINFO_t&, int) */
int _ZN16PD_S5K2L7MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti(void);

/* Symbol: Lomo_V_param */
/* Demangled: Lomo_V_param */
extern void* Lomo_V_param;

/* Symbol: gSubLensIdx */
/* Demangled: gSubLensIdx */
extern void* gSubLensIdx;

/* Symbol: _Z19DoCamCalSingleLscOPPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalSingleLscOP(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z19DoCamCalSingleLscOPPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: SensorList */
/* Demangled: SensorList */
extern void* SensorList;

/* Symbol: _ZN16PD_IMX499MIPIRAWD1Ev */
/* Demangled: PD_IMX499MIPIRAW::~PD_IMX499MIPIRAW() */
int _ZN16PD_IMX499MIPIRAWD1Ev(void);

/* Symbol: CustomHdrThHighGet */
/* Demangled: CustomHdrThHighGet */
int CustomHdrThHighGet(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN17PD_OV13855MIPIRAWD0Ev */
/* Demangled: PD_OV13855MIPIRAW::~PD_OV13855MIPIRAW() */
int _ZN17PD_OV13855MIPIRAWD0Ev(void);

/* Symbol: _Z27calculateNewExposureSettingP15AE_Cust_Param_TP22AE_EXP_SETTING_INPUT_TP23AE_EXP_SETTING_OUTPUT_T */
/* Demangled: calculateNewExposureSetting(AE_Cust_Param_T*, AE_EXP_SETTING_INPUT_T*, AE_EXP_SETTING_OUTPUT_T*) */
int _Z27calculateNewExposureSettingP15AE_Cust_Param_TP22AE_EXP_SETTING_INPUT_TP23AE_EXP_SETTING_OUTPUT_T(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t */
/* Demangled: PD_IMX338MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
int _ZN16PD_IMX338MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void);

/* Symbol: power_2_lshift20_positive */
/* Demangled: power_2_lshift20_positive */
extern void* power_2_lshift20_positive;

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj2417ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<2417u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj2417ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom21adaptive_NR3D_settingERKNS_13RAWIspCamInfoERKNS_22ISP_NR3D_SMOOTH_INFO_TERNS_16ISP_NVRAM_NR3D_TERiNS_12ESensorDev_TE */
/* Demangled: NSIspTuning::IspTuningCustom::adaptive_NR3D_setting(NSIspTuning::RAWIspCamInfo const&, NSIspTuning::ISP_NR3D_SMOOTH_INFO_T const&, NSIspTuning::ISP_NVRAM_NR3D_T&, int&, NSIspTuning::ESensorDev_T) */
int _ZN11NSIspTuning15IspTuningCustom21adaptive_NR3D_settingERKNS_13RAWIspCamInfoERKNS_22ISP_NR3D_SMOOTH_INFO_TERNS_16ISP_NVRAM_NR3D_TERiNS_12ESensorDev_TE(void);

/* Symbol: _Z19getMtkFormatVersionPN5NSCam13ICamCalHelperEPj */
/* Demangled: getMtkFormatVersion(NSCam::ICamCalHelper*, unsigned int*) */
int _Z19getMtkFormatVersionPN5NSCam13ICamCalHelperEPj(void);

/* Symbol: _ZN16PD_S5K3M2MIPIRAWC1Ev */
/* Demangled: PD_S5K3M2MIPIRAW::PD_S5K3M2MIPIRAW() */
int _ZN16PD_S5K3M2MIPIRAWC1Ev(void);

/* Symbol: _ZN12PDBufMgrOpenD0Ev */
/* Demangled: PDBufMgrOpen::~PDBufMgrOpen() */
int _ZN12PDBufMgrOpenD0Ev(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj20533ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<20533u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj20533ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZTV16PD_IMX386MIPIRAW */
/* Demangled: vtable for PD_IMX386MIPIRAW */
extern void* _ZTV16PD_IMX386MIPIRAW;

/* Symbol: _ZN16PD_S5K2P7MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5K2P7MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_S5K2P7MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZTV16PD_IMX230MIPIRAW */
/* Demangled: vtable for PD_IMX230MIPIRAW */
extern void* _ZTV16PD_IMX230MIPIRAW;

/* Symbol: _Z20getDataInterpolationiiiii */
/* Demangled: getDataInterpolation(int, int, int, int, int) */
int _Z20getDataInterpolationiiiii(void);

/* Symbol: _Z19getAEManualCapPlineRK16EAEManualPline_TR10eAETableID */
/* Demangled: getAEManualCapPline(EAEManualPline_T const&, eAETableID&) */
int _Z19getAEManualCapPlineRK16EAEManualPline_TR10eAETableID(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)3>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom18userSetting_EFFECTERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRKNS_17IspUsrSelectLevelERNS_15ISP_NVRAM_G2C_TERNS_21ISP_NVRAM_G2C_SHADE_TERNS_14ISP_NVRAM_SE_TERNS_15ISP_NVRAM_GGM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EFFECT(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_effect_mode const&, NSIspTuning::IspUsrSelectLevel const&, NSIspTuning::ISP_NVRAM_G2C_T&, NSIspTuning::ISP_NVRAM_G2C_SHADE_T&, NSIspTuning::ISP_NVRAM_SE_T&, NSIspTuning::ISP_NVRAM_GGM_T&) */
int _ZN11NSIspTuning15IspTuningCustom18userSetting_EFFECTERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRKNS_17IspUsrSelectLevelERNS_15ISP_NVRAM_G2C_TERNS_21ISP_NVRAM_G2C_SHADE_TERNS_14ISP_NVRAM_SE_TERNS_15ISP_NVRAM_GGM_TE(void);

/* Symbol: LensList_main */
/* Demangled: LensList_main */
extern void* LensList_main;

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5K3P8SXMIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN18PD_S5K3P8SXMIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_IMX398MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX398MIPIRAW::getInstance() */
int _ZN16PD_IMX398MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN16PD_IMX499MIPIRAWC2Ev */
/* Demangled: PD_IMX499MIPIRAW::PD_IMX499MIPIRAW() */
int _ZN16PD_IMX499MIPIRAWC2Ev(void);

/* Symbol: _Z24get_vsdof_cap_queue_sizev */
/* Demangled: get_vsdof_cap_queue_size() */
int _Z24get_vsdof_cap_queue_sizev(void);

/* Symbol: _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE2EEiv */
/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)2>() */
int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE2EEiv(void);

/* Symbol: _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EEE */
/* Demangled: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EEE;

/* Symbol: _ZN16PD_IMX338MIPIRAWD0Ev */
/* Demangled: PD_IMX338MIPIRAW::~PD_IMX338MIPIRAW() */
int _ZN16PD_IMX338MIPIRAWD0Ev(void);

/* Symbol: _ZN17PD_OV13855MIPIRAWC1Ev */
/* Demangled: PD_OV13855MIPIRAW::PD_OV13855MIPIRAW() */
int _ZN17PD_OV13855MIPIRAWC1Ev(void);

/* Symbol: _ZN17PD_OV13870MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_OV13870MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN17PD_OV13870MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj12610ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<12610u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj12610ELj0EE11getInstanceEvE4inst;

/* Symbol: PDList_sub */
/* Demangled: PDList_sub */
extern void* PDList_sub;

/* Symbol: _Z24getWorkPerCycle_Main2_M3v */
/* Demangled: getWorkPerCycle_Main2_M3() */
int _Z24getWorkPerCycle_Main2_M3v(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom11refine_CCM2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_CCM2(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_CCM_T&) */
int _ZN11NSIspTuning15IspTuningCustom11refine_CCM2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE(void);

/* Symbol: _Z21cust_getFlashIMapFunci */
/* Demangled: cust_getFlashIMapFunc(int) */
int _Z21cust_getFlashIMapFunci(void);

/* Symbol: _Z19DoCamCalLensId_BasePN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalLensId_Base(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z19DoCamCalLensId_BasePN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN21PD_S5KGW1OFILMMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z14smoothHdrOnOffRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S */
/* Demangled: smoothHdrOnOff(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
int _Z14smoothHdrOnOffRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void);

/* Symbol: _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE1EEiv */
/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)1>() */
int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE1EEiv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom16get_HdrDbsNewISOERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::get_HdrDbsNewISO(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom16get_HdrDbsNewISOERKNS_13RAWIspCamInfoE(void);

/* Symbol: _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN17PD_OV23850MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_OV23850MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN17PD_OV23850MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj */
/* Demangled: PD_IMX230MIPIRAW::SetRegAdDaPairBuf(int, int, int, int, int, int, unsigned short*, unsigned int&) */
int _ZN16PD_IMX230MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj(void);

/* Symbol: _Z13DoCamCal_DumpPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCal_Dump(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z13DoCamCal_DumpPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN17PD_OV16880MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_OV16880MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN17PD_OV16880MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW18GetPDInfo2HybridAFEiPi */
/* Demangled: PD_IMX519MIPIRAW::GetPDInfo2HybridAF(int, int*) */
int _ZN16PD_IMX519MIPIRAW18GetPDInfo2HybridAFEiPi(void);

/* Symbol: _ZN9FSCCustom13getDebugLevelEv */
/* Demangled: FSCCustom::getDebugLevel() */
int _ZN9FSCCustom13getDebugLevelEv(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj34907ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<34907u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj34907ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX338MIPIRAWC1Ev */
/* Demangled: PD_IMX338MIPIRAW::PD_IMX338MIPIRAW() */
int _ZN16PD_IMX338MIPIRAWC1Ev(void);

/* Symbol: _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EE11getInstanceEjE9singleton */
/* Demangled: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)16>::getInstance(unsigned int)::singleton */
extern void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EE11getInstanceEjE9singleton;

/* Symbol: _Z32LC898212XDAF_MONO_getDefaultDataPvj */
/* Demangled: LC898212XDAF_MONO_getDefaultData(void*, unsigned int) */
int _Z32LC898212XDAF_MONO_getDefaultDataPvj(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZTVN8nlohmann6detail11other_errorE */
/* Demangled: vtable for nlohmann::detail::other_error */
extern void* _ZTVN8nlohmann6detail11other_errorE;

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void);

/* Symbol: _Z10getAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)2>() */
int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN17PD_OV16880MIPIRAWD2Ev */
/* Demangled: PD_OV16880MIPIRAW::~PD_OV16880MIPIRAW() */
int _ZN17PD_OV16880MIPIRAWD2Ev(void);

/* Symbol: _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)5>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EE11getInstanceEjE9singleton */
/* Demangled: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)8>::getInstance(unsigned int)::singleton */
extern void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EE11getInstanceEjE9singleton;

/* Symbol: _ZN8PDBufMgr9SetPDInfoER19SET_PD_BLOCK_INFO_TR12SPDProfile_tR12SPDOHWINFO_t */
/* Demangled: PDBufMgr::SetPDInfo(SET_PD_BLOCK_INFO_T&, SPDProfile_t&, SPDOHWINFO_t&) */
int _ZN8PDBufMgr9SetPDInfoER19SET_PD_BLOCK_INFO_TR12SPDProfile_tR12SPDOHWINFO_t(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW19m_u4Reg_AdDaPair_SzE */
/* Demangled: PD_IMX519MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern void* _ZN16PD_IMX519MIPIRAW19m_u4Reg_AdDaPair_SzE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE14__erase_uniqueIyEEjRKT_ */
/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__erase_unique<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE14__erase_uniqueIyEEjRKT_(void);

/* Symbol: _ZTVN8nlohmann6detail9exceptionE */
/* Demangled: vtable for nlohmann::detail::exception */
extern void* _ZTVN8nlohmann6detail9exceptionE;

/* Symbol: _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj */
/* Demangled: PD_IMX338MIPIRAW::SetRegAdDaPairBuf(int, int, int, int, int, int, unsigned short*, unsigned int&) */
int _ZN16PD_IMX338MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj(void);

/* Symbol: g_strMergeAESts */
/* Demangled: g_strMergeAESts */
extern void* g_strMergeAESts;

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN17PD_OV12A10MIPIRAWD1Ev */
/* Demangled: PD_OV12A10MIPIRAW::~PD_OV12A10MIPIRAW() */
int _ZN17PD_OV12A10MIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K3L8MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_S5K3L8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _Z29CUST_SKIP_ONE_SHOT_AE_FOR_TAFv */
/* Demangled: CUST_SKIP_ONE_SHOT_AE_FOR_TAF() */
int _Z29CUST_SKIP_ONE_SHOT_AE_FOR_TAFv(void);

/* Symbol: _Z43cust_fillDefaultFlashCalibrationNVRam_main2Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main2(void*) */
int _Z43cust_fillDefaultFlashCalibrationNVRam_main2Pv(void);

/* Symbol: _ZN16PD_IMX258MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_IMX258MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_IMX258MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TS0_j */
/* Demangled: ModifyCaptureParamByCustom(unsigned int, AE_MODE_CFG_T*, AE_MODE_CFG_T*, unsigned int) */
int _Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TS0_j(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)5>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom22reset_ISO_SmoothBufferEv */
/* Demangled: NSIspTuning::IspTuningCustom::reset_ISO_SmoothBuffer() */
int _ZN11NSIspTuning15IspTuningCustom22reset_ISO_SmoothBufferEv(void);

/* Symbol: _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAWD2Ev */
/* Demangled: PD_S5K2X8MIPIRAW::~PD_S5K2X8MIPIRAW() */
int _ZN16PD_S5K2X8MIPIRAWD2Ev(void);

/* Symbol: _ZN11NSYuvTuning32custom_GetYuvFlashlightThresholdEi */
/* Demangled: NSYuvTuning::custom_GetYuvFlashlightThreshold(int) */
int _ZN11NSYuvTuning32custom_GetYuvFlashlightThresholdEi(void);

/* Symbol: pLC898217AF_W_getDefaultData */
/* Demangled: pLC898217AF_W_getDefaultData */
extern void* pLC898217AF_W_getDefaultData;

/* Symbol: _Z24getStereoCaptureModeTypev */
/* Demangled: getStereoCaptureModeType() */
int _Z24getStereoCaptureModeTypev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_BPCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_BPC_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_BPC(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BNR_BPC_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_BPCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_BPC_TE(void);

/* Symbol: _Z17DoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCal_Dump_All(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z17DoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE2D2Ev */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::~PD_IMX586MIPIRAW_TYPE2() */
int _ZN22PD_IMX586MIPIRAW_TYPE2D2Ev(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN17PD_OV12A10MIPIRAWC2Ev */
/* Demangled: PD_OV12A10MIPIRAW::PD_OV12A10MIPIRAW() */
int _ZN17PD_OV12A10MIPIRAWC2Ev(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIyEEjRKT_ */
/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__erase_unique<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIyEEjRKT_(void);

/* Symbol: _Z42cust_fillDefaultFlashCalibrationNVRam_sub2Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub2(void*) */
int _Z42cust_fillDefaultFlashCalibrationNVRam_sub2Pv(void);

/* Symbol: _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN17PD_OV23850MIPIRAW11getInstanceEv */
/* Demangled: PD_OV23850MIPIRAW::getInstance() */
int _ZN17PD_OV23850MIPIRAW11getInstanceEv(void);

/* Symbol: _Z36get_3dnr_max_iso_increase_percentagev */
/* Demangled: get_3dnr_max_iso_increase_percentage() */
int _Z36get_3dnr_max_iso_increase_percentagev(void);

/* Symbol: pDW9718AF_getDefaultData */
/* Demangled: pDW9718AF_getDefaultData */
extern void* pDW9718AF_getDefaultData;

/* Symbol: _ZN16PD_IMX338MIPIRAW15GetPDWinSettingEPvS0_S0_ */
/* Demangled: PD_IMX338MIPIRAW::GetPDWinSetting(void*, void*, void*) */
int _ZN16PD_IMX338MIPIRAW15GetPDWinSettingEPvS0_S0_(void);

/* Symbol: _Z19GetLensInitFuncListP30MSDK_LENS_INIT_FUNCTION_STRUCTj */
/* Demangled: GetLensInitFuncList(MSDK_LENS_INIT_FUNCTION_STRUCT*, unsigned int) */
int _Z19GetLensInitFuncListP30MSDK_LENS_INIT_FUNCTION_STRUCTj(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW10GetPDCalSzEv */
/* Demangled: PD_IMX519MIPIRAW::GetPDCalSz() */
int _ZN16PD_IMX519MIPIRAW10GetPDCalSzEv(void);

/* Symbol: _ZN9FSCCustom15getMaxCropRatioEv */
/* Demangled: FSCCustom::getMaxCropRatio() */
int _ZN9FSCCustom15getMaxCropRatioEv(void);

/* Symbol: _Z18getmVHDRExpSettingR22mVHDR_TRANSFER_Param_SR28IVHDRExpSettingOutputParam_S */
/* Demangled: getmVHDRExpSetting(mVHDR_TRANSFER_Param_S&, IVHDRExpSettingOutputParam_S&) */
int _Z18getmVHDRExpSettingR22mVHDR_TRANSFER_Param_SR28IVHDRExpSettingOutputParam_S(void);

/* Symbol: _Z22getWorkPerCycle_Sub_M2v */
/* Demangled: getWorkPerCycle_Sub_M2() */
int _Z22getWorkPerCycle_Sub_M2v(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW15ExtractCaliDataEv */
/* Demangled: PD_IMX230MIPIRAW::ExtractCaliData() */
int _ZN16PD_IMX230MIPIRAW15ExtractCaliDataEv(void);

/* Symbol: _Z13get_swnr_typej */
/* Demangled: get_swnr_type(unsigned int) */
int _Z13get_swnr_typej(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_DBSERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_DBS_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_DBS(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_DBS_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_DBSERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_DBS_TE(void);

/* Symbol: _Z19isFlashAWBv2Enabledi */
/* Demangled: isFlashAWBv2Enabled(int) */
int _Z19isFlashAWBv2Enabledi(void);

/* Symbol: _Z37cust_getFlashQuick2CalibrationExp_subPiS_S_ */
/* Demangled: cust_getFlashQuick2CalibrationExp_sub(int*, int*, int*) */
int _Z37cust_getFlashQuick2CalibrationExp_subPiS_S_(void);

/* Symbol: _ZN16PD_IMX486MIPIRAWD2Ev */
/* Demangled: PD_IMX486MIPIRAW::~PD_IMX486MIPIRAW() */
int _ZN16PD_IMX486MIPIRAWD2Ev(void);

/* Symbol: _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)2>() */
int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z32cust_getFlashMaxIDuty_main_part2iiPiS_ */
/* Demangled: cust_getFlashMaxIDuty_main_part2(int, int, int*, int*) */
int _Z32cust_getFlashMaxIDuty_main_part2iiPiS_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _Z21CUST_LENS_COVER_COUNTiii */
/* Demangled: CUST_LENS_COVER_COUNT(int, int, int) */
int _Z21CUST_LENS_COVER_COUNTiii(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAW11getInstanceEv */
/* Demangled: PD_S5K2X8MIPIRAW::getInstance() */
int _ZN16PD_S5K2X8MIPIRAW11getInstanceEv(void);

/* Symbol: _ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__vector_base<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::~__vector_base() */
int _ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN16PD_S5K2L7MIPIRAW11getInstanceEv */
/* Demangled: PD_S5K2L7MIPIRAW::getInstance() */
int _ZN16PD_S5K2L7MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN17PD_OV16880MIPIRAWD0Ev */
/* Demangled: PD_OV16880MIPIRAW::~PD_OV16880MIPIRAW() */
int _ZN17PD_OV16880MIPIRAWD0Ev(void);

/* Symbol: _ZN10NR3DCustom12isSupportRSCEv */
/* Demangled: NR3DCustom::isSupportRSC() */
int _ZN10NR3DCustom12isSupportRSCEv(void);

/* Symbol: CustomHdrTopFRatioGet */
/* Demangled: CustomHdrTopFRatioGet */
int CustomHdrTopFRatioGet(void);

/* Symbol: _Z20CUST_ENABLE_TOUCH_AEv */
/* Demangled: CUST_ENABLE_TOUCH_AE() */
int _Z20CUST_ENABLE_TOUCH_AEv(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)5>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN16PD_IMX398MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_IMX398MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_IMX398MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_S9_EEiEERPNS_15__tree_end_nodeISB_EESC_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__find_equal<DCMF_CAMERA_OUTPUTS>(std::__1::__tree_const_iterator<DCMF_CAMERA_OUTPUTS, std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, DCMF_CAMERA_OUTPUTS const&) */
int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_S9_EEiEERPNS_15__tree_end_nodeISB_EESC_RKT_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void);

/* Symbol: _ZTSN8nlohmann6detail9exceptionE */
/* Demangled: typeinfo name for nlohmann::detail::exception */
extern void* _ZTSN8nlohmann6detail9exceptionE;

/* Symbol: _Z33CUST_PRECAPTURE_AF_AFTER_PREFLASHv */
/* Demangled: CUST_PRECAPTURE_AF_AFTER_PREFLASH() */
int _Z33CUST_PRECAPTURE_AF_AFTER_PREFLASHv(void);

/* Symbol: _Z38CUST_GET_SKIP_PRECAP_FLASH_FRAME_COUNTv */
/* Demangled: CUST_GET_SKIP_PRECAP_FLASH_FRAME_COUNT() */
int _Z38CUST_GET_SKIP_PRECAP_FLASH_FRAME_COUNTv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_LCEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_LCE_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_LCE(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_LCE_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_LCEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_LCE_TE(void);

/* Symbol: _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EEE */
/* Demangled: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EEE;

/* Symbol: _Z23GetCameraFeatureDefaultjjP29NVRAM_CAMERA_FEATURE_STRUCT_t */
/* Demangled: GetCameraFeatureDefault(unsigned int, unsigned int, NVRAM_CAMERA_FEATURE_STRUCT_t*) */
int _Z23GetCameraFeatureDefaultjjP29NVRAM_CAMERA_FEATURE_STRUCT_t(void);

/* Symbol: _ZN11NSCamCustom38custom_GetYuvFlashlightHighCurrentDutyEv */
/* Demangled: NSCamCustom::custom_GetYuvFlashlightHighCurrentDuty() */
int _ZN11NSCamCustom38custom_GetYuvFlashlightHighCurrentDutyEv(void);

/* Symbol: _Z19DoCamCal2AGainOP586PN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCal2AGainOP586(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z19DoCamCal2AGainOP586PN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW11sendCommandEjPvS0_S0_S0_ */
/* Demangled: PD_IMX519MIPIRAW::sendCommand(unsigned int, void*, void*, void*, void*) */
int _ZN16PD_IMX519MIPIRAW11sendCommandEjPvS0_S0_S0_(void);

/* Symbol: _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)0>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)1>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_ */
/* Demangled: std::__1::function<bool (int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&)>::operator()(int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) const */
int _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_(void);

/* Symbol: _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE2EEiPPK10AF_PARAM_T */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)2>(AF_PARAM_T const**) */
int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE2EEiPPK10AF_PARAM_T(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom12fine_tune_EEERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_14ISP_NVRAM_EE_TESE_RSC_ */
/* Demangled: NSIspTuning::IspTuningCustom::fine_tune_EE(NSIspTuning::RAWIspCamInfo const&, NSIspExifDebug::IspExifDebugInfo::IspGmaInfo const&, NSIspExifDebug::IspExifDebugInfo::IspLceInfo const&, NSIspTuning::ISP_NVRAM_EE_T const&, NSIspTuning::ISP_NVRAM_EE_T const&, NSIspTuning::ISP_NVRAM_EE_T&) */
int _ZN11NSIspTuning15IspTuningCustom12fine_tune_EEERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_14ISP_NVRAM_EE_TESE_RSC_(void);

/* Symbol: _Z25LC898217AF_getDefaultDataPvj */
/* Demangled: LC898217AF_getDefaultData(void*, unsigned int) */
int _Z25LC898217AF_getDefaultDataPvj(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj9076ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<9076u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9076ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX230MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE */
/* Demangled: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_All */
extern void* _ZN16PD_IMX230MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K2X8MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_S5K2X8MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN17PD_OV16880MIPIRAWC1Ev */
/* Demangled: PD_OV16880MIPIRAW::PD_OV16880MIPIRAW() */
int _ZN17PD_OV16880MIPIRAWC1Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZTIN8nlohmann6detail10type_errorE */
/* Demangled: typeinfo for nlohmann::detail::type_error */
extern void* _ZTIN8nlohmann6detail10type_errorE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE;

/* Symbol: _Z23getWorkPerCycle_Main_M1v */
/* Demangled: getWorkPerCycle_Main_M1() */
int _Z23getWorkPerCycle_Main_M1v(void);

/* Symbol: _Z24getWorkPerCycle_Main2_M4v */
/* Demangled: getWorkPerCycle_Main2_M4() */
int _Z24getWorkPerCycle_Main2_M4v(void);

/* Symbol: _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z20getMVHDR3Expo_AEInfoiRi */
/* Demangled: getMVHDR3Expo_AEInfo(int, int&) */
int _Z20getMVHDR3Expo_AEInfoiRi(void);

/* Symbol: _Z20getWorkPerCycle_Maini */
/* Demangled: getWorkPerCycle_Main(int) */
int _Z20getWorkPerCycle_Maini(void);

/* Symbol: pBU6424AF_getDefaultData */
/* Demangled: pBU6424AF_getDefaultData */
extern void* pBU6424AF_getDefaultData;

/* Symbol: _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj2418ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<2418u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj2418ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_S5K2X8MIPIRAWD0Ev */
/* Demangled: PD_S5K2X8MIPIRAW::~PD_S5K2X8MIPIRAW() */
int _ZN16PD_S5K2X8MIPIRAWD0Ev(void);

/* Symbol: DPE_CAPTURE_ROUND */
/* Demangled: DPE_CAPTURE_ROUND */
extern void* DPE_CAPTURE_ROUND;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_CCMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_CCM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_CCM_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_CCMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE(void);

/* Symbol: _Z15getWorkPerCycleij */
/* Demangled: getWorkPerCycle(int, unsigned int) */
int _Z15getWorkPerCycleij(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)1>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj9481ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<9481u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9481ELj0EEE;

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj9481ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<9481u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj9481ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE2D0Ev */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::~PD_IMX586MIPIRAW_TYPE2() */
int _ZN22PD_IMX586MIPIRAW_TYPE2D0Ev(void);

/* Symbol: _Z19getVrRrzoLimitationRiS_b */
/* Demangled: getVrRrzoLimitation(int&, int&, bool) */
int _Z19getVrRrzoLimitationRiS_b(void);

/* Symbol: _ZTSN8nlohmann6detail10type_errorE */
/* Demangled: typeinfo name for nlohmann::detail::type_error */
extern void* _ZTSN8nlohmann6detail10type_errorE;

/* Symbol: _Z20cust_getStrobeDevicei */
/* Demangled: cust_getStrobeDevice(int) */
int _Z20cust_getStrobeDevicei(void);

/* Symbol: LensList_sub2 */
/* Demangled: LensList_sub2 */
extern void* LensList_sub2;

/* Symbol: _Z19canSupportBGServicev */
/* Demangled: canSupportBGService() */
int _Z19canSupportBGServicev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z20get_ot_CustomizeDataP17OT_Customize_PARA */
/* Demangled: get_ot_CustomizeData(OT_Customize_PARA*) */
int _Z20get_ot_CustomizeDataP17OT_Customize_PARA(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long long&>(unsigned long long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_(void);

/* Symbol: _Z22cust_getFlickerHalParaPiS_ */
/* Demangled: cust_getFlickerHalPara(int*, int*) */
int _Z22cust_getFlickerHalParaPiS_(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom22userSetting_EFFECT_GGMERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EFFECT_GGM(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_effect_mode const&, NSIspTuning::ISP_NVRAM_GGM_T&) */
int _ZN11NSIspTuning15IspTuningCustom22userSetting_EFFECT_GGMERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE(void);

/* Symbol: _ZN16PD_IMX258MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX258MIPIRAW::getInstance() */
int _ZN16PD_IMX258MIPIRAW11getInstanceEv(void);

/* Symbol: _Z14calMotionRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S */
/* Demangled: calMotionRatio(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
int _Z14calMotionRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)4>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z26GetCameraIdxTblDefaultParajjP25NVRAM_CAMERA_IDX_STRUCT_T */
/* Demangled: GetCameraIdxTblDefaultPara(unsigned int, unsigned int, NVRAM_CAMERA_IDX_STRUCT_T*) */
int _Z26GetCameraIdxTblDefaultParajjP25NVRAM_CAMERA_IDX_STRUCT_T(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAWC1Ev */
/* Demangled: PD_S5K2X8MIPIRAW::PD_S5K2X8MIPIRAW() */
int _ZN16PD_S5K2X8MIPIRAWC1Ev(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW15GetPDWinSettingEPvS0_S0_ */
/* Demangled: PD_IMX230MIPIRAW::GetPDWinSetting(void*, void*, void*) */
int _ZN16PD_IMX230MIPIRAW15GetPDWinSettingEPvS0_S0_(void);

/* Symbol: _Z38cust_getFlashQuick2CalibrationExp_mainPiS_S_ */
/* Demangled: cust_getFlashQuick2CalibrationExp_main(int*, int*, int*) */
int _Z38cust_getFlashQuick2CalibrationExp_mainPiS_S_(void);

/* Symbol: _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z25getFrameSyncToleranceTimev */
/* Demangled: getFrameSyncToleranceTime() */
int _Z25getFrameSyncToleranceTimev(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZN12CustomPQImpl29decidePQEnable_EIS35_VIDEO_4kEj */
/* Demangled: CustomPQImpl::decidePQEnable_EIS35_VIDEO_4k(unsigned int) */
int _ZN12CustomPQImpl29decidePQEnable_EIS35_VIDEO_4kEj(void);

/* Symbol: _ZN17NSCamCustomSensor15getCustomConfigE20IMGSENSOR_SENSOR_IDX */
/* Demangled: NSCamCustomSensor::getCustomConfig(IMGSENSOR_SENSOR_IDX) */
int _ZN17NSCamCustomSensor15getCustomConfigE20IMGSENSOR_SENSOR_IDX(void);

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE2C1Ev */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::PD_IMX586MIPIRAW_TYPE2() */
int _ZN22PD_IMX586MIPIRAW_TYPE2C1Ev(void);

/* Symbol: _ZN17PD_OV13855MIPIRAW11getInstanceEv */
/* Demangled: PD_OV13855MIPIRAW::getInstance() */
int _ZN17PD_OV13855MIPIRAW11getInstanceEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN16PD_IMX386MIPIRAWD1Ev */
/* Demangled: PD_IMX386MIPIRAW::~PD_IMX386MIPIRAW() */
int _ZN16PD_IMX386MIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_IMX499MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_IMX499MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_IMX499MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN16PD_IMX486MIPIRAWD0Ev */
/* Demangled: PD_IMX486MIPIRAW::~PD_IMX486MIPIRAW() */
int _ZN16PD_IMX486MIPIRAWD0Ev(void);

/* Symbol: _ZTVN8nlohmann6detail10type_errorE */
/* Demangled: vtable for nlohmann::detail::type_error */
extern void* _ZTVN8nlohmann6detail10type_errorE;

/* Symbol: _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE16EEiiiiPPK14CustAF_THRES_T */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)16>(int, int, int, CustAF_THRES_T const**) */
int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE16EEiiiiPPK14CustAF_THRES_T(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN21PD_S5KGW1SUNNYMIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN17PD_OV13855MIPIRAW7seprateEiPhiiiPtj */
/* Demangled: PD_OV13855MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
int _ZN17PD_OV13855MIPIRAW7seprateEiPhiiiPtj(void);

/* Symbol: _Z26get_Dualzoom_AF_ThresholdsiiRiS_ii */
/* Demangled: get_Dualzoom_AF_Thresholds(int, int, int&, int&, int, int) */
int _Z26get_Dualzoom_AF_ThresholdsiiRiS_ii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJNS_4pairIyS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long, void*> >(unsigned long long const&, std::__1::pair<unsigned long long, void*>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJNS_4pairIyS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_(void);

/* Symbol: _Z31cust_fillDefaultStrobeNVRam_subPv */
/* Demangled: cust_fillDefaultStrobeNVRam_sub(void*) */
int _Z31cust_fillDefaultStrobeNVRam_subPv(void);

/* Symbol: _Z20Dummy_getDefaultDataPvj */
/* Demangled: Dummy_getDefaultData(void*, unsigned int) */
int _Z20Dummy_getDefaultDataPvj(void);

/* Symbol: _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: CustomHdrBottomFBoundGet */
/* Demangled: CustomHdrBottomFBoundGet */
int CustomHdrBottomFBoundGet(void);

/* Symbol: _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE16EEiv */
/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)16>() */
int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE16EEiv(void);

/* Symbol: _Z35get_stereo_zsd_cap_stored_frame_cntv */
/* Demangled: get_stereo_zsd_cap_stored_frame_cnt() */
int _Z35get_stereo_zsd_cap_stored_frame_cntv(void);

/* Symbol: _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE1EEPKiv */
/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)1>() */
int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE1EEPKiv(void);

/* Symbol: _ZTVNSt3__117bad_function_callE */
/* Demangled: vtable for std::__1::bad_function_call */
extern void* _ZTVNSt3__117bad_function_callE;

/* Symbol: _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE1EEiPPK10AF_PARAM_T */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)1>(AF_PARAM_T const**) */
int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE1EEiPPK10AF_PARAM_T(void);

/* Symbol: _ZN17PD_OV13870MIPIRAWD2Ev */
/* Demangled: PD_OV13870MIPIRAW::~PD_OV13870MIPIRAW() */
int _ZN17PD_OV13870MIPIRAWD2Ev(void);

/* Symbol: _ZN16PD_S5K2P8MIPIRAW8separateEiPhiiPtj */
/* Demangled: PD_S5K2P8MIPIRAW::separate(int, unsigned char*, int, int, unsigned short*, unsigned int) */
int _ZN16PD_S5K2P8MIPIRAW8separateEiPhiiPtj(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)1>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z18getSyncAWBInitInfov */
/* Demangled: getSyncAWBInitInfo() */
int _Z18getSyncAWBInitInfov(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj9078ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<9078u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9078ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj12608ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<12608u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj12608ELj0EEE;

/* Symbol: _ZN16PD_S5K3M2MIPIRAW11getInstanceEv */
/* Demangled: PD_S5K3M2MIPIRAW::getInstance() */
int _ZN16PD_S5K3M2MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN16PD_IMX386MIPIRAWC2Ev */
/* Demangled: PD_IMX386MIPIRAW::PD_IMX386MIPIRAW() */
int _ZN16PD_IMX386MIPIRAWC2Ev(void);

/* Symbol: _ZN16PD_IMX486MIPIRAWC1Ev */
/* Demangled: PD_IMX486MIPIRAW::PD_IMX486MIPIRAW() */
int _ZN16PD_IMX486MIPIRAWC1Ev(void);

/* Symbol: _Z18resetCycleCtr_Mainv */
/* Demangled: resetCycleCtr_Main() */
int _Z18resetCycleCtr_Mainv(void);

/* Symbol: _Z20GetCameraDefaultParajjP29NVRAM_CAMERA_ISP_PARAM_STRUCTP22NVRAM_CAMERA_3A_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP15AE_PLINETABLE_T */
/* Demangled: GetCameraDefaultPara(unsigned int, unsigned int, NVRAM_CAMERA_ISP_PARAM_STRUCT*, NVRAM_CAMERA_3A_STRUCT*, NVRAM_CAMERA_SHADING_STRUCT*, AE_PLINETABLE_T*) */
int _Z20GetCameraDefaultParajjP29NVRAM_CAMERA_ISP_PARAM_STRUCTP22NVRAM_CAMERA_3A_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP15AE_PLINETABLE_T(void);

/* Symbol: _Z27LC898212XDAF_getDefaultDataPvj */
/* Demangled: LC898212XDAF_getDefaultData(void*, unsigned int) */
int _Z27LC898212XDAF_getDefaultDataPvj(void);

/* Symbol: _Z14resetZVHDRFlagv */
/* Demangled: resetZVHDRFlag() */
int _Z14resetZVHDRFlagv(void);

/* Symbol: _Z19calAntiFlickerRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S */
/* Demangled: calAntiFlickerRatio(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
int _Z19calAntiFlickerRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_OBCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_OBC_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_OBC(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_OBC_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_OBCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_OBC_TE(void);

/* Symbol: _ZN11NSCamCustom32custom_GetYuvFlashlightThresholdEv */
/* Demangled: NSCamCustom::custom_GetYuvFlashlightThreshold() */
int _ZN11NSCamCustom32custom_GetYuvFlashlightThresholdEv(void);

/* Symbol: _Z18getHWSyncStableCntv */
/* Demangled: getHWSyncStableCnt() */
int _Z18getHWSyncStableCntv(void);

/* Symbol: _Z9WEIGHTINGjjf */
/* Demangled: WEIGHTING(unsigned int, unsigned int, float) */
int _Z9WEIGHTINGjjf(void);

/* Symbol: _ZN11NSCamCustom41custom_GetYuvFlashlightHighCurrentTimeoutEv */
/* Demangled: NSCamCustom::custom_GetYuvFlashlightHighCurrentTimeout() */
int _ZN11NSCamCustom41custom_GetYuvFlashlightHighCurrentTimeoutEv(void);

/* Symbol: _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE0EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)0>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE0EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef;

/* Symbol: _Z23openCustomTuningLibraryjj */
/* Demangled: openCustomTuningLibrary(unsigned int, unsigned int) */
int _Z23openCustomTuningLibraryjj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj(void);

/* Symbol: LensList_sub */
/* Demangled: LensList_sub */
extern void* LensList_sub;

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long long&>(long long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_(void);

/* Symbol: _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE1EEiv */
/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)1>() */
int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE1EEiv(void);

/* Symbol: _Z24closeCustomTuningLibraryjj */
/* Demangled: closeCustomTuningLibrary(unsigned int, unsigned int) */
int _Z24closeCustomTuningLibraryjj(void);

/* Symbol: _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void);

/* Symbol: _Z22getWorkPerCycle_Sub_M3v */
/* Demangled: getWorkPerCycle_Sub_M3() */
int _Z22getWorkPerCycle_Sub_M3v(void);

/* Symbol: _Z32cust_fillDefaultStrobeNVRam_mainPv */
/* Demangled: cust_fillDefaultStrobeNVRam_main(void*) */
int _Z32cust_fillDefaultStrobeNVRam_mainPv(void);

/* Symbol: _ZN16PD_IMX519MIPIRAWD1Ev */
/* Demangled: PD_IMX519MIPIRAW::~PD_IMX519MIPIRAW() */
int _ZN16PD_IMX519MIPIRAWD1Ev(void);

/* Symbol: _ZTV17PD_OV13870MIPIRAW */
/* Demangled: vtable for PD_OV13870MIPIRAW */
extern void* _ZTV17PD_OV13870MIPIRAW;

/* Symbol: _ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi */
/* Demangled: NR3DCustom::get_3dnr_off_iso_threshold(unsigned char, int) */
int _ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj12608ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<12608u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj12608ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZTV16PD_S5K3M3MIPIRAW */
/* Demangled: vtable for PD_S5K3M3MIPIRAW */
extern void* _ZTV16PD_S5K3M3MIPIRAW;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: gMainLensIdx */
/* Demangled: gMainLensIdx */
extern void* gMainLensIdx;

/* Symbol: _Z12Scenario4AWBRK13ScenarioParam */
/* Demangled: Scenario4AWB(ScenarioParam const&) */
int _Z12Scenario4AWBRK13ScenarioParam(void);

/* Symbol: _Z29cust_getFlashITab1_main_part2Ps */
/* Demangled: cust_getFlashITab1_main_part2(short*) */
int _Z29cust_getFlashITab1_main_part2Ps(void);

/* Symbol: _Z24BU63169AF_getDefaultDataPvj */
/* Demangled: BU63169AF_getDefaultData(void*, unsigned int) */
int _Z24BU63169AF_getDefaultDataPvj(void);

/* Symbol: _ZN5NSCam16CamCalCustomImpl18getEepromSensorDevEjj */
/* Demangled: NSCam::CamCalCustomImpl::getEepromSensorDev(unsigned int, unsigned int) */
int _ZN5NSCam16CamCalCustomImpl18getEepromSensorDevEjj(void);

/* Symbol: _ZN16PD_IMX386MIPIRAW15ExtractCaliDataEv */
/* Demangled: PD_IMX386MIPIRAW::ExtractCaliData() */
int _ZN16PD_IMX386MIPIRAW15ExtractCaliDataEv(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj9480ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<9480u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj9480ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX386MIPIRAW11sendCommandEjPvS0_S0_ */
/* Demangled: PD_IMX386MIPIRAW::sendCommand(unsigned int, void*, void*, void*) */
int _ZN16PD_IMX386MIPIRAW11sendCommandEjPvS0_S0_(void);

/* Symbol: _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE1EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)1>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE1EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef;

/* Symbol: _ZTV16PD_S5K2P7MIPIRAW */
/* Demangled: vtable for PD_S5K2P7MIPIRAW */
extern void* _ZTV16PD_S5K2P7MIPIRAW;

/* Symbol: _ZTV16PD_S5K3L8MIPIRAW */
/* Demangled: vtable for PD_S5K3L8MIPIRAW */
extern void* _ZTV16PD_S5K3L8MIPIRAW;

/* Symbol: _ZTV17PD_OV13855MIPIRAW */
/* Demangled: vtable for PD_OV13855MIPIRAW */
extern void* _ZTV17PD_OV13855MIPIRAW;

/* Symbol: _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)1>() */
int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_RNRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RNR_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_RNR(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_RNR_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_RNRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RNR_TE(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom11refine_ANR2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_ANR2_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_ANR2(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_ANR2_T&) */
int _ZN11NSIspTuning15IspTuningCustom11refine_ANR2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_ANR2_TE(void);

/* Symbol: _Z18GetLensDefaultParajjP22NVRAM_LENS_PARA_STRUCT */
/* Demangled: GetLensDefaultPara(unsigned int, unsigned int, NVRAM_LENS_PARA_STRUCT*) */
int _Z18GetLensDefaultParajjP22NVRAM_LENS_PARA_STRUCT(void);

/* Symbol: getInstance_DebugExif */
/* Demangled: getInstance_DebugExif */
int getInstance_DebugExif(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj34906ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<34906u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj34906ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX519MIPIRAWC2Ev */
/* Demangled: PD_IMX519MIPIRAW::PD_IMX519MIPIRAW() */
int _ZN16PD_IMX519MIPIRAWC2Ev(void);

/* Symbol: _ZN12CustomPQImpl29decidePQEnable_EIS35_NO_VIDEOEj */
/* Demangled: CustomPQImpl::decidePQEnable_EIS35_NO_VIDEO(unsigned int) */
int _ZN12CustomPQImpl29decidePQEnable_EIS35_NO_VIDEOEj(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)0>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z22decide_smvr_directlinkiii */
/* Demangled: decide_smvr_directlink(int, int, int) */
int _Z22decide_smvr_directlinkiii(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _Z15get_dummy_anglev */
/* Demangled: get_dummy_angle() */
int _Z15get_dummy_anglev(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom34is_to_invoke_remap_ISP_ISO_with_LVERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_remap_ISP_ISO_with_LV(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom34is_to_invoke_remap_ISP_ISO_with_LVERKNS_13RAWIspCamInfoE(void);

/* Symbol: _Z23CameraPosition2FileListj */
/* Demangled: CameraPosition2FileList(unsigned int) */
int _Z23CameraPosition2FileListj(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj9078ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<9078u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9078ELj0EEE;

/* Symbol: _ZN17PD_OV23850MIPIRAWD1Ev */
/* Demangled: PD_OV23850MIPIRAW::~PD_OV23850MIPIRAW() */
int _ZN17PD_OV23850MIPIRAWD1Ev(void);

/* Symbol: _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE16EERK11AWB_PARAM_Tv */
/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)16>() */
int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE16EERK11AWB_PARAM_Tv(void);

/* Symbol: _Z29cust_getFlashHalTorchDuty_subPiS_ */
/* Demangled: cust_getFlashHalTorchDuty_sub(int*, int*) */
int _Z29cust_getFlashHalTorchDuty_subPiS_(void);

/* Symbol: _ZN17PD_OV12A10MIPIRAW11getInstanceEv */
/* Demangled: PD_OV12A10MIPIRAW::getInstance() */
int _ZN17PD_OV12A10MIPIRAW11getInstanceEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>&>&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE(void);

/* Symbol: _ZTIN8nlohmann6detail11other_errorE */
/* Demangled: typeinfo for nlohmann::detail::other_error */
extern void* _ZTIN8nlohmann6detail11other_errorE;

/* Symbol: _Z23getWorkPerCycle_Main_M2v */
/* Demangled: getWorkPerCycle_Main_M2() */
int _Z23getWorkPerCycle_Main_M2v(void);

/* Symbol: _Z24getWorkPerCycle_Main2_M5v */
/* Demangled: getWorkPerCycle_Main2_M5() */
int _Z24getWorkPerCycle_Main2_M5v(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_T */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)8>(AF_CONFIG_T const**) */
int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_T(void);

/* Symbol: _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE2EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)2>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE2EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef;

/* Symbol: _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE16EEPKiv */
/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)16>() */
int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE16EEPKiv(void);

/* Symbol: _Z22cust_getFlashITab2_subPs */
/* Demangled: cust_getFlashITab2_sub(short*) */
int _Z22cust_getFlashITab2_subPs(void);

/* Symbol: _Z28get_zsd_cap_stored_frame_cntv */
/* Demangled: get_zsd_cap_stored_frame_cnt() */
int _Z28get_zsd_cap_stored_frame_cntv(void);

/* Symbol: _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN8PDBufMgrD1Ev */
/* Demangled: PDBufMgr::~PDBufMgr() */
int _ZN8PDBufMgrD1Ev(void);

/* Symbol: _ZN17PD_OV13870MIPIRAWD0Ev */
/* Demangled: PD_OV13870MIPIRAW::~PD_OV13870MIPIRAW() */
int _ZN17PD_OV13870MIPIRAWD0Ev(void);

/* Symbol: _ZTVN8nlohmann6detail20input_stream_adapterE */
/* Demangled: vtable for nlohmann::detail::input_stream_adapter */
extern void* _ZTVN8nlohmann6detail20input_stream_adapterE;

/* Symbol: _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_T */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)0>(AF_CONFIG_T const**) */
int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_T(void);

/* Symbol: _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z12DoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalPDAF(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z12DoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _Z20XiaoMiDoCamCalFuseIdPN5NSCam13ICamCalHelperEjP19CAM_CAL_DATA_STRUCT */
/* Demangled: XiaoMiDoCamCalFuseId(NSCam::ICamCalHelper*, unsigned int, CAM_CAL_DATA_STRUCT*) */
int _Z20XiaoMiDoCamCalFuseIdPN5NSCam13ICamCalHelperEjP19CAM_CAL_DATA_STRUCT(void);

/* Symbol: _ZTV16PD_S5K2X8MIPIRAW */
/* Demangled: vtable for PD_S5K2X8MIPIRAW */
extern void* _ZTV16PD_S5K2X8MIPIRAW;

/* Symbol: _ZTV16PD_IMX362MIPIRAW */
/* Demangled: vtable for PD_IMX362MIPIRAW */
extern void* _ZTV16PD_IMX362MIPIRAW;

/* Symbol: _Z16getAEManualPlineRK16EAEManualPline_TR10eAETableIDS3_ */
/* Demangled: getAEManualPline(EAEManualPline_T const&, eAETableID&, eAETableID&) */
int _Z16getAEManualPlineRK16EAEManualPline_TR10eAETableIDS3_(void);

/* Symbol: pDummy_getDefaultData */
/* Demangled: pDummy_getDefaultData */
extern void* pDummy_getDefaultData;

/* Symbol: _ZN17PD_OV23850MIPIRAWC2Ev */
/* Demangled: PD_OV23850MIPIRAW::PD_OV23850MIPIRAW() */
int _ZN17PD_OV23850MIPIRAWC2Ev(void);

/* Symbol: _ZN16PD_IMX386MIPIRAW19m_u4Reg_AdDaPair_SzE */
/* Demangled: PD_IMX386MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern void* _ZN16PD_IMX386MIPIRAW19m_u4Reg_AdDaPair_SzE;

/* Symbol: _Z11isSESettingv */
/* Demangled: isSESetting() */
int _Z11isSESettingv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_SL2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_SL2(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_SL2_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_SL2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE(void);

/* Symbol: _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z23BU6429AF_getDefaultDataPvj */
/* Demangled: BU6429AF_getDefaultData(void*, unsigned int) */
int _Z23BU6429AF_getDefaultDataPvj(void);

/* Symbol: _Z34DualCameraData_FromPersist_IsValidPKc */
/* Demangled: DualCameraData_FromPersist_IsValid(char const*) */
int _Z34DualCameraData_FromPersist_IsValidPKc(void);

/* Symbol: _ZTV12PDBufMgrOpen */
/* Demangled: vtable for PDBufMgrOpen */
extern void* _ZTV12PDBufMgrOpen;

/* Symbol: _ZN8PDBufMgr14createInstanceER12SPDProfile_t */
/* Demangled: PDBufMgr::createInstance(SPDProfile_t&) */
int _ZN8PDBufMgr14createInstanceER12SPDProfile_t(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t */
/* Demangled: PD_IMX230MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
int _ZN16PD_IMX230MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void);

/* Symbol: _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_ */
/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&) */
int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_(void);

/* Symbol: _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj9077ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<9077u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9077ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX230MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX230MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX230MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: CUSTOM_DEPTHMAP_SIZE */
/* Demangled: CUSTOM_DEPTHMAP_SIZE */
extern void* CUSTOM_DEPTHMAP_SIZE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void);

/* Symbol: _Z15getAFExtendCoefiiiiPPK14CustAF_THRES_T */
/* Demangled: getAFExtendCoef(int, int, int, int, CustAF_THRES_T const**) */
int _Z15getAFExtendCoefiiiiPPK14CustAF_THRES_T(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_RMMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RMM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_RMM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_RMM_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_RMMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RMM_TE(void);

/* Symbol: _Z18cust_getFlashITab1iPs */
/* Demangled: cust_getFlashITab1(int, short*) */
int _Z18cust_getFlashITab1iPs(void);

/* Symbol: _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE1EEiPPK10AF_PARAM_TE9g_AFparam */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)1>(AF_PARAM_T const**)::g_AFparam */
extern void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE1EEiPPK10AF_PARAM_TE9g_AFparam;

/* Symbol: _ZN11NSCamCustom23custom_GetYuvPreflashAFEv */
/* Demangled: NSCamCustom::custom_GetYuvPreflashAF() */
int _ZN11NSCamCustom23custom_GetYuvPreflashAFEv(void);

/* Symbol: _ZN8PDBufMgrC2Ev */
/* Demangled: PDBufMgr::PDBufMgr() */
int _ZN8PDBufMgrC2Ev(void);

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAWD2Ev */
/* Demangled: PD_S5K3P8SXMIPIRAW::~PD_S5K3P8SXMIPIRAW() */
int _ZN18PD_S5K3P8SXMIPIRAWD2Ev(void);

/* Symbol: _ZN17PD_OV13870MIPIRAWC1Ev */
/* Demangled: PD_OV13870MIPIRAW::PD_OV13870MIPIRAW() */
int _ZN17PD_OV13870MIPIRAWC1Ev(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_MFBERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_MFB_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_MFB(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_MFB_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_MFBERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_MFB_TE(void);

/* Symbol: _Z34cust_getFlashProjectPara_sub_part2iiP26NVRAM_CAMERA_STROBE_STRUCT */
/* Demangled: cust_getFlashProjectPara_sub_part2(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
int _Z34cust_getFlashProjectPara_sub_part2iiP26NVRAM_CAMERA_STROBE_STRUCT(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom26userSetting_EFFECT_GGM_JNIERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EFFECT_GGM_JNI(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_effect_mode const&, NSIspTuning::ISP_NVRAM_GGM_T&) */
int _ZN11NSIspTuning15IspTuningCustom26userSetting_EFFECT_GGM_JNIERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj9482ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<9482u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj9482ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX230MIPIRAWD1Ev */
/* Demangled: PD_IMX230MIPIRAW::~PD_IMX230MIPIRAW() */
int _ZN16PD_IMX230MIPIRAWD1Ev(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom11refine_SL2FERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_SL2F(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_SL2_T&) */
int _ZN11NSIspTuning15IspTuningCustom11refine_SL2FERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE(void);

/* Symbol: _Z34get_3dnr_iso_enable_threshold_highv */
/* Demangled: get_3dnr_iso_enable_threshold_high() */
int _Z34get_3dnr_iso_enable_threshold_highv(void);

/* Symbol: DCMF_CAMERA_OUTPUT_LIST */
/* Demangled: DCMF_CAMERA_OUTPUT_LIST */
extern void* DCMF_CAMERA_OUTPUT_LIST;

/* Symbol: _Z22getDCMFCapturePhaseCntv */
/* Demangled: getDCMFCapturePhaseCnt() */
int _Z22getDCMFCapturePhaseCntv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam13ICamCalCustom14createInstanceEPNS_13ICamCalHelperE */
/* Demangled: NSCam::ICamCalCustom::createInstance(NSCam::ICamCalHelper*) */
int _ZN5NSCam13ICamCalCustom14createInstanceEPNS_13ICamCalHelperE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN11NSYuvTuning29custom_BurstFlashlightGain10XEi */
/* Demangled: NSYuvTuning::custom_BurstFlashlightGain10X(int) */
int _ZN11NSYuvTuning29custom_BurstFlashlightGain10XEi(void);

/* Symbol: _Z23BU6424AF_getDefaultDataPvj */
/* Demangled: BU6424AF_getDefaultData(void*, unsigned int) */
int _Z23BU6424AF_getDefaultDataPvj(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAWD1Ev */
/* Demangled: PD_S5K3L8MIPIRAW::~PD_S5K3L8MIPIRAW() */
int _ZN16PD_S5K3L8MIPIRAWD1Ev(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_ANRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ANR_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_ANR(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_ANR_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_ANRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ANR_TE(void);

/* Symbol: _Z19cust_setFlashPartIdii */
/* Demangled: cust_setFlashPartId(int, int) */
int _Z19cust_setFlashPartIdii(void);

/* Symbol: _ZN16PD_IMX398MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX398MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX398MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: CustomHdrBRatioGet */
/* Demangled: CustomHdrBRatioGet */
int CustomHdrBRatioGet(void);

/* Symbol: _ZNK11NSIspTuning15IspTuningCustom30get_RawHDR_LCEGain_ConverParamEv */
/* Demangled: NSIspTuning::IspTuningCustom::get_RawHDR_LCEGain_ConverParam() const */
int _ZNK11NSIspTuning15IspTuningCustom30get_RawHDR_LCEGain_ConverParamEv(void);

/* Symbol: _ZN17PD_OV16880MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_OV16880MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN17PD_OV16880MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZTV16PD_IMX499MIPIRAW */
/* Demangled: vtable for PD_IMX499MIPIRAW */
extern void* _ZTV16PD_IMX499MIPIRAW;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::find<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_(void);

/* Symbol: _Z22cust_getFlashModeStyleii */
/* Demangled: cust_getFlashModeStyle(int, int) */
int _Z22cust_getFlashModeStyleii(void);

/* Symbol: _Z15ShowCmdErrorLog24CAMERA_CAM_CAL_TYPE_ENUM */
/* Demangled: ShowCmdErrorLog(CAMERA_CAM_CAL_TYPE_ENUM) */
int _Z15ShowCmdErrorLog24CAMERA_CAM_CAL_TYPE_ENUM(void);

/* Symbol: _ZN16PD_IMX230MIPIRAWC2Ev */
/* Demangled: PD_IMX230MIPIRAW::PD_IMX230MIPIRAW() */
int _ZN16PD_IMX230MIPIRAWC2Ev(void);

/* Symbol: _Z22getManualHDRExpSettingRK25HDRExpSettingInputParam_SR26HDRExpSettingOutputParam_Siiiii */
/* Demangled: getManualHDRExpSetting(HDRExpSettingInputParam_S const&, HDRExpSettingOutputParam_S&, int, int, int, int, int) */
int _Z22getManualHDRExpSettingRK25HDRExpSettingInputParam_SR26HDRExpSettingOutputParam_Siiiii(void);

/* Symbol: _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)8>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj34906ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<34906u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj34906ELj0EEE;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)4>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z30CUST_ENABLE_FLASH_DURING_TOUCHv */
/* Demangled: CUST_ENABLE_FLASH_DURING_TOUCH() */
int _Z30CUST_ENABLE_FLASH_DURING_TOUCHv(void);

/* Symbol: FuseId */
/* Demangled: FuseId */
extern void* FuseId;

/* Symbol: PDList_main2 */
/* Demangled: PDList_main2 */
extern void* PDList_main2;

/* Symbol: _ZN16PD_S5K3L8MIPIRAWC2Ev */
/* Demangled: PD_S5K3L8MIPIRAW::PD_S5K3L8MIPIRAW() */
int _ZN16PD_S5K3L8MIPIRAWC2Ev(void);

/* Symbol: RatTBL8cm */
/* Demangled: RatTBL8cm */
extern void* RatTBL8cm;

/* Symbol: _ZTVN8nlohmann6detail20input_buffer_adapterE */
/* Demangled: vtable for nlohmann::detail::input_buffer_adapter */
extern void* _ZTVN8nlohmann6detail20input_buffer_adapterE;

/* Symbol: _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE2EEiiiiPPK14CustAF_THRES_T */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)2>(int, int, int, CustAF_THRES_T const**) */
int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE2EEiiiiPPK14CustAF_THRES_T(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)1>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom11refine_NR3DERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_NR3D_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_NR3D(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_NR3D_T&) */
int _ZN11NSIspTuning15IspTuningCustom11refine_NR3DERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_NR3D_TE(void);

/* Symbol: PDList_main3 */
/* Demangled: PDList_main3 */
extern void* PDList_main3;

/* Symbol: _Z22getWorkPerCycle_Sub_M4v */
/* Demangled: getWorkPerCycle_Sub_M4() */
int _Z22getWorkPerCycle_Sub_M4v(void);

/* Symbol: _Z18DoCamCalStereoDataPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalStereoData(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z18DoCamCalStereoDataPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE8EEiiiiPPK14CustAF_THRES_T */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)8>(int, int, int, CustAF_THRES_T const**) */
int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE8EEiiiiPPK14CustAF_THRES_T(void);

/* Symbol: _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)6>() */
int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN17PD_OV12A10MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_OV12A10MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN17PD_OV12A10MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)0>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE16EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)16>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE16EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef;

/* Symbol: PDList_main */
/* Demangled: PDList_main */
extern void* PDList_main;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<char const*>(char const* const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void);

/* Symbol: _ZN11NSCamCustom20custom_GetYuvFLParamEiRNS_14YUV_FL_PARAM_TE */
/* Demangled: NSCamCustom::custom_GetYuvFLParam(int, NSCamCustom::YUV_FL_PARAM_T&) */
int _ZN11NSCamCustom20custom_GetYuvFLParamEiRNS_14YUV_FL_PARAM_TE(void);

/* Symbol: pAK7371AF_MAIN2_getDefaultData */
/* Demangled: pAK7371AF_MAIN2_getDefaultData */
extern void* pAK7371AF_MAIN2_getDefaultData;

/* Symbol: _ZN16PD_IMX362MIPIRAWD1Ev */
/* Demangled: PD_IMX362MIPIRAW::~PD_IMX362MIPIRAW() */
int _ZN16PD_IMX362MIPIRAWD1Ev(void);

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE4EEPKiv */
/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)4>() */
int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE4EEPKiv(void);

/* Symbol: _Z30cust_getFlashHalTorchDuty_mainPiS_ */
/* Demangled: cust_getFlashHalTorchDuty_main(int*, int*) */
int _Z30cust_getFlashHalTorchDuty_mainPiS_(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj20533ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<20533u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj20533ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAWD0Ev */
/* Demangled: PD_S5K3P8SXMIPIRAW::~PD_S5K3P8SXMIPIRAW() */
int _ZN18PD_S5K3P8SXMIPIRAWD0Ev(void);

/* Symbol: _Z28CUST_ENABLE_VIDEO_AUTO_FLASHv */
/* Demangled: CUST_ENABLE_VIDEO_AUTO_FLASH() */
int _Z28CUST_ENABLE_VIDEO_AUTO_FLASHv(void);

/* Symbol: _Z19resetCycleCtr_Main2v */
/* Demangled: resetCycleCtr_Main2() */
int _Z19resetCycleCtr_Main2v(void);

/* Symbol: gulSensorResol */
/* Demangled: gulSensorResol */
extern void* gulSensorResol;

/* Symbol: _ZTV12CustomPQImpl */
/* Demangled: vtable for CustomPQImpl */
extern void* _ZTV12CustomPQImpl;

/* Symbol: _Z22get_asd_CustomizeData1P19ASD_Customize_PARA1 */
/* Demangled: get_asd_CustomizeData1(ASD_Customize_PARA1*) */
int _Z22get_asd_CustomizeData1P19ASD_Customize_PARA1(void);

/* Symbol: _Z17needControlMmdvfsv */
/* Demangled: needControlMmdvfs() */
int _Z17needControlMmdvfsv(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)6>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z25cust_getFlashMaxIDuty_subiiPiS_ */
/* Demangled: cust_getFlashMaxIDuty_sub(int, int, int*, int*) */
int _Z25cust_getFlashMaxIDuty_subiiPiS_(void);

/* Symbol: _Z30BU64748AF_MAIN2_getDefaultDataPvj */
/* Demangled: BU64748AF_MAIN2_getDefaultData(void*, unsigned int) */
int _Z30BU64748AF_MAIN2_getDefaultDataPvj(void);

/* Symbol: _Z14DoCamCalLensIdPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalLensId(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z14DoCamCalLensIdPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj12609ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<12609u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj12609ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAWD1Ev */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::~PD_S5KGW1OFILMMIPIRAW() */
int _ZN21PD_S5KGW1OFILMMIPIRAWD1Ev(void);

/* Symbol: _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z27LC898217AF_T_getDefaultDataPvj */
/* Demangled: LC898217AF_T_getDefaultData(void*, unsigned int) */
int _Z27LC898217AF_T_getDefaultDataPvj(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE */
/* Demangled: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_All */
extern void* _ZN16PD_IMX338MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE;

/* Symbol: _Z23getWorkPerCycle_Main_M3v */
/* Demangled: getWorkPerCycle_Main_M3() */
int _Z23getWorkPerCycle_Main_M3v(void);

/* Symbol: _Z24getWorkPerCycle_Main2_M6v */
/* Demangled: getWorkPerCycle_Main2_M6() */
int _Z24getWorkPerCycle_Main2_M6v(void);

/* Symbol: _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_S5K3M3MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K3M3MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_S5K3M3MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_S5K3L8MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K3L8MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_S5K3L8MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_S5K2P8MIPIRAWD1Ev */
/* Demangled: PD_S5K2P8MIPIRAW::~PD_S5K2P8MIPIRAW() */
int _ZN16PD_S5K2P8MIPIRAWD1Ev(void);

/* Symbol: _ZN17PD_OV13855MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_OV13855MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN17PD_OV13855MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_IMX362MIPIRAWC2Ev */
/* Demangled: PD_IMX362MIPIRAW::PD_IMX362MIPIRAW() */
int _ZN16PD_IMX362MIPIRAWC2Ev(void);

/* Symbol: uEVInfex */
/* Demangled: uEVInfex */
extern void* uEVInfex;

/* Symbol: _Z13openSoLibraryjj */
/* Demangled: openSoLibrary(unsigned int, unsigned int) */
int _Z13openSoLibraryjj(void);

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAWC1Ev */
/* Demangled: PD_S5K3P8SXMIPIRAW::PD_S5K3P8SXMIPIRAW() */
int _ZN18PD_S5K3P8SXMIPIRAWC1Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Z20getMVHDR3ExpoBufSizev */
/* Demangled: getMVHDR3ExpoBufSize() */
int _Z20getMVHDR3ExpoBufSizev(void);

/* Symbol: _ZN17PD_OV16880MIPIRAW7seprateEiPhiiiPtj */
/* Demangled: PD_OV16880MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
int _ZN17PD_OV16880MIPIRAW7seprateEiPhiiiPtj(void);

/* Symbol: _ZN16PD_IMX398MIPIRAWD2Ev */
/* Demangled: PD_IMX398MIPIRAW::~PD_IMX398MIPIRAW() */
int _ZN16PD_IMX398MIPIRAWD2Ev(void);

/* Symbol: _ZGVZN9NSFeature16SensorInfoIdxMgrILj34907ELj0EE11getInstanceEvE4inst */
/* Demangled: guard variable for NSFeature::SensorInfoIdxMgr<34907u, 0u>::getInstance()::inst */
extern void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj34907ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX258MIPIRAWD2Ev */
/* Demangled: PD_IMX258MIPIRAW::~PD_IMX258MIPIRAW() */
int _ZN16PD_IMX258MIPIRAWD2Ev(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)6>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z32cust_getFlashIMapFunc_main_part2v */
/* Demangled: cust_getFlashIMapFunc_main_part2() */
int _Z32cust_getFlashIMapFunc_main_part2v(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE */
/* Demangled: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair_PDWin_Fix */
extern void* _ZN16PD_IMX519MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE;

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAWC2Ev */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::PD_S5KGW1OFILMMIPIRAW() */
int _ZN21PD_S5KGW1OFILMMIPIRAWC2Ev(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom29is_to_invoke_capture_in_colorERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_capture_in_color(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom29is_to_invoke_capture_in_colorERKNS_13RAWIspCamInfoE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIyEEjRKT_ */
/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__erase_unique<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIyEEjRKT_(void);

/* Symbol: _Z23cust_getFlashITab1_mainPs */
/* Demangled: cust_getFlashITab1_main(short*) */
int _Z23cust_getFlashITab1_mainPs(void);

/* Symbol: _Z38cust_fillDefaultStrobeNVRam_sub2_part2Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_sub2_part2(void*) */
int _Z38cust_fillDefaultStrobeNVRam_sub2_part2Pv(void);

/* Symbol: _Z20DoCamCalPDAFOP586_T1PN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalPDAFOP586_T1(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z20DoCamCalPDAFOP586_T1PN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE */
/* Demangled: PD_IMX519MIPIRAW::m_u4Reg_AdDaPair_PDWin_Flexible_Sz */
extern void* _ZN16PD_IMX519MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE;

/* Symbol: _Z32get_zsd_cap_stored_update_periodv */
/* Demangled: get_zsd_cap_stored_update_period() */
int _Z32get_zsd_cap_stored_update_periodv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJNS_4pairIyS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> >(unsigned long long const&, std::__1::pair<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJNS_4pairIyS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTV21PD_S5KGW1SUNNYMIPIRAW */
/* Demangled: vtable for PD_S5KGW1SUNNYMIPIRAW */
extern void* _ZTV21PD_S5KGW1SUNNYMIPIRAW;

/* Symbol: _ZN16PD_S5K2P8MIPIRAWC2Ev */
/* Demangled: PD_S5K2P8MIPIRAW::PD_S5K2P8MIPIRAW() */
int _ZN16PD_S5K2P8MIPIRAWC2Ev(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_T */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)16>(AF_CONFIG_T const**) */
int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_T(void);

/* Symbol: _Z33cust_fillDefaultStrobeNVRam_main2Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_main2(void*) */
int _Z33cust_fillDefaultStrobeNVRam_main2Pv(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE */
/* Demangled: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair_PDWin_Fix */
extern void* _ZN16PD_IMX338MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE;

/* Symbol: _ZN16PD_IMX519MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T */
/* Demangled: PD_IMX519MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
int _ZN16PD_IMX519MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void);

/* Symbol: _ZTSN8nlohmann6detail11parse_errorE */
/* Demangled: typeinfo name for nlohmann::detail::parse_error */
extern void* _ZTSN8nlohmann6detail11parse_errorE;

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)0>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EE11getInstanceEjE9singleton */
/* Demangled: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)4>::getInstance(unsigned int)::singleton */
extern void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EE11getInstanceEjE9singleton;

/* Symbol: _Z18LensCustomSetIndexj */
/* Demangled: LensCustomSetIndex(unsigned int) */
int _Z18LensCustomSetIndexj(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAWD1Ev */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::~PD_S5KGW1SUNNYMIPIRAW() */
int _ZN21PD_S5KGW1SUNNYMIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_S5K3M3MIPIRAWD2Ev */
/* Demangled: PD_S5K3M3MIPIRAW::~PD_S5K3M3MIPIRAW() */
int _ZN16PD_S5K3M3MIPIRAWD2Ev(void);

/* Symbol: _ZN16PD_S5K2P7MIPIRAWD2Ev */
/* Demangled: PD_S5K2P7MIPIRAW::~PD_S5K2P7MIPIRAW() */
int _ZN16PD_S5K2P7MIPIRAWD2Ev(void);

/* Symbol: _Z11calIsoRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S */
/* Demangled: calIsoRatio(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
int _Z11calIsoRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void);

/* Symbol: _ZN16PD_S5K2L7MIPIRAWD1Ev */
/* Demangled: PD_S5K2L7MIPIRAW::~PD_S5K2L7MIPIRAW() */
int _ZN16PD_S5K2L7MIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_S5K2P8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K2P8MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_S5K2P8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_(void);

/* Symbol: _Z27CUST_ONE_SHOT_AE_BEFORE_TAFv */
/* Demangled: CUST_ONE_SHOT_AE_BEFORE_TAF() */
int _Z27CUST_ONE_SHOT_AE_BEFORE_TAFv(void);

/* Symbol: _ZN11NSCamCustom27custom_GetYuvFlashlightDutyEv */
/* Demangled: NSCamCustom::custom_GetYuvFlashlightDuty() */
int _ZN11NSCamCustom27custom_GetYuvFlashlightDutyEv(void);

/* Symbol: _Z20cust_getPrecapAfModev */
/* Demangled: cust_getPrecapAfMode() */
int _Z20cust_getPrecapAfModev(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom12is_HDRTuningERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::is_HDRTuning(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom12is_HDRTuningERKNS_13RAWIspCamInfoE(void);

/* Symbol: _Z48cust_fillDefaultFlashCalibrationNVRam_sub2_part2Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub2_part2(void*) */
int _Z48cust_fillDefaultFlashCalibrationNVRam_sub2_part2Pv(void);

/* Symbol: _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN5NSCam13ICamCalCustom10sDrvConfigE */
/* Demangled: NSCam::ICamCalCustom::sDrvConfig */
extern void* _ZN5NSCam13ICamCalCustom10sDrvConfigE;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _Z28cust_getFlashProjectPara_subiiP26NVRAM_CAMERA_STROBE_STRUCT */
/* Demangled: cust_getFlashProjectPara_sub(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
int _Z28cust_getFlashProjectPara_subiiP26NVRAM_CAMERA_STROBE_STRUCT(void);

/* Symbol: _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z17DoCamCalPDAFOP576PN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalPDAFOP576(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z17DoCamCalPDAFOP576PN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAWC2Ev */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::PD_S5KGW1SUNNYMIPIRAW() */
int _ZN21PD_S5KGW1SUNNYMIPIRAWC2Ev(void);

/* Symbol: _Z39calculateExpSettingByShutterISOpriorityP21AE_EXP_MANUAL_INPUT_TP23AE_EXP_SETTING_OUTPUT_T */
/* Demangled: calculateExpSettingByShutterISOpriority(AE_EXP_MANUAL_INPUT_T*, AE_EXP_SETTING_OUTPUT_T*) */
int _Z39calculateExpSettingByShutterISOpriorityP21AE_EXP_MANUAL_INPUT_TP23AE_EXP_SETTING_OUTPUT_T(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::find<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_(void);

/* Symbol: _ZN16PD_S5K2L7MIPIRAWC2Ev */
/* Demangled: PD_S5K2L7MIPIRAW::PD_S5K2L7MIPIRAW() */
int _ZN16PD_S5K2L7MIPIRAWC2Ev(void);

/* Symbol: _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE8EEiPPK10AF_PARAM_T */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)8>(AF_PARAM_T const**) */
int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE8EEiPPK10AF_PARAM_T(void);

/* Symbol: _Z14closeSoLibraryjj */
/* Demangled: closeSoLibrary(unsigned int, unsigned int) */
int _Z14closeSoLibraryjj(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX338MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX338MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN11NSYuvTuning27custom_GetYuvFlashlightDutyEi */
/* Demangled: NSYuvTuning::custom_GetYuvFlashlightDuty(int) */
int _ZN11NSYuvTuning27custom_GetYuvFlashlightDutyEi(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)6>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z32cust_fillDefaultStrobeNVRam_sub2Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_sub2(void*) */
int _Z32cust_fillDefaultStrobeNVRam_sub2Pv(void);

/* Symbol: _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj2417ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<2417u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj2417ELj0EE11getInstanceEvE4inst;

/* Symbol: _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z16getShortExpFramev */
/* Demangled: getShortExpFrame() */
int _Z16getShortExpFramev(void);

/* Symbol: _Z21DoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalModuleVersion(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z21DoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)2>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z23DW9718AF_getDefaultDataPvj */
/* Demangled: DW9718AF_getDefaultData(void*, unsigned int) */
int _Z23DW9718AF_getDefaultDataPvj(void);

/* Symbol: _ZN16PD_S5K2L7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K2L7MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_S5K2L7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZN12PDBufMgrOpen18SetCalibrationDataEjPh */
/* Demangled: PDBufMgrOpen::SetCalibrationData(unsigned int, unsigned char*) */
int _ZN12PDBufMgrOpen18SetCalibrationDataEjPh(void);

/* Symbol: _ZN9FSCCustom24getMarcoToInfRatioOffsetEv */
/* Demangled: FSCCustom::getMarcoToInfRatioOffset() */
int _ZN9FSCCustom24getMarcoToInfRatioOffsetEv(void);

/* Symbol: _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISB_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__find_equal<DCMF_CAMERA_OUTPUTS>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, DCMF_CAMERA_OUTPUTS const&) */
int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISB_EERKT_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_ */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void);

/* Symbol: _ZN11NSYuvTuning23custom_GetYuvPreflashAFEi */
/* Demangled: NSYuvTuning::custom_GetYuvPreflashAF(int) */
int _ZN11NSYuvTuning23custom_GetYuvPreflashAFEi(void);

/* Symbol: _Z23OverriderDualCamCalDatai */
/* Demangled: OverriderDualCamCalData(int) */
int _Z23OverriderDualCamCalDatai(void);

/* Symbol: _ZN16PD_S5K2P8MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K2P8MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_S5K2P8MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _Z17getIsPureZSD_DCMFv */
/* Demangled: getIsPureZSD_DCMF() */
int _Z17getIsPureZSD_DCMFv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEEE;

/* Symbol: _Z22getWorkPerCycle_Sub_M5v */
/* Demangled: getWorkPerCycle_Sub_M5() */
int _Z22getWorkPerCycle_Sub_M5v(void);

/* Symbol: _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)8>() */
int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z31cust_getFlashIMapFunc_sub_part2v */
/* Demangled: cust_getFlashIMapFunc_sub_part2() */
int _Z31cust_getFlashIMapFunc_sub_part2v(void);

/* Symbol: _ZN16PD_IMX398MIPIRAWD0Ev */
/* Demangled: PD_IMX398MIPIRAW::~PD_IMX398MIPIRAW() */
int _ZN16PD_IMX398MIPIRAWD0Ev(void);

/* Symbol: _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)2>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z23XiaoMiDoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: XiaoMiDoCamCal_Dump_All(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z23XiaoMiDoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW15ExtractCaliDataEv */
/* Demangled: PD_IMX519MIPIRAW::ExtractCaliData() */
int _ZN16PD_IMX519MIPIRAW15ExtractCaliDataEv(void);

/* Symbol: _ZN16PD_IMX258MIPIRAWD0Ev */
/* Demangled: PD_IMX258MIPIRAW::~PD_IMX258MIPIRAW() */
int _ZN16PD_IMX258MIPIRAWD0Ev(void);

/* Symbol: _ZN16PD_IMX486MIPIRAW7seprateEiPhiiiPtj */
/* Demangled: PD_IMX486MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
int _ZN16PD_IMX486MIPIRAW7seprateEiPhiiiPtj(void);

/* Symbol: _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_T */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)1>(AF_CONFIG_T const**) */
int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_T(void);

/* Symbol: _Z19getWorkPerCycle_Subi */
/* Demangled: getWorkPerCycle_Sub(int) */
int _Z19getWorkPerCycle_Subi(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)2>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom11RGB2YLinearERKNS_15ISP_NVRAM_CCM_TERS1_ */
/* Demangled: NSIspTuning::IspTuningCustom::RGB2YLinear(NSIspTuning::ISP_NVRAM_CCM_T const&, NSIspTuning::ISP_NVRAM_CCM_T&) */
int _ZN11NSIspTuning15IspTuningCustom11RGB2YLinearERKNS_15ISP_NVRAM_CCM_TERS1_(void);

/* Symbol: _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EE11getInstanceEjE9singleton */
/* Demangled: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)1>::getInstance(unsigned int)::singleton */
extern void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EE11getInstanceEjE9singleton;

/* Symbol: _ZTVN5NSCam16CamCalCustomImplE */
/* Demangled: vtable for NSCam::CamCalCustomImpl */
extern void* _ZTVN5NSCam16CamCalCustomImplE;

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj2417ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<2417u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj2417ELj0EEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _Z19CUST_ENABLE_FACE_AEv */
/* Demangled: CUST_ENABLE_FACE_AE() */
int _Z19CUST_ENABLE_FACE_AEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN21PD_S5KGW1SUNNYMIPIRAW11getInstanceEv */
/* Demangled: PD_S5KGW1SUNNYMIPIRAW::getInstance() */
int _ZN21PD_S5KGW1SUNNYMIPIRAW11getInstanceEv(void);

/* Symbol: _ZN16PD_IMX398MIPIRAWC1Ev */
/* Demangled: PD_IMX398MIPIRAW::PD_IMX398MIPIRAW() */
int _ZN16PD_IMX398MIPIRAWC1Ev(void);

/* Symbol: _ZN16PD_S5K3M3MIPIRAWD0Ev */
/* Demangled: PD_S5K3M3MIPIRAW::~PD_S5K3M3MIPIRAW() */
int _ZN16PD_S5K3M3MIPIRAWD0Ev(void);

/* Symbol: _ZN16PD_S5K2P7MIPIRAWD0Ev */
/* Demangled: PD_S5K2P7MIPIRAW::~PD_S5K2P7MIPIRAW() */
int _ZN16PD_S5K2P7MIPIRAWD0Ev(void);

/* Symbol: _Z20getVsTimeOutLimit_nsii */
/* Demangled: getVsTimeOutLimit_ns(int, int) */
int _Z20getVsTimeOutLimit_nsii(void);

/* Symbol: _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE4EEiv */
/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)4>() */
int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE4EEiv(void);

/* Symbol: _Z24DW9800VAF_getDefaultDataPvj */
/* Demangled: DW9800VAF_getDefaultData(void*, unsigned int) */
int _Z24DW9800VAF_getDefaultDataPvj(void);

/* Symbol: _Z14DoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCal2AGain(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z14DoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN18PD_S5K3P8SXMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K3P8SXMIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN18PD_S5K3P8SXMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZN16PD_IMX258MIPIRAWC1Ev */
/* Demangled: PD_IMX258MIPIRAW::PD_IMX258MIPIRAW() */
int _ZN16PD_IMX258MIPIRAWC1Ev(void);

/* Symbol: _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::__push_back_slow_path<LogicalSensorStruct const&>(LogicalSensorStruct const&) */
int _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE0EEiPPK10AF_PARAM_T */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)0>(AF_PARAM_T const**) */
int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE0EEiPPK10AF_PARAM_T(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)5>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z14LensCustomInitj */
/* Demangled: LensCustomInit(unsigned int) */
int _Z14LensCustomInitj(void);

/* Symbol: _ZN5NSCam16CamCalCustomImpl10getCalDataEPj */
/* Demangled: NSCam::CamCalCustomImpl::getCalData(unsigned int*) */
int _ZN5NSCam16CamCalCustomImpl10getCalDataEPj(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX230MIPIRAW::getInstance() */
int _ZN16PD_IMX230MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN16PD_IMX230MIPIRAW16m_u2Reg_AdDaPairE */
/* Demangled: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair */
extern void* _ZN16PD_IMX230MIPIRAW16m_u2Reg_AdDaPairE;

/* Symbol: _Z25get_gesture_CustomizeDataP17GS_Customize_PARA */
/* Demangled: get_gesture_CustomizeData(GS_Customize_PARA*) */
int _Z25get_gesture_CustomizeDataP17GS_Customize_PARA(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj9077ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<9077u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj9077ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX338MIPIRAW15ExtractCaliDataEv */
/* Demangled: PD_IMX338MIPIRAW::ExtractCaliData() */
int _ZN16PD_IMX338MIPIRAW15ExtractCaliDataEv(void);

/* Symbol: _Z28decodeMVHDR3ExpoFLKStatisticPvS_Rj */
/* Demangled: decodeMVHDR3ExpoFLKStatistic(void*, void*, unsigned int&) */
int _Z28decodeMVHDR3ExpoFLKStatisticPvS_Rj(void);

/* Symbol: RatTBL10cm */
/* Demangled: RatTBL10cm */
extern void* RatTBL10cm;

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_ */
/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::vector(std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > const&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_(void);

/* Symbol: _ZN12CustomPQImpl26decidePQEnable_EIS30_VIDEOEj */
/* Demangled: CustomPQImpl::decidePQEnable_EIS30_VIDEO(unsigned int) */
int _ZN12CustomPQImpl26decidePQEnable_EIS30_VIDEOEj(void);

/* Symbol: _Z25ForceEnableFVInFixedFocusi */
/* Demangled: ForceEnableFVInFixedFocus(int) */
int _Z25ForceEnableFVInFixedFocusi(void);

/* Symbol: _Z23getWorkPerCycle_Main_M4v */
/* Demangled: getWorkPerCycle_Main_M4() */
int _Z23getWorkPerCycle_Main_M4v(void);

/* Symbol: _ZTV17PD_OV23850MIPIRAW */
/* Demangled: vtable for PD_OV23850MIPIRAW */
extern void* _ZTV17PD_OV23850MIPIRAW;

/* Symbol: CustomHdrGainArrayGet */
/* Demangled: CustomHdrGainArrayGet */
int CustomHdrGainArrayGet(void);

/* Symbol: PDList_sub2 */
/* Demangled: PDList_sub2 */
extern void* PDList_sub2;

/* Symbol: _ZN16PD_S5K3M3MIPIRAWC1Ev */
/* Demangled: PD_S5K3M3MIPIRAW::PD_S5K3M3MIPIRAW() */
int _ZN16PD_S5K3M3MIPIRAWC1Ev(void);

/* Symbol: _ZN16PD_S5K2P7MIPIRAWC1Ev */
/* Demangled: PD_S5K2P7MIPIRAW::PD_S5K2P7MIPIRAW() */
int _ZN16PD_S5K2P7MIPIRAWC1Ev(void);

/* Symbol: _ZTSN8nlohmann6detail16invalid_iteratorE */
/* Demangled: typeinfo name for nlohmann::detail::invalid_iterator */
extern void* _ZTSN8nlohmann6detail16invalid_iteratorE;

/* Symbol: _Z39cust_fillDefaultStrobeNVRam_main2_part2Pv */
/* Demangled: cust_fillDefaultStrobeNVRam_main2_part2(void*) */
int _Z39cust_fillDefaultStrobeNVRam_main2_part2Pv(void);

/* Symbol: _ZN16PD_IMX499MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX499MIPIRAW::getInstance() */
int _ZN16PD_IMX499MIPIRAW11getInstanceEv(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN16PD_S5K3M2MIPIRAWD1Ev */
/* Demangled: PD_S5K3M2MIPIRAW::~PD_S5K3M2MIPIRAW() */
int _ZN16PD_S5K3M2MIPIRAWD1Ev(void);

/* Symbol: _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE4EERK11AWB_PARAM_Tv */
/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)4>() */
int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE4EERK11AWB_PARAM_Tv(void);

/* Symbol: _Z16cameraCustomInitv */
/* Demangled: cameraCustomInit() */
int _Z16cameraCustomInitv(void);

/* Symbol: _Z25GetCameraFlashDefaultParajjP26NVRAM_CAMERA_STROBE_STRUCT */
/* Demangled: GetCameraFlashDefaultPara(unsigned int, unsigned int, NVRAM_CAMERA_STROBE_STRUCT*) */
int _Z25GetCameraFlashDefaultParajjP26NVRAM_CAMERA_STROBE_STRUCT(void);

/* Symbol: _ZN21PD_S5KGW1OFILMMIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5KGW1OFILMMIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN21PD_S5KGW1OFILMMIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZN17PD_OV13870MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_OV13870MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN17PD_OV13870MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_ */
/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::find<unsigned long long>(unsigned long long const&) const */
int _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_(void);

/* Symbol: _ZN16PD_S5K2P7MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K2P7MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_S5K2P7MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_IMX499MIPIRAWD2Ev */
/* Demangled: PD_IMX499MIPIRAW::~PD_IMX499MIPIRAW() */
int _ZN16PD_IMX499MIPIRAWD2Ev(void);

/* Symbol: _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE1EEiiiiPPK14CustAF_THRES_T */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)1>(int, int, int, CustAF_THRES_T const**) */
int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE1EEiiiiPPK14CustAF_THRES_T(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)2>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)4>() */
int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN16PD_S5K3M3MIPIRAW11getInstanceEv */
/* Demangled: PD_S5K3M3MIPIRAW::getInstance() */
int _ZN16PD_S5K3M3MIPIRAW11getInstanceEv(void);

/* Symbol: _ZN17PD_OV13855MIPIRAWD1Ev */
/* Demangled: PD_OV13855MIPIRAW::~PD_OV13855MIPIRAW() */
int _ZN17PD_OV13855MIPIRAWD1Ev(void);

/* Symbol: _Z25cust_getFlashHalTorchDutyiPiS_ */
/* Demangled: cust_getFlashHalTorchDuty(int, int*, int*) */
int _Z25cust_getFlashHalTorchDutyiPiS_(void);

/* Symbol: _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN8PDBufMgr10separateLREjPhjjPtjP9PD_AREA_T */
/* Demangled: PDBufMgr::separateLR(unsigned int, unsigned char*, unsigned int, unsigned int, unsigned short*, unsigned int, PD_AREA_T*) */
int _ZN8PDBufMgr10separateLREjPhjjPtjP9PD_AREA_T(void);

/* Symbol: _Z17resetCycleCtr_Subv */
/* Demangled: resetCycleCtr_Sub() */
int _Z17resetCycleCtr_Subv(void);

/* Symbol: _ZN11NSYuvTuning41custom_GetYuvFlashlightHighCurrentTimeoutEi */
/* Demangled: NSYuvTuning::custom_GetYuvFlashlightHighCurrentTimeout(int) */
int _ZN11NSYuvTuning41custom_GetYuvFlashlightHighCurrentTimeoutEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAW15GetLRBufferInfoERjS0_S0_ */
/* Demangled: PD_S5K2X8MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16PD_S5K2X8MIPIRAW15GetLRBufferInfoERjS0_S0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EE11getInstanceEjE9singleton */
/* Demangled: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)2>::getInstance(unsigned int)::singleton */
extern void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EE11getInstanceEjE9singleton;

/* Symbol: LomoFilterG2C */
/* Demangled: LomoFilterG2C */
extern void* LomoFilterG2C;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj(void);

/* Symbol: _ZN16PD_S5K3M2MIPIRAWC2Ev */
/* Demangled: PD_S5K3M2MIPIRAW::PD_S5K3M2MIPIRAW() */
int _ZN16PD_S5K3M2MIPIRAWC2Ev(void);

/* Symbol: _ZN12PDBufMgrOpenD1Ev */
/* Demangled: PDBufMgrOpen::~PDBufMgrOpen() */
int _ZN12PDBufMgrOpenD1Ev(void);

/* Symbol: _ZN16PD_IMX486MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_IMX486MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_IMX486MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _Z31is_to_invoke_swnr_interpolationjj */
/* Demangled: is_to_invoke_swnr_interpolation(unsigned int, unsigned int) */
int _Z31is_to_invoke_swnr_interpolationjj(void);

/* Symbol: _ZN9FSCCustom12isEnabledFSCEj */
/* Demangled: FSCCustom::isEnabledFSC(unsigned int) */
int _ZN9FSCCustom12isEnabledFSCEj(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom14refine_CamInfoERNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_CamInfo(NSIspTuning::RAWIspCamInfo&) */
int _ZN11NSIspTuning15IspTuningCustom14refine_CamInfoERNS_13RAWIspCamInfoE(void);

/* Symbol: _Z27cust_getFlashProjectPara_V3iiiP26NVRAM_CAMERA_STROBE_STRUCT */
/* Demangled: cust_getFlashProjectPara_V3(int, int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
int _Z27cust_getFlashProjectPara_V3iiiP26NVRAM_CAMERA_STROBE_STRUCT(void);

/* Symbol: _Z12get_cpu_ctrlN7android11KeyedVectorI11ScenInfoKeyiEERNS_6VectorI12CpuCtrlParamEE */
/* Demangled: get_cpu_ctrl(android::KeyedVector<ScenInfoKey, int>, android::Vector<CpuCtrlParam>&) */
int _Z12get_cpu_ctrlN7android11KeyedVectorI11ScenInfoKeyiEERNS_6VectorI12CpuCtrlParamEE(void);

/* Symbol: _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)4>() */
int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z36CUST_ENABLE_VIDEO_DYNAMIC_FRAME_RATEv */
/* Demangled: CUST_ENABLE_VIDEO_DYNAMIC_FRAME_RATE() */
int _Z36CUST_ENABLE_VIDEO_DYNAMIC_FRAME_RATEv(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)3>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE4EEiv */
/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)4>() */
int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE4EEiv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_(void);

/* Symbol: _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T4EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)4>() */
int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T4EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: pLC898212XDAF_MONO_getDefaultData */
/* Demangled: pLC898212XDAF_MONO_getDefaultData */
extern void* pLC898212XDAF_MONO_getDefaultData;

/* Symbol: _Z15IsGoldenBinFilePc */
/* Demangled: IsGoldenBinFile(char*) */
int _Z15IsGoldenBinFilePc(void);

/* Symbol: _ZN16PD_IMX338MIPIRAWD1Ev */
/* Demangled: PD_IMX338MIPIRAW::~PD_IMX338MIPIRAW() */
int _ZN16PD_IMX338MIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE */
/* Demangled: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_Cmd */
extern void* _ZN16PD_IMX519MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE;

/* Symbol: _ZN17PD_OV13855MIPIRAWC2Ev */
/* Demangled: PD_OV13855MIPIRAW::PD_OV13855MIPIRAW() */
int _ZN17PD_OV13855MIPIRAWC2Ev(void);

/* Symbol: _ZN16PD_IMX362MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti */
/* Demangled: PD_IMX362MIPIRAW::GetDualPDVCInfo(int, SDUALPDVCINFO_t&, int) */
int _ZN16PD_IMX362MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_(void);

/* Symbol: _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)8>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE4EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)4>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE4EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_ABFERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ABF_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_ABF(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_ABF_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_ABFERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ABF_TE(void);

/* Symbol: _ZN12PDBufMgrOpen12GetPDOHWInfoEiR12SPDOHWINFO_t */
/* Demangled: PDBufMgrOpen::GetPDOHWInfo(int, SPDOHWINFO_t&) */
int _ZN12PDBufMgrOpen12GetPDOHWInfoEiR12SPDOHWINFO_t(void);

/* Symbol: _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE2EEPKiv */
/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)2>() */
int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE2EEPKiv(void);

/* Symbol: _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN12PDBufMgrOpenC2Ev */
/* Demangled: PDBufMgrOpen::PDBufMgrOpen() */
int _ZN12PDBufMgrOpenC2Ev(void);

/* Symbol: _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EEE */
/* Demangled: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EEE;

/* Symbol: _Z24cust_isNeedDoPrecapAF_v2iiiii */
/* Demangled: cust_isNeedDoPrecapAF_v2(int, int, int, int, int) */
int _Z24cust_isNeedDoPrecapAF_v2iiiii(void);

/* Symbol: _ZN16PD_IMX386MIPIRAW10GetPDCalSzEv */
/* Demangled: PD_IMX386MIPIRAW::GetPDCalSz() */
int _ZN16PD_IMX386MIPIRAW10GetPDCalSzEv(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _Z25unlockCustomTuningLibraryjj */
/* Demangled: unlockCustomTuningLibrary(unsigned int, unsigned int) */
int _Z25unlockCustomTuningLibraryjj(void);

/* Symbol: _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)3>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)2>() */
int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZNK11NSIspTuning15IspTuningCustom26evaluate_Shading_CCT_indexERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::evaluate_Shading_CCT_index(NSIspTuning::RAWIspCamInfo const&) const */
int _ZNK11NSIspTuning15IspTuningCustom26evaluate_Shading_CCT_indexERKNS_13RAWIspCamInfoE(void);

/* Symbol: _Z21LensCustomGetInitFuncP30MSDK_LENS_INIT_FUNCTION_STRUCT */
/* Demangled: LensCustomGetInitFunc(MSDK_LENS_INIT_FUNCTION_STRUCT*) */
int _Z21LensCustomGetInitFuncP30MSDK_LENS_INIT_FUNCTION_STRUCT(void);

/* Symbol: _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_IMX338MIPIRAWC2Ev */
/* Demangled: PD_IMX338MIPIRAW::PD_IMX338MIPIRAW() */
int _ZN16PD_IMX338MIPIRAWC2Ev(void);

/* Symbol: _ZTV16PD_IMX338MIPIRAW */
/* Demangled: vtable for PD_IMX338MIPIRAW */
extern void* _ZTV16PD_IMX338MIPIRAW;

/* Symbol: _Z20decodemVHDRStatisticRK17mVHDRInputParam_SR18mVHDROutputParam_S */
/* Demangled: decodemVHDRStatistic(mVHDRInputParam_S const&, mVHDROutputParam_S&) */
int _Z20decodemVHDRStatisticRK17mVHDRInputParam_SR18mVHDROutputParam_S(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev */
/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void);

/* Symbol: _Z23lockCustomTuningLibraryjj */
/* Demangled: lockCustomTuningLibrary(unsigned int, unsigned int) */
int _Z23lockCustomTuningLibraryjj(void);

/* Symbol: _Z27cust_fillDefaultStrobeNVRamiPv */
/* Demangled: cust_fillDefaultStrobeNVRam(int, void*) */
int _Z27cust_fillDefaultStrobeNVRamiPv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_UDMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_UDM_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_UDM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_UDM_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_UDMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_UDM_TE(void);

/* Symbol: _Z29cust_getFlashProjectPara_mainiiP26NVRAM_CAMERA_STROBE_STRUCT */
/* Demangled: cust_getFlashProjectPara_main(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
int _Z29cust_getFlashProjectPara_mainiiP26NVRAM_CAMERA_STROBE_STRUCT(void);

/* Symbol: _Z41cust_fillDefaultFlashCalibrationNVRam_subPv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub(void*) */
int _Z41cust_fillDefaultFlashCalibrationNVRam_subPv(void);

/* Symbol: pBU63169AF_getDefaultData */
/* Demangled: pBU63169AF_getDefaultData */
extern void* pBU63169AF_getDefaultData;

/* Symbol: _Z20DoCamCalPDAFOP586_T0PN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCalPDAFOP586_T0(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z20DoCamCalPDAFOP586_T0PN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _Z22getWorkPerCycle_Sub_M6v */
/* Demangled: getWorkPerCycle_Sub_M6() */
int _Z22getWorkPerCycle_Sub_M6v(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)6>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom26map_AppName_to_MappingInfoEPKcS2_ */
/* Demangled: NSIspTuning::IspTuningCustom::map_AppName_to_MappingInfo(char const*, char const*) */
int _ZN11NSIspTuning15IspTuningCustom26map_AppName_to_MappingInfoEPKcS2_(void);

/* Symbol: _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: pDW9718SAF_getDefaultData */
/* Demangled: pDW9718SAF_getDefaultData */
extern void* pDW9718SAF_getDefaultData;

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj9076ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<9076u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj9076ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN20NvramQueryHelperImpl17queryFeatureNvramERKN16NvramQueryHelper8QueryCfgERPv */
/* Demangled: NvramQueryHelperImpl::queryFeatureNvram(NvramQueryHelper::QueryCfg const&, void*&) */
int _ZN20NvramQueryHelperImpl17queryFeatureNvramERKN16NvramQueryHelper8QueryCfgERPv(void);

/* Symbol: WPE_INPUT_CHANNEL */
/* Demangled: WPE_INPUT_CHANNEL */
extern void* WPE_INPUT_CHANNEL;

/* Symbol: _ZN16PD_IMX386MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX386MIPIRAW::getInstance() */
int _ZN16PD_IMX386MIPIRAW11getInstanceEv(void);

/* Symbol: _Z28getAEThreadVsTimeOutLimit_nsii */
/* Demangled: getAEThreadVsTimeOutLimit_ns(int, int) */
int _Z28getAEThreadVsTimeOutLimit_nsii(void);

/* Symbol: _Z23cust_isDualFlashSupporti */
/* Demangled: cust_isDualFlashSupport(int) */
int _Z23cust_isDualFlashSupporti(void);

/* Symbol: _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::push_back(bool const&) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(void);

/* Symbol: pstSensorInitFunc */
/* Demangled: pstSensorInitFunc */
extern void* pstSensorInitFunc;

/* Symbol: _Z27cust_getFlashFrameRateDelayi */
/* Demangled: cust_getFlashFrameRateDelay(int) */
int _Z27cust_getFlashFrameRateDelayi(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj2418ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<2418u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj2418ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZN16PD_IMX499MIPIRAWD0Ev */
/* Demangled: PD_IMX499MIPIRAW::~PD_IMX499MIPIRAW() */
int _ZN16PD_IMX499MIPIRAWD0Ev(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void);

/* Symbol: _ZN11NSIspTuning15IspTuningCustom9refine_EEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_14ISP_NVRAM_EE_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_EE(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_EE_T&) */
int _ZN11NSIspTuning15IspTuningCustom9refine_EEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_14ISP_NVRAM_EE_TE(void);

/* Symbol: LensInitFunc */
/* Demangled: LensInitFunc */
extern void* LensInitFunc;

/* Symbol: pLC898217AF_T_getDefaultData */
/* Demangled: pLC898217AF_T_getDefaultData */
extern void* pLC898217AF_T_getDefaultData;

/* Symbol: _Z30Get_DualCameraData_FromPersistPKcPhy */
/* Demangled: Get_DualCameraData_FromPersist(char const*, unsigned char*, unsigned long long) */
int _Z30Get_DualCameraData_FromPersistPKcPhy(void);

/* Symbol: _ZN17PD_OV12A10MIPIRAWD2Ev */
/* Demangled: PD_OV12A10MIPIRAW::~PD_OV12A10MIPIRAW() */
int _ZN17PD_OV12A10MIPIRAWD2Ev(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE */
/* Demangled: PD_IMX519MIPIRAW::m_u4Reg_AdDaPair_PDWin_Fix_Sz */
extern void* _ZN16PD_IMX519MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom30is_to_invoke_isp_interpolationERKNS_13RAWIspCamInfoE */
/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_isp_interpolation(NSIspTuning::RAWIspCamInfo const&) */
int _ZN11NSIspTuning15IspTuningCustom30is_to_invoke_isp_interpolationERKNS_13RAWIspCamInfoE(void);

/* Symbol: _Z43cust_fillDefaultFlashCalibrationNVRam_main3Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main3(void*) */
int _Z43cust_fillDefaultFlashCalibrationNVRam_main3Pv(void);

/* Symbol: _Z18XiaoMiDoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: XiaoMiDoCamCalPDAF(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z18XiaoMiDoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZN17PD_OV12A10MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_OV12A10MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN17PD_OV12A10MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj */
/* Demangled: PD_IMX519MIPIRAW::SetRegAdDaPairBuf(int, int, int, int, int, int, unsigned short*, unsigned int&) */
int _ZN16PD_IMX519MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj(void);

/* Symbol: _ZTV21PD_S5KGW1OFILMMIPIRAW */
/* Demangled: vtable for PD_S5KGW1OFILMMIPIRAW */
extern void* _ZTV21PD_S5KGW1OFILMMIPIRAW;

/* Symbol: _ZTIN8nlohmann6detail16invalid_iteratorE */
/* Demangled: typeinfo for nlohmann::detail::invalid_iterator */
extern void* _ZTIN8nlohmann6detail16invalid_iteratorE;

/* Symbol: _Z10getAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)8>() */
int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE8__rehashEj(void);

/* Symbol: _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _Z31get_3dnr_hw_power_off_thresholdv */
/* Demangled: get_3dnr_hw_power_off_threshold() */
int _Z31get_3dnr_hw_power_off_thresholdv(void);

/* Symbol: _ZTVN8nlohmann6detail12out_of_rangeE */
/* Demangled: vtable for nlohmann::detail::out_of_range */
extern void* _ZTVN8nlohmann6detail12out_of_rangeE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: _ZN16PD_IMX499MIPIRAWC1Ev */
/* Demangled: PD_IMX499MIPIRAW::PD_IMX499MIPIRAW() */
int _ZN16PD_IMX499MIPIRAWC1Ev(void);

/* Symbol: _Z33get_3dnr_iso_enable_threshold_lowv */
/* Demangled: get_3dnr_iso_enable_threshold_low() */
int _Z33get_3dnr_iso_enable_threshold_lowv(void);

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj9076ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<9076u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9076ELj0EEE;

/* Symbol: CustomHdrMatchPointThreshold */
/* Demangled: CustomHdrMatchPointThreshold */
int CustomHdrMatchPointThreshold(void);

/* Symbol: _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE8EEiPPK10AF_PARAM_TE9g_AFparam */
/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)8>(AF_PARAM_T const**)::g_AFparam */
extern void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE8EEiPPK10AF_PARAM_TE9g_AFparam;

/* Symbol: _Z23getWorkPerCycle_Main_M5v */
/* Demangled: getWorkPerCycle_Main_M5() */
int _Z23getWorkPerCycle_Main_M5v(void);

/* Symbol: pBU6429AF_getDefaultData */
/* Demangled: pBU6429AF_getDefaultData */
extern void* pBU6429AF_getDefaultData;

/* Symbol: _ZN16PD_IMX386MIPIRAW16m_u2Reg_AdDaPairE */
/* Demangled: PD_IMX386MIPIRAW::m_u2Reg_AdDaPair */
extern void* _ZN16PD_IMX386MIPIRAW16m_u2Reg_AdDaPairE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void);

/* Symbol: _Z43cust_getFlashQuick2CalibrationExp_sub_part2PiS_S_ */
/* Demangled: cust_getFlashQuick2CalibrationExp_sub_part2(int*, int*, int*) */
int _Z43cust_getFlashQuick2CalibrationExp_sub_part2PiS_S_(void);

/* Symbol: _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: getHDRExpSetting */
/* Demangled: getHDRExpSetting */
int getHDRExpSetting(void);

/* Symbol: _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EE11getInstanceEjE9singleton */
/* Demangled: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)8>::getInstance(unsigned int)::singleton */
extern void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EE11getInstanceEjE9singleton;

/* Symbol: _ZN17PD_OV12A10MIPIRAW7seprateEiPhiiiPtj */
/* Demangled: PD_OV12A10MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
int _ZN17PD_OV12A10MIPIRAW7seprateEiPhiiiPtj(void);

/* Symbol: _ZN16PD_IMX486MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_IMX486MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_IMX486MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _ZNK11NSIspTuning15IspTuningCustom15remap_ISO_valueEj */
/* Demangled: NSIspTuning::IspTuningCustom::remap_ISO_value(unsigned int) const */
int _ZNK11NSIspTuning15IspTuningCustom15remap_ISO_valueEj(void);

/* Symbol: _Z19DoCamCal2AGainOP576PN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCal2AGainOP576(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z19DoCamCal2AGainOP576PN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _Z10getAFParamiPPK10AF_PARAM_T */
/* Demangled: getAFParam(int, AF_PARAM_T const**) */
int _Z10getAFParamiPPK10AF_PARAM_T(void);

/* Symbol: _ZN12PDBufMgrOpen11sendCommandEjPvS0_S0_S0_ */
/* Demangled: PDBufMgrOpen::sendCommand(unsigned int, void*, void*, void*, void*) */
int _ZN12PDBufMgrOpen11sendCommandEjPvS0_S0_S0_(void);

/* Symbol: _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE2EERK11AWB_PARAM_Tv */
/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)2>() */
int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE2EERK11AWB_PARAM_Tv(void);

/* Symbol: _Z20cust_getMaxAttachNumv */
/* Demangled: cust_getMaxAttachNum() */
int _Z20cust_getMaxAttachNumv(void);

/* Symbol: _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE */
/* Demangled: std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::destroy(std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*) */
int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE(void);

/* Symbol: _ZTVN8nlohmann6detail16invalid_iteratorE */
/* Demangled: vtable for nlohmann::detail::invalid_iterator */
extern void* _ZTVN8nlohmann6detail16invalid_iteratorE;

/* Symbol: _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE4EEiiiiPPK14CustAF_THRES_T */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)4>(int, int, int, CustAF_THRES_T const**) */
int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE4EEiiiiPPK14CustAF_THRES_T(void);

/* Symbol: _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE16EEiv */
/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)16>() */
int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE16EEiv(void);

/* Symbol: _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T3EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)3>() */
int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T3EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)16>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z15DoCamCal2AGainQPN5NSCam13ICamCalHelperEjjPj */
/* Demangled: DoCamCal2AGainQ(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
int _Z15DoCamCal2AGainQPN5NSCam13ICamCalHelperEjjPj(void);

/* Symbol: _ZZN9NSFeature16SensorInfoIdxMgrILj9078ELj0EE11getInstanceEvE4inst */
/* Demangled: NSFeature::SensorInfoIdxMgr<9078u, 0u>::getInstance()::inst */
extern void* _ZZN9NSFeature16SensorInfoIdxMgrILj9078ELj0EE11getInstanceEvE4inst;

/* Symbol: _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE8EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef */
/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)8>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE8EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef;

/* Symbol: _ZN11NSIspTuning15IspTuningCustom10refine_BOKERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_BOK_TE */
/* Demangled: NSIspTuning::IspTuningCustom::refine_BOK(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BOK_T&) */
int _ZN11NSIspTuning15IspTuningCustom10refine_BOKERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_BOK_TE(void);

/* Symbol: _Z47cust_fillDefaultFlashCalibrationNVRam_sub_part2Pv */
/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub_part2(void*) */
int _Z47cust_fillDefaultFlashCalibrationNVRam_sub_part2Pv(void);

/* Symbol: _ZN16PD_IMX338MIPIRAW18GetPDInfo2HybridAFEiPi */
/* Demangled: PD_IMX338MIPIRAW::GetPDInfo2HybridAF(int, int*) */
int _ZN16PD_IMX338MIPIRAW18GetPDInfo2HybridAFEiPi(void);

/* Symbol: _ZN17PD_OV16880MIPIRAWD1Ev */
/* Demangled: PD_OV16880MIPIRAW::~PD_OV16880MIPIRAW() */
int _ZN17PD_OV16880MIPIRAWD1Ev(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)5>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: pFP5516AF_getDefaultData */
/* Demangled: pFP5516AF_getDefaultData */
extern void* pFP5516AF_getDefaultData;

/* Symbol: pLC898212XDAF_getDefaultData */
/* Demangled: pLC898212XDAF_getDefaultData */
extern void* pLC898212XDAF_getDefaultData;

/* Symbol: LensList_main2 */
/* Demangled: LensList_main2 */
extern void* LensList_main2;

/* Symbol: _ZN12PDBufMgrOpen10SetDataBufEjPhRj */
/* Demangled: PDBufMgrOpen::SetDataBuf(unsigned int, unsigned char*, unsigned int&) */
int _ZN12PDBufMgrOpen10SetDataBufEjPhRj(void);

/* Symbol: LensList_main3 */
/* Demangled: LensList_main3 */
extern void* LensList_main3;

/* Symbol: _ZTVN9NSFeature16SensorInfoIdxMgrILj9482ELj0EEE */
/* Demangled: vtable for NSFeature::SensorInfoIdxMgr<9482u, 0u> */
extern void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9482ELj0EEE;

/* Symbol: _ZN16PD_S5K2P7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T */
/* Demangled: PD_S5K2P7MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
int _ZN16PD_S5K2P7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void);

/* Symbol: _Z17get_capture_nr_thjjiPiS_ */
/* Demangled: get_capture_nr_th(unsigned int, unsigned int, int, int*, int*) */
int _Z17get_capture_nr_thjjiPiS_(void);

/* Symbol: _Z17checkSendCallback24CHECK_AF_CALLBACK_INFO_t */
/* Demangled: checkSendCallback(CHECK_AF_CALLBACK_INFO_t) */
int _Z17checkSendCallback24CHECK_AF_CALLBACK_INFO_t(void);

/* Symbol: _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)2>() */
int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN11NSCamCustom18get_atv_disp_delayEi */
/* Demangled: NSCamCustom::get_atv_disp_delay(int) */
int _ZN11NSCamCustom18get_atv_disp_delayEi(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW15GetPDWinSettingEPvS0_S0_ */
/* Demangled: PD_IMX519MIPIRAW::GetPDWinSetting(void*, void*, void*) */
int _ZN16PD_IMX519MIPIRAW15GetPDWinSettingEPvS0_S0_(void);

/* Symbol: _Z15getCustomPqImplv */
/* Demangled: getCustomPqImpl() */
int _Z15getCustomPqImplv(void);

/* Symbol: _Z11Scenario4AERK13ScenarioParam */
/* Demangled: Scenario4AE(ScenarioParam const&) */
int _Z11Scenario4AERK13ScenarioParam(void);

/* Symbol: Lomo_cb_param */
/* Demangled: Lomo_cb_param */
extern void* Lomo_cb_param;

/* Symbol: pDW9800VAF_getDefaultData */
/* Demangled: pDW9800VAF_getDefaultData */
extern void* pDW9800VAF_getDefaultData;

/* Symbol: _ZN17PD_OV12A10MIPIRAWD0Ev */
/* Demangled: PD_OV12A10MIPIRAW::~PD_OV12A10MIPIRAW() */
int _ZN17PD_OV12A10MIPIRAWD0Ev(void);

/* Symbol: _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_T */
/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)2>(AF_CONFIG_T const**) */
int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_T(void);

/* Symbol: _Z27cust_getVideoFlashModeStyleii */
/* Demangled: cust_getVideoFlashModeStyle(int, int) */
int _Z27cust_getVideoFlashModeStyleii(void);

/* Symbol: _ZN17PD_OV16880MIPIRAWC2Ev */
/* Demangled: PD_OV16880MIPIRAW::PD_OV16880MIPIRAW() */
int _ZN17PD_OV16880MIPIRAWC2Ev(void);

/* Symbol: _ZN17PD_OV13870MIPIRAW11getInstanceEv */
/* Demangled: PD_OV13870MIPIRAW::getInstance() */
int _ZN17PD_OV13870MIPIRAW11getInstanceEv(void);

/* Symbol: _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)8>() */
int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN16PD_S5K3M2MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K3M2MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_S5K3M2MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _Z20CUST_ENABLE_FACE_AWBv */
/* Demangled: CUST_ENABLE_FACE_AWB() */
int _Z20CUST_ENABLE_FACE_AWBv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj(void);

/* Symbol: _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN5NSCam16CamCalCustomImpl10hasCalDataEjj */
/* Demangled: NSCam::CamCalCustomImpl::hasCalData(unsigned int, unsigned int) */
int _ZN5NSCam16CamCalCustomImpl10hasCalDataEjj(void);

/* Symbol: _ZN16PD_S5K2L7MIPIRAW9IsSupportER12SPDProfile_t */
/* Demangled: PD_S5K2L7MIPIRAW::IsSupport(SPDProfile_t&) */
int _ZN16PD_S5K2L7MIPIRAW9IsSupportER12SPDProfile_t(void);

/* Symbol: _ZN16PD_S5K2X8MIPIRAWD1Ev */
/* Demangled: PD_S5K2X8MIPIRAW::~PD_S5K2X8MIPIRAW() */
int _ZN16PD_S5K2X8MIPIRAWD1Ev(void);

/* Symbol: _ZN16PD_IMX519MIPIRAW11getInstanceEv */
/* Demangled: PD_IMX519MIPIRAW::getInstance() */
int _ZN16PD_IMX519MIPIRAW11getInstanceEv(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZTSN8nlohmann6detail12out_of_rangeE */
/* Demangled: typeinfo name for nlohmann::detail::out_of_range */
extern void* _ZTSN8nlohmann6detail12out_of_rangeE;

/* Symbol: _Z22cust_isSubFlashSupportv */
/* Demangled: cust_isSubFlashSupport() */
int _Z22cust_isSubFlashSupportv(void);

/* Symbol: _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE */
/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>::string_t&) */
int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE(void);

/* Symbol: _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_TE10g_AFconfig */
/* Demangled: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)2>(AF_CONFIG_T const**)::g_AFconfig */
extern void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_TE10g_AFconfig;

/* Symbol: _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv */
/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void);

/* Symbol: _ZN22PD_IMX586MIPIRAW_TYPE2D1Ev */
/* Demangled: PD_IMX586MIPIRAW_TYPE2::~PD_IMX586MIPIRAW_TYPE2() */
int _ZN22PD_IMX586MIPIRAW_TYPE2D1Ev(void);

/* Symbol: _Z26cust_getIsSpecialLongExpOnv */
/* Demangled: cust_getIsSpecialLongExpOn() */
int _Z26cust_getIsSpecialLongExpOnv(void);

/* Symbol: _Z10getAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv */
/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)4>() */
int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void);

/* Symbol: _ZN17PD_OV12A10MIPIRAWC1Ev */
/* Demangled: PD_OV12A10MIPIRAW::PD_OV12A10MIPIRAW() */
int _ZN17PD_OV12A10MIPIRAWC1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMERACUSTOM_H */
