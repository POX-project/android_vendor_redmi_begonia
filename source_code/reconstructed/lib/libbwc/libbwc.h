/*
 * Reverse-Engineered ABI Specification for: libbwc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libbwc.so
 */

#ifndef BEGONIA_RE_LIBBWC_H
#define BEGONIA_RE_LIBBWC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN3BWC12_Profile_GetEv */
/* Demangled: BWC::_Profile_Get() */
int _ZN3BWC12_Profile_GetEv(void);

/* Symbol: _ZN3BWC12_Profile_SetE16BWC_PROFILE_TYPE */
/* Demangled: BWC::_Profile_Set(BWC_PROFILE_TYPE) */
int _ZN3BWC12_Profile_SetE16BWC_PROFILE_TYPE(void);

/* Symbol: _ZN17BWCProfileAdapter13getSMIProfileEi */
/* Demangled: BWCProfileAdapter::getSMIProfile(int) */
int _ZN17BWCProfileAdapter13getSMIProfileEi(void);

/* Symbol: _ZN3BWC14Profile_ChangeE16BWC_PROFILE_TYPEb */
/* Demangled: BWC::Profile_Change(BWC_PROFILE_TYPE, bool) */
int _ZN3BWC14Profile_ChangeE16BWC_PROFILE_TYPEb(void);

/* Symbol: _ZN3BWC15DisplaySize_SetERK8BWC_SIZE */
/* Demangled: BWC::DisplaySize_Set(BWC_SIZE const&) */
int _ZN3BWC15DisplaySize_SetERK8BWC_SIZE(void);

/* Symbol: _ZN9BWCHelper11profile_getEP24MTK_SMI_BWC_MM_INFO_USER */
/* Demangled: BWCHelper::profile_get(MTK_SMI_BWC_MM_INFO_USER*) */
int _ZN9BWCHelper11profile_getEP24MTK_SMI_BWC_MM_INFO_USER(void);

/* Symbol: defaultProfileSetting */
/* Demangled: defaultProfileSetting */
extern void* defaultProfileSetting;

