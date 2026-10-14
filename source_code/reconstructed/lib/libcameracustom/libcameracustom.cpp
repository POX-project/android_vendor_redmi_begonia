/*
 * Reverse-Engineered Source for: libcameracustom.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcameracustom"

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
#include "libcameracustom.h"


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

/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: cust_getFlashIMapFunc_main() */
extern "C" __attribute__((visibility("default"))) int _Z26cust_getFlashIMapFunc_mainv(void) {
    ALOGD("_Z26cust_getFlashIMapFunc_mainv() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: get_asd_CustomizeData2(ASD_Customize_PARA2*) */
extern "C" __attribute__((visibility("default"))) int _Z22get_asd_CustomizeData2P19ASD_Customize_PARA2(void) {
    ALOGD("_Z22get_asd_CustomizeData2P19ASD_Customize_PARA2() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::get_feature_control(NSIspTuning::ESensorDev_T) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning15IspTuningCustom19get_feature_controlENS_12ESensorDev_TE(void) {
    ALOGD("_ZNK11NSIspTuning15IspTuningCustom19get_feature_controlENS_12ESensorDev_TE() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::PD_S5K2X8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<12609u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj12609ELj0EEE = NULL;

/* Demangled: NR3DCustom::isEnabledRSC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NR3DCustom12isEnabledRSCEj(void) {
    ALOGD("_ZN10NR3DCustom12isEnabledRSCEj() called");
    return 0;
}

/* Exported Object: customer_vignette */
extern "C" __attribute__((visibility("default"))) void* customer_vignette = NULL;

/* Demangled: PD_IMX586MIPIRAW_TYPE2::PD_IMX586MIPIRAW_TYPE2() */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE2C2Ev(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE2C2Ev() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: get_performance_level(unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21get_performance_leveljjii(void) {
    ALOGD("_Z21get_performance_leveljjii() called");
    return 0;
}

/* Demangled: getZVHDRExpSetting(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&) */
extern "C" __attribute__((visibility("default"))) int _Z18getZVHDRExpSettingRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_S(void) {
    ALOGD("_Z18getZVHDRExpSettingRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_S() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetFlashlightGain10X(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning27custom_GetFlashlightGain10XEi(void) {
    ALOGD("_ZN11NSYuvTuning27custom_GetFlashlightGain10XEi() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::~PD_IMX386MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::~PD_IMX486MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::IspTuningCustom */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning15IspTuningCustomE = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: PD_IMX586MIPIRAW_TYPE2::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE29IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE29IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE16EEiv(void) {
    ALOGD("_Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE16EEiv() called");
    return 0;
}

/* Exported Object: LomoFilterGGMJni */
extern "C" __attribute__((visibility("default"))) void* LomoFilterGGMJni = NULL;

/* Demangled: compareSensorIdAndModuleId(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z26compareSensorIdAndModuleIdjj(void) {
    ALOGD("_Z26compareSensorIdAndModuleIdjj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_PDC(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BNR_PDC_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_PDCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_PDC_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_PDCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_PDC_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::map_FlashId_to_MappingInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom26map_FlashId_to_MappingInfoEi(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom26map_FlashId_to_MappingInfoEi() called");
    return 0;
}

/* Demangled: FSCCustom::getAfDampTimeOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCCustom19getAfDampTimeOffsetEv(void) {
    ALOGD("_ZN9FSCCustom19getAfDampTimeOffsetEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_Cmd */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX230MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE = NULL;

/* Demangled: PD_IMX486MIPIRAW::PD_IMX486MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: getAFConfig(int, AF_CONFIG_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z11getAFConfigiPPK11AF_CONFIG_T(void) {
    ALOGD("_Z11getAFConfigiPPK11AF_CONFIG_T() called");
    return 0;
}

/* Demangled: CUST_ENABLE_PRECAPTURE_AF() */
extern "C" __attribute__((visibility("default"))) int _Z25CUST_ENABLE_PRECAPTURE_AFv(void) {
    ALOGD("_Z25CUST_ENABLE_PRECAPTURE_AFv() called");
    return 0;
}

/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE4EEiv(void) {
    ALOGD("_Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE4EEiv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_flc(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom16is_to_invoke_flcERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom16is_to_invoke_flcERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Exported Object: Lomo_cr_param */
extern "C" __attribute__((visibility("default"))) void* Lomo_cr_param = NULL;

/* Demangled: cust_fillDefaultStrobeNVRam_main3_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z39cust_fillDefaultStrobeNVRam_main3_part2Pv(void) {
    ALOGD("_Z39cust_fillDefaultStrobeNVRam_main3_part2Pv() called");
    return 0;
}

/* Exported Object: PD_IMX338MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX338MIPIRAW19m_u4Reg_AdDaPair_SzE = NULL;

/* Exported Object: vtable for PD_IMX519MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX519MIPIRAW = NULL;

/* Exported Object: typeinfo name for nlohmann::detail::other_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail11other_errorE = NULL;

/* Demangled: CUST_GET_SYNC3A_AESTABLE_MAGIC() */
extern "C" __attribute__((visibility("default"))) int _Z30CUST_GET_SYNC3A_AESTABLE_MAGICv(void) {
    ALOGD("_Z30CUST_GET_SYNC3A_AESTABLE_MAGICv() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main_M6() */
extern "C" __attribute__((visibility("default"))) int _Z23getWorkPerCycle_Main_M6v(void) {
    ALOGD("_Z23getWorkPerCycle_Main_M6v() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: CustomHdrBottomFRatioGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrBottomFRatioGet(void) {
    ALOGD("CustomHdrBottomFRatioGet() called");
    return 0;
}

/* Demangled: cust_setSpecialLongExpOnOff(long long const&) */
extern "C" __attribute__((visibility("default"))) int _Z27cust_setSpecialLongExpOnOffRKx(void) {
    ALOGD("_Z27cust_setSpecialLongExpOnOffRKx() called");
    return 0;
}

/* Exported Object: vtable for PD_S5K2P8MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_S5K2P8MIPIRAW = NULL;

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::fine_tune_ANR2(NSIspTuning::RAWIspCamInfo const&, NSIspExifDebug::IspExifDebugInfo::IspGmaInfo const&, NSIspExifDebug::IspExifDebugInfo::IspLceInfo const&, NSIspTuning::ISP_NVRAM_ANR2_T const&, NSIspTuning::ISP_NVRAM_ANR2_T const&, NSIspTuning::ISP_NVRAM_ANR2_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom14fine_tune_ANR2ERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_16ISP_NVRAM_ANR2_TESE_RSC_(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom14fine_tune_ANR2ERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_16ISP_NVRAM_ANR2_TESE_RSC_() called");
    return 0;
}

/* Demangled: XiaoMiDoCamCalModuleVersion(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z27XiaoMiDoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z27XiaoMiDoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::map_P2inSize_to_MappingInfo(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom27map_P2inSize_to_MappingInfoERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom27map_P2inSize_to_MappingInfoERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EEE = NULL;

/* Demangled: BU64748AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24BU64748AF_getDefaultDataPvj(void) {
    ALOGD("_Z24BU64748AF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: PD_S5K3P8SXMIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::~PD_IMX519MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: usingMultithreadForPipelineContext() */
extern "C" __attribute__((visibility("default"))) int _Z34usingMultithreadForPipelineContextv(void) {
    ALOGD("_Z34usingMultithreadForPipelineContextv() called");
    return 0;
}

/* Demangled: GetCameraCalData(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z16GetCameraCalDatajPj(void) {
    ALOGD("_Z16GetCameraCalDatajPj() called");
    return 0;
}

/* Demangled: CUST_FACE_AWB_CLEAR_COUNT() */
extern "C" __attribute__((visibility("default"))) int _Z25CUST_FACE_AWB_CLEAR_COUNTv(void) {
    ALOGD("_Z25CUST_FACE_AWB_CLEAR_COUNTv() called");
    return 0;
}

/* Demangled: cust_getFlashITab2_sub_part2(short*) */
extern "C" __attribute__((visibility("default"))) int _Z28cust_getFlashITab2_sub_part2Ps(void) {
    ALOGD("_Z28cust_getFlashITab2_sub_part2Ps() called");
    return 0;
}

/* Demangled: PDBufMgr::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgr15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN8PDBufMgr15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::vector(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEEC2ERKS8_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::fine_tune_ANR(NSIspTuning::RAWIspCamInfo const&, NSIspExifDebug::IspExifDebugInfo::IspGmaInfo const&, NSIspExifDebug::IspExifDebugInfo::IspLceInfo const&, NSIspTuning::ISP_NVRAM_ANR_T const&, NSIspTuning::ISP_NVRAM_ANR_T const&, NSIspTuning::ISP_NVRAM_ANR_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom13fine_tune_ANRERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_15ISP_NVRAM_ANR_TESE_RSC_(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom13fine_tune_ANRERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_15ISP_NVRAM_ANR_TESE_RSC_() called");
    return 0;
}

/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::find<unsigned long long>(unsigned long long const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_(void) {
    ALOGD("_ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_() called");
    return 0;
}

/* Demangled: PD_OV23850MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_S5K3M3MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::sendCommand(unsigned int, void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW11sendCommandEjPvS0_S0_S0_(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW11sendCommandEjPvS0_S0_S0_() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: GetFileSize(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z11GetFileSizePKc(void) {
    ALOGD("_Z11GetFileSizePKc() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::GetPDInfo2HybridAF(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW18GetPDInfo2HybridAFEiPi(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW18GetPDInfo2HybridAFEiPi() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetYuvFlashlightFrameCnt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning31custom_GetYuvFlashlightFrameCntEi(void) {
    ALOGD("_ZN11NSYuvTuning31custom_GetYuvFlashlightFrameCntEi() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_GGM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_GGM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_GGMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_GGM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_GGMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_GGM_TE() called");
    return 0;
}

/* Exported Object: power_2_lshift20_negative */
extern "C" __attribute__((visibility("default"))) void* power_2_lshift20_negative = NULL;

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main3_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z49cust_fillDefaultFlashCalibrationNVRam_main3_part2Pv(void) {
    ALOGD("_Z49cust_fillDefaultFlashCalibrationNVRam_main3_part2Pv() called");
    return 0;
}

/* Demangled: AK7371AF_MAIN2_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29AK7371AF_MAIN2_getDefaultDataPvj(void) {
    ALOGD("_Z29AK7371AF_MAIN2_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEj() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main2_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z49cust_fillDefaultFlashCalibrationNVRam_main2_part2Pv(void) {
    ALOGD("_Z49cust_fillDefaultFlashCalibrationNVRam_main2_part2Pv() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::~PD_IMX386MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: get_fd_CustomizeData(FD_Customize_PARA*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_fd_CustomizeDataP17FD_Customize_PARA(void) {
    ALOGD("_Z20get_fd_CustomizeDataP17FD_Customize_PARA() called");
    return 0;
}

/* Demangled: getIVHDRExpSetting(IVHDRExpSettingInputParam_S const&, IVHDRExpSettingOutputParam_S&) */
extern "C" __attribute__((visibility("default"))) int _Z18getIVHDRExpSettingRK27IVHDRExpSettingInputParam_SR28IVHDRExpSettingOutputParam_S(void) {
    ALOGD("_Z18getIVHDRExpSettingRK27IVHDRExpSettingInputParam_SR28IVHDRExpSettingOutputParam_S() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE() called");
    return 0;
}

/* Demangled: PD_OV23850MIPIRAW::~PD_OV23850MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAWD2Ev(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::__swap_out_circular_buffer(std::__1::__split_buffer<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: NSCamCustom::get_atv_input_data() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom18get_atv_input_dataEv(void) {
    ALOGD("_ZN11NSCamCustom18get_atv_input_dataEv() called");
    return 0;
}

/* Demangled: cust_getFlashIMapFunc_sub() */
extern "C" __attribute__((visibility("default"))) int _Z25cust_getFlashIMapFunc_subv(void) {
    ALOGD("_Z25cust_getFlashIMapFunc_subv() called");
    return 0;
}

/* Demangled: CustomHdrUseIspGamma */
extern "C" __attribute__((visibility("default"))) int CustomHdrUseIspGamma(void) {
    ALOGD("CustomHdrUseIspGamma() called");
    return 0;
}

/* Demangled: getIsCameraCallback() */
extern "C" __attribute__((visibility("default"))) int _Z19getIsCameraCallbackv(void) {
    ALOGD("_Z19getIsCameraCallbackv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__117bad_function_callE = NULL;

/* Exported Object: int _getAFParam<(NSIspTuning::ESensorDev_T)0>(AF_PARAM_T const**)::g_AFparam */
extern "C" __attribute__((visibility("default"))) void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE0EEiPPK10AF_PARAM_TE9g_AFparam = NULL;

/* Exported Object: pBU64748AF_MAIN2_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pBU64748AF_MAIN2_getDefaultData = NULL;

/* Demangled: getDCMFCaptureCnt() */
extern "C" __attribute__((visibility("default"))) int _Z17getDCMFCaptureCntv(void) {
    ALOGD("_Z17getDCMFCaptureCntv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Exported Object: int _getAFConfig<(NSIspTuning::ESensorDev_T)4>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: getAEManualPline(MPParam const&, eAETableID&, eAETableID&) */
extern "C" __attribute__((visibility("default"))) int _Z16getAEManualPlineRK7MPParamR10eAETableIDS3_(void) {
    ALOGD("_Z16getAEManualPlineRK7MPParamR10eAETableIDS3_() called");
    return 0;
}

/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE8EEiv(void) {
    ALOGD("_Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE8EEiv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_fine_tune(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom22is_to_invoke_fine_tuneENS_12ESensorDev_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom22is_to_invoke_fine_tuneENS_12ESensorDev_TE() called");
    return 0;
}

/* Demangled: cust_getFlashITab2(int, short*) */
extern "C" __attribute__((visibility("default"))) int _Z18cust_getFlashITab2iPs(void) {
    ALOGD("_Z18cust_getFlashITab2iPs() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<12610u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj12610ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: CUST_CAF_WINDOW_FOLLOW_TAF_WINDOW() */
extern "C" __attribute__((visibility("default"))) int _Z33CUST_CAF_WINDOW_FOLLOW_TAF_WINDOWv(void) {
    ALOGD("_Z33CUST_CAF_WINDOW_FOLLOW_TAF_WINDOWv() called");
    return 0;
}

/* Demangled: DoCamCalSingleLsc(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z17DoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z17DoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PDBufMgr::~PDBufMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgrD2Ev(void) {
    ALOGD("_ZN8PDBufMgrD2Ev() called");
    return 0;
}

/* Exported Object: PD_IMX338MIPIRAW::m_u4Reg_AdDaPair_PDWin_Fix_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX338MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE = NULL;

/* Demangled: PD_OV13870MIPIRAW::~PD_OV13870MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAWD1Ev(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_NR1(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BNR_NR1_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_NR1ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_NR1_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_NR1ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_NR1_TE() called");
    return 0;
}

/* Exported Object: LomoFilterGGM */
extern "C" __attribute__((visibility("default"))) void* LomoFilterGGM = NULL;

/* Demangled: PD_IMX386MIPIRAW::PD_IMX386MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_BurstFlashlightGain10X() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom29custom_BurstFlashlightGain10XEv(void) {
    ALOGD("_ZN11NSCamCustom29custom_BurstFlashlightGain10XEv() called");
    return 0;
}

/* Demangled: Get_Camera_FuseId_FromPersist(char const*, unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z29Get_Camera_FuseId_FromPersistPKcPPhPj(void) {
    ALOGD("_Z29Get_Camera_FuseId_FromPersistPKcPPhPj() called");
    return 0;
}

/* Demangled: CustomHdrProlongedVdGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrProlongedVdGet(void) {
    ALOGD("CustomHdrProlongedVdGet() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetYuvFlashlightHighCurrentDuty(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning38custom_GetYuvFlashlightHighCurrentDutyEi(void) {
    ALOGD("_ZN11NSYuvTuning38custom_GetYuvFlashlightHighCurrentDutyEi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: PD_S5K3P8SXMIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::GetPDCalSz() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW10GetPDCalSzEv(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW10GetPDCalSzEv() called");
    return 0;
}

/* Demangled: CustomHdrThLowGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrThLowGet(void) {
    ALOGD("CustomHdrThLowGet() called");
    return 0;
}

/* Exported Object: int _getAFParam<(NSIspTuning::ESensorDev_T)4>(AF_PARAM_T const**)::g_AFparam */
extern "C" __attribute__((visibility("default"))) void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE4EEiPPK10AF_PARAM_TE9g_AFparam = NULL;

/* Demangled: PD_S5KGW1OFILMMIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::PD_OV13870MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAWC2Ev(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEEC2EjjS8_() called");
    return 0;
}

/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::find<unsigned long long>(unsigned long long const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_(void) {
    ALOGD("_ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_() called");
    return 0;
}

/* Demangled: cust_getFlashProjectPara_main_part2(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z35cust_getFlashProjectPara_main_part2iiP26NVRAM_CAMERA_STROBE_STRUCT(void) {
    ALOGD("_Z35cust_getFlashProjectPara_main_part2iiP26NVRAM_CAMERA_STROBE_STRUCT() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::~PD_IMX519MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::ExtractPDCL() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW11ExtractPDCLEv(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW11ExtractPDCLEv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EE(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_isp_edge, NSIspTuning::ISP_NVRAM_EE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom14userSetting_EEERKNS_13RAWIspCamInfoE49mtk_camera_metadata_enum_android_control_isp_edgeRNS_14ISP_NVRAM_EE_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom14userSetting_EEERKNS_13RAWIspCamInfoE49mtk_camera_metadata_enum_android_control_isp_edgeRNS_14ISP_NVRAM_EE_TE() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<34907u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj34907ELj0EEE = NULL;

/* Demangled: PD_IMX230MIPIRAW::GetPDInfo2HybridAF(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW18GetPDInfo2HybridAFEiPi(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW18GetPDInfo2HybridAFEiPi() called");
    return 0;
}

/* Exported Object: PD_IMX230MIPIRAW::m_u4Reg_AdDaPair_PDWin_Flexible_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX230MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE = NULL;

/* Demangled: PD_IMX230MIPIRAW::~PD_IMX230MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: CustomPQImpl::decidePQEnable_EIS30_VIDEO_4k(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CustomPQImpl29decidePQEnable_EIS30_VIDEO_4kEj(void) {
    ALOGD("_ZN12CustomPQImpl29decidePQEnable_EIS30_VIDEO_4kEj() called");
    return 0;
}

/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)4>(AF_CONFIG_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_T(void) {
    ALOGD("_Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_T() called");
    return 0;
}

/* Demangled: GetCameraBpciDefaultTbl(unsigned int, unsigned int, CAMERA_BPCI_STRUCT_t*) */
extern "C" __attribute__((visibility("default"))) int _Z23GetCameraBpciDefaultTbljjP20CAMERA_BPCI_STRUCT_t(void) {
    ALOGD("_Z23GetCameraBpciDefaultTbljjP20CAMERA_BPCI_STRUCT_t() called");
    return 0;
}

/* Demangled: cust_getFlashQuick2CalibrationExp(int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z33cust_getFlashQuick2CalibrationExpiPiS_S_(void) {
    ALOGD("_Z33cust_getFlashQuick2CalibrationExpiPiS_S_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: pBU64748AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pBU64748AF_getDefaultData = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: EEPROMInit */
extern "C" __attribute__((visibility("default"))) int EEPROMInit(void) {
    ALOGD("EEPROMInit() called");
    return 0;
}

/* Exported Object: PD_IMX230MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX230MIPIRAW19m_u4Reg_AdDaPair_SzE = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)3>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: GetDBSGNP(int) */
extern "C" __attribute__((visibility("default"))) int _Z9GetDBSGNPi(void) {
    ALOGD("_Z9GetDBSGNPi() called");
    return 0;
}

/* Demangled: isEnableSL2(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11isEnableSL2j(void) {
    ALOGD("_Z11isEnableSL2j() called");
    return 0;
}

/* Exported Object: vtable for PD_IMX258MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX258MIPIRAW = NULL;

/* Demangled: PD_S5K3L8MIPIRAW::~PD_S5K3L8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAWD2Ev() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail11parse_errorE = NULL;

/* Demangled: NSCamCustom::custom_GetYuvFlashlightStep() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom27custom_GetYuvFlashlightStepEv(void) {
    ALOGD("_ZN11NSCamCustom27custom_GetYuvFlashlightStepEv() called");
    return 0;
}

/* Demangled: DoCamCalLensIdOP(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z16DoCamCalLensIdOPPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z16DoCamCalLensIdOPPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::PD_IMX519MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Exported Object: PD_IMX230MIPIRAW::m_u4Reg_AdDaPair_PDWin_Fix_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX230MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE = NULL;

/* Demangled: PD_S5K2P8MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: get_LogicalDevice_CustomizeData() */
extern "C" __attribute__((visibility("default"))) int _Z31get_LogicalDevice_CustomizeDatav(void) {
    ALOGD("_Z31get_LogicalDevice_CustomizeDatav() called");
    return 0;
}

/* Demangled: resetCycleCtr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13resetCycleCtrj(void) {
    ALOGD("_Z13resetCycleCtrj() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::is_ZHDRTuning(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom13is_ZHDRTuningERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom13is_ZHDRTuningERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T() called");
    return 0;
}

/* Exported Object: vtable for PD_OV12A10MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV17PD_OV12A10MIPIRAW = NULL;

/* Demangled: get_zsd_cap_stored_delay_toleration_ms() */
extern "C" __attribute__((visibility("default"))) int _Z38get_zsd_cap_stored_delay_toleration_msv(void) {
    ALOGD("_Z38get_zsd_cap_stored_delay_toleration_msv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE8EEiv(void) {
    ALOGD("_Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE8EEiv() called");
    return 0;
}

/* Exported Object: LomoFilterG2CDefault */
extern "C" __attribute__((visibility("default"))) void* LomoFilterG2CDefault = NULL;

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE = NULL;

/* Demangled: CustomPQImpl::decidePQEnable_EIS12_VIDEO_4k(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CustomPQImpl29decidePQEnable_EIS12_VIDEO_4kEj(void) {
    ALOGD("_ZN12CustomPQImpl29decidePQEnable_EIS12_VIDEO_4kEj() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z10getAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z10getAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: vtable for PD_S5K3M2MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_S5K3M2MIPIRAW = NULL;

/* Demangled: PD_OV23850MIPIRAW::~PD_OV23850MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAWD0Ev(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: GetPDBuf_Type(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13GetPDBuf_Typejj(void) {
    ALOGD("_Z13GetPDBuf_Typejj() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::separate(int, unsigned char*, int, int, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAW8separateEiPhiiPtj(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAW8separateEiPhiiPtj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_() called");
    return 0;
}

/* Demangled: CustomPQImpl::decidePQEnable_Normal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CustomPQImpl21decidePQEnable_NormalEj(void) {
    ALOGD("_ZN12CustomPQImpl21decidePQEnable_NormalEj() called");
    return 0;
}

/* Demangled: DoCamCalPartNumber(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z18DoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z18DoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Exported Object: int _getAFConfig<(NSIspTuning::ESensorDev_T)1>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: DW9718SAF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24DW9718SAF_getDefaultDataPvj(void) {
    ALOGD("_Z24DW9718SAF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: DoCamCal2AGainOP519(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19DoCamCal2AGainOP519PN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z19DoCamCal2AGainOP519PN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_IMX499MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: supportDramControl() */
extern "C" __attribute__((visibility("default"))) int _Z18supportDramControlv(void) {
    ALOGD("_Z18supportDramControlv() called");
    return 0;
}

/* Exported Object: RatTBL9cm */
extern "C" __attribute__((visibility("default"))) void* RatTBL9cm = NULL;

/* Demangled: NSYuvTuning::custom_GetYuvFlashlightStep(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning27custom_GetYuvFlashlightStepEi(void) {
    ALOGD("_ZN11NSYuvTuning27custom_GetYuvFlashlightStepEi() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: int _getAFConfig<(NSIspTuning::ESensorDev_T)16>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: cust_initSpecialLongExpOnOff(int const&) */
extern "C" __attribute__((visibility("default"))) int _Z28cust_initSpecialLongExpOnOffRKi(void) {
    ALOGD("_Z28cust_initSpecialLongExpOnOffRKi() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PDBufMgr::~PDBufMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgrD0Ev(void) {
    ALOGD("_ZN8PDBufMgrD0Ev() called");
    return 0;
}

/* Demangled: is_vhdr_profile(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z15is_vhdr_profileh(void) {
    ALOGD("_Z15is_vhdr_profileh() called");
    return 0;
}

/* Demangled: cust_getFlashProjectPara_V2(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z27cust_getFlashProjectPara_V2iiP26NVRAM_CAMERA_STROBE_STRUCT(void) {
    ALOGD("_Z27cust_getFlashProjectPara_V2iiP26NVRAM_CAMERA_STROBE_STRUCT() called");
    return 0;
}

/* Exported Object: pLC898217AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pLC898217AF_getDefaultData = NULL;

/* Demangled: PD_IMX586MIPIRAW_TYPE2::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE211getInstanceEv(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE211getInstanceEv() called");
    return 0;
}

/* Demangled: PD_OV23850MIPIRAW::PD_OV23850MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAWC1Ev(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: FP5516AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23FP5516AF_getDefaultDataPvj(void) {
    ALOGD("_Z23FP5516AF_getDefaultDataPvj() called");
    return 0;
}

/* Exported Object: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX338MIPIRAW16m_u2Reg_AdDaPairE = NULL;

/* Exported Object: vtable for NvramQueryHelperImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV20NvramQueryHelperImpl = NULL;

/* Demangled: getMVHDR3ExpoFLKBufSize() */
extern "C" __attribute__((visibility("default"))) int _Z23getMVHDR3ExpoFLKBufSizev(void) {
    ALOGD("_Z23getMVHDR3ExpoFLKBufSizev() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: DW9714AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23DW9714AF_getDefaultDataPvj(void) {
    ALOGD("_Z23DW9714AF_getDefaultDataPvj() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<9077u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9077ELj0EEE = NULL;

/* Demangled: PD_IMX519MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t() called");
    return 0;
}

/* Demangled: Job3AName(E_Job_3A) */
extern "C" __attribute__((visibility("default"))) int _Z9Job3AName8E_Job_3A(void) {
    ALOGD("_Z9Job3AName8E_Job_3A() called");
    return 0;
}

/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE8EEPKiv(void) {
    ALOGD("_Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE8EEPKiv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::RGB2WMatrix(unsigned int const*, AWB_GAIN_T const&, NSIspTuning::ISP_NVRAM_CCM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom11RGB2WMatrixEPKjRK10AWB_GAIN_TRNS_15ISP_NVRAM_CCM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom11RGB2WMatrixEPKjRK10AWB_GAIN_TRNS_15ISP_NVRAM_CCM_TE() called");
    return 0;
}

/* Exported Object: vtable for PDBufMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV8PDBufMgr = NULL;

/* Demangled: PD_IMX362MIPIRAW::~PD_IMX362MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: PD_S5K3P8SXMIPIRAW::~PD_S5K3P8SXMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAWD1Ev(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE2EEiv(void) {
    ALOGD("_Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE2EEiv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: customer_color_cb */
extern "C" __attribute__((visibility("default"))) void* customer_color_cb = NULL;

/* Demangled: NSCam::CamCalCustomImpl::CamCalCustomImpl(NSCam::ICamCalHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16CamCalCustomImplC2EPNS_13ICamCalHelperE(void) {
    ALOGD("_ZN5NSCam16CamCalCustomImplC2EPNS_13ICamCalHelperE() called");
    return 0;
}

/* Demangled: PD_IMX586MIPIRAW_TYPE2::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE218ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE218ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::createInstance(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpen14createInstanceER12SPDProfile_t(void) {
    ALOGD("_ZN12PDBufMgrOpen14createInstanceER12SPDProfile_t() called");
    return 0;
}

/* Demangled: getResetFrameCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18getResetFrameCountj(void) {
    ALOGD("_Z18getResetFrameCountj() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetYuvAfLampSupport(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning26custom_GetYuvAfLampSupportEi(void) {
    ALOGD("_ZN11NSYuvTuning26custom_GetYuvAfLampSupportEi() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::createInstance(NSIspTuning::ESensorDev_T, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom14createInstanceENS_12ESensorDev_TEj(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom14createInstanceENS_12ESensorDev_TEj() called");
    return 0;
}

/* Demangled: cust_getFlashITab2_main(short*) */
extern "C" __attribute__((visibility("default"))) int _Z23cust_getFlashITab2_mainPs(void) {
    ALOGD("_Z23cust_getFlashITab2_mainPs() called");
    return 0;
}

/* Demangled: cust_isNeedAFLamp(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17cust_isNeedAFLampiii(void) {
    ALOGD("_Z17cust_isNeedAFLampiii() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: ModifyCaptureParamByCustom(unsigned int, AE_MODE_CFG_T*, strAEOutput*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TP11strAEOutputj(void) {
    ALOGD("_Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TP11strAEOutputj() called");
    return 0;
}

/* Demangled: PD_S5KGW1OFILMMIPIRAW::~PD_S5KGW1OFILMMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAWD2Ev(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::~PD_IMX230MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAWD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<20533u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj20533ELj0EEE = NULL;

/* Demangled: get_zsd_cap_stored_delay_time_ms() */
extern "C" __attribute__((visibility("default"))) int _Z32get_zsd_cap_stored_delay_time_msv(void) {
    ALOGD("_Z32get_zsd_cap_stored_delay_time_msv() called");
    return 0;
}

/* Demangled: get_Dualzoom_Switch_ratio(int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z25get_Dualzoom_Switch_ratioiiRiS_(void) {
    ALOGD("_Z25get_Dualzoom_Switch_ratioiiRiS_() called");
    return 0;
}

/* Demangled: PD_S5K2P8MIPIRAW::~PD_S5K2P8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)4>(AF_PARAM_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE4EEiPPK10AF_PARAM_T(void) {
    ALOGD("_Z11_getAFParamILN11NSIspTuning12ESensorDev_TE4EEiPPK10AF_PARAM_T() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EEE = NULL;

/* Demangled: cust_getEvCompPara(int&, int&, float*&, float*&, float*&) */
extern "C" __attribute__((visibility("default"))) int _Z18cust_getEvCompParaRiS_RPfS1_S1_(void) {
    ALOGD("_Z18cust_getEvCompParaRiS_RPfS1_S1_() called");
    return 0;
}

/* Demangled: PD_S5K3P8SXMIPIRAW::PD_S5K3P8SXMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAWC2Ev(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::~PD_S5K3L8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)16>(AF_PARAM_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE16EEiPPK10AF_PARAM_T(void) {
    ALOGD("_Z11_getAFParamILN11NSIspTuning12ESensorDev_TE16EEiPPK10AF_PARAM_T() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main2_M1() */
extern "C" __attribute__((visibility("default"))) int _Z24getWorkPerCycle_Main2_M1v(void) {
    ALOGD("_Z24getWorkPerCycle_Main2_M1v() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetFlashlightGain10X() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom27custom_GetFlashlightGain10XEv(void) {
    ALOGD("_ZN11NSCamCustom27custom_GetFlashlightGain10XEv() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<12609u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj12609ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX386MIPIRAW::ExtractPDCL() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW11ExtractPDCLEv(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW11ExtractPDCLEv() called");
    return 0;
}

/* Demangled: PD_S5K2P7MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE26__swap_out_circular_bufferERNS_14__split_bufferISB_RSC_EE() called");
    return 0;
}

/* Exported Object: int _getAFParam<(NSIspTuning::ESensorDev_T)2>(AF_PARAM_T const**)::g_AFparam */
extern "C" __attribute__((visibility("default"))) void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE2EEiPPK10AF_PARAM_TE9g_AFparam = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S3_EEEE() called");
    return 0;
}

/* Demangled: PD_IMX499MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: get_stereo_cam_cpu_frequency(ENUM_STEREO_CAM_FEATURE, ENUM_STEREO_CAM_SCENARIO, std::__1::vector<int, std::__1::allocator<int> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _Z28get_stereo_cam_cpu_frequency23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIORNSt3__16vectorIiNS1_9allocatorIiEEEES6_(void) {
    ALOGD("_Z28get_stereo_cam_cpu_frequency23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIORNSt3__16vectorIiNS1_9allocatorIiEEEES6_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long, unsigned int (*)(int, int, void*)> >(unsigned long long const&, std::__1::pair<unsigned long long, unsigned int (*)(int, int, void*)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJNS_4pairIyS4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJNS_4pairIyS4_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: cust_getFlashMaxIDuty_sub_part2(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z31cust_getFlashMaxIDuty_sub_part2iiPiS_(void) {
    ALOGD("_Z31cust_getFlashMaxIDuty_sub_part2iiPiS_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)6>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<9480u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9480ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX338MIPIRAW::sendCommand(unsigned int, void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW11sendCommandEjPvS0_S0_S0_(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW11sendCommandEjPvS0_S0_S0_() called");
    return 0;
}

/* Exported Object: vtable for PD_S5K2L7MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_S5K2L7MIPIRAW = NULL;

/* Demangled: PD_IMX230MIPIRAW::PD_IMX230MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE1EERK11AWB_PARAM_Tv(void) {
    ALOGD("_Z11getAWBParamILN11NSIspTuning12ESensorDev_TE1EERK11AWB_PARAM_Tv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int> std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__emplace_hint_unique_key_args<unsigned int, std::__1::pair<unsigned int const, debug_exif_module_info> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, unsigned int const&, std::__1::pair<unsigned int const, debug_exif_module_info> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE30__emplace_hint_unique_key_argsIjJRKNS_4pairIKjS2_EEEEENS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEENS_21__tree_const_iteratorIS3_SL_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: CustomHdrTopFBoundGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrTopFBoundGet(void) {
    ALOGD("CustomHdrTopFBoundGet() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: get_3dnr_gmv_threshold(int) */
extern "C" __attribute__((visibility("default"))) int _Z22get_3dnr_gmv_thresholdi(void) {
    ALOGD("_Z22get_3dnr_gmv_thresholdi() called");
    return 0;
}

/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)0>(int, int, int, CustAF_THRES_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE0EEiiiiPPK14CustAF_THRES_T(void) {
    ALOGD("_Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE0EEiiiiPPK14CustAF_THRES_T() called");
    return 0;
}

/* Demangled: CUST_FRAME_COUNT_BYPASS_EXECUTE_FLASH_AFTER_START() */
extern "C" __attribute__((visibility("default"))) int _Z49CUST_FRAME_COUNT_BYPASS_EXECUTE_FLASH_AFTER_STARTv(void) {
    ALOGD("_Z49CUST_FRAME_COUNT_BYPASS_EXECUTE_FLASH_AFTER_STARTv() called");
    return 0;
}

/* Demangled: get3AThreadNiceValue(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20get3AThreadNiceValuej(void) {
    ALOGD("_Z20get3AThreadNiceValuej() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::remap_ISP_ISO_with_LV(ISP_NVRAM_ISO_INTERVAL_STRUCT const&, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom21remap_ISP_ISO_with_LVERK29ISP_NVRAM_ISO_INTERVAL_STRUCTjji(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom21remap_ISP_ISO_with_LVERK29ISP_NVRAM_ISO_INTERVAL_STRUCTjji() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_main3(void*) */
extern "C" __attribute__((visibility("default"))) int _Z33cust_fillDefaultStrobeNVRam_main3Pv(void) {
    ALOGD("_Z33cust_fillDefaultStrobeNVRam_main3Pv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: DoCamCalLayoutCheck(NSCam::ICamCalHelper*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19DoCamCalLayoutCheckPN5NSCam13ICamCalHelperEPj(void) {
    ALOGD("_Z19DoCamCalLayoutCheckPN5NSCam13ICamCalHelperEPj() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::PD_S5K3L8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: NvramQueryHelperImpl::queryIspModuleID(NvramFeatureID, unsigned char&) */
extern "C" __attribute__((visibility("default"))) int _ZN20NvramQueryHelperImpl16queryIspModuleIDE14NvramFeatureIDRh(void) {
    ALOGD("_ZN20NvramQueryHelperImpl16queryIspModuleIDE14NvramFeatureIDRh() called");
    return 0;
}

/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE8EERK11AWB_PARAM_Tv(void) {
    ALOGD("_Z11getAWBParamILN11NSIspTuning12ESensorDev_TE8EERK11AWB_PARAM_Tv() called");
    return 0;
}

/* Demangled: cust_getFlashHalTorchDuty_main_part2(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z36cust_getFlashHalTorchDuty_main_part2PiS_(void) {
    ALOGD("_Z36cust_getFlashHalTorchDuty_main_part2PiS_() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::~PD_S5KGW1SUNNYMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAWD2Ev(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAWD2Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: decodeMVHDR3ExpoStatistic(int, void*, void*, void*, void*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _Z25decodeMVHDR3ExpoStatisticiPvS_S_S_Rj(void) {
    ALOGD("_Z25decodeMVHDR3ExpoStatisticiPvS_S_S_Rj() called");
    return 0;
}

/* Exported Object: DEFAULT_STEREO_SETTING */
extern "C" __attribute__((visibility("default"))) void* DEFAULT_STEREO_SETTING = NULL;

/* Demangled: CustomPQImpl::decidePQEnable_EIS35_VIDEO(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CustomPQImpl26decidePQEnable_EIS35_VIDEOEj(void) {
    ALOGD("_ZN12CustomPQImpl26decidePQEnable_EIS35_VIDEOEj() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE16EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_MIXER3(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_MIXER3_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom13refine_MIXER3ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_18ISP_NVRAM_MIXER3_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom13refine_MIXER3ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_18ISP_NVRAM_MIXER3_TE() called");
    return 0;
}

/* Demangled: GetSensorInitFuncList(MSDK_SENSOR_INIT_FUNCTION_STRUCT**) */
extern "C" __attribute__((visibility("default"))) int _Z21GetSensorInitFuncListPP32MSDK_SENSOR_INIT_FUNCTION_STRUCT(void) {
    ALOGD("_Z21GetSensorInitFuncListPP32MSDK_SENSOR_INIT_FUNCTION_STRUCT() called");
    return 0;
}

/* Demangled: getVendorIndex(int) */
extern "C" __attribute__((visibility("default"))) int _Z14getVendorIndexi(void) {
    ALOGD("_Z14getVendorIndexi() called");
    return 0;
}

/* Demangled: PD_S5K2L7MIPIRAW::~PD_S5K2L7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAWD2Ev() called");
    return 0;
}

/* Exported Object: DEFAULT_VIRTUAL_DEVICE_IDS_MAP */
extern "C" __attribute__((visibility("default"))) void* DEFAULT_VIRTUAL_DEVICE_IDS_MAP = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6rehashEj() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<12610u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj12610ELj0EEE = NULL;

/* Demangled: PD_IMX386MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail9exceptionE = NULL;

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: get_normal_SWNR_ENC_enable_ISO_threshold() */
extern "C" __attribute__((visibility("default"))) int _Z40get_normal_SWNR_ENC_enable_ISO_thresholdv(void) {
    ALOGD("_Z40get_normal_SWNR_ENC_enable_ISO_thresholdv() called");
    return 0;
}

/* Demangled: msdkGetFlickerParaAll(unsigned int, unsigned int, int, FLICKER_CUST_PARA***, int) */
extern "C" __attribute__((visibility("default"))) int _Z21msdkGetFlickerParaAlljjiPPP17FLICKER_CUST_PARAi(void) {
    ALOGD("_Z21msdkGetFlickerParaAlljjiPPP17FLICKER_CUST_PARAi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: XiaoMiDoCamCalSingleLsc(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z23XiaoMiDoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z23XiaoMiDoCamCalSingleLscPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Exported Object: vtable for PD_S5K3P8SXMIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV18PD_S5K3P8SXMIPIRAW = NULL;

/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE2EEiv(void) {
    ALOGD("_Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE2EEiv() called");
    return 0;
}

/* Exported Object: customer_color_cr */
extern "C" __attribute__((visibility("default"))) void* customer_color_cr = NULL;

/* Demangled: cust_getFlashITab1_sub_part2(short*) */
extern "C" __attribute__((visibility("default"))) int _Z28cust_getFlashITab1_sub_part2Ps(void) {
    ALOGD("_Z28cust_getFlashITab1_sub_part2Ps() called");
    return 0;
}

/* Demangled: get_MFB_SWNR_ENC_enable_ISO_threshold() */
extern "C" __attribute__((visibility("default"))) int _Z37get_MFB_SWNR_ENC_enable_ISO_thresholdv(void) {
    ALOGD("_Z37get_MFB_SWNR_ENC_enable_ISO_thresholdv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE6rehashEj() called");
    return 0;
}

/* Exported Object: evL */
extern "C" __attribute__((visibility("default"))) void* evL = NULL;

/* Exported Object: pAK7371AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pAK7371AF_getDefaultData = NULL;

/* Exported Object: vtable for PD_IMX586MIPIRAW_TYPE2 */
extern "C" __attribute__((visibility("default"))) void* _ZTV22PD_IMX586MIPIRAW_TYPE2 = NULL;

/* Demangled: std::__1::__tree_iterator<DCMF_CAMERA_OUTPUTS, std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*, int> std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__emplace_hint_unique_key_args<DCMF_CAMERA_OUTPUTS, DCMF_CAMERA_OUTPUTS const&>(std::__1::__tree_const_iterator<DCMF_CAMERA_OUTPUTS, std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*, int>, DCMF_CAMERA_OUTPUTS const&, DCMF_CAMERA_OUTPUTS const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE30__emplace_hint_unique_key_argsIS1_JRKS1_EEENS_15__tree_iteratorIS1_PNS_11__tree_nodeIS1_PvEEiEENS_21__tree_const_iteratorIS1_SE_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE30__emplace_hint_unique_key_argsIS1_JRKS1_EEENS_15__tree_iteratorIS1_PNS_11__tree_nodeIS1_PvEEiEENS_21__tree_const_iteratorIS1_SE_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<nlohmann::detail::input_adapter_protocol>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN8nlohmann6detail22input_adapter_protocolEED2Ev() called");
    return 0;
}

/* Demangled: cust_getFlashQuick2CalibrationExp_main_part2(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z44cust_getFlashQuick2CalibrationExp_main_part2PiS_S_(void) {
    ALOGD("_Z44cust_getFlashQuick2CalibrationExp_main_part2PiS_S_() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::GetLRBufferInfo(int, SPDOHWINFO_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAW15GetLRBufferInfoEiR12SPDOHWINFO_t(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAW15GetLRBufferInfoEiR12SPDOHWINFO_t() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::~PD_IMX362MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::find<unsigned long long>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEERKT_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)4>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EE11getInstanceEjE9singleton = NULL;

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Exported Object: vtable for CustomPQBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CustomPQBase = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)6>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_sub_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z37cust_fillDefaultStrobeNVRam_sub_part2Pv(void) {
    ALOGD("_Z37cust_fillDefaultStrobeNVRam_sub_part2Pv() called");
    return 0;
}

/* Demangled: PDBufMgr::GetDualPDVCInfo(int, SDUALPDVCINFO_t&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgr15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti(void) {
    ALOGD("_ZN8PDBufMgr15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti() called");
    return 0;
}

/* Exported Object: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_Cmd */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX338MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: cust_getFlashHalTorchDuty_sub_part2(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z35cust_getFlashHalTorchDuty_sub_part2PiS_(void) {
    ALOGD("_Z35cust_getFlashHalTorchDuty_sub_part2PiS_() called");
    return 0;
}

/* Demangled: PD_S5KGW1OFILMMIPIRAW::~PD_S5KGW1OFILMMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAWD0Ev(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)3>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<2418u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj2418ELj0EEE = NULL;

/* Demangled: Scenario4AF(ScenarioParam const&) */
extern "C" __attribute__((visibility("default"))) int _Z11Scenario4AFRK13ScenarioParam(void) {
    ALOGD("_Z11Scenario4AFRK13ScenarioParam() called");
    return 0;
}

/* Exported Object: pLC898212XDAF_BAYER_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pLC898212XDAF_BAYER_getDefaultData = NULL;

/* Demangled: PD_S5K2P8MIPIRAW::~PD_S5K2P8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::PD_IMX362MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: GetCameraTsfDefaultTbl(unsigned int, unsigned int, CAMERA_TSF_TBL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22GetCameraTsfDefaultTbljjP21CAMERA_TSF_TBL_STRUCT(void) {
    ALOGD("_Z22GetCameraTsfDefaultTbljjP21CAMERA_TSF_TBL_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for PD_OV16880MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV17PD_OV16880MIPIRAW = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: AIS_Profile2Stage(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17AIS_Profile2Stagej(void) {
    ALOGD("_Z17AIS_Profile2Stagej() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<9482u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9482ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_OV12A10MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::~PD_IMX398MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: get_FB_CustomizeData(FB_Customize_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_FB_CustomizeDataP24FB_Customize_PARA_STRUCT(void) {
    ALOGD("_Z20get_FB_CustomizeDataP24FB_Customize_PARA_STRUCT() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::evaluate_Shading_Ratio(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom22evaluate_Shading_RatioERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom22evaluate_Shading_RatioERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: cust_getFlashITab2_main_part2(short*) */
extern "C" __attribute__((visibility("default"))) int _Z29cust_getFlashITab2_main_part2Ps(void) {
    ALOGD("_Z29cust_getFlashITab2_main_part2Ps() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::~PD_IMX258MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEE() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_S5KGW1OFILMMIPIRAW::PD_S5KGW1OFILMMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAWC1Ev(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: get_hrd_CustomizeData(HRD_Customize_PARA*) */
extern "C" __attribute__((visibility("default"))) int _Z21get_hrd_CustomizeDataP18HRD_Customize_PARA(void) {
    ALOGD("_Z21get_hrd_CustomizeDataP18HRD_Customize_PARA() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main(void*) */
extern "C" __attribute__((visibility("default"))) int _Z42cust_fillDefaultFlashCalibrationNVRam_mainPv(void) {
    ALOGD("_Z42cust_fillDefaultFlashCalibrationNVRam_mainPv() called");
    return 0;
}

/* Exported Object: evX */
extern "C" __attribute__((visibility("default"))) void* evX = NULL;

/* Demangled: NSCam::CamCalCustomImpl::CamCalCustomImpl(NSCam::ICamCalHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16CamCalCustomImplC1EPNS_13ICamCalHelperE(void) {
    ALOGD("_ZN5NSCam16CamCalCustomImplC1EPNS_13ICamCalHelperE() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<12608u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj12608ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_OV13855MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: GetDeltaEVIndex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15GetDeltaEVIndexj(void) {
    ALOGD("_Z15GetDeltaEVIndexj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: evY */
extern "C" __attribute__((visibility("default"))) void* evY = NULL;

/* Exported Object: vtable for PD_IMX398MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX398MIPIRAW = NULL;

/* Demangled: PD_IMX519MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_S5K2P8MIPIRAW::PD_S5K2P8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::GetPDCalSz() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW10GetPDCalSzEv(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW10GetPDCalSzEv() called");
    return 0;
}

/* Demangled: PD_S5K2P8MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::PD_IMX398MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::ExtractPDCL() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW11ExtractPDCLEv(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW11ExtractPDCLEv() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::~PD_S5KGW1SUNNYMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAWD0Ev(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: PD_S5K3M3MIPIRAW::~PD_S5K3M3MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_S5K2P7MIPIRAW::~PD_S5K2P7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAWD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)4>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE4EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: getWorkPerCycle_Main2(int) */
extern "C" __attribute__((visibility("default"))) int _Z21getWorkPerCycle_Main2i(void) {
    ALOGD("_Z21getWorkPerCycle_Main2i() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<9480u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9480ELj0EEE = NULL;

/* Demangled: PD_S5K2L7MIPIRAW::~PD_S5K2L7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::PD_IMX258MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<34906u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj34906ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::refine_RPG(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_RPG_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_RPGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RPG_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_RPGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RPG_TE() called");
    return 0;
}

/* Demangled: msdkGetFlickerPara(unsigned int, unsigned int, int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18msdkGetFlickerParajjiPvi(void) {
    ALOGD("_Z18msdkGetFlickerParajjiPvi() called");
    return 0;
}

/* Demangled: cust_getFlashMaxIDuty(int, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z21cust_getFlashMaxIDutyiiiPiS_(void) {
    ALOGD("_Z21cust_getFlashMaxIDutyiiiPiS_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: DEFAULT_STEREO_TUNING */
extern "C" __attribute__((visibility("default"))) void* DEFAULT_STEREO_TUNING = NULL;

/* Demangled: PD_S5KGW1OFILMMIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: get_VFB_CustomizeData(VFB_Customize_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z21get_VFB_CustomizeDataP25VFB_Customize_PARA_STRUCT(void) {
    ALOGD("_Z21get_VFB_CustomizeDataP25VFB_Customize_PARA_STRUCT() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: LC898212XDAF_BAYER_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z33LC898212XDAF_BAYER_getDefaultDataPvj(void) {
    ALOGD("_Z33LC898212XDAF_BAYER_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_4pairINS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718SAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9718SAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::PD_S5KGW1SUNNYMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAWC1Ev(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_S5K3M3MIPIRAW::PD_S5K3M3MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: PD_S5K2P7MIPIRAW::PD_S5K2P7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main2_M2() */
extern "C" __attribute__((visibility("default"))) int _Z24getWorkPerCycle_Main2_M2v(void) {
    ALOGD("_Z24getWorkPerCycle_Main2_M2v() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)16>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EE11getInstanceEjE9singleton = NULL;

/* Exported Object: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)1>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EE11getInstanceEjE9singleton = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::refine_HFG(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_HFG_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_HFGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_HFG_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_HFGERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_HFG_TE() called");
    return 0;
}

/* Exported Object: PD_IMX338MIPIRAW::m_u4Reg_AdDaPair_PDWin_Flexible_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX338MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE = NULL;

/* Demangled: PD_S5K2L7MIPIRAW::PD_S5K2L7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::seprate(unsigned int, unsigned char*, int, int, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAW7seprateEjPhiiPtj(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAW7seprateEjPhiiPtj() called");
    return 0;
}

/* Demangled: cust_getFlashITab1_sub(short*) */
extern "C" __attribute__((visibility("default"))) int _Z22cust_getFlashITab1_subPs(void) {
    ALOGD("_Z22cust_getFlashITab1_subPs() called");
    return 0;
}

/* Demangled: PD_S5K3M2MIPIRAW::~PD_S5K3M2MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: smoothRatioRMGt(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
extern "C" __attribute__((visibility("default"))) int _Z15smoothRatioRMGtRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void) {
    ALOGD("_Z15smoothRatioRMGtRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S() called");
    return 0;
}

/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE8EEiv(void) {
    ALOGD("_Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE8EEiv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_CCR(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_CCR_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_CCRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCR_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_CCRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCR_TE() called");
    return 0;
}

/* Demangled: CAM_CALGetCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z17CAM_CALGetCalDataPj(void) {
    ALOGD("_Z17CAM_CALGetCalDataPj() called");
    return 0;
}

/* Exported Object: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair_PDWin_Fix */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX230MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSB_SB_(void) {
    ALOGD("_ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSB_SB_() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::~PD_OV13855MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAWD2Ev(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: get_3dnr_hw_power_reopen_delay() */
extern "C" __attribute__((visibility("default"))) int _Z30get_3dnr_hw_power_reopen_delayv(void) {
    ALOGD("_Z30get_3dnr_hw_power_reopen_delayv() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail12out_of_rangeE = NULL;

/* Exported Object: gulPartNumberReg */
extern "C" __attribute__((visibility("default"))) void* gulPartNumberReg = NULL;

/* Demangled: CUST_LOCK_AE_DURING_CAF() */
extern "C" __attribute__((visibility("default"))) int _Z23CUST_LOCK_AE_DURING_CAFv(void) {
    ALOGD("_Z23CUST_LOCK_AE_DURING_CAFv() called");
    return 0;
}

/* Demangled: queryFramesPerCycle_custom(int) */
extern "C" __attribute__((visibility("default"))) int _Z26queryFramesPerCycle_customi(void) {
    ALOGD("_Z26queryFramesPerCycle_customi() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::evaluate_CCM_index(NSIspTuning::RAWIspCamInfo const&, NSIspTuning::EIndex_CCM) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom18evaluate_CCM_indexERKNS_13RAWIspCamInfoENS_10EIndex_CCME(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom18evaluate_CCM_indexERKNS_13RAWIspCamInfoENS_10EIndex_CCME() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetYuvFlashlightFrameCnt() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom31custom_GetYuvFlashlightFrameCntEv(void) {
    ALOGD("_ZN11NSCamCustom31custom_GetYuvFlashlightFrameCntEv() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: supportMain2FullRaw() */
extern "C" __attribute__((visibility("default"))) int _Z19supportMain2FullRawv(void) {
    ALOGD("_Z19supportMain2FullRawv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<LogicalSensorStruct>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI19LogicalSensorStructRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_AK7371AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: XiaoMiDoCamCal2AGain(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z20XiaoMiDoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z20XiaoMiDoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::~PDBufMgrOpen() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpenD2Ev(void) {
    ALOGD("_ZN12PDBufMgrOpenD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail11parse_errorE = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z45GET_LC898212XDAF_MONO_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: CustomHdrTargetLevelSubGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrTargetLevelSubGet(void) {
    ALOGD("CustomHdrTargetLevelSubGet() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEENS8_ISC_EEED2Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: pDW9714AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pDW9714AF_getDefaultData = NULL;

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<9481u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9481ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX338MIPIRAW::ExtractPDCL() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW11ExtractPDCLEv(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW11ExtractPDCLEv() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::~PD_IMX338MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX519MIPIRAW16m_u2Reg_AdDaPairE = NULL;

/* Exported Object: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_All */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX519MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE = NULL;

/* Demangled: PD_S5K3M3MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: FSCCustom::isSupportFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCCustom12isSupportFSCEv(void) {
    ALOGD("_ZN9FSCCustom12isSupportFSCEv() called");
    return 0;
}

/* Exported Object: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)1>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: vtable for PD_IMX486MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX486MIPIRAW = NULL;

/* Demangled: get_stereo_cam_cpu_num(ENUM_STEREO_CAM_FEATURE, ENUM_STEREO_CAM_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _Z22get_stereo_cam_cpu_num23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIO(void) {
    ALOGD("_Z22get_stereo_cam_cpu_num23ENUM_STEREO_CAM_FEATURE24ENUM_STEREO_CAM_SCENARIO() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_main_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z38cust_fillDefaultStrobeNVRam_main_part2Pv(void) {
    ALOGD("_Z38cust_fillDefaultStrobeNVRam_main_part2Pv() called");
    return 0;
}

/* Demangled: AK7371AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23AK7371AF_getDefaultDataPvj(void) {
    ALOGD("_Z23AK7371AF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: get_Dualzoom_AF_TeleDACTh(int&) */
extern "C" __attribute__((visibility("default"))) int _Z25get_Dualzoom_AF_TeleDACThRi(void) {
    ALOGD("_Z25get_Dualzoom_AF_TeleDACThRi() called");
    return 0;
}

/* Demangled: getSyncAEInitInfo() */
extern "C" __attribute__((visibility("default"))) int _Z17getSyncAEInitInfov(void) {
    ALOGD("_Z17getSyncAEInitInfov() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)2>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EE11getInstanceEjE9singleton = NULL;

/* Demangled: PD_S5K3M2MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_PGN(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_PGN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_PGNERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_PGN_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_PGNERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_PGN_TE() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetYuvAfLampSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom26custom_GetYuvAfLampSupportEv(void) {
    ALOGD("_ZN11NSCamCustom26custom_GetYuvAfLampSupportEv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: LC898217AF_W_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z27LC898217AF_W_getDefaultDataPvj(void) {
    ALOGD("_Z27LC898217AF_W_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: getMVHDR_AEInfo(mVHDR_SWHDR_InputParam_S const&, mVHDR_SWHDR_OutputParam_S&) */
extern "C" __attribute__((visibility("default"))) int _Z15getMVHDR_AEInfoRK24mVHDR_SWHDR_InputParam_SR25mVHDR_SWHDR_OutputParam_S(void) {
    ALOGD("_Z15getMVHDR_AEInfoRK24mVHDR_SWHDR_InputParam_SR25mVHDR_SWHDR_OutputParam_S() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE1EEiv(void) {
    ALOGD("_Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE1EEiv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: PD_OV23850MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: getStereoModeType() */
extern "C" __attribute__((visibility("default"))) int _Z17getStereoModeTypev(void) {
    ALOGD("_Z17getStereoModeTypev() called");
    return 0;
}

/* Demangled: PD_IMX586MIPIRAW_TYPE2::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE215GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE215GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: cust_getFlashMaxIDuty_main(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z26cust_getFlashMaxIDuty_mainiiPiS_(void) {
    ALOGD("_Z26cust_getFlashMaxIDuty_mainiiPiS_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: getNvramQueryHelperImpl() */
extern "C" __attribute__((visibility("default"))) int _Z23getNvramQueryHelperImplv(void) {
    ALOGD("_Z23getNvramQueryHelperImplv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam(int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z37cust_fillDefaultFlashCalibrationNVRamiPv(void) {
    ALOGD("_Z37cust_fillDefaultFlashCalibrationNVRamiPv() called");
    return 0;
}

/* Demangled: XiaoMiDoCamCalPartNumber(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z24XiaoMiDoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z24XiaoMiDoCamCalPartNumberPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_S5K3M2MIPIRAW::~PD_S5K3M2MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: CustomHdrCoreNumberGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrCoreNumberGet(void) {
    ALOGD("CustomHdrCoreNumberGet() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__117bad_function_callE = NULL;

/* Demangled: getWorkPerCycle_Sub_M1() */
extern "C" __attribute__((visibility("default"))) int _Z22getWorkPerCycle_Sub_M1v(void) {
    ALOGD("_Z22getWorkPerCycle_Sub_M1v() called");
    return 0;
}

/* Demangled: cust_getFlickerDetectFrequency() */
extern "C" __attribute__((visibility("default"))) int _Z30cust_getFlickerDetectFrequencyv(void) {
    ALOGD("_Z30cust_getFlickerDetectFrequencyv() called");
    return 0;
}

/* Demangled: GetCameraFlashDefaultCalData(unsigned int, unsigned int, NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z28GetCameraFlashDefaultCalDatajjP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT(void) {
    ALOGD("_Z28GetCameraFlashDefaultCalDatajjP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z48cust_fillDefaultFlashCalibrationNVRam_main_part2Pv(void) {
    ALOGD("_Z48cust_fillDefaultFlashCalibrationNVRam_main_part2Pv() called");
    return 0;
}

/* Demangled: PD_S5K2L7MIPIRAW::GetDualPDVCInfo(int, SDUALPDVCINFO_t&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti() called");
    return 0;
}

/* Exported Object: Lomo_V_param */
extern "C" __attribute__((visibility("default"))) void* Lomo_V_param = NULL;

/* Exported Object: gSubLensIdx */
extern "C" __attribute__((visibility("default"))) void* gSubLensIdx = NULL;

/* Demangled: DoCamCalSingleLscOP(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19DoCamCalSingleLscOPPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z19DoCamCalSingleLscOPPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Exported Object: SensorList */
extern "C" __attribute__((visibility("default"))) void* SensorList = NULL;

/* Demangled: PD_IMX499MIPIRAW::~PD_IMX499MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: CustomHdrThHighGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrThHighGet(void) {
    ALOGD("CustomHdrThHighGet() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::~PD_OV13855MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAWD0Ev(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: calculateNewExposureSetting(AE_Cust_Param_T*, AE_EXP_SETTING_INPUT_T*, AE_EXP_SETTING_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _Z27calculateNewExposureSettingP15AE_Cust_Param_TP22AE_EXP_SETTING_INPUT_TP23AE_EXP_SETTING_OUTPUT_T(void) {
    ALOGD("_Z27calculateNewExposureSettingP15AE_Cust_Param_TP22AE_EXP_SETTING_INPUT_TP23AE_EXP_SETTING_OUTPUT_T() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t() called");
    return 0;
}

/* Exported Object: power_2_lshift20_positive */
extern "C" __attribute__((visibility("default"))) void* power_2_lshift20_positive = NULL;

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<2417u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj2417ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::adaptive_NR3D_setting(NSIspTuning::RAWIspCamInfo const&, NSIspTuning::ISP_NR3D_SMOOTH_INFO_T const&, NSIspTuning::ISP_NVRAM_NR3D_T&, int&, NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom21adaptive_NR3D_settingERKNS_13RAWIspCamInfoERKNS_22ISP_NR3D_SMOOTH_INFO_TERNS_16ISP_NVRAM_NR3D_TERiNS_12ESensorDev_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom21adaptive_NR3D_settingERKNS_13RAWIspCamInfoERKNS_22ISP_NR3D_SMOOTH_INFO_TERNS_16ISP_NVRAM_NR3D_TERiNS_12ESensorDev_TE() called");
    return 0;
}

/* Demangled: getMtkFormatVersion(NSCam::ICamCalHelper*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19getMtkFormatVersionPN5NSCam13ICamCalHelperEPj(void) {
    ALOGD("_Z19getMtkFormatVersionPN5NSCam13ICamCalHelperEPj() called");
    return 0;
}

/* Demangled: PD_S5K3M2MIPIRAW::PD_S5K3M2MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::~PDBufMgrOpen() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpenD0Ev(void) {
    ALOGD("_ZN12PDBufMgrOpenD0Ev() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<20533u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj20533ELj0EE11getInstanceEvE4inst = NULL;

/* Exported Object: vtable for PD_IMX386MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX386MIPIRAW = NULL;

/* Demangled: PD_S5K2P7MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Exported Object: vtable for PD_IMX230MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX230MIPIRAW = NULL;

/* Demangled: getDataInterpolation(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z20getDataInterpolationiiiii(void) {
    ALOGD("_Z20getDataInterpolationiiiii() called");
    return 0;
}

/* Demangled: getAEManualCapPline(EAEManualPline_T const&, eAETableID&) */
extern "C" __attribute__((visibility("default"))) int _Z19getAEManualCapPlineRK16EAEManualPline_TR10eAETableID(void) {
    ALOGD("_Z19getAEManualCapPlineRK16EAEManualPline_TR10eAETableID() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)3>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EFFECT(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_effect_mode const&, NSIspTuning::IspUsrSelectLevel const&, NSIspTuning::ISP_NVRAM_G2C_T&, NSIspTuning::ISP_NVRAM_G2C_SHADE_T&, NSIspTuning::ISP_NVRAM_SE_T&, NSIspTuning::ISP_NVRAM_GGM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom18userSetting_EFFECTERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRKNS_17IspUsrSelectLevelERNS_15ISP_NVRAM_G2C_TERNS_21ISP_NVRAM_G2C_SHADE_TERNS_14ISP_NVRAM_SE_TERNS_15ISP_NVRAM_GGM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom18userSetting_EFFECTERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRKNS_17IspUsrSelectLevelERNS_15ISP_NVRAM_G2C_TERNS_21ISP_NVRAM_G2C_SHADE_TERNS_14ISP_NVRAM_SE_TERNS_15ISP_NVRAM_GGM_TE() called");
    return 0;
}

/* Exported Object: LensList_main */
extern "C" __attribute__((visibility("default"))) void* LensList_main = NULL;

/* Demangled: PD_S5K3P8SXMIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_IMX499MIPIRAW::PD_IMX499MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: get_vsdof_cap_queue_size() */
extern "C" __attribute__((visibility("default"))) int _Z24get_vsdof_cap_queue_sizev(void) {
    ALOGD("_Z24get_vsdof_cap_queue_sizev() called");
    return 0;
}

/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE2EEiv(void) {
    ALOGD("_Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE2EEiv() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EEE = NULL;

/* Demangled: PD_IMX338MIPIRAW::~PD_IMX338MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::PD_OV13855MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAWC1Ev(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<12610u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj12610ELj0EE11getInstanceEvE4inst = NULL;

/* Exported Object: PDList_sub */
extern "C" __attribute__((visibility("default"))) void* PDList_sub = NULL;

/* Demangled: getWorkPerCycle_Main2_M3() */
extern "C" __attribute__((visibility("default"))) int _Z24getWorkPerCycle_Main2_M3v(void) {
    ALOGD("_Z24getWorkPerCycle_Main2_M3v() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_CCM2(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_CCM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom11refine_CCM2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom11refine_CCM2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE() called");
    return 0;
}

/* Demangled: cust_getFlashIMapFunc(int) */
extern "C" __attribute__((visibility("default"))) int _Z21cust_getFlashIMapFunci(void) {
    ALOGD("_Z21cust_getFlashIMapFunci() called");
    return 0;
}

/* Demangled: DoCamCalLensId_Base(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19DoCamCalLensId_BasePN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z19DoCamCalLensId_BasePN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_S5KGW1OFILMMIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: smoothHdrOnOff(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
extern "C" __attribute__((visibility("default"))) int _Z14smoothHdrOnOffRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void) {
    ALOGD("_Z14smoothHdrOnOffRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE1EEiv(void) {
    ALOGD("_Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE1EEiv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::get_HdrDbsNewISO(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom16get_HdrDbsNewISOERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom16get_HdrDbsNewISOERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_OV23850MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::SetRegAdDaPairBuf(int, int, int, int, int, int, unsigned short*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj() called");
    return 0;
}

/* Demangled: DoCamCal_Dump(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z13DoCamCal_DumpPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z13DoCamCal_DumpPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::GetPDInfo2HybridAF(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW18GetPDInfo2HybridAFEiPi(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW18GetPDInfo2HybridAFEiPi() called");
    return 0;
}

/* Demangled: FSCCustom::getDebugLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCCustom13getDebugLevelEv(void) {
    ALOGD("_ZN9FSCCustom13getDebugLevelEv() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<34907u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj34907ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX338MIPIRAW::PD_IMX338MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAWC1Ev() called");
    return 0;
}

/* Exported Object: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)16>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EE11getInstanceEjE9singleton = NULL;

/* Demangled: LC898212XDAF_MONO_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z32LC898212XDAF_MONO_getDefaultDataPvj(void) {
    ALOGD("_Z32LC898212XDAF_MONO_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::other_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail11other_errorE = NULL;

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z10getAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::~PD_OV16880MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAWD2Ev(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: guard variable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)8>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EE11getInstanceEjE9singleton = NULL;

/* Demangled: PDBufMgr::SetPDInfo(SET_PD_BLOCK_INFO_T&, SPDProfile_t&, SPDOHWINFO_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgr9SetPDInfoER19SET_PD_BLOCK_INFO_TR12SPDProfile_tR12SPDOHWINFO_t(void) {
    ALOGD("_ZN8PDBufMgr9SetPDInfoER19SET_PD_BLOCK_INFO_TR12SPDProfile_tR12SPDOHWINFO_t() called");
    return 0;
}

/* Exported Object: PD_IMX519MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX519MIPIRAW19m_u4Reg_AdDaPair_SzE = NULL;

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__erase_unique<unsigned long long>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE14__erase_uniqueIyEEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE14__erase_uniqueIyEEjRKT_() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail9exceptionE = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z43GET_BU64748AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::SetRegAdDaPairBuf(int, int, int, int, int, int, unsigned short*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj() called");
    return 0;
}

/* Exported Object: g_strMergeAESts */
extern "C" __attribute__((visibility("default"))) void* g_strMergeAESts = NULL;

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELj0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: PD_OV12A10MIPIRAW::~PD_OV12A10MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAWD1Ev(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: CUST_SKIP_ONE_SHOT_AE_FOR_TAF() */
extern "C" __attribute__((visibility("default"))) int _Z29CUST_SKIP_ONE_SHOT_AE_FOR_TAFv(void) {
    ALOGD("_Z29CUST_SKIP_ONE_SHOT_AE_FOR_TAFv() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z43cust_fillDefaultFlashCalibrationNVRam_main2Pv(void) {
    ALOGD("_Z43cust_fillDefaultFlashCalibrationNVRam_main2Pv() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: ModifyCaptureParamByCustom(unsigned int, AE_MODE_CFG_T*, AE_MODE_CFG_T*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TS0_j(void) {
    ALOGD("_Z26ModifyCaptureParamByCustomjP13AE_MODE_CFG_TS0_j() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::reset_ISO_SmoothBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom22reset_ISO_SmoothBufferEv(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom22reset_ISO_SmoothBufferEv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::~PD_S5K2X8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetYuvFlashlightThreshold(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning32custom_GetYuvFlashlightThresholdEi(void) {
    ALOGD("_ZN11NSYuvTuning32custom_GetYuvFlashlightThresholdEi() called");
    return 0;
}

/* Exported Object: pLC898217AF_W_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pLC898217AF_W_getDefaultData = NULL;

/* Demangled: getStereoCaptureModeType() */
extern "C" __attribute__((visibility("default"))) int _Z24getStereoCaptureModeTypev(void) {
    ALOGD("_Z24getStereoCaptureModeTypev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_BPC(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BNR_BPC_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_BPCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_BPC_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_BPCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_19ISP_NVRAM_BNR_BPC_TE() called");
    return 0;
}

/* Demangled: DoCamCal_Dump_All(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z17DoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z17DoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_IMX586MIPIRAW_TYPE2::~PD_IMX586MIPIRAW_TYPE2() */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE2D2Ev(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE2D2Ev() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: PD_OV12A10MIPIRAW::PD_OV12A10MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAWC2Ev(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__swap_out_circular_buffer(std::__1::__split_buffer<char, std::__1::allocator<char>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE26__swap_out_circular_bufferERNS_14__split_bufferIcRS2_EE() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__erase_unique<unsigned long long>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIyEEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIyEEjRKT_() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z42cust_fillDefaultFlashCalibrationNVRam_sub2Pv(void) {
    ALOGD("_Z42cust_fillDefaultFlashCalibrationNVRam_sub2Pv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_OV23850MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: get_3dnr_max_iso_increase_percentage() */
extern "C" __attribute__((visibility("default"))) int _Z36get_3dnr_max_iso_increase_percentagev(void) {
    ALOGD("_Z36get_3dnr_max_iso_increase_percentagev() called");
    return 0;
}

/* Exported Object: pDW9718AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pDW9718AF_getDefaultData = NULL;

/* Demangled: PD_IMX338MIPIRAW::GetPDWinSetting(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW15GetPDWinSettingEPvS0_S0_(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW15GetPDWinSettingEPvS0_S0_() called");
    return 0;
}

/* Demangled: GetLensInitFuncList(MSDK_LENS_INIT_FUNCTION_STRUCT*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19GetLensInitFuncListP30MSDK_LENS_INIT_FUNCTION_STRUCTj(void) {
    ALOGD("_Z19GetLensInitFuncListP30MSDK_LENS_INIT_FUNCTION_STRUCTj() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::GetPDCalSz() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW10GetPDCalSzEv(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW10GetPDCalSzEv() called");
    return 0;
}

/* Demangled: FSCCustom::getMaxCropRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCCustom15getMaxCropRatioEv(void) {
    ALOGD("_ZN9FSCCustom15getMaxCropRatioEv() called");
    return 0;
}

/* Demangled: getmVHDRExpSetting(mVHDR_TRANSFER_Param_S&, IVHDRExpSettingOutputParam_S&) */
extern "C" __attribute__((visibility("default"))) int _Z18getmVHDRExpSettingR22mVHDR_TRANSFER_Param_SR28IVHDRExpSettingOutputParam_S(void) {
    ALOGD("_Z18getmVHDRExpSettingR22mVHDR_TRANSFER_Param_SR28IVHDRExpSettingOutputParam_S() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Sub_M2() */
extern "C" __attribute__((visibility("default"))) int _Z22getWorkPerCycle_Sub_M2v(void) {
    ALOGD("_Z22getWorkPerCycle_Sub_M2v() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::ExtractCaliData() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW15ExtractCaliDataEv(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW15ExtractCaliDataEv() called");
    return 0;
}

/* Demangled: get_swnr_type(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13get_swnr_typej(void) {
    ALOGD("_Z13get_swnr_typej() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_DBS(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_DBS_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_DBSERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_DBS_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_DBSERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_DBS_TE() called");
    return 0;
}

/* Demangled: isFlashAWBv2Enabled(int) */
extern "C" __attribute__((visibility("default"))) int _Z19isFlashAWBv2Enabledi(void) {
    ALOGD("_Z19isFlashAWBv2Enabledi() called");
    return 0;
}

/* Demangled: cust_getFlashQuick2CalibrationExp_sub(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z37cust_getFlashQuick2CalibrationExp_subPiS_S_(void) {
    ALOGD("_Z37cust_getFlashQuick2CalibrationExp_subPiS_S_() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::~PD_IMX486MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: cust_getFlashMaxIDuty_main_part2(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z32cust_getFlashMaxIDuty_main_part2iiPiS_(void) {
    ALOGD("_Z32cust_getFlashMaxIDuty_main_part2iiPiS_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJOS7_EEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: CUST_LENS_COVER_COUNT(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21CUST_LENS_COVER_COUNTiii(void) {
    ALOGD("_Z21CUST_LENS_COVER_COUNTiii() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseI19LogicalSensorStructNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: PD_S5K2L7MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::~PD_OV16880MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAWD0Ev(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: NR3DCustom::isSupportRSC() */
extern "C" __attribute__((visibility("default"))) int _ZN10NR3DCustom12isSupportRSCEv(void) {
    ALOGD("_ZN10NR3DCustom12isSupportRSCEv() called");
    return 0;
}

/* Demangled: CustomHdrTopFRatioGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrTopFRatioGet(void) {
    ALOGD("CustomHdrTopFRatioGet() called");
    return 0;
}

/* Demangled: CUST_ENABLE_TOUCH_AE() */
extern "C" __attribute__((visibility("default"))) int _Z20CUST_ENABLE_TOUCH_AEv(void) {
    ALOGD("_Z20CUST_ENABLE_TOUCH_AEv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__find_equal<DCMF_CAMERA_OUTPUTS>(std::__1::__tree_const_iterator<DCMF_CAMERA_OUTPUTS, std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, DCMF_CAMERA_OUTPUTS const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_S9_EEiEERPNS_15__tree_end_nodeISB_EESC_RKT_(void) {
    ALOGD("_ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_S9_EEiEERPNS_15__tree_end_nodeISB_EESC_RKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail9exceptionE = NULL;

/* Demangled: CUST_PRECAPTURE_AF_AFTER_PREFLASH() */
extern "C" __attribute__((visibility("default"))) int _Z33CUST_PRECAPTURE_AF_AFTER_PREFLASHv(void) {
    ALOGD("_Z33CUST_PRECAPTURE_AF_AFTER_PREFLASHv() called");
    return 0;
}

/* Demangled: CUST_GET_SKIP_PRECAP_FLASH_FRAME_COUNT() */
extern "C" __attribute__((visibility("default"))) int _Z38CUST_GET_SKIP_PRECAP_FLASH_FRAME_COUNTv(void) {
    ALOGD("_Z38CUST_GET_SKIP_PRECAP_FLASH_FRAME_COUNTv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_LCE(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_LCE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_LCEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_LCE_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_LCEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_LCE_TE() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EEE = NULL;

/* Demangled: GetCameraFeatureDefault(unsigned int, unsigned int, NVRAM_CAMERA_FEATURE_STRUCT_t*) */
extern "C" __attribute__((visibility("default"))) int _Z23GetCameraFeatureDefaultjjP29NVRAM_CAMERA_FEATURE_STRUCT_t(void) {
    ALOGD("_Z23GetCameraFeatureDefaultjjP29NVRAM_CAMERA_FEATURE_STRUCT_t() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetYuvFlashlightHighCurrentDuty() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom38custom_GetYuvFlashlightHighCurrentDutyEv(void) {
    ALOGD("_ZN11NSCamCustom38custom_GetYuvFlashlightHighCurrentDutyEv() called");
    return 0;
}

/* Demangled: DoCamCal2AGainOP586(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19DoCamCal2AGainOP586PN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z19DoCamCal2AGainOP586PN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::sendCommand(unsigned int, void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW11sendCommandEjPvS0_S0_S0_(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW11sendCommandEjPvS0_S0_S0_() called");
    return 0;
}

/* Exported Object: int _getAFConfig<(NSIspTuning::ESensorDev_T)0>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: std::__1::function<bool (int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&)>::operator()(int, nlohmann::detail::parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >::parse_event_t, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_(void) {
    ALOGD("_ZNKSt3__18functionIFbiN8nlohmann6detail6parserINS1_10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydSA_NS1_14adl_serializerEEEE13parse_event_tERSE_EEclEiSG_SH_() called");
    return 0;
}

/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)2>(AF_PARAM_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE2EEiPPK10AF_PARAM_T(void) {
    ALOGD("_Z11_getAFParamILN11NSIspTuning12ESensorDev_TE2EEiPPK10AF_PARAM_T() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::fine_tune_EE(NSIspTuning::RAWIspCamInfo const&, NSIspExifDebug::IspExifDebugInfo::IspGmaInfo const&, NSIspExifDebug::IspExifDebugInfo::IspLceInfo const&, NSIspTuning::ISP_NVRAM_EE_T const&, NSIspTuning::ISP_NVRAM_EE_T const&, NSIspTuning::ISP_NVRAM_EE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom12fine_tune_EEERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_14ISP_NVRAM_EE_TESE_RSC_(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom12fine_tune_EEERKNS_13RAWIspCamInfoERKN14NSIspExifDebug16IspExifDebugInfo10IspGmaInfoERKNS5_10IspLceInfoERKNS_14ISP_NVRAM_EE_TESE_RSC_() called");
    return 0;
}

/* Demangled: LC898217AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25LC898217AF_getDefaultDataPvj(void) {
    ALOGD("_Z25LC898217AF_getDefaultDataPvj() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<9076u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9076ELj0EE11getInstanceEvE4inst = NULL;

/* Exported Object: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_All */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX230MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS5_S2_EEEE() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::PD_OV16880MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAWC1Ev(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail10type_errorE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE = NULL;

/* Demangled: getWorkPerCycle_Main_M1() */
extern "C" __attribute__((visibility("default"))) int _Z23getWorkPerCycle_Main_M1v(void) {
    ALOGD("_Z23getWorkPerCycle_Main_M1v() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main2_M4() */
extern "C" __attribute__((visibility("default"))) int _Z24getWorkPerCycle_Main2_M4v(void) {
    ALOGD("_Z24getWorkPerCycle_Main2_M4v() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU64748AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU64748AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: getMVHDR3Expo_AEInfo(int, int&) */
extern "C" __attribute__((visibility("default"))) int _Z20getMVHDR3Expo_AEInfoiRi(void) {
    ALOGD("_Z20getMVHDR3Expo_AEInfoiRi() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main(int) */
extern "C" __attribute__((visibility("default"))) int _Z20getWorkPerCycle_Maini(void) {
    ALOGD("_Z20getWorkPerCycle_Maini() called");
    return 0;
}

/* Exported Object: pBU6424AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pBU6424AF_getDefaultData = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9718AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9718AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<2418u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj2418ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_S5K2X8MIPIRAW::~PD_S5K2X8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAWD0Ev() called");
    return 0;
}

/* Exported Object: DPE_CAPTURE_ROUND */
extern "C" __attribute__((visibility("default"))) void* DPE_CAPTURE_ROUND = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::refine_CCM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_CCM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_CCMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_CCMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_CCM_TE() called");
    return 0;
}

/* Demangled: getWorkPerCycle(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15getWorkPerCycleij(void) {
    ALOGD("_Z15getWorkPerCycleij() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<9481u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9481ELj0EEE = NULL;

/* Exported Object: NSFeature::SensorInfoIdxMgr<9481u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj9481ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX586MIPIRAW_TYPE2::~PD_IMX586MIPIRAW_TYPE2() */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE2D0Ev(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE2D0Ev() called");
    return 0;
}

/* Demangled: getVrRrzoLimitation(int&, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _Z19getVrRrzoLimitationRiS_b(void) {
    ALOGD("_Z19getVrRrzoLimitationRiS_b() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail10type_errorE = NULL;

/* Demangled: cust_getStrobeDevice(int) */
extern "C" __attribute__((visibility("default"))) int _Z20cust_getStrobeDevicei(void) {
    ALOGD("_Z20cust_getStrobeDevicei() called");
    return 0;
}

/* Exported Object: LensList_sub2 */
extern "C" __attribute__((visibility("default"))) void* LensList_sub2 = NULL;

/* Demangled: canSupportBGService() */
extern "C" __attribute__((visibility("default"))) int _Z19canSupportBGServicev(void) {
    ALOGD("_Z19canSupportBGServicev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: get_ot_CustomizeData(OT_Customize_PARA*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_ot_CustomizeDataP17OT_Customize_PARA(void) {
    ALOGD("_Z20get_ot_CustomizeDataP17OT_Customize_PARA() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long long&>(unsigned long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRyEEEvDpOT_() called");
    return 0;
}

/* Demangled: cust_getFlickerHalPara(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z22cust_getFlickerHalParaPiS_(void) {
    ALOGD("_Z22cust_getFlickerHalParaPiS_() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EFFECT_GGM(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_effect_mode const&, NSIspTuning::ISP_NVRAM_GGM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom22userSetting_EFFECT_GGMERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom22userSetting_EFFECT_GGMERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: calMotionRatio(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
extern "C" __attribute__((visibility("default"))) int _Z14calMotionRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void) {
    ALOGD("_Z14calMotionRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: GetCameraIdxTblDefaultPara(unsigned int, unsigned int, NVRAM_CAMERA_IDX_STRUCT_T*) */
extern "C" __attribute__((visibility("default"))) int _Z26GetCameraIdxTblDefaultParajjP25NVRAM_CAMERA_IDX_STRUCT_T(void) {
    ALOGD("_Z26GetCameraIdxTblDefaultParajjP25NVRAM_CAMERA_IDX_STRUCT_T() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::PD_S5K2X8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::GetPDWinSetting(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW15GetPDWinSettingEPvS0_S0_(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW15GetPDWinSettingEPvS0_S0_() called");
    return 0;
}

/* Demangled: cust_getFlashQuick2CalibrationExp_main(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z38cust_getFlashQuick2CalibrationExp_mainPiS_S_(void) {
    ALOGD("_Z38cust_getFlashQuick2CalibrationExp_mainPiS_S_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9800VAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_DW9800VAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: getFrameSyncToleranceTime() */
extern "C" __attribute__((visibility("default"))) int _Z25getFrameSyncToleranceTimev(void) {
    ALOGD("_Z25getFrameSyncToleranceTimev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: CustomPQImpl::decidePQEnable_EIS35_VIDEO_4k(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CustomPQImpl29decidePQEnable_EIS35_VIDEO_4kEj(void) {
    ALOGD("_ZN12CustomPQImpl29decidePQEnable_EIS35_VIDEO_4kEj() called");
    return 0;
}

/* Demangled: NSCamCustomSensor::getCustomConfig(IMGSENSOR_SENSOR_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN17NSCamCustomSensor15getCustomConfigE20IMGSENSOR_SENSOR_IDX(void) {
    ALOGD("_ZN17NSCamCustomSensor15getCustomConfigE20IMGSENSOR_SENSOR_IDX() called");
    return 0;
}

/* Demangled: PD_IMX586MIPIRAW_TYPE2::PD_IMX586MIPIRAW_TYPE2() */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE2C1Ev(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE2C1Ev() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::~PD_IMX386MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_IMX499MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::~PD_IMX486MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAWD0Ev() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::type_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail10type_errorE = NULL;

/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)16>(int, int, int, CustAF_THRES_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE16EEiiiiPPK14CustAF_THRES_T(void) {
    ALOGD("_Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE16EEiiiiPPK14CustAF_THRES_T() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAW7seprateEiPhiiiPtj(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAW7seprateEiPhiiiPtj() called");
    return 0;
}

/* Demangled: get_Dualzoom_AF_Thresholds(int, int, int&, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z26get_Dualzoom_AF_ThresholdsiiRiS_ii(void) {
    ALOGD("_Z26get_Dualzoom_AF_ThresholdsiiRiS_ii() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long, void*> >(unsigned long long const&, std::__1::pair<unsigned long long, void*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJNS_4pairIyS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJNS_4pairIyS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_sub(void*) */
extern "C" __attribute__((visibility("default"))) int _Z31cust_fillDefaultStrobeNVRam_subPv(void) {
    ALOGD("_Z31cust_fillDefaultStrobeNVRam_subPv() called");
    return 0;
}

/* Demangled: Dummy_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20Dummy_getDefaultDataPvj(void) {
    ALOGD("_Z20Dummy_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: CustomHdrBottomFBoundGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrBottomFBoundGet(void) {
    ALOGD("CustomHdrBottomFBoundGet() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE16EEiv(void) {
    ALOGD("_Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE16EEiv() called");
    return 0;
}

/* Demangled: get_stereo_zsd_cap_stored_frame_cnt() */
extern "C" __attribute__((visibility("default"))) int _Z35get_stereo_zsd_cap_stored_frame_cntv(void) {
    ALOGD("_Z35get_stereo_zsd_cap_stored_frame_cntv() called");
    return 0;
}

/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE1EEPKiv(void) {
    ALOGD("_Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE1EEPKiv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117bad_function_callE = NULL;

/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)1>(AF_PARAM_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE1EEiPPK10AF_PARAM_T(void) {
    ALOGD("_Z11_getAFParamILN11NSIspTuning12ESensorDev_TE1EEiPPK10AF_PARAM_T() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::~PD_OV13870MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAWD2Ev(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: PD_S5K2P8MIPIRAW::separate(int, unsigned char*, int, int, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAW8separateEiPhiiPtj(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAW8separateEiPhiiPtj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: getSyncAWBInitInfo() */
extern "C" __attribute__((visibility("default"))) int _Z18getSyncAWBInitInfov(void) {
    ALOGD("_Z18getSyncAWBInitInfov() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<9078u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9078ELj0EE11getInstanceEvE4inst = NULL;

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<12608u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj12608ELj0EEE = NULL;

/* Demangled: PD_S5K3M2MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::PD_IMX386MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::PD_IMX486MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: resetCycleCtr_Main() */
extern "C" __attribute__((visibility("default"))) int _Z18resetCycleCtr_Mainv(void) {
    ALOGD("_Z18resetCycleCtr_Mainv() called");
    return 0;
}

/* Demangled: GetCameraDefaultPara(unsigned int, unsigned int, NVRAM_CAMERA_ISP_PARAM_STRUCT*, NVRAM_CAMERA_3A_STRUCT*, NVRAM_CAMERA_SHADING_STRUCT*, AE_PLINETABLE_T*) */
extern "C" __attribute__((visibility("default"))) int _Z20GetCameraDefaultParajjP29NVRAM_CAMERA_ISP_PARAM_STRUCTP22NVRAM_CAMERA_3A_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP15AE_PLINETABLE_T(void) {
    ALOGD("_Z20GetCameraDefaultParajjP29NVRAM_CAMERA_ISP_PARAM_STRUCTP22NVRAM_CAMERA_3A_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP15AE_PLINETABLE_T() called");
    return 0;
}

/* Demangled: LC898212XDAF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z27LC898212XDAF_getDefaultDataPvj(void) {
    ALOGD("_Z27LC898212XDAF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: resetZVHDRFlag() */
extern "C" __attribute__((visibility("default"))) int _Z14resetZVHDRFlagv(void) {
    ALOGD("_Z14resetZVHDRFlagv() called");
    return 0;
}

/* Demangled: calAntiFlickerRatio(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
extern "C" __attribute__((visibility("default"))) int _Z19calAntiFlickerRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void) {
    ALOGD("_Z19calAntiFlickerRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_OBC(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_OBC_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_OBCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_OBC_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_OBCERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_OBC_TE() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetYuvFlashlightThreshold() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom32custom_GetYuvFlashlightThresholdEv(void) {
    ALOGD("_ZN11NSCamCustom32custom_GetYuvFlashlightThresholdEv() called");
    return 0;
}

/* Demangled: getHWSyncStableCnt() */
extern "C" __attribute__((visibility("default"))) int _Z18getHWSyncStableCntv(void) {
    ALOGD("_Z18getHWSyncStableCntv() called");
    return 0;
}

/* Demangled: WEIGHTING(unsigned int, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _Z9WEIGHTINGjjf(void) {
    ALOGD("_Z9WEIGHTINGjjf() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetYuvFlashlightHighCurrentTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom41custom_GetYuvFlashlightHighCurrentTimeoutEv(void) {
    ALOGD("_ZN11NSCamCustom41custom_GetYuvFlashlightHighCurrentTimeoutEv() called");
    return 0;
}

/* Exported Object: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)0>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern "C" __attribute__((visibility("default"))) void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE0EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef = NULL;

/* Demangled: openCustomTuningLibrary(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23openCustomTuningLibraryjj(void) {
    ALOGD("_Z23openCustomTuningLibraryjj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE6rehashEj() called");
    return 0;
}

/* Exported Object: LensList_sub */
extern "C" __attribute__((visibility("default"))) void* LensList_sub = NULL;

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long long&>(long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRxEEEvDpOT_() called");
    return 0;
}

/* Demangled: int isAEEnabled<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE1EEiv(void) {
    ALOGD("_Z11isAEEnabledILN11NSIspTuning12ESensorDev_TE1EEiv() called");
    return 0;
}

/* Demangled: closeCustomTuningLibrary(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24closeCustomTuningLibraryjj(void) {
    ALOGD("_Z24closeCustomTuningLibraryjj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Sub_M3() */
extern "C" __attribute__((visibility("default"))) int _Z22getWorkPerCycle_Sub_M3v(void) {
    ALOGD("_Z22getWorkPerCycle_Sub_M3v() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_main(void*) */
extern "C" __attribute__((visibility("default"))) int _Z32cust_fillDefaultStrobeNVRam_mainPv(void) {
    ALOGD("_Z32cust_fillDefaultStrobeNVRam_mainPv() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::~PD_IMX519MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAWD1Ev() called");
    return 0;
}

/* Exported Object: vtable for PD_OV13870MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV17PD_OV13870MIPIRAW = NULL;

/* Demangled: NR3DCustom::get_3dnr_off_iso_threshold(unsigned char, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi(void) {
    ALOGD("_ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<12608u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj12608ELj0EE11getInstanceEvE4inst = NULL;

/* Exported Object: vtable for PD_S5K3M3MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_S5K3M3MIPIRAW = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: gMainLensIdx */
extern "C" __attribute__((visibility("default"))) void* gMainLensIdx = NULL;

/* Demangled: Scenario4AWB(ScenarioParam const&) */
extern "C" __attribute__((visibility("default"))) int _Z12Scenario4AWBRK13ScenarioParam(void) {
    ALOGD("_Z12Scenario4AWBRK13ScenarioParam() called");
    return 0;
}

/* Demangled: cust_getFlashITab1_main_part2(short*) */
extern "C" __attribute__((visibility("default"))) int _Z29cust_getFlashITab1_main_part2Ps(void) {
    ALOGD("_Z29cust_getFlashITab1_main_part2Ps() called");
    return 0;
}

/* Demangled: BU63169AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24BU63169AF_getDefaultDataPvj(void) {
    ALOGD("_Z24BU63169AF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: NSCam::CamCalCustomImpl::getEepromSensorDev(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16CamCalCustomImpl18getEepromSensorDevEjj(void) {
    ALOGD("_ZN5NSCam16CamCalCustomImpl18getEepromSensorDevEjj() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::ExtractCaliData() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW15ExtractCaliDataEv(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW15ExtractCaliDataEv() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<9480u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj9480ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX386MIPIRAW::sendCommand(unsigned int, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW11sendCommandEjPvS0_S0_(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW11sendCommandEjPvS0_S0_() called");
    return 0;
}

/* Exported Object: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)1>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern "C" __attribute__((visibility("default"))) void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE1EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef = NULL;

/* Exported Object: vtable for PD_S5K2P7MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_S5K2P7MIPIRAW = NULL;

/* Exported Object: vtable for PD_S5K3L8MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_S5K3L8MIPIRAW = NULL;

/* Exported Object: vtable for PD_OV13855MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV17PD_OV13855MIPIRAW = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_RNR(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_RNR_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_RNRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RNR_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_RNRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RNR_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_ANR2(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_ANR2_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom11refine_ANR2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_ANR2_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom11refine_ANR2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_ANR2_TE() called");
    return 0;
}

/* Demangled: GetLensDefaultPara(unsigned int, unsigned int, NVRAM_LENS_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z18GetLensDefaultParajjP22NVRAM_LENS_PARA_STRUCT(void) {
    ALOGD("_Z18GetLensDefaultParajjP22NVRAM_LENS_PARA_STRUCT() called");
    return 0;
}

/* Demangled: getInstance_DebugExif */
extern "C" __attribute__((visibility("default"))) int getInstance_DebugExif(void) {
    ALOGD("getInstance_DebugExif() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<34906u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj34906ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX519MIPIRAW::PD_IMX519MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: CustomPQImpl::decidePQEnable_EIS35_NO_VIDEO(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CustomPQImpl29decidePQEnable_EIS35_NO_VIDEOEj(void) {
    ALOGD("_ZN12CustomPQImpl29decidePQEnable_EIS35_NO_VIDEOEj() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: decide_smvr_directlink(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z22decide_smvr_directlinkiii(void) {
    ALOGD("_Z22decide_smvr_directlinkiii() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: get_dummy_angle() */
extern "C" __attribute__((visibility("default"))) int _Z15get_dummy_anglev(void) {
    ALOGD("_Z15get_dummy_anglev() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_remap_ISP_ISO_with_LV(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom34is_to_invoke_remap_ISP_ISO_with_LVERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom34is_to_invoke_remap_ISP_ISO_with_LVERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: CameraPosition2FileList(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23CameraPosition2FileListj(void) {
    ALOGD("_Z23CameraPosition2FileListj() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<9078u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9078ELj0EEE = NULL;

/* Demangled: PD_OV23850MIPIRAW::~PD_OV23850MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAWD1Ev(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE16EERK11AWB_PARAM_Tv(void) {
    ALOGD("_Z11getAWBParamILN11NSIspTuning12ESensorDev_TE16EERK11AWB_PARAM_Tv() called");
    return 0;
}

/* Demangled: cust_getFlashHalTorchDuty_sub(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z29cust_getFlashHalTorchDuty_subPiS_(void) {
    ALOGD("_Z29cust_getFlashHalTorchDuty_subPiS_() called");
    return 0;
}

/* Demangled: PD_OV12A10MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEEiEE() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__swap_out_circular_buffer(std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE26__swap_out_circular_bufferERNS_14__split_bufferISC_RSD_EE() called");
    return 0;
}

/* Exported Object: typeinfo for nlohmann::detail::other_error */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail11other_errorE = NULL;

/* Demangled: getWorkPerCycle_Main_M2() */
extern "C" __attribute__((visibility("default"))) int _Z23getWorkPerCycle_Main_M2v(void) {
    ALOGD("_Z23getWorkPerCycle_Main_M2v() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main2_M5() */
extern "C" __attribute__((visibility("default"))) int _Z24getWorkPerCycle_Main2_M5v(void) {
    ALOGD("_Z24getWorkPerCycle_Main2_M5v() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)8>(AF_CONFIG_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_T(void) {
    ALOGD("_Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_T() called");
    return 0;
}

/* Exported Object: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)2>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern "C" __attribute__((visibility("default"))) void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE2EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef = NULL;

/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE16EEPKiv(void) {
    ALOGD("_Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE16EEPKiv() called");
    return 0;
}

/* Demangled: cust_getFlashITab2_sub(short*) */
extern "C" __attribute__((visibility("default"))) int _Z22cust_getFlashITab2_subPs(void) {
    ALOGD("_Z22cust_getFlashITab2_subPs() called");
    return 0;
}

/* Demangled: get_zsd_cap_stored_frame_cnt() */
extern "C" __attribute__((visibility("default"))) int _Z28get_zsd_cap_stored_frame_cntv(void) {
    ALOGD("_Z28get_zsd_cap_stored_frame_cntv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PDBufMgr::~PDBufMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgrD1Ev(void) {
    ALOGD("_ZN8PDBufMgrD1Ev() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::~PD_OV13870MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAWD0Ev(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAWD0Ev() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::input_stream_adapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail20input_stream_adapterE = NULL;

/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)0>(AF_CONFIG_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_T(void) {
    ALOGD("_Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_T() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: DoCamCalPDAF(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z12DoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z12DoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: XiaoMiDoCamCalFuseId(NSCam::ICamCalHelper*, unsigned int, CAM_CAL_DATA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z20XiaoMiDoCamCalFuseIdPN5NSCam13ICamCalHelperEjP19CAM_CAL_DATA_STRUCT(void) {
    ALOGD("_Z20XiaoMiDoCamCalFuseIdPN5NSCam13ICamCalHelperEjP19CAM_CAL_DATA_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for PD_S5K2X8MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_S5K2X8MIPIRAW = NULL;

/* Exported Object: vtable for PD_IMX362MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX362MIPIRAW = NULL;

/* Demangled: getAEManualPline(EAEManualPline_T const&, eAETableID&, eAETableID&) */
extern "C" __attribute__((visibility("default"))) int _Z16getAEManualPlineRK16EAEManualPline_TR10eAETableIDS3_(void) {
    ALOGD("_Z16getAEManualPlineRK16EAEManualPline_TR10eAETableIDS3_() called");
    return 0;
}

/* Exported Object: pDummy_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pDummy_getDefaultData = NULL;

/* Demangled: PD_OV23850MIPIRAW::PD_OV23850MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV23850MIPIRAWC2Ev(void) {
    ALOGD("_ZN17PD_OV23850MIPIRAWC2Ev() called");
    return 0;
}

/* Exported Object: PD_IMX386MIPIRAW::m_u4Reg_AdDaPair_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX386MIPIRAW19m_u4Reg_AdDaPair_SzE = NULL;

/* Demangled: isSESetting() */
extern "C" __attribute__((visibility("default"))) int _Z11isSESettingv(void) {
    ALOGD("_Z11isSESettingv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_SL2(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_SL2_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_SL2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_SL2ERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: BU6429AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23BU6429AF_getDefaultDataPvj(void) {
    ALOGD("_Z23BU6429AF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: DualCameraData_FromPersist_IsValid(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z34DualCameraData_FromPersist_IsValidPKc(void) {
    ALOGD("_Z34DualCameraData_FromPersist_IsValidPKc() called");
    return 0;
}

/* Exported Object: vtable for PDBufMgrOpen */
extern "C" __attribute__((visibility("default"))) void* _ZTV12PDBufMgrOpen = NULL;

/* Demangled: PDBufMgr::createInstance(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgr14createInstanceER12SPDProfile_t(void) {
    ALOGD("_ZN8PDBufMgr14createInstanceER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::GetVersionOfPdafLibrary(SPDLibVersion_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW23GetVersionOfPdafLibraryER15SPDLibVersion_t() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEEC2EjjSE_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898212XDAF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<9077u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj9077ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX230MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Exported Object: CUSTOM_DEPTHMAP_SIZE */
extern "C" __attribute__((visibility("default"))) void* CUSTOM_DEPTHMAP_SIZE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Demangled: getAFExtendCoef(int, int, int, int, CustAF_THRES_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z15getAFExtendCoefiiiiPPK14CustAF_THRES_T(void) {
    ALOGD("_Z15getAFExtendCoefiiiiPPK14CustAF_THRES_T() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_RMM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_RMM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_RMMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RMM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_RMMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_RMM_TE() called");
    return 0;
}

/* Demangled: cust_getFlashITab1(int, short*) */
extern "C" __attribute__((visibility("default"))) int _Z18cust_getFlashITab1iPs(void) {
    ALOGD("_Z18cust_getFlashITab1iPs() called");
    return 0;
}

/* Exported Object: int _getAFParam<(NSIspTuning::ESensorDev_T)1>(AF_PARAM_T const**)::g_AFparam */
extern "C" __attribute__((visibility("default"))) void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE1EEiPPK10AF_PARAM_TE9g_AFparam = NULL;

/* Demangled: NSCamCustom::custom_GetYuvPreflashAF() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom23custom_GetYuvPreflashAFEv(void) {
    ALOGD("_ZN11NSCamCustom23custom_GetYuvPreflashAFEv() called");
    return 0;
}

/* Demangled: PDBufMgr::PDBufMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgrC2Ev(void) {
    ALOGD("_ZN8PDBufMgrC2Ev() called");
    return 0;
}

/* Demangled: PD_S5K3P8SXMIPIRAW::~PD_S5K3P8SXMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAWD2Ev(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::PD_OV13870MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAWC1Ev(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_MFB(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_MFB_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_MFBERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_MFB_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_MFBERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_MFB_TE() called");
    return 0;
}

/* Demangled: cust_getFlashProjectPara_sub_part2(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z34cust_getFlashProjectPara_sub_part2iiP26NVRAM_CAMERA_STROBE_STRUCT(void) {
    ALOGD("_Z34cust_getFlashProjectPara_sub_part2iiP26NVRAM_CAMERA_STROBE_STRUCT() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::userSetting_EFFECT_GGM_JNI(NSIspTuning::RAWIspCamInfo const&, mtk_camera_metadata_enum_android_control_effect_mode const&, NSIspTuning::ISP_NVRAM_GGM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom26userSetting_EFFECT_GGM_JNIERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom26userSetting_EFFECT_GGM_JNIERKNS_13RAWIspCamInfoERK52mtk_camera_metadata_enum_android_control_effect_modeRNS_15ISP_NVRAM_GGM_TE() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<9482u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj9482ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX230MIPIRAW::~PD_IMX230MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_SL2F(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_SL2_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom11refine_SL2FERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom11refine_SL2FERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_SL2_TE() called");
    return 0;
}

/* Demangled: get_3dnr_iso_enable_threshold_high() */
extern "C" __attribute__((visibility("default"))) int _Z34get_3dnr_iso_enable_threshold_highv(void) {
    ALOGD("_Z34get_3dnr_iso_enable_threshold_highv() called");
    return 0;
}

/* Exported Object: DCMF_CAMERA_OUTPUT_LIST */
extern "C" __attribute__((visibility("default"))) void* DCMF_CAMERA_OUTPUT_LIST = NULL;

/* Demangled: getDCMFCapturePhaseCnt() */
extern "C" __attribute__((visibility("default"))) int _Z22getDCMFCapturePhaseCntv(void) {
    ALOGD("_Z22getDCMFCapturePhaseCntv() called");
    return 0;
}

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::ICamCalCustom::createInstance(NSCam::ICamCalHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13ICamCalCustom14createInstanceEPNS_13ICamCalHelperE(void) {
    ALOGD("_ZN5NSCam13ICamCalCustom14createInstanceEPNS_13ICamCalHelperE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_BurstFlashlightGain10X(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning29custom_BurstFlashlightGain10XEi(void) {
    ALOGD("_ZN11NSYuvTuning29custom_BurstFlashlightGain10XEi() called");
    return 0;
}

/* Demangled: BU6424AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23BU6424AF_getDefaultDataPvj(void) {
    ALOGD("_Z23BU6424AF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::~PD_S5K3L8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_ANR(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_ANR_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_ANRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ANR_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_ANRERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ANR_TE() called");
    return 0;
}

/* Demangled: cust_setFlashPartId(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19cust_setFlashPartIdii(void) {
    ALOGD("_Z19cust_setFlashPartIdii() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: CustomHdrBRatioGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrBRatioGet(void) {
    ALOGD("CustomHdrBRatioGet() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::get_RawHDR_LCEGain_ConverParam() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning15IspTuningCustom30get_RawHDR_LCEGain_ConverParamEv(void) {
    ALOGD("_ZNK11NSIspTuning15IspTuningCustom30get_RawHDR_LCEGain_ConverParamEv() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Exported Object: vtable for PD_IMX499MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX499MIPIRAW = NULL;

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::find<unsigned long long>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_() called");
    return 0;
}

/* Demangled: cust_getFlashModeStyle(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z22cust_getFlashModeStyleii(void) {
    ALOGD("_Z22cust_getFlashModeStyleii() called");
    return 0;
}

/* Demangled: ShowCmdErrorLog(CAMERA_CAM_CAL_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z15ShowCmdErrorLog24CAMERA_CAM_CAL_TYPE_ENUM(void) {
    ALOGD("_Z15ShowCmdErrorLog24CAMERA_CAM_CAL_TYPE_ENUM() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::PD_IMX230MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: getManualHDRExpSetting(HDRExpSettingInputParam_S const&, HDRExpSettingOutputParam_S&, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z22getManualHDRExpSettingRK25HDRExpSettingInputParam_SR26HDRExpSettingOutputParam_Siiiii(void) {
    ALOGD("_Z22getManualHDRExpSettingRK25HDRExpSettingInputParam_SR26HDRExpSettingOutputParam_Siiiii() called");
    return 0;
}

/* Exported Object: int _getAFConfig<(NSIspTuning::ESensorDev_T)8>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<34906u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj34906ELj0EEE = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: CUST_ENABLE_FLASH_DURING_TOUCH() */
extern "C" __attribute__((visibility("default"))) int _Z30CUST_ENABLE_FLASH_DURING_TOUCHv(void) {
    ALOGD("_Z30CUST_ENABLE_FLASH_DURING_TOUCHv() called");
    return 0;
}

/* Exported Object: FuseId */
extern "C" __attribute__((visibility("default"))) void* FuseId = NULL;

/* Exported Object: PDList_main2 */
extern "C" __attribute__((visibility("default"))) void* PDList_main2 = NULL;

/* Demangled: PD_S5K3L8MIPIRAW::PD_S5K3L8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAWC2Ev() called");
    return 0;
}

/* Exported Object: RatTBL8cm */
extern "C" __attribute__((visibility("default"))) void* RatTBL8cm = NULL;

/* Exported Object: vtable for nlohmann::detail::input_buffer_adapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail20input_buffer_adapterE = NULL;

/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)2>(int, int, int, CustAF_THRES_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE2EEiiiiPPK14CustAF_THRES_T(void) {
    ALOGD("_Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE2EEiiiiPPK14CustAF_THRES_T() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T1EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_NR3D(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_NR3D_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom11refine_NR3DERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_NR3D_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom11refine_NR3DERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_16ISP_NVRAM_NR3D_TE() called");
    return 0;
}

/* Exported Object: PDList_main3 */
extern "C" __attribute__((visibility("default"))) void* PDList_main3 = NULL;

/* Demangled: getWorkPerCycle_Sub_M4() */
extern "C" __attribute__((visibility("default"))) int _Z22getWorkPerCycle_Sub_M4v(void) {
    ALOGD("_Z22getWorkPerCycle_Sub_M4v() called");
    return 0;
}

/* Demangled: DoCamCalStereoData(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z18DoCamCalStereoDataPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z18DoCamCalStereoDataPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)8>(int, int, int, CustAF_THRES_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE8EEiiiiPPK14CustAF_THRES_T(void) {
    ALOGD("_Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE8EEiiiiPPK14CustAF_THRES_T() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)6>() */
extern "C" __attribute__((visibility("default"))) int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T6EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_OV12A10MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Exported Object: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)0>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE0EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)16>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern "C" __attribute__((visibility("default"))) void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE16EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef = NULL;

/* Exported Object: PDList_main */
extern "C" __attribute__((visibility("default"))) void* PDList_main = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<char const*>(char const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIPKcEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetYuvFLParam(int, NSCamCustom::YUV_FL_PARAM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom20custom_GetYuvFLParamEiRNS_14YUV_FL_PARAM_TE(void) {
    ALOGD("_ZN11NSCamCustom20custom_GetYuvFLParamEiRNS_14YUV_FL_PARAM_TE() called");
    return 0;
}

/* Exported Object: pAK7371AF_MAIN2_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pAK7371AF_MAIN2_getDefaultData = NULL;

/* Demangled: PD_IMX362MIPIRAW::~PD_IMX362MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAWD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE4EEPKiv(void) {
    ALOGD("_Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE4EEPKiv() called");
    return 0;
}

/* Demangled: cust_getFlashHalTorchDuty_main(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z30cust_getFlashHalTorchDuty_mainPiS_(void) {
    ALOGD("_Z30cust_getFlashHalTorchDuty_mainPiS_() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<20533u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj20533ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_S5K3P8SXMIPIRAW::~PD_S5K3P8SXMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAWD0Ev(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: CUST_ENABLE_VIDEO_AUTO_FLASH() */
extern "C" __attribute__((visibility("default"))) int _Z28CUST_ENABLE_VIDEO_AUTO_FLASHv(void) {
    ALOGD("_Z28CUST_ENABLE_VIDEO_AUTO_FLASHv() called");
    return 0;
}

/* Demangled: resetCycleCtr_Main2() */
extern "C" __attribute__((visibility("default"))) int _Z19resetCycleCtr_Main2v(void) {
    ALOGD("_Z19resetCycleCtr_Main2v() called");
    return 0;
}

/* Exported Object: gulSensorResol */
extern "C" __attribute__((visibility("default"))) void* gulSensorResol = NULL;

/* Exported Object: vtable for CustomPQImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV12CustomPQImpl = NULL;

/* Demangled: get_asd_CustomizeData1(ASD_Customize_PARA1*) */
extern "C" __attribute__((visibility("default"))) int _Z22get_asd_CustomizeData1P19ASD_Customize_PARA1(void) {
    ALOGD("_Z22get_asd_CustomizeData1P19ASD_Customize_PARA1() called");
    return 0;
}

/* Demangled: needControlMmdvfs() */
extern "C" __attribute__((visibility("default"))) int _Z17needControlMmdvfsv(void) {
    ALOGD("_Z17needControlMmdvfsv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)6>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: cust_getFlashMaxIDuty_sub(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z25cust_getFlashMaxIDuty_subiiPiS_(void) {
    ALOGD("_Z25cust_getFlashMaxIDuty_subiiPiS_() called");
    return 0;
}

/* Demangled: BU64748AF_MAIN2_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z30BU64748AF_MAIN2_getDefaultDataPvj(void) {
    ALOGD("_Z30BU64748AF_MAIN2_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: DoCamCalLensId(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z14DoCamCalLensIdPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z14DoCamCalLensIdPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<12609u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj12609ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_S5KGW1OFILMMIPIRAW::~PD_S5KGW1OFILMMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAWD1Ev(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: LC898217AF_T_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z27LC898217AF_T_getDefaultDataPvj(void) {
    ALOGD("_Z27LC898217AF_T_getDefaultDataPvj() called");
    return 0;
}

/* Exported Object: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_All */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX338MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_AllE = NULL;

/* Demangled: getWorkPerCycle_Main_M3() */
extern "C" __attribute__((visibility("default"))) int _Z23getWorkPerCycle_Main_M3v(void) {
    ALOGD("_Z23getWorkPerCycle_Main_M3v() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main2_M6() */
extern "C" __attribute__((visibility("default"))) int _Z24getWorkPerCycle_Main2_M6v(void) {
    ALOGD("_Z24getWorkPerCycle_Main2_M6v() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_S5K3M3MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_S5K3L8MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3L8MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_S5K3L8MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_S5K2P8MIPIRAW::~PD_S5K2P8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::PD_IMX362MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAWC2Ev() called");
    return 0;
}

/* Exported Object: uEVInfex */
extern "C" __attribute__((visibility("default"))) void* uEVInfex = NULL;

/* Demangled: openSoLibrary(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13openSoLibraryjj(void) {
    ALOGD("_Z13openSoLibraryjj() called");
    return 0;
}

/* Demangled: PD_S5K3P8SXMIPIRAW::PD_S5K3P8SXMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAWC1Ev(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAWC1Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: getMVHDR3ExpoBufSize() */
extern "C" __attribute__((visibility("default"))) int _Z20getMVHDR3ExpoBufSizev(void) {
    ALOGD("_Z20getMVHDR3ExpoBufSizev() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAW7seprateEiPhiiiPtj(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAW7seprateEiPhiiiPtj() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::~PD_IMX398MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAWD2Ev() called");
    return 0;
}

/* Exported Object: guard variable for NSFeature::SensorInfoIdxMgr<34907u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature16SensorInfoIdxMgrILj34907ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX258MIPIRAW::~PD_IMX258MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)6>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: cust_getFlashIMapFunc_main_part2() */
extern "C" __attribute__((visibility("default"))) int _Z32cust_getFlashIMapFunc_main_part2v(void) {
    ALOGD("_Z32cust_getFlashIMapFunc_main_part2v() called");
    return 0;
}

/* Exported Object: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair_PDWin_Fix */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX519MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE = NULL;

/* Demangled: PD_S5KGW1OFILMMIPIRAW::PD_S5KGW1OFILMMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAWC2Ev(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_capture_in_color(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom29is_to_invoke_capture_in_colorERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom29is_to_invoke_capture_in_colorERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__erase_unique<unsigned long long>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIyEEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIyEEjRKT_() called");
    return 0;
}

/* Demangled: cust_getFlashITab1_main(short*) */
extern "C" __attribute__((visibility("default"))) int _Z23cust_getFlashITab1_mainPs(void) {
    ALOGD("_Z23cust_getFlashITab1_mainPs() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_sub2_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z38cust_fillDefaultStrobeNVRam_sub2_part2Pv(void) {
    ALOGD("_Z38cust_fillDefaultStrobeNVRam_sub2_part2Pv() called");
    return 0;
}

/* Demangled: DoCamCalPDAFOP586_T1(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z20DoCamCalPDAFOP586_T1PN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z20DoCamCalPDAFOP586_T1PN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Exported Object: PD_IMX519MIPIRAW::m_u4Reg_AdDaPair_PDWin_Flexible_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX519MIPIRAW34m_u4Reg_AdDaPair_PDWin_Flexible_SzE = NULL;

/* Demangled: get_zsd_cap_stored_update_period() */
extern "C" __attribute__((visibility("default"))) int _Z32get_zsd_cap_stored_update_periodv(void) {
    ALOGD("_Z32get_zsd_cap_stored_update_periodv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> >(unsigned long long const&, std::__1::pair<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJNS_4pairIyS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJNS_4pairIyS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for PD_S5KGW1SUNNYMIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV21PD_S5KGW1SUNNYMIPIRAW = NULL;

/* Demangled: PD_S5K2P8MIPIRAW::PD_S5K2P8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)16>(AF_CONFIG_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_T(void) {
    ALOGD("_Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_T() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_main2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z33cust_fillDefaultStrobeNVRam_main2Pv(void) {
    ALOGD("_Z33cust_fillDefaultStrobeNVRam_main2Pv() called");
    return 0;
}

/* Exported Object: PD_IMX338MIPIRAW::m_u2Reg_AdDaPair_PDWin_Fix */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX338MIPIRAW26m_u2Reg_AdDaPair_PDWin_FixE = NULL;

/* Demangled: PD_IMX519MIPIRAW::GetDefocus(SPDROIInput_T&, SPDROIResult_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW10GetDefocusER13SPDROIInput_TR14SPDROIResult_T() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail11parse_errorE = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T0EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)4>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE4EE11getInstanceEjE9singleton = NULL;

/* Demangled: LensCustomSetIndex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18LensCustomSetIndexj(void) {
    ALOGD("_Z18LensCustomSetIndexj() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::~PD_S5KGW1SUNNYMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAWD1Ev(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_S5K3M3MIPIRAW::~PD_S5K3M3MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: PD_S5K2P7MIPIRAW::~PD_S5K2P7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: calIsoRatio(ZVHDRExpSettingInputParam_S const&, ZVHDRExpSettingOutputParam_S&, ZVHDRSmoothInfo_S&) */
extern "C" __attribute__((visibility("default"))) int _Z11calIsoRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S(void) {
    ALOGD("_Z11calIsoRatioRK27ZVHDRExpSettingInputParam_SR28ZVHDRExpSettingOutputParam_SR17ZVHDRSmoothInfo_S() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: PD_S5K2L7MIPIRAW::~PD_S5K2L7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_S5K2P8MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EEiEERPNS_15__tree_end_nodeISP_EESQ_RKT_() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_4pairIKS7_SD_EEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISU_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: CUST_ONE_SHOT_AE_BEFORE_TAF() */
extern "C" __attribute__((visibility("default"))) int _Z27CUST_ONE_SHOT_AE_BEFORE_TAFv(void) {
    ALOGD("_Z27CUST_ONE_SHOT_AE_BEFORE_TAFv() called");
    return 0;
}

/* Demangled: NSCamCustom::custom_GetYuvFlashlightDuty() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom27custom_GetYuvFlashlightDutyEv(void) {
    ALOGD("_ZN11NSCamCustom27custom_GetYuvFlashlightDutyEv() called");
    return 0;
}

/* Demangled: cust_getPrecapAfMode() */
extern "C" __attribute__((visibility("default"))) int _Z20cust_getPrecapAfModev(void) {
    ALOGD("_Z20cust_getPrecapAfModev() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::is_HDRTuning(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom12is_HDRTuningERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom12is_HDRTuningERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub2_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z48cust_fillDefaultFlashCalibrationNVRam_sub2_part2Pv(void) {
    ALOGD("_Z48cust_fillDefaultFlashCalibrationNVRam_sub2_part2Pv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: NSCam::ICamCalCustom::sDrvConfig */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam13ICamCalCustom10sDrvConfigE = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: cust_getFlashProjectPara_sub(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z28cust_getFlashProjectPara_subiiP26NVRAM_CAMERA_STROBE_STRUCT(void) {
    ALOGD("_Z28cust_getFlashProjectPara_subiiP26NVRAM_CAMERA_STROBE_STRUCT() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: DoCamCalPDAFOP576(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z17DoCamCalPDAFOP576PN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z17DoCamCalPDAFOP576PN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::PD_S5KGW1SUNNYMIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAWC2Ev(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: calculateExpSettingByShutterISOpriority(AE_EXP_MANUAL_INPUT_T*, AE_EXP_SETTING_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _Z39calculateExpSettingByShutterISOpriorityP21AE_EXP_MANUAL_INPUT_TP23AE_EXP_SETTING_OUTPUT_T(void) {
    ALOGD("_Z39calculateExpSettingByShutterISOpriorityP21AE_EXP_MANUAL_INPUT_TP23AE_EXP_SETTING_OUTPUT_T() called");
    return 0;
}

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::find<unsigned long long>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS5_S2_EEEERKT_() called");
    return 0;
}

/* Demangled: PD_S5K2L7MIPIRAW::PD_S5K2L7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)8>(AF_PARAM_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE8EEiPPK10AF_PARAM_T(void) {
    ALOGD("_Z11_getAFParamILN11NSIspTuning12ESensorDev_TE8EEiPPK10AF_PARAM_T() called");
    return 0;
}

/* Demangled: closeSoLibrary(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14closeSoLibraryjj(void) {
    ALOGD("_Z14closeSoLibraryjj() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetYuvFlashlightDuty(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning27custom_GetYuvFlashlightDutyEi(void) {
    ALOGD("_ZN11NSYuvTuning27custom_GetYuvFlashlightDutyEi() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)6>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam_sub2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z32cust_fillDefaultStrobeNVRam_sub2Pv(void) {
    ALOGD("_Z32cust_fillDefaultStrobeNVRam_sub2Pv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<2417u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj2417ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: getShortExpFrame() */
extern "C" __attribute__((visibility("default"))) int _Z16getShortExpFramev(void) {
    ALOGD("_Z16getShortExpFramev() called");
    return 0;
}

/* Demangled: DoCamCalModuleVersion(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z21DoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z21DoCamCalModuleVersionPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: DW9718AF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23DW9718AF_getDefaultDataPvj(void) {
    ALOGD("_Z23DW9718AF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: PD_S5K2L7MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::SetCalibrationData(unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpen18SetCalibrationDataEjPh(void) {
    ALOGD("_ZN12PDBufMgrOpen18SetCalibrationDataEjPh() called");
    return 0;
}

/* Demangled: FSCCustom::getMarcoToInfRatioOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCCustom24getMarcoToInfRatioOffsetEv(void) {
    ALOGD("_ZN9FSCCustom24getMarcoToInfRatioOffsetEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::__find_equal<DCMF_CAMERA_OUTPUTS>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, DCMF_CAMERA_OUTPUTS const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISB_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISB_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetYuvPreflashAF(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning23custom_GetYuvPreflashAFEi(void) {
    ALOGD("_ZN11NSYuvTuning23custom_GetYuvPreflashAFEi() called");
    return 0;
}

/* Demangled: OverriderDualCamCalData(int) */
extern "C" __attribute__((visibility("default"))) int _Z23OverriderDualCamCalDatai(void) {
    ALOGD("_Z23OverriderDualCamCalDatai() called");
    return 0;
}

/* Demangled: PD_S5K2P8MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P8MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_S5K2P8MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: getIsPureZSD_DCMF() */
extern "C" __attribute__((visibility("default"))) int _Z17getIsPureZSD_DCMFv(void) {
    ALOGD("_Z17getIsPureZSD_DCMFv() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*> > > > std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__construct_node<std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__construct_nodeIJRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSP_IJEEEEEENS_10unique_ptrINS_11__tree_nodeISE_PvEENS_22__tree_node_destructorINS5_ISX_EEEEEEDpOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_stream_adapter, std::__1::allocator<nlohmann::detail::input_stream_adapter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_stream_adapterENS_9allocatorIS3_EEEE = NULL;

/* Demangled: getWorkPerCycle_Sub_M5() */
extern "C" __attribute__((visibility("default"))) int _Z22getWorkPerCycle_Sub_M5v(void) {
    ALOGD("_Z22getWorkPerCycle_Sub_M5v() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: cust_getFlashIMapFunc_sub_part2() */
extern "C" __attribute__((visibility("default"))) int _Z31cust_getFlashIMapFunc_sub_part2v(void) {
    ALOGD("_Z31cust_getFlashIMapFunc_sub_part2v() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::~PD_IMX398MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAWD0Ev() called");
    return 0;
}

/* Exported Object: int _getAFConfig<(NSIspTuning::ESensorDev_T)2>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: XiaoMiDoCamCal_Dump_All(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z23XiaoMiDoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z23XiaoMiDoCamCal_Dump_AllPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::ExtractCaliData() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW15ExtractCaliDataEv(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW15ExtractCaliDataEv() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::~PD_IMX258MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAW7seprateEiPhiiiPtj(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAW7seprateEiPhiiiPtj() called");
    return 0;
}

/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)1>(AF_CONFIG_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_T(void) {
    ALOGD("_Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE1EEiPPK11AF_CONFIG_T() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Sub(int) */
extern "C" __attribute__((visibility("default"))) int _Z19getWorkPerCycle_Subi(void) {
    ALOGD("_Z19getWorkPerCycle_Subi() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU63169AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z37GET_BU63169AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::RGB2YLinear(NSIspTuning::ISP_NVRAM_CCM_T const&, NSIspTuning::ISP_NVRAM_CCM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom11RGB2YLinearERKNS_15ISP_NVRAM_CCM_TERS1_(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom11RGB2YLinearERKNS_15ISP_NVRAM_CCM_TERS1_() called");
    return 0;
}

/* Exported Object: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)1>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE1EE11getInstanceEjE9singleton = NULL;

/* Exported Object: vtable for NSCam::CamCalCustomImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16CamCalCustomImplE = NULL;

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<2417u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj2417ELj0EEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: CUST_ENABLE_FACE_AE() */
extern "C" __attribute__((visibility("default"))) int _Z19CUST_ENABLE_FACE_AEv(void) {
    ALOGD("_Z19CUST_ENABLE_FACE_AEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSJ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_S2_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: PD_S5KGW1SUNNYMIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1SUNNYMIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN21PD_S5KGW1SUNNYMIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_IMX398MIPIRAW::PD_IMX398MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX398MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX398MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_S5K3M3MIPIRAW::~PD_S5K3M3MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: PD_S5K2P7MIPIRAW::~PD_S5K2P7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: getVsTimeOutLimit_ns(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z20getVsTimeOutLimit_nsii(void) {
    ALOGD("_Z20getVsTimeOutLimit_nsii() called");
    return 0;
}

/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE4EEiv(void) {
    ALOGD("_Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE4EEiv() called");
    return 0;
}

/* Demangled: DW9800VAF_getDefaultData(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24DW9800VAF_getDefaultDataPvj(void) {
    ALOGD("_Z24DW9800VAF_getDefaultDataPvj() called");
    return 0;
}

/* Demangled: DoCamCal2AGain(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z14DoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z14DoCamCal2AGainPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_S5K3P8SXMIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN18PD_S5K3P8SXMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN18PD_S5K3P8SXMIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: PD_IMX258MIPIRAW::PD_IMX258MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX258MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX258MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<LogicalSensorStruct, std::__1::allocator<LogicalSensorStruct> >::__push_back_slow_path<LogicalSensorStruct const&>(LogicalSensorStruct const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI19LogicalSensorStructNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: int _getAFParam<(NSIspTuning::ESensorDev_T)0>(AF_PARAM_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z11_getAFParamILN11NSIspTuning12ESensorDev_TE0EEiPPK10AF_PARAM_T(void) {
    ALOGD("_Z11_getAFParamILN11NSIspTuning12ESensorDev_TE0EEiPPK10AF_PARAM_T() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: LensCustomInit(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14LensCustomInitj(void) {
    ALOGD("_Z14LensCustomInitj() called");
    return 0;
}

/* Demangled: NSCam::CamCalCustomImpl::getCalData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16CamCalCustomImpl10getCalDataEPj(void) {
    ALOGD("_ZN5NSCam16CamCalCustomImpl10getCalDataEPj() called");
    return 0;
}

/* Demangled: PD_IMX230MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX230MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX230MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Exported Object: PD_IMX230MIPIRAW::m_u2Reg_AdDaPair */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX230MIPIRAW16m_u2Reg_AdDaPairE = NULL;

/* Demangled: get_gesture_CustomizeData(GS_Customize_PARA*) */
extern "C" __attribute__((visibility("default"))) int _Z25get_gesture_CustomizeDataP17GS_Customize_PARA(void) {
    ALOGD("_Z25get_gesture_CustomizeDataP17GS_Customize_PARA() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<9077u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj9077ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX338MIPIRAW::ExtractCaliData() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW15ExtractCaliDataEv(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW15ExtractCaliDataEv() called");
    return 0;
}

/* Demangled: decodeMVHDR3ExpoFLKStatistic(void*, void*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _Z28decodeMVHDR3ExpoFLKStatisticPvS_Rj(void) {
    ALOGD("_Z28decodeMVHDR3ExpoFLKStatisticPvS_Rj() called");
    return 0;
}

/* Exported Object: RatTBL10cm */
extern "C" __attribute__((visibility("default"))) void* RatTBL10cm = NULL;

/* Demangled: std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::vector(std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEEC2ERKSD_() called");
    return 0;
}

/* Demangled: CustomPQImpl::decidePQEnable_EIS30_VIDEO(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CustomPQImpl26decidePQEnable_EIS30_VIDEOEj(void) {
    ALOGD("_ZN12CustomPQImpl26decidePQEnable_EIS30_VIDEOEj() called");
    return 0;
}

/* Demangled: ForceEnableFVInFixedFocus(int) */
extern "C" __attribute__((visibility("default"))) int _Z25ForceEnableFVInFixedFocusi(void) {
    ALOGD("_Z25ForceEnableFVInFixedFocusi() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Main_M4() */
extern "C" __attribute__((visibility("default"))) int _Z23getWorkPerCycle_Main_M4v(void) {
    ALOGD("_Z23getWorkPerCycle_Main_M4v() called");
    return 0;
}

/* Exported Object: vtable for PD_OV23850MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV17PD_OV23850MIPIRAW = NULL;

/* Demangled: CustomHdrGainArrayGet */
extern "C" __attribute__((visibility("default"))) int CustomHdrGainArrayGet(void) {
    ALOGD("CustomHdrGainArrayGet() called");
    return 0;
}

/* Exported Object: PDList_sub2 */
extern "C" __attribute__((visibility("default"))) void* PDList_sub2 = NULL;

/* Demangled: PD_S5K3M3MIPIRAW::PD_S5K3M3MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: PD_S5K2P7MIPIRAW::PD_S5K2P7MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAWC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::invalid_iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail16invalid_iteratorE = NULL;

/* Demangled: cust_fillDefaultStrobeNVRam_main2_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z39cust_fillDefaultStrobeNVRam_main2_part2Pv(void) {
    ALOGD("_Z39cust_fillDefaultStrobeNVRam_main2_part2Pv() called");
    return 0;
}

/* Demangled: PD_IMX499MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: PD_S5K3M2MIPIRAW::~PD_S5K3M2MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE4EERK11AWB_PARAM_Tv(void) {
    ALOGD("_Z11getAWBParamILN11NSIspTuning12ESensorDev_TE4EERK11AWB_PARAM_Tv() called");
    return 0;
}

/* Demangled: cameraCustomInit() */
extern "C" __attribute__((visibility("default"))) int _Z16cameraCustomInitv(void) {
    ALOGD("_Z16cameraCustomInitv() called");
    return 0;
}

/* Demangled: GetCameraFlashDefaultPara(unsigned int, unsigned int, NVRAM_CAMERA_STROBE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z25GetCameraFlashDefaultParajjP26NVRAM_CAMERA_STROBE_STRUCT(void) {
    ALOGD("_Z25GetCameraFlashDefaultParajjP26NVRAM_CAMERA_STROBE_STRUCT() called");
    return 0;
}

/* Demangled: PD_S5KGW1OFILMMIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN21PD_S5KGW1OFILMMIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN21PD_S5KGW1OFILMMIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, void*>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::find<unsigned long long>(unsigned long long const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_(void) {
    ALOGD("_ZNKSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE4findIyEENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_S2_EEEERKT_() called");
    return 0;
}

/* Demangled: PD_S5K2P7MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_IMX499MIPIRAW::~PD_IMX499MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAWD2Ev(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAWD2Ev() called");
    return 0;
}

/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)1>(int, int, int, CustAF_THRES_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE1EEiiiiPPK14CustAF_THRES_T(void) {
    ALOGD("_Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE1EEiiiiPPK14CustAF_THRES_T() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)16, (CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE16EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, int>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, int>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, int> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyiEENS_22__unordered_map_hasherIyS2_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS2_NS_8equal_toIyEELb1EEENS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: PD_S5K3M3MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M3MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_S5K3M3MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: PD_OV13855MIPIRAW::~PD_OV13855MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAWD1Ev(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: cust_getFlashHalTorchDuty(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z25cust_getFlashHalTorchDutyiPiS_(void) {
    ALOGD("_Z25cust_getFlashHalTorchDutyiPiS_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_FP5516AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_FP5516AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PDBufMgr::separateLR(unsigned int, unsigned char*, unsigned int, unsigned int, unsigned short*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PDBufMgr10separateLREjPhjjPtjP9PD_AREA_T(void) {
    ALOGD("_ZN8PDBufMgr10separateLREjPhjjPtjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: resetCycleCtr_Sub() */
extern "C" __attribute__((visibility("default"))) int _Z17resetCycleCtr_Subv(void) {
    ALOGD("_Z17resetCycleCtr_Subv() called");
    return 0;
}

/* Demangled: NSYuvTuning::custom_GetYuvFlashlightHighCurrentTimeout(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSYuvTuning41custom_GetYuvFlashlightHighCurrentTimeoutEi(void) {
    ALOGD("_ZN11NSYuvTuning41custom_GetYuvFlashlightHighCurrentTimeoutEi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::GetLRBufferInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAW15GetLRBufferInfoERjS0_S0_(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAW15GetLRBufferInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEE = NULL;

/* Exported Object: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)2>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE2EE11getInstanceEjE9singleton = NULL;

/* Exported Object: LomoFilterG2C */
extern "C" __attribute__((visibility("default"))) void* LomoFilterG2C = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE6rehashEj() called");
    return 0;
}

/* Demangled: PD_S5K3M2MIPIRAW::PD_S5K3M2MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::~PDBufMgrOpen() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpenD1Ev(void) {
    ALOGD("_ZN12PDBufMgrOpenD1Ev() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: is_to_invoke_swnr_interpolation(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z31is_to_invoke_swnr_interpolationjj(void) {
    ALOGD("_Z31is_to_invoke_swnr_interpolationjj() called");
    return 0;
}

/* Demangled: FSCCustom::isEnabledFSC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FSCCustom12isEnabledFSCEj(void) {
    ALOGD("_ZN9FSCCustom12isEnabledFSCEj() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_CamInfo(NSIspTuning::RAWIspCamInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom14refine_CamInfoERNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom14refine_CamInfoERNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: cust_getFlashProjectPara_V3(int, int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z27cust_getFlashProjectPara_V3iiiP26NVRAM_CAMERA_STROBE_STRUCT(void) {
    ALOGD("_Z27cust_getFlashProjectPara_V3iiiP26NVRAM_CAMERA_STROBE_STRUCT() called");
    return 0;
}

/* Demangled: get_cpu_ctrl(android::KeyedVector<ScenInfoKey, int>, android::Vector<CpuCtrlParam>&) */
extern "C" __attribute__((visibility("default"))) int _Z12get_cpu_ctrlN7android11KeyedVectorI11ScenInfoKeyiEERNS_6VectorI12CpuCtrlParamEE(void) {
    ALOGD("_Z12get_cpu_ctrlN7android11KeyedVectorI11ScenInfoKeyiEERNS_6VectorI12CpuCtrlParamEE() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getHDRAEParam<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z13getHDRAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_W_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: CUST_ENABLE_VIDEO_DYNAMIC_FRAME_RATE() */
extern "C" __attribute__((visibility("default"))) int _Z36CUST_ENABLE_VIDEO_DYNAMIC_FRAME_RATEv(void) {
    ALOGD("_Z36CUST_ENABLE_VIDEO_DYNAMIC_FRAME_RATEv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)8, (CAM_SCENARIO_T)3>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE8EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: int isAWBEnabled<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE4EEiv(void) {
    ALOGD("_Z12isAWBEnabledILN11NSIspTuning12ESensorDev_TE4EEiv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(CAMERA_DATA_TYPE_ENUM, void*, unsigned int)> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFj21CAMERA_DATA_TYPE_ENUMPvjEEENS_22__unordered_map_hasherIyS6_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS6_NS_8equal_toIyEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_S3_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T4EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T4EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: pLC898212XDAF_MONO_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pLC898212XDAF_MONO_getDefaultData = NULL;

/* Demangled: IsGoldenBinFile(char*) */
extern "C" __attribute__((visibility("default"))) int _Z15IsGoldenBinFilePc(void) {
    ALOGD("_Z15IsGoldenBinFilePc() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::~PD_IMX338MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAWD1Ev() called");
    return 0;
}

/* Exported Object: PD_IMX519MIPIRAW::m_u2Reg_AdDaPair_PDWin_Flexible_Cmd */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX519MIPIRAW35m_u2Reg_AdDaPair_PDWin_Flexible_CmdE = NULL;

/* Demangled: PD_OV13855MIPIRAW::PD_OV13855MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13855MIPIRAWC2Ev(void) {
    ALOGD("_ZN17PD_OV13855MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: PD_IMX362MIPIRAW::GetDualPDVCInfo(int, SDUALPDVCINFO_t&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX362MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti(void) {
    ALOGD("_ZN16PD_IMX362MIPIRAW15GetDualPDVCInfoEiR15SDUALPDVCINFO_ti() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSP_SP_() called");
    return 0;
}

/* Exported Object: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)8>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE8EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Exported Object: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)4>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern "C" __attribute__((visibility("default"))) void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE4EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::refine_ABF(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_ABF_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_ABFERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ABF_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_ABFERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_ABF_TE() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::GetPDOHWInfo(int, SPDOHWINFO_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpen12GetPDOHWInfoEiR12SPDOHWINFO_t(void) {
    ALOGD("_ZN12PDBufMgrOpen12GetPDOHWInfoEiR12SPDOHWINFO_t() called");
    return 0;
}

/* Demangled: int const* getAEActiveCycle<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE2EEPKiv(void) {
    ALOGD("_Z16getAEActiveCycleILN11NSIspTuning12ESensorDev_TE2EEPKiv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::PDBufMgrOpen() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpenC2Ev(void) {
    ALOGD("_ZN12PDBufMgrOpenC2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE16EEE = NULL;

/* Demangled: cust_isNeedDoPrecapAF_v2(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z24cust_isNeedDoPrecapAF_v2iiiii(void) {
    ALOGD("_Z24cust_isNeedDoPrecapAF_v2iiiii() called");
    return 0;
}

/* Demangled: PD_IMX386MIPIRAW::GetPDCalSz() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW10GetPDCalSzEv(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW10GetPDCalSzEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: unlockCustomTuningLibrary(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25unlockCustomTuningLibraryjj(void) {
    ALOGD("_Z25unlockCustomTuningLibraryjj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)4, (CAM_SCENARIO_T)3>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE4EL14CAM_SCENARIO_T3EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getVTAEParam<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z12getVTAEParamILN11NSIspTuning12ESensorDev_TE2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::evaluate_Shading_CCT_index(NSIspTuning::RAWIspCamInfo const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning15IspTuningCustom26evaluate_Shading_CCT_indexERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZNK11NSIspTuning15IspTuningCustom26evaluate_Shading_CCT_indexERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: LensCustomGetInitFunc(MSDK_LENS_INIT_FUNCTION_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z21LensCustomGetInitFuncP30MSDK_LENS_INIT_FUNCTION_STRUCT(void) {
    ALOGD("_Z21LensCustomGetInitFuncP30MSDK_LENS_INIT_FUNCTION_STRUCT() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z40GET_LC898217AF_T_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::PD_IMX338MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAWC2Ev(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAWC2Ev() called");
    return 0;
}

/* Exported Object: vtable for PD_IMX338MIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV16PD_IMX338MIPIRAW = NULL;

/* Demangled: decodemVHDRStatistic(mVHDRInputParam_S const&, mVHDROutputParam_S&) */
extern "C" __attribute__((visibility("default"))) int _Z20decodemVHDRStatisticRK17mVHDRInputParam_SR18mVHDROutputParam_S(void) {
    ALOGD("_Z20decodemVHDRStatisticRK17mVHDRInputParam_SR18mVHDROutputParam_S() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN8nlohmann10basic_jsonINS_3mapENS_6vectorENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS8_NS1_14adl_serializerEEERNS8_ISC_EEED2Ev() called");
    return 0;
}

/* Demangled: lockCustomTuningLibrary(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23lockCustomTuningLibraryjj(void) {
    ALOGD("_Z23lockCustomTuningLibraryjj() called");
    return 0;
}

/* Demangled: cust_fillDefaultStrobeNVRam(int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z27cust_fillDefaultStrobeNVRamiPv(void) {
    ALOGD("_Z27cust_fillDefaultStrobeNVRamiPv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_bxydS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEEiEENS_21__tree_const_iteratorISE_SV_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_UDM(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_UDM_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_UDMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_UDM_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_UDMERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_UDM_TE() called");
    return 0;
}

/* Demangled: cust_getFlashProjectPara_main(int, int, NVRAM_CAMERA_STROBE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z29cust_getFlashProjectPara_mainiiP26NVRAM_CAMERA_STROBE_STRUCT(void) {
    ALOGD("_Z29cust_getFlashProjectPara_mainiiP26NVRAM_CAMERA_STROBE_STRUCT() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub(void*) */
extern "C" __attribute__((visibility("default"))) int _Z41cust_fillDefaultFlashCalibrationNVRam_subPv(void) {
    ALOGD("_Z41cust_fillDefaultFlashCalibrationNVRam_subPv() called");
    return 0;
}

/* Exported Object: pBU63169AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pBU63169AF_getDefaultData = NULL;

/* Demangled: DoCamCalPDAFOP586_T0(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z20DoCamCalPDAFOP586_T0PN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z20DoCamCalPDAFOP586_T0PN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: getWorkPerCycle_Sub_M6() */
extern "C" __attribute__((visibility("default"))) int _Z22getWorkPerCycle_Sub_M6v(void) {
    ALOGD("_Z22getWorkPerCycle_Sub_M6v() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)6>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T6EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::map_AppName_to_MappingInfo(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom26map_AppName_to_MappingInfoEPKcS2_(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom26map_AppName_to_MappingInfoEPKcS2_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z42GET_AK7371AF_MAIN2_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: pDW9718SAF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pDW9718SAF_getDefaultData = NULL;

/* Exported Object: NSFeature::SensorInfoIdxMgr<9076u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj9076ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: NvramQueryHelperImpl::queryFeatureNvram(NvramQueryHelper::QueryCfg const&, void*&) */
extern "C" __attribute__((visibility("default"))) int _ZN20NvramQueryHelperImpl17queryFeatureNvramERKN16NvramQueryHelper8QueryCfgERPv(void) {
    ALOGD("_ZN20NvramQueryHelperImpl17queryFeatureNvramERKN16NvramQueryHelper8QueryCfgERPv() called");
    return 0;
}

/* Exported Object: WPE_INPUT_CHANNEL */
extern "C" __attribute__((visibility("default"))) void* WPE_INPUT_CHANNEL = NULL;

/* Demangled: PD_IMX386MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX386MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX386MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: getAEThreadVsTimeOutLimit_ns(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z28getAEThreadVsTimeOutLimit_nsii(void) {
    ALOGD("_Z28getAEThreadVsTimeOutLimit_nsii() called");
    return 0;
}

/* Demangled: cust_isDualFlashSupport(int) */
extern "C" __attribute__((visibility("default"))) int _Z23cust_isDualFlashSupporti(void) {
    ALOGD("_Z23cust_isDualFlashSupporti() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::push_back(bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE9push_backERKb() called");
    return 0;
}

/* Exported Object: pstSensorInitFunc */
extern "C" __attribute__((visibility("default"))) void* pstSensorInitFunc = NULL;

/* Demangled: cust_getFlashFrameRateDelay(int) */
extern "C" __attribute__((visibility("default"))) int _Z27cust_getFlashFrameRateDelayi(void) {
    ALOGD("_Z27cust_getFlashFrameRateDelayi() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<2418u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj2418ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: PD_IMX499MIPIRAW::~PD_IMX499MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAWD0Ev(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEbxydS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::refine_EE(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_EE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom9refine_EEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_14ISP_NVRAM_EE_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom9refine_EEERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_14ISP_NVRAM_EE_TE() called");
    return 0;
}

/* Exported Object: LensInitFunc */
extern "C" __attribute__((visibility("default"))) void* LensInitFunc = NULL;

/* Exported Object: pLC898217AF_T_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pLC898217AF_T_getDefaultData = NULL;

/* Demangled: Get_DualCameraData_FromPersist(char const*, unsigned char*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z30Get_DualCameraData_FromPersistPKcPhy(void) {
    ALOGD("_Z30Get_DualCameraData_FromPersistPKcPhy() called");
    return 0;
}

/* Demangled: PD_OV12A10MIPIRAW::~PD_OV12A10MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAWD2Ev(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAWD2Ev() called");
    return 0;
}

/* Exported Object: PD_IMX519MIPIRAW::m_u4Reg_AdDaPair_PDWin_Fix_Sz */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX519MIPIRAW29m_u4Reg_AdDaPair_PDWin_Fix_SzE = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::is_to_invoke_isp_interpolation(NSIspTuning::RAWIspCamInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom30is_to_invoke_isp_interpolationERKNS_13RAWIspCamInfoE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom30is_to_invoke_isp_interpolationERKNS_13RAWIspCamInfoE() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_main3(void*) */
extern "C" __attribute__((visibility("default"))) int _Z43cust_fillDefaultFlashCalibrationNVRam_main3Pv(void) {
    ALOGD("_Z43cust_fillDefaultFlashCalibrationNVRam_main3Pv() called");
    return 0;
}

/* Demangled: XiaoMiDoCamCalPDAF(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z18XiaoMiDoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z18XiaoMiDoCamCalPDAFPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: PD_OV12A10MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::SetRegAdDaPairBuf(int, int, int, int, int, int, unsigned short*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW17SetRegAdDaPairBufEiiiiiiPtRj() called");
    return 0;
}

/* Exported Object: vtable for PD_S5KGW1OFILMMIPIRAW */
extern "C" __attribute__((visibility("default"))) void* _ZTV21PD_S5KGW1OFILMMIPIRAW = NULL;

/* Exported Object: typeinfo for nlohmann::detail::invalid_iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTIN8nlohmann6detail16invalid_iteratorE = NULL;

/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z10getAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, unsigned int (*)(int, int, void*)> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPFjiiPvEEENS_22__unordered_map_hasherIyS5_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS5_NS_8equal_toIyEELb1EEENS_9allocatorIS5_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6424AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6424AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: get_3dnr_hw_power_off_threshold() */
extern "C" __attribute__((visibility("default"))) int _Z31get_3dnr_hw_power_off_thresholdv(void) {
    ALOGD("_Z31get_3dnr_hw_power_off_thresholdv() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail12out_of_rangeE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Demangled: PD_IMX499MIPIRAW::PD_IMX499MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX499MIPIRAWC1Ev(void) {
    ALOGD("_ZN16PD_IMX499MIPIRAWC1Ev() called");
    return 0;
}

/* Demangled: get_3dnr_iso_enable_threshold_low() */
extern "C" __attribute__((visibility("default"))) int _Z33get_3dnr_iso_enable_threshold_lowv(void) {
    ALOGD("_Z33get_3dnr_iso_enable_threshold_lowv() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<9076u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9076ELj0EEE = NULL;

/* Demangled: CustomHdrMatchPointThreshold */
extern "C" __attribute__((visibility("default"))) int CustomHdrMatchPointThreshold(void) {
    ALOGD("CustomHdrMatchPointThreshold() called");
    return 0;
}

/* Exported Object: int _getAFParam<(NSIspTuning::ESensorDev_T)8>(AF_PARAM_T const**)::g_AFparam */
extern "C" __attribute__((visibility("default"))) void* _ZZ11_getAFParamILN11NSIspTuning12ESensorDev_TE8EEiPPK10AF_PARAM_TE9g_AFparam = NULL;

/* Demangled: getWorkPerCycle_Main_M5() */
extern "C" __attribute__((visibility("default"))) int _Z23getWorkPerCycle_Main_M5v(void) {
    ALOGD("_Z23getWorkPerCycle_Main_M5v() called");
    return 0;
}

/* Exported Object: pBU6429AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pBU6429AF_getDefaultData = NULL;

/* Exported Object: PD_IMX386MIPIRAW::m_u2Reg_AdDaPair */
extern "C" __attribute__((visibility("default"))) void* _ZN16PD_IMX386MIPIRAW16m_u2Reg_AdDaPairE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_() called");
    return 0;
}

/* Demangled: cust_getFlashQuick2CalibrationExp_sub_part2(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z43cust_getFlashQuick2CalibrationExp_sub_part2PiS_S_(void) {
    ALOGD("_Z43cust_getFlashQuick2CalibrationExp_sub_part2PiS_S_() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898217AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z38GET_LC898217AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: getHDRExpSetting */
extern "C" __attribute__((visibility("default"))) int getHDRExpSetting(void) {
    ALOGD("getHDRExpSetting() called");
    return 0;
}

/* Exported Object: NSIspTuning::CTIspTuningCustom<(NSIspTuning::ESensorDev_T)8>::getInstance(unsigned int)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN11NSIspTuning17CTIspTuningCustomILNS_12ESensorDev_TE8EE11getInstanceEjE9singleton = NULL;

/* Demangled: PD_OV12A10MIPIRAW::seprate(int, unsigned char*, int, int, int, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAW7seprateEiPhiiiPtj(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAW7seprateEiPhiiiPtj() called");
    return 0;
}

/* Demangled: PD_IMX486MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX486MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_IMX486MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: NSIspTuning::IspTuningCustom::remap_ISO_value(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning15IspTuningCustom15remap_ISO_valueEj(void) {
    ALOGD("_ZNK11NSIspTuning15IspTuningCustom15remap_ISO_valueEj() called");
    return 0;
}

/* Demangled: DoCamCal2AGainOP576(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19DoCamCal2AGainOP576PN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z19DoCamCal2AGainOP576PN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Demangled: getAFParam(int, AF_PARAM_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z10getAFParamiPPK10AF_PARAM_T(void) {
    ALOGD("_Z10getAFParamiPPK10AF_PARAM_T() called");
    return 0;
}

/* Demangled: PDBufMgrOpen::sendCommand(unsigned int, void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpen11sendCommandEjPvS0_S0_S0_(void) {
    ALOGD("_ZN12PDBufMgrOpen11sendCommandEjPvS0_S0_S0_() called");
    return 0;
}

/* Demangled: AWB_PARAM_T const& getAWBParam<(NSIspTuning::ESensorDev_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z11getAWBParamILN11NSIspTuning12ESensorDev_TE2EERK11AWB_PARAM_Tv(void) {
    ALOGD("_Z11getAWBParamILN11NSIspTuning12ESensorDev_TE2EERK11AWB_PARAM_Tv() called");
    return 0;
}

/* Demangled: cust_getMaxAttachNum() */
extern "C" __attribute__((visibility("default"))) int _Z20cust_getMaxAttachNumv(void) {
    ALOGD("_Z20cust_getMaxAttachNumv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)0>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T0EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: std::__1::__tree<DCMF_CAMERA_OUTPUTS, std::__1::less<DCMF_CAMERA_OUTPUTS>, std::__1::allocator<DCMF_CAMERA_OUTPUTS> >::destroy(std::__1::__tree_node<DCMF_CAMERA_OUTPUTS, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE(void) {
    ALOGD("_ZNSt3__16__treeI19DCMF_CAMERA_OUTPUTSNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::invalid_iterator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail16invalid_iteratorE = NULL;

/* Demangled: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)4>(int, int, int, CustAF_THRES_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE4EEiiiiPPK14CustAF_THRES_T(void) {
    ALOGD("_Z16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE4EEiiiiPPK14CustAF_THRES_T() called");
    return 0;
}

/* Demangled: int getAECycleNum<(NSIspTuning::ESensorDev_T)16>() */
extern "C" __attribute__((visibility("default"))) int _Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE16EEiv(void) {
    ALOGD("_Z13getAECycleNumILN11NSIspTuning12ESensorDev_TE16EEiv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DUMMY_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)3>() */
extern "C" __attribute__((visibility("default"))) int _Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T3EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z33GET_DUMMY_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T3EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Exported Object: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)16>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE16EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: DoCamCal2AGainQ(NSCam::ICamCalHelper*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z15DoCamCal2AGainQPN5NSCam13ICamCalHelperEjjPj(void) {
    ALOGD("_Z15DoCamCal2AGainQPN5NSCam13ICamCalHelperEjjPj() called");
    return 0;
}

/* Exported Object: NSFeature::SensorInfoIdxMgr<9078u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature16SensorInfoIdxMgrILj9078ELj0EE11getInstanceEvE4inst = NULL;

/* Exported Object: int _getAFExtendCoef<(NSIspTuning::ESensorDev_T)8>(int, int, int, CustAF_THRES_T const**)::AFTH_ExtCoef */
extern "C" __attribute__((visibility("default"))) void* _ZZ16_getAFExtendCoefILN11NSIspTuning12ESensorDev_TE8EEiiiiPPK14CustAF_THRES_TE12AFTH_ExtCoef = NULL;

/* Demangled: NSIspTuning::IspTuningCustom::refine_BOK(NSIspTuning::RAWIspCamInfo const&, IspNvramRegMgr&, NSIspTuning::ISP_NVRAM_BOK_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning15IspTuningCustom10refine_BOKERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_BOK_TE(void) {
    ALOGD("_ZN11NSIspTuning15IspTuningCustom10refine_BOKERKNS_13RAWIspCamInfoER14IspNvramRegMgrRNS_15ISP_NVRAM_BOK_TE() called");
    return 0;
}

/* Demangled: cust_fillDefaultFlashCalibrationNVRam_sub_part2(void*) */
extern "C" __attribute__((visibility("default"))) int _Z47cust_fillDefaultFlashCalibrationNVRam_sub_part2Pv(void) {
    ALOGD("_Z47cust_fillDefaultFlashCalibrationNVRam_sub_part2Pv() called");
    return 0;
}

/* Demangled: PD_IMX338MIPIRAW::GetPDInfo2HybridAF(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX338MIPIRAW18GetPDInfo2HybridAFEiPi(void) {
    ALOGD("_ZN16PD_IMX338MIPIRAW18GetPDInfo2HybridAFEiPi() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::~PD_OV16880MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAWD1Ev(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)2, (CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE2EL14CAM_SCENARIO_T5EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Exported Object: pFP5516AF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pFP5516AF_getDefaultData = NULL;

/* Exported Object: pLC898212XDAF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pLC898212XDAF_getDefaultData = NULL;

/* Exported Object: LensList_main2 */
extern "C" __attribute__((visibility("default"))) void* LensList_main2 = NULL;

/* Demangled: PDBufMgrOpen::SetDataBuf(unsigned int, unsigned char*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDBufMgrOpen10SetDataBufEjPhRj(void) {
    ALOGD("_ZN12PDBufMgrOpen10SetDataBufEjPhRj() called");
    return 0;
}

/* Exported Object: LensList_main3 */
extern "C" __attribute__((visibility("default"))) void* LensList_main3 = NULL;

/* Exported Object: vtable for NSFeature::SensorInfoIdxMgr<9482u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature16SensorInfoIdxMgrILj9482ELj0EEE = NULL;

/* Demangled: PD_S5K2P7MIPIRAW::ConvertPDBufFormat(unsigned int, unsigned int, unsigned char*, unsigned int, PD_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2P7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T(void) {
    ALOGD("_ZN16PD_S5K2P7MIPIRAW18ConvertPDBufFormatEjjPhjP9PD_AREA_T() called");
    return 0;
}

/* Demangled: get_capture_nr_th(unsigned int, unsigned int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z17get_capture_nr_thjjiPiS_(void) {
    ALOGD("_Z17get_capture_nr_thjjiPiS_() called");
    return 0;
}

/* Demangled: checkSendCallback(CHECK_AF_CALLBACK_INFO_t) */
extern "C" __attribute__((visibility("default"))) int _Z17checkSendCallback24CHECK_AF_CALLBACK_INFO_t(void) {
    ALOGD("_Z17checkSendCallback24CHECK_AF_CALLBACK_INFO_t() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParamData<(NSIspTuning::ESensorDev_T)1, (CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z14getAEParamDataILN11NSIspTuning12ESensorDev_TE1EL14CAM_SCENARIO_T2EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NSCamCustom::get_atv_disp_delay(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSCamCustom18get_atv_disp_delayEi(void) {
    ALOGD("_ZN11NSCamCustom18get_atv_disp_delayEi() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::GetPDWinSetting(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW15GetPDWinSettingEPvS0_S0_(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW15GetPDWinSettingEPvS0_S0_() called");
    return 0;
}

/* Demangled: getCustomPqImpl() */
extern "C" __attribute__((visibility("default"))) int _Z15getCustomPqImplv(void) {
    ALOGD("_Z15getCustomPqImplv() called");
    return 0;
}

/* Demangled: Scenario4AE(ScenarioParam const&) */
extern "C" __attribute__((visibility("default"))) int _Z11Scenario4AERK13ScenarioParam(void) {
    ALOGD("_Z11Scenario4AERK13ScenarioParam() called");
    return 0;
}

/* Exported Object: Lomo_cb_param */
extern "C" __attribute__((visibility("default"))) void* Lomo_cb_param = NULL;

/* Exported Object: pDW9800VAF_getDefaultData */
extern "C" __attribute__((visibility("default"))) void* pDW9800VAF_getDefaultData = NULL;

/* Demangled: PD_OV12A10MIPIRAW::~PD_OV12A10MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAWD0Ev(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAWD0Ev() called");
    return 0;
}

/* Demangled: int _getAFConfig<(NSIspTuning::ESensorDev_T)2>(AF_CONFIG_T const**) */
extern "C" __attribute__((visibility("default"))) int _Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_T(void) {
    ALOGD("_Z12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_T() called");
    return 0;
}

/* Demangled: cust_getVideoFlashModeStyle(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z27cust_getVideoFlashModeStyleii(void) {
    ALOGD("_Z27cust_getVideoFlashModeStyleii() called");
    return 0;
}

/* Demangled: PD_OV16880MIPIRAW::PD_OV16880MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV16880MIPIRAWC2Ev(void) {
    ALOGD("_ZN17PD_OV16880MIPIRAWC2Ev() called");
    return 0;
}

/* Demangled: PD_OV13870MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV13870MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN17PD_OV13870MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAUTOHDRAEParam<(NSIspTuning::ESensorDev_T)8>() */
extern "C" __attribute__((visibility("default"))) int _Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z17getAUTOHDRAEParamILN11NSIspTuning12ESensorDev_TE8EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_BU6429AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)2>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_BU6429AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T2EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_S5K3M2MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K3M2MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_S5K3M2MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: CUST_ENABLE_FACE_AWB() */
extern "C" __attribute__((visibility("default"))) int _Z20CUST_ENABLE_FACE_AWBv(void) {
    ALOGD("_Z20CUST_ENABLE_FACE_AWBv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, void*>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, void*>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, void*> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyPvEENS_22__unordered_map_hasherIyS3_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS3_NS_8equal_toIyEELb1EEENS_9allocatorIS3_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)5>() */
extern "C" __attribute__((visibility("default"))) int _Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z46GET_LC898212XDAF_BAYER_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T5EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: NSCam::CamCalCustomImpl::hasCalData(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16CamCalCustomImpl10hasCalDataEjj(void) {
    ALOGD("_ZN5NSCam16CamCalCustomImpl10hasCalDataEjj() called");
    return 0;
}

/* Demangled: PD_S5K2L7MIPIRAW::IsSupport(SPDProfile_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2L7MIPIRAW9IsSupportER12SPDProfile_t(void) {
    ALOGD("_ZN16PD_S5K2L7MIPIRAW9IsSupportER12SPDProfile_t() called");
    return 0;
}

/* Demangled: PD_S5K2X8MIPIRAW::~PD_S5K2X8MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_S5K2X8MIPIRAWD1Ev(void) {
    ALOGD("_ZN16PD_S5K2X8MIPIRAWD1Ev() called");
    return 0;
}

/* Demangled: PD_IMX519MIPIRAW::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PD_IMX519MIPIRAW11getInstanceEv(void) {
    ALOGD("_ZN16PD_IMX519MIPIRAW11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSN8nlohmann6detail12out_of_rangeE = NULL;

/* Demangled: cust_isSubFlashSupport() */
extern "C" __attribute__((visibility("default"))) int _Z22cust_isSubFlashSupportv(void) {
    ALOGD("_Z22cust_isSubFlashSupportv() called");
    return 0;
}

/* Demangled: void nlohmann::detail::from_json<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer> const&, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long long, unsigned long long, double, std::__1::allocator, nlohmann::adl_serializer>::string_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE(void) {
    ALOGD("_ZN8nlohmann6detail9from_jsonINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEbxydS9_NS_14adl_serializerEEEEEvRKT_RNSE_8string_tE() called");
    return 0;
}

/* Exported Object: guard variable for int _getAFConfig<(NSIspTuning::ESensorDev_T)2>(AF_CONFIG_T const**)::g_AFconfig */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ12_getAFConfigILN11NSIspTuning12ESensorDev_TE2EEiPPK11AF_CONFIG_TE10g_AFconfig = NULL;

/* Demangled: NVRAM_LENS_DATA_PARA_STRUCT const& GET_DW9714AF_LENS_PARA_DEFAULT_VALUE<(CAM_SCENARIO_T)1>() */
extern "C" __attribute__((visibility("default"))) int _Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv(void) {
    ALOGD("_Z36GET_DW9714AF_LENS_PARA_DEFAULT_VALUEIL14CAM_SCENARIO_T1EERK27NVRAM_LENS_DATA_PARA_STRUCTv() called");
    return 0;
}

/* Demangled: PD_IMX586MIPIRAW_TYPE2::~PD_IMX586MIPIRAW_TYPE2() */
extern "C" __attribute__((visibility("default"))) int _ZN22PD_IMX586MIPIRAW_TYPE2D1Ev(void) {
    ALOGD("_ZN22PD_IMX586MIPIRAW_TYPE2D1Ev() called");
    return 0;
}

/* Demangled: cust_getIsSpecialLongExpOn() */
extern "C" __attribute__((visibility("default"))) int _Z26cust_getIsSpecialLongExpOnv(void) {
    ALOGD("_Z26cust_getIsSpecialLongExpOnv() called");
    return 0;
}

/* Demangled: AE_PARAM_TEMP_T const& getAEParam<(NSIspTuning::ESensorDev_T)4>() */
extern "C" __attribute__((visibility("default"))) int _Z10getAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv(void) {
    ALOGD("_Z10getAEParamILN11NSIspTuning12ESensorDev_TE4EERK15AE_PARAM_TEMP_Tv() called");
    return 0;
}

/* Demangled: PD_OV12A10MIPIRAW::PD_OV12A10MIPIRAW() */
extern "C" __attribute__((visibility("default"))) int _ZN17PD_OV12A10MIPIRAWC1Ev(void) {
    ALOGD("_ZN17PD_OV12A10MIPIRAWC1Ev() called");
    return 0;
}