/* Symbol: _ZN3BWC19VideoRecordSize_GetEv */
/* Demangled: BWC::VideoRecordSize_Get() */
int _ZN3BWC19VideoRecordSize_GetEv(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN10BWCProfileC1EiPKciS1_ */
/* Demangled: BWCProfile::BWCProfile(int, char const*, int, char const*) */
int _ZN10BWCProfileC1EiPKciS1_(void);

/* Symbol: _ZN16BWCProfileHelper16getEmiProfileStrEi */
/* Demangled: BWCProfileHelper::getEmiProfileStr(int) */
int _ZN16BWCProfileHelper16getEmiProfileStrEi(void);

/* Symbol: _ZN17BWCProfileAdapterC1EP10BWCProfilei */
/* Demangled: BWCProfileAdapter::BWCProfileAdapter(BWCProfile*, int) */
int _ZN17BWCProfileAdapterC1EP10BWCProfilei(void);

/* Symbol: _ZN17BWCProfileAdapter10getProfileEi */
/* Demangled: BWCProfileAdapter::getProfile(int) */
int _ZN17BWCProfileAdapter10getProfileEi(void);

/* Symbol: _ZN17BWCProfileAdapter16getEmiProfileStrEi */
/* Demangled: BWCProfileAdapter::getEmiProfileStr(int) */
int _ZN17BWCProfileAdapter16getEmiProfileStrEi(void);

/* Symbol: _ZN10BWCProfile13getSMIProfileEv */
/* Demangled: BWCProfile::getSMIProfile() */
int _ZN10BWCProfile13getSMIProfileEv(void);

/* Symbol: _ZN10BWCProfile16getEmiProfileStrEv */
/* Demangled: BWCProfile::getEmiProfileStr() */
int _ZN10BWCProfile16getEmiProfileStrEv(void);

/* Symbol: _ZN3BWC15DisplaySize_GetEv */
/* Demangled: BWC::DisplaySize_Get() */
int _ZN3BWC15DisplaySize_GetEv(void);

/* Symbol: _ZN3BWC15smi_bw_ctrl_setE16BWC_PROFILE_TYPE15BWC_VCODEC_TYPEb */
/* Demangled: BWC::smi_bw_ctrl_set(BWC_PROFILE_TYPE, BWC_VCODEC_TYPE, bool) */
int _ZN3BWC15smi_bw_ctrl_setE16BWC_PROFILE_TYPE15BWC_VCODEC_TYPEb(void);

/* Symbol: mmdvfs_vpu_step_get */
/* Demangled: mmdvfs_vpu_step_get */
int mmdvfs_vpu_step_get(void);

/* Symbol: mmdvfs_vpu_step_set */
/* Demangled: mmdvfs_vpu_step_set */
int mmdvfs_vpu_step_set(void);

/* Symbol: _ZN3BWC15emi_bw_ctrl_setE16BWC_PROFILE_TYPE15BWC_VCODEC_TYPEbPc */
/* Demangled: BWC::emi_bw_ctrl_set(BWC_PROFILE_TYPE, BWC_VCODEC_TYPE, bool, char*) */
int _ZN3BWC15emi_bw_ctrl_setE16BWC_PROFILE_TYPE15BWC_VCODEC_TYPEbPc(void);

/* Symbol: _ZN3BWC23emi_ddr_type_string_getEPci */
/* Demangled: BWC::emi_ddr_type_string_get(char*, int) */
int _ZN3BWC23emi_ddr_type_string_getEPci(void);

/* Symbol: _ZN11BWC_MONITORC2Ev */
/* Demangled: BWC_MONITOR::BWC_MONITOR() */
int _ZN11BWC_MONITORC2Ev(void);

/* Symbol: _ZN11BWC_MONITORD1Ev */
/* Demangled: BWC_MONITOR::~BWC_MONITOR() */
int _ZN11BWC_MONITORD1Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: mmdvfs_get_current_mmclk_step */
/* Demangled: mmdvfs_get_current_mmclk_step */
int mmdvfs_get_current_mmclk_step(void);

/* Symbol: mmdvfs_platform_config */
/* Demangled: mmdvfs_platform_config */
int mmdvfs_platform_config(void);

/* Symbol: mmdvfs_query */
/* Demangled: mmdvfs_query */
int mmdvfs_query(void);

/* Symbol: _ZN16BWCProfileHelperC2EP17BWCProfileAdapterS1_ */
/* Demangled: BWCProfileHelper::BWCProfileHelper(BWCProfileAdapter*, BWCProfileAdapter*) */
int _ZN16BWCProfileHelperC2EP17BWCProfileAdapterS1_(void);

/* Symbol: _ZN3BWC13TvOutSize_GetEv */
/* Demangled: BWC::TvOutSize_Get() */
int _ZN3BWC13TvOutSize_GetEv(void);

/* Symbol: _ZN11BWC_MONITOR16get_smi_bw_stateEv */
/* Demangled: BWC_MONITOR::get_smi_bw_state() */
int _ZN11BWC_MONITOR16get_smi_bw_stateEv(void);

/* Symbol: _ZN3BWC13TvOutSize_SetERK8BWC_SIZE */
/* Demangled: BWC::TvOutSize_Set(BWC_SIZE const&) */
int _ZN3BWC13TvOutSize_SetERK8BWC_SIZE(void);

/* Symbol: _ZN3BWC15_Profile_RemoveE16BWC_PROFILE_TYPE */
/* Demangled: BWC::_Profile_Remove(BWC_PROFILE_TYPE) */
int _ZN3BWC15_Profile_RemoveE16BWC_PROFILE_TYPE(void);

/* Symbol: _Z21BwcProfileType_GetStr16BWC_PROFILE_TYPE */
/* Demangled: BwcProfileType_GetStr(BWC_PROFILE_TYPE) */
int _Z21BwcProfileType_GetStr16BWC_PROFILE_TYPE(void);

/* Symbol: _ZN3BWC20VideoDecodeCodec_GetEv */
/* Demangled: BWC::VideoDecodeCodec_Get() */
int _ZN3BWC20VideoDecodeCodec_GetEv(void);

/* Symbol: _ZN3BWC20VideoDecodeCodec_SetE15BWC_VCODEC_TYPE */
/* Demangled: BWC::VideoDecodeCodec_Set(BWC_VCODEC_TYPE) */
int _ZN3BWC20VideoDecodeCodec_SetE15BWC_VCODEC_TYPE(void);

/* Symbol: mmdvfs_resovle_step_from_cmd */
/* Demangled: mmdvfs_resovle_step_from_cmd */
int mmdvfs_resovle_step_from_cmd(void);

/* Symbol: profileSetting */
/* Demangled: profileSetting */
extern void* profileSetting;

/* Symbol: _ZN17BWCProfileAdapter7getNameEi */
/* Demangled: BWCProfileAdapter::getName(int) */
int _ZN17BWCProfileAdapter7getNameEi(void);

/* Symbol: _ZN3BWC14SensorSize_GetEv */
/* Demangled: BWC::SensorSize_Get() */
int _ZN3BWC14SensorSize_GetEv(void);

/* Symbol: _ZN3BWC7Fps_GetEv */
/* Demangled: BWC::Fps_Get() */
int _ZN3BWC7Fps_GetEv(void);

/* Symbol: _ZN9BWCHelper19set_bwc_mm_propertyEiii */
/* Demangled: BWCHelper::set_bwc_mm_property(int, int, int) */
int _ZN9BWCHelper19set_bwc_mm_propertyEiii(void);

/* Symbol: _ZN17BWCProfileAdapter4dumpEv */
/* Demangled: BWCProfileAdapter::dump() */
int _ZN17BWCProfileAdapter4dumpEv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN9BWCHelper14profile_removeEP24MTK_SMI_BWC_MM_INFO_USER16BWC_PROFILE_TYPE */
/* Demangled: BWCHelper::profile_remove(MTK_SMI_BWC_MM_INFO_USER*, BWC_PROFILE_TYPE) */
int _ZN9BWCHelper14profile_removeEP24MTK_SMI_BWC_MM_INFO_USER16BWC_PROFILE_TYPE(void);

/* Symbol: _ZNK8BWC_SIZE13SetToPropertyEPKc */
/* Demangled: BWC_SIZE::SetToProperty(char const*) const */
int _ZNK8BWC_SIZE13SetToPropertyEPKc(void);

/* Symbol: _ZN16BWCProfileHelperC1EP17BWCProfileAdapterS1_ */
/* Demangled: BWCProfileHelper::BWCProfileHelper(BWCProfileAdapter*, BWCProfileAdapter*) */
int _ZN16BWCProfileHelperC1EP17BWCProfileAdapterS1_(void);

/* Symbol: defaultProfileAdaptor */
/* Demangled: defaultProfileAdaptor */
extern void* defaultProfileAdaptor;

/* Symbol: mmdvfs_get_current_mmclk */
/* Demangled: mmdvfs_get_current_mmclk */
int mmdvfs_get_current_mmclk(void);

/* Symbol: mmdvfs_direct_mmclk_step_set */
/* Demangled: mmdvfs_direct_mmclk_step_set */
int mmdvfs_direct_mmclk_step_set(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: profileHelper */
/* Demangled: profileHelper */
extern void* profileHelper;

/* Symbol: _ZN11BWC_MONITOR19query_hwc_max_pixelEv */
/* Demangled: BWC_MONITOR::query_hwc_max_pixel() */
int _ZN11BWC_MONITOR19query_hwc_max_pixelEv(void);

/* Symbol: _ZN3BWC19VideoRecordSize_SetERK8BWC_SIZE */
/* Demangled: BWC::VideoRecordSize_Set(BWC_SIZE const&) */
int _ZN3BWC19VideoRecordSize_SetERK8BWC_SIZE(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN3BWC20VideoEncodeCodec_GetEv */
/* Demangled: BWC::VideoEncodeCodec_Get() */
int _ZN3BWC20VideoEncodeCodec_GetEv(void);

/* Symbol: _ZN3BWC21property_name_str_getEPKcPc */
/* Demangled: BWC::property_name_str_get(char const*, char*) */
int _ZN3BWC21property_name_str_getEPKcPc(void);

/* Symbol: _ZN16BWCProfileHelper13getSMIProfileEi */
/* Demangled: BWCProfileHelper::getSMIProfile(int) */
int _ZN16BWCProfileHelper13getSMIProfileEi(void);

/* Symbol: _ZNK11BWC_SETTING17CalcThroughput_VREv */
/* Demangled: BWC_SETTING::CalcThroughput_VR() const */
int _ZNK11BWC_SETTING17CalcThroughput_VREv(void);

/* Symbol: _ZNK11BWC_SETTING17CalcThroughput_VTEv */
/* Demangled: BWC_SETTING::CalcThroughput_VT() const */
int _ZNK11BWC_SETTING17CalcThroughput_VTEv(void);

/* Symbol: _ZN11BWC_MONITOR5startEv */
/* Demangled: BWC_MONITOR::start() */
int _ZN11BWC_MONITOR5startEv(void);

/* Symbol: _ZN3BWC23modem_speed_profile_setENS_19MODEM_SPEED_PROFILEE */
/* Demangled: BWC::modem_speed_profile_set(BWC::MODEM_SPEED_PROFILE) */
int _ZN3BWC23modem_speed_profile_setENS_19MODEM_SPEED_PROFILEE(void);

/* Symbol: mmdvfs_qos_set */
/* Demangled: mmdvfs_qos_set */
int mmdvfs_qos_set(void);

/* Symbol: _ZN11BWC_SETTING8DumpInfoEv */
/* Demangled: BWC_SETTING::DumpInfo() */
int _ZN11BWC_SETTING8DumpInfoEv(void);

/* Symbol: _ZN7BWC_INT16LoadFromPropertyEPKc */
/* Demangled: BWC_INT::LoadFromProperty(char const*) */
int _ZN7BWC_INT16LoadFromPropertyEPKc(void);

/* Symbol: _ZN11BWC_MONITORC1Ev */
/* Demangled: BWC_MONITOR::BWC_MONITOR() */
int _ZN11BWC_MONITORC1Ev(void);

/* Symbol: _ZN11BWC_MONITORD2Ev */
/* Demangled: BWC_MONITOR::~BWC_MONITOR() */
int _ZN11BWC_MONITORD2Ev(void);

/* Symbol: _ZN16BWCProfileHelper7getNameEi */
/* Demangled: BWCProfileHelper::getName(int) */
int _ZN16BWCProfileHelper7getNameEi(void);

/* Symbol: _ZN3BWC12_Profile_AddE16BWC_PROFILE_TYPE */
/* Demangled: BWC::_Profile_Add(BWC_PROFILE_TYPE) */
int _ZN3BWC12_Profile_AddE16BWC_PROFILE_TYPE(void);

/* Symbol: _ZN8BWC_SIZE16LoadFromPropertyEPKc */
/* Demangled: BWC_SIZE::LoadFromProperty(char const*) */
int _ZN8BWC_SIZE16LoadFromPropertyEPKc(void);

/* Symbol: _ZNK7BWC_INT13SetToPropertyEPKc */
/* Demangled: BWC_INT::SetToProperty(char const*) const */
int _ZNK7BWC_INT13SetToPropertyEPKc(void);

/* Symbol: profileAdaptor */
/* Demangled: profileAdaptor */
extern void* profileAdaptor;

/* Symbol: _ZN17BWCProfileAdapterC2EP10BWCProfilei */
/* Demangled: BWCProfileAdapter::BWCProfileAdapter(BWCProfile*, int) */
int _ZN17BWCProfileAdapterC2EP10BWCProfilei(void);

/* Symbol: _ZN3BWC7Fps_SetEi */
/* Demangled: BWC::Fps_Set(int) */
int _ZN3BWC7Fps_SetEi(void);

/* Symbol: _ZN9BWCHelper11profile_addEP24MTK_SMI_BWC_MM_INFO_USER16BWC_PROFILE_TYPE */
/* Demangled: BWCHelper::profile_add(MTK_SMI_BWC_MM_INFO_USER*, BWC_PROFILE_TYPE) */
int _ZN9BWCHelper11profile_addEP24MTK_SMI_BWC_MM_INFO_USER16BWC_PROFILE_TYPE(void);

/* Symbol: _ZN11BWC_MONITOR4stopEv */
/* Demangled: BWC_MONITOR::stop() */
int _ZN11BWC_MONITOR4stopEv(void);

/* Symbol: _ZN10BWCProfile13getBwcProfileEv */
/* Demangled: BWCProfile::getBwcProfile() */
int _ZN10BWCProfile13getBwcProfileEv(void);

/* Symbol: _ZN3BWC16emi_ddr_type_getEv */
/* Demangled: BWC::emi_ddr_type_get() */
int _ZN3BWC16emi_ddr_type_getEv(void);

/* Symbol: _ZN10BWCProfileC2EiPKciS1_ */
/* Demangled: BWCProfile::BWCProfile(int, char const*, int, char const*) */
int _ZN10BWCProfileC2EiPKciS1_(void);

/* Symbol: _ZN3BWC14SensorSize_SetERK8BWC_SIZE */
/* Demangled: BWC::SensorSize_Set(BWC_SIZE const&) */
int _ZN3BWC14SensorSize_SetERK8BWC_SIZE(void);

/* Symbol: _ZN3BWC20VideoEncodeCodec_SetE15BWC_VCODEC_TYPE */
/* Demangled: BWC::VideoEncodeCodec_Set(BWC_VCODEC_TYPE) */
int _ZN3BWC20VideoEncodeCodec_SetE15BWC_VCODEC_TYPE(void);

/* Symbol: mmdvfs_get_current_step */
/* Demangled: mmdvfs_get_current_step */
int mmdvfs_get_current_step(void);

/* Symbol: mmdvfs_resovle_mmclk_from_cmd */
/* Demangled: mmdvfs_resovle_mmclk_from_cmd */
int mmdvfs_resovle_mmclk_from_cmd(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN9BWCHelper19get_bwc_mm_propertyEP24MTK_SMI_BWC_MM_INFO_USER */
/* Demangled: BWCHelper::get_bwc_mm_property(MTK_SMI_BWC_MM_INFO_USER*) */
int _ZN9BWCHelper19get_bwc_mm_propertyEP24MTK_SMI_BWC_MM_INFO_USER(void);

/* Symbol: mmdvfs_set */
/* Demangled: mmdvfs_set */
int mmdvfs_set(void);

/* Symbol: _ZN10BWCProfile7getNameEv */
/* Demangled: BWCProfile::getName() */
int _ZN10BWCProfile7getNameEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBBWC_H */
