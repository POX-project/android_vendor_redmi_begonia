/*
 * Reverse-Engineered Source for: libcamalgo.n3d.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_n3d"

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
#include "libcamalgo_n3d.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MTKFeFm::getSWFE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm7getSWFEEj(void) {
    ALOGD("_ZN7MTKFeFm7getSWFEEj() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreSetWorkingBufInfo(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore33StereoKernelCoreSetWorkingBufInfoEPv(void) {
    ALOGD("_ZN19MTKStereoKernelCore33StereoKernelCoreSetWorkingBufInfoEPv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::distort_info_check(STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18distort_info_checkEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS1_(void) {
    ALOGD("_ZN19MTKStereoKernelCore18distort_info_checkEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS1_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC_SEL(float*, float*, float*, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore22GetHmtxFromP_AF_AC_SELEPfS0_S0_S0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore22GetHmtxFromP_AF_AC_SELEPfS0_S0_S0_j() called");
    return 0;
}

/* Demangled: AppStereoKernel::StereoKernelMain(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernel16StereoKernelMainEj(void) {
    ALOGD("_ZN15AppStereoKernel16StereoKernelMainEj() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelLoadNVRAM2Calib(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore27StereoKernelLoadNVRAM2CalibEPj(void) {
    ALOGD("_ZN19MTKStereoKernelCore27StereoKernelLoadNVRAM2CalibEPj() called");
    return 0;
}

/* Demangled: MTKFeFm::MTKFeFm() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFmC2Ev(void) {
    ALOGD("_ZN7MTKFeFmC2Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::SafetyCheck(float*, int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11SafetyCheckEPfPij(void) {
    ALOGD("_ZN19MTKStereoKernelCore11SafetyCheckEPfPij() called");
    return 0;
}

/* Demangled: make2DMtx(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z9make2DMtxii(void) {
    ALOGD("_Z9make2DMtxii() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::destroyInstance(MTKStereoKernelCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN19MTKStereoKernelCore15destroyInstanceEPS_() called");
    return 0;
}

/* Exported Object: total_time_LM */
extern "C" __attribute__((visibility("default"))) void* total_time_LM = NULL;

/* Demangled: MTKStereoKernelCore::getDistanceCVec_fromLearn(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore25getDistanceCVec_fromLearnEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void) {
    ALOGD("_ZN19MTKStereoKernelCore25getDistanceCVec_fromLearnEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_() called");
    return 0;
}

/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_10001(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_10001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void) {
    ALOGD("_ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_10001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::reverseGrid(float*, float*, STEREO_KERNEL_LENS_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11reverseGridEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore11reverseGridEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCT() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::genWarpParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore17genWarpParametersEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore17genWarpParametersEv() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: MTKCc::executeColorCorrectionAlgorithm() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc31executeColorCorrectionAlgorithmEv(void) {
    ALOGD("_ZN5MTKCc31executeColorCorrectionAlgorithmEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::modelSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore14modelSelectionEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore14modelSelectionEv() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: MTKAC::setConvergencePara(float, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC18setConvergenceParaEfj(void) {
    ALOGD("_ZN5MTKAC18setConvergenceParaEfj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::~MTKStereoKernelCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCoreD0Ev(void) {
    ALOGD("_ZN19MTKStereoKernelCoreD0Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::procData_FEFM() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore13procData_FEFMEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore13procData_FEFMEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::loadOneLensInfoMTK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18loadOneLensInfoMTKEj(void) {
    ALOGD("_ZN19MTKStereoKernelCore18loadOneLensInfoMTKEj() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: FORMAT_RGBtoYV12(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16FORMAT_RGBtoYV12PhS_jjj(void) {
    ALOGD("_Z16FORMAT_RGBtoYV12PhS_jjj() called");
    return 0;
}

/* Demangled: verify_cross(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z12verify_crossPfS_S_(void) {
    ALOGD("_Z12verify_crossPfS_S_() called");
    return 0;
}

/* Demangled: eval_max_main_fov(float, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _Z17eval_max_main_fovfffff(void) {
    ALOGD("_Z17eval_max_main_fovfffff() called");
    return 0;
}

/* Demangled: verify_intersect_y(float*, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18verify_intersect_yPfiiiPi(void) {
    ALOGD("_Z18verify_intersect_yPfiiiPi() called");
    return 0;
}

/* Demangled: MTKAC::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC4initEv(void) {
    ALOGD("_ZN5MTKAC4initEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelGetResult(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore21StereoKernelGetResultEPv(void) {
    ALOGD("_ZN19MTKStereoKernelCore21StereoKernelGetResultEPv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelLoadDefaultParameters(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore33StereoKernelLoadDefaultParametersEPv(void) {
    ALOGD("_ZN19MTKStereoKernelCore33StereoKernelLoadDefaultParametersEPv() called");
    return 0;
}

/* Demangled: AppStereoKernel::StereoKernelReset() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernel17StereoKernelResetEv(void) {
    ALOGD("_ZN15AppStereoKernel17StereoKernelResetEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreWarp() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20StereoKernelCoreWarpEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore20StereoKernelCoreWarpEv() called");
    return 0;
}

/* Exported Object: MTKStereoKernelCore::gLevmarInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN19MTKStereoKernelCore11gLevmarInfoE = NULL;

/* Demangled: MTKFeFm::init(STEREO_FEFM_ENV_STRUCT*, CStereoFeFmTuneInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm4initEP22STEREO_FEFM_ENV_STRUCTP19CStereoFeFmTuneInfo(void) {
    ALOGD("_ZN7MTKFeFm4initEP22STEREO_FEFM_ENV_STRUCTP19CStereoFeFmTuneInfo() called");
    return 0;
}

/* Demangled: MTKCc::selectPoints() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc12selectPointsEv(void) {
    ALOGD("_ZN5MTKCc12selectPointsEv() called");
    return 0;
}

/* Demangled: MTKStereoKernel::StereoKernelInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernel16StereoKernelInitEPvS0_(void) {
    ALOGD("_ZN15MTKStereoKernel16StereoKernelInitEPvS0_() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: FORMAT_YUYVtoYV12(unsigned char*, unsigned char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17FORMAT_YUYVtoYV12PhS_jj(void) {
    ALOGD("_Z17FORMAT_YUYVtoYV12PhS_jj() called");
    return 0;
}

/* Demangled: sw_wpe_warp(unsigned char*, unsigned int, unsigned int, unsigned char*, unsigned int, unsigned int, unsigned int, int**, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11sw_wpe_warpPhjjS_jjjPPijj(void) {
    ALOGD("_Z11sw_wpe_warpPhjjS_jjjPPijj() called");
    return 0;
}

/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_20001(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_20001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void) {
    ALOGD("_ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_20001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT() called");
    return 0;
}

/* Demangled: usqrt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z5usqrtj(void) {
    ALOGD("_Z5usqrtj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelSaveCalib2NVRAM(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore27StereoKernelSaveCalib2NVRAMEPj(void) {
    ALOGD("_ZN19MTKStereoKernelCore27StereoKernelSaveCalib2NVRAMEPj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::checkRegion(float, float, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11checkRegionEffffff(void) {
    ALOGD("_ZN19MTKStereoKernelCore11checkRegionEffffff() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: FORMAT_YUYVtoRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16FORMAT_YUYVtoRGBPhS_jjj(void) {
    ALOGD("_Z16FORMAT_YUYVtoRGBPhS_jjj() called");
    return 0;
}

/* Demangled: FORMAT_YV12toRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16FORMAT_YV12toRGBPhS_jjjjj(void) {
    ALOGD("_Z16FORMAT_YV12toRGBPhS_jjjjj() called");
    return 0;
}

/* Demangled: AppStereoKernel::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernel15destroyInstanceEv(void) {
    ALOGD("_ZN15AppStereoKernel15destroyInstanceEv() called");
    return 0;
}

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Demangled: sw_warp(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z7sw_warpPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z7sw_warpPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: AppStereoKernel::~AppStereoKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernelD0Ev(void) {
    ALOGD("_ZN15AppStereoKernelD0Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernel::StereoKernelLoadMetadata(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernel24StereoKernelLoadMetadataEPv(void) {
    ALOGD("_ZN15MTKStereoKernel24StereoKernelLoadMetadataEPv() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: MTKStereoKernelCore::loadDEBUG_info(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore14loadDEBUG_infoEPi(void) {
    ALOGD("_ZN19MTKStereoKernelCore14loadDEBUG_infoEPi() called");
    return 0;
}

/* Demangled: GPU_N3D_WARP::CreateShaderProgram(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARP19CreateShaderProgramEjjjj(void) {
    ALOGD("_ZN12GPU_N3D_WARP19CreateShaderProgramEjjjj() called");
    return 0;
}

/* Demangled: FORMAT_YV12toY(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14FORMAT_YV12toYPhS_jjj(void) {
    ALOGD("_Z14FORMAT_YV12toYPhS_jjj() called");
    return 0;
}

/* Demangled: MTKFeFm::getResult(STEREO_FEFM_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm9getResultEP25STEREO_FEFM_RESULT_STRUCT(void) {
    ALOGD("_ZN7MTKFeFm9getResultEP25STEREO_FEFM_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: MTKFeFm::getHWFM() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm7getHWFMEv(void) {
    ALOGD("_ZN7MTKFeFm7getHWFMEv() called");
    return 0;
}

/* Demangled: FORMAT_RGBtoYUYV(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16FORMAT_RGBtoYUYVPhS_jjj(void) {
    ALOGD("_Z16FORMAT_RGBtoYUYVPhS_jjj() called");
    return 0;
}

/* Demangled: get_interp_value(STEREO_CORE_WARP_INTERPOLATION_STRUCT*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPh(void) {
    ALOGD("_Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPh() called");
    return 0;
}

/* Demangled: StereoKernelGPUContext::StereoKernelGPUContext() */
extern "C" __attribute__((visibility("default"))) int _ZN22StereoKernelGPUContextC2Ev(void) {
    ALOGD("_ZN22StereoKernelGPUContextC2Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getLDCCurve(float*, float*, float*, float, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11getLDCCurveEPfS0_S0_fP30STEREO_KERNEL_LENS_INFO_STRUCTjj(void) {
    ALOGD("_ZN19MTKStereoKernelCore11getLDCCurveEPfS0_S0_fP30STEREO_KERNEL_LENS_INFO_STRUCTjj() called");
    return 0;
}

/* Demangled: MTKCc::colorTransfer_HM() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc16colorTransfer_HMEv(void) {
    ALOGD("_ZN5MTKCc16colorTransfer_HMEv() called");
    return 0;
}

/* Demangled: MTKStereoKernel::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernel15destroyInstanceEv(void) {
    ALOGD("_ZN15MTKStereoKernel15destroyInstanceEv() called");
    return 0;
}

/* Demangled: MTKCc::setProc(STEREO_CC_PROC_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc7setProcEP21STEREO_CC_PROC_STRUCT(void) {
    ALOGD("_ZN5MTKCc7setProcEP21STEREO_CC_PROC_STRUCT() called");
    return 0;
}

/* Demangled: MTKCc::getHistogramUsingColorMappingMatrix(unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc35getHistogramUsingColorMappingMatrixEjPi(void) {
    ALOGD("_ZN5MTKCc35getHistogramUsingColorMappingMatrixEjPi() called");
    return 0;
}

/* Demangled: MTKCc::setRotationMatrix() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc17setRotationMatrixEv(void) {
    ALOGD("_ZN5MTKCc17setRotationMatrixEv() called");
    return 0;
}

/* Exported Object: MTKStereoKernelCore::gAF_dacStart */
extern "C" __attribute__((visibility("default"))) void* _ZN19MTKStereoKernelCore12gAF_dacStartE = NULL;

/* Demangled: MTKCc::sw_colorTransfer(unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc16sw_colorTransferEPhjjj(void) {
    ALOGD("_ZN5MTKCc16sw_colorTransferEPhjjj() called");
    return 0;
}

/* Demangled: StereoKernelVerification(unsigned char*, STEREO_KERNEL_IMG_INFO_STRUCT*, STEREO_CORE_VERIFY_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24StereoKernelVerificationPhP29STEREO_KERNEL_IMG_INFO_STRUCTP30STEREO_CORE_VERIFY_INFO_STRUCT(void) {
    ALOGD("_Z24StereoKernelVerificationPhP29STEREO_KERNEL_IMG_INFO_STRUCTP30STEREO_CORE_VERIFY_INFO_STRUCT() called");
    return 0;
}

/* Demangled: tand(float) */
extern "C" __attribute__((visibility("default"))) int _Z4tandf(void) {
    ALOGD("_Z4tandf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::modeling_fromLearn() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18modeling_fromLearnEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore18modeling_fromLearnEv() called");
    return 0;
}

/* Demangled: GPU_N3D_WARP::DestroyShader() */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARP13DestroyShaderEv(void) {
    ALOGD("_ZN12GPU_N3D_WARP13DestroyShaderEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelSetProcInfo(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore23StereoKernelSetProcInfoEPv(void) {
    ALOGD("_ZN19MTKStereoKernelCore23StereoKernelSetProcInfoEPv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::dac2dist(unsigned int, STEREO_KERNEL_AF_INIT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore8dac2distEjP28STEREO_KERNEL_AF_INIT_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore8dac2distEjP28STEREO_KERNEL_AF_INIT_STRUCT() called");
    return 0;
}

/* Demangled: MTKFeFm::getOUTER_SWFM() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm13getOUTER_SWFMEv(void) {
    ALOGD("_ZN7MTKFeFm13getOUTER_SWFMEv() called");
    return 0;
}

/* Demangled: MTKFeFm::getHWFE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm7getHWFEEj(void) {
    ALOGD("_ZN7MTKFeFm7getHWFEEj() called");
    return 0;
}

/* Demangled: MTKCc::reset(int (*) [256], int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc5resetEPA256_iPi(void) {
    ALOGD("_ZN5MTKCc5resetEPA256_iPi() called");
    return 0;
}

/* Demangled: MTKStereoKernel::StereoKernelFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernel23StereoKernelFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN15MTKStereoKernel23StereoKernelFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: GeometryLMCostFunc_AF(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z21GeometryLMCostFunc_AFPfS_(void) {
    ALOGD("_Z21GeometryLMCostFunc_AFPfS_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::undistortFE(float*, float*, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int, unsigned int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11undistortFEEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_(void) {
    ALOGD("_ZN19MTKStereoKernelCore11undistortFEEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelWriteDebugLog() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore25StereoKernelWriteDebugLogEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore25StereoKernelWriteDebugLogEv() called");
    return 0;
}

/* Demangled: MTKAC::main(unsigned int, int, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC4mainEjiPfj(void) {
    ALOGD("_ZN5MTKAC4mainEjiPfj() called");
    return 0;
}

/* Demangled: MTKCc::prepareDataPolynomialFitting(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc28prepareDataPolynomialFittingEj(void) {
    ALOGD("_ZN5MTKCc28prepareDataPolynomialFittingEj() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN17MTK_EEPROM_PARSER20parse3rdParty_EEPROMEPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void) {
    ALOGD("_ZN17MTK_EEPROM_PARSER20parse3rdParty_EEPROMEPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKCc::getColorMappingMtx() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc18getColorMappingMtxEv(void) {
    ALOGD("_ZN5MTKCc18getColorMappingMtxEv() called");
    return 0;
}

/* Demangled: sw_warp_yv12_noLDC(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z18sw_warp_yv12_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z18sw_warp_yv12_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11getInstanceEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKCc::multiPolynomialFitting(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc22multiPolynomialFittingEj(void) {
    ALOGD("_ZN5MTKCc22multiPolynomialFittingEj() called");
    return 0;
}

/* Demangled: MTKCc::colorTransfer_DMP(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc17colorTransfer_DMPEj(void) {
    ALOGD("_ZN5MTKCc17colorTransfer_DMPEj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::modeling_fromSPEC() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore17modeling_fromSPECEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore17modeling_fromSPECEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::reconstructCurve_CubicSpline(float*, unsigned int, float*, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore28reconstructCurve_CubicSplineEPfjS0_jf(void) {
    ALOGD("_ZN19MTKStereoKernelCore28reconstructCurve_CubicSplineEPfjS0_jf() called");
    return 0;
}

/* Demangled: theta2R(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z7theta2RPfS_(void) {
    ALOGD("_Z7theta2RPfS_() called");
    return 0;
}

/* Demangled: MTKFeFm::getSWFM() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm7getSWFMEv(void) {
    ALOGD("_ZN7MTKFeFm7getSWFMEv() called");
    return 0;
}

/* Demangled: AppStereoKernel::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernel11getInstanceEv(void) {
    ALOGD("_ZN15AppStereoKernel11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::UpdateScaleOptResult() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20UpdateScaleOptResultEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore20UpdateScaleOptResultEv() called");
    return 0;
}

/* Demangled: verify_min_dist(int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15verify_min_distPii(void) {
    ALOGD("_Z15verify_min_distPii() called");
    return 0;
}

/* Demangled: StereoKernelGPUContext::CreateEGL(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN22StereoKernelGPUContext9CreateEGLEii(void) {
    ALOGD("_ZN22StereoKernelGPUContext9CreateEGLEii() called");
    return 0;
}

/* Demangled: MTKCc::colorTransfer_DMMP(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc18colorTransfer_DMMPEj(void) {
    ALOGD("_ZN5MTKCc18colorTransfer_DMMPEj() called");
    return 0;
}

/* Demangled: StereoKernelGPUContext::TestEGLError(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN22StereoKernelGPUContext12TestEGLErrorEPc(void) {
    ALOGD("_ZN22StereoKernelGPUContext12TestEGLErrorEPc() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::reGenerateCurve(float*, float*, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore15reGenerateCurveEPfS0_jf(void) {
    ALOGD("_ZN19MTKStereoKernelCore15reGenerateCurveEPfS0_jf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::undistortFEGrid(float*, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int, unsigned int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore15undistortFEGridEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_(void) {
    ALOGD("_ZN19MTKStereoKernelCore15undistortFEGridEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_() called");
    return 0;
}

/* Demangled: StereoKernelGPUContext::StereoKernelGPUContext() */
extern "C" __attribute__((visibility("default"))) int _ZN22StereoKernelGPUContextC1Ev(void) {
    ALOGD("_ZN22StereoKernelGPUContextC1Ev() called");
    return 0;
}

/* Demangled: MTKCc::init(STEREO_CC_ENV_STRUCT*, CStereoCcTuneInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc4initEP20STEREO_CC_ENV_STRUCTP17CStereoCcTuneInfo(void) {
    ALOGD("_ZN5MTKCc4initEP20STEREO_CC_ENV_STRUCTP17CStereoCcTuneInfo() called");
    return 0;
}

/* Demangled: sw_warp_rgb(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z11sw_warp_rgbPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z11sw_warp_rgbPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: FORMAT_YV12toRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16FORMAT_YV12toRGBPhS_jjj(void) {
    ALOGD("_Z16FORMAT_YV12toRGBPhS_jjj() called");
    return 0;
}

/* Demangled: sw_warp_y_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT(void) {
    ALOGD("_Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT() called");
    return 0;
}

/* Demangled: MTKFeFm::setWorkingBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm16setWorkingBufferEPh(void) {
    ALOGD("_ZN7MTKFeFm16setWorkingBufferEPh() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelLoadLensInfo(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore24StereoKernelLoadLensInfoEPf(void) {
    ALOGD("_ZN19MTKStereoKernelCore24StereoKernelLoadLensInfoEPf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::parseLensInfo_EEPROM(unsigned int*, unsigned int, STEREO_KERNEL_LENS_INFO_STRUCT*, STEREO_KERNEL_LENS_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20parseLensInfo_EEPROMEPjjP30STEREO_KERNEL_LENS_INFO_STRUCTS2_(void) {
    ALOGD("_ZN19MTKStereoKernelCore20parseLensInfo_EEPROMEPjjP30STEREO_KERNEL_LENS_INFO_STRUCTS2_() called");
    return 0;
}

/* Demangled: MTKAC::StereoCoreACReset() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC17StereoCoreACResetEv(void) {
    ALOGD("_ZN5MTKAC17StereoCoreACResetEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getBound(float*, float*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore8getBoundEPfS0_iii(void) {
    ALOGD("_ZN19MTKStereoKernelCore8getBoundEPfS0_iii() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: GPU_N3D_WARP::DestroyEGLImage(TEXTURE_PARA_STRUCT*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARP15DestroyEGLImageEP19TEXTURE_PARA_STRUCTjb(void) {
    ALOGD("_ZN12GPU_N3D_WARP15DestroyEGLImageEP19TEXTURE_PARA_STRUCTjb() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::LDC_inv_curve(STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore13LDC_inv_curveEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTPfS2_(void) {
    ALOGD("_ZN19MTKStereoKernelCore13LDC_inv_curveEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTPfS2_() called");
    return 0;
}

/* Demangled: get_grid_from_hmtx_noLDC(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24get_grid_from_hmtx_noLDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void) {
    ALOGD("_Z24get_grid_from_hmtx_noLDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC2(float*, float*, float*, float*, unsigned int, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_jS0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_jS0_j() called");
    return 0;
}

/* Demangled: sw_warp_yv12_fixed_point(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24sw_warp_yv12_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z24sw_warp_yv12_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: eval_boundary_shrink(unsigned int*, float, float, unsigned int, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _Z20eval_boundary_shrinkPjffjjf(void) {
    ALOGD("_Z20eval_boundary_shrinkPjffjjf() called");
    return 0;
}

/* Demangled: GPU_N3D_WARP::GPU_N3D_WARP() */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARPC1Ev(void) {
    ALOGD("_ZN12GPU_N3D_WARPC1Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernel::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernel14createInstanceEv(void) {
    ALOGD("_ZN15MTKStereoKernel14createInstanceEv() called");
    return 0;
}

/* Demangled: MTKFeFm::setProc(STEREO_FEFM_PROC_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm7setProcEP23STEREO_FEFM_PROC_STRUCT(void) {
    ALOGD("_ZN7MTKFeFm7setProcEP23STEREO_FEFM_PROC_STRUCT() called");
    return 0;
}

/* Demangled: MTKFeFm::getOUTER_SWFE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm13getOUTER_SWFEEj(void) {
    ALOGD("_ZN7MTKFeFm13getOUTER_SWFEEj() called");
    return 0;
}

/* Demangled: MTKStereoKernel::~MTKStereoKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernelD2Ev(void) {
    ALOGD("_ZN15MTKStereoKernelD2Ev() called");
    return 0;
}

/* Demangled: FORMAT_YtoRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13FORMAT_YtoRGBPhS_jjj(void) {
    ALOGD("_Z13FORMAT_YtoRGBPhS_jjj() called");
    return 0;
}

/* Demangled: MTKStereoKernel::StereoKernelMain(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernel16StereoKernelMainEj(void) {
    ALOGD("_ZN15MTKStereoKernel16StereoKernelMainEj() called");
    return 0;
}

/* Demangled: MTKCc::polynomialFitting(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc17polynomialFittingEj(void) {
    ALOGD("_ZN5MTKCc17polynomialFittingEj() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreDebugControl(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore28StereoKernelCoreDebugControlEPv(void) {
    ALOGD("_ZN19MTKStereoKernelCore28StereoKernelCoreDebugControlEPv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetWarpingMatrix_forImageOutput(float*, float*, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore31GetWarpingMatrix_forImageOutputEPfS0_fff(void) {
    ALOGD("_ZN19MTKStereoKernelCore31GetWarpingMatrix_forImageOutputEPfS0_fff() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::writeDEBUG_info() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore15writeDEBUG_infoEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore15writeDEBUG_infoEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GeometryOptimization() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20GeometryOptimizationEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore20GeometryOptimizationEv() called");
    return 0;
}

/* Demangled: mtxMul_NonMalloc(float**, float**, float**, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16mtxMul_NonMallocPPfS0_S0_iii(void) {
    ALOGD("_Z16mtxMul_NonMallocPPfS0_S0_iii() called");
    return 0;
}

/* Demangled: MTKCc::main(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc4mainEj(void) {
    ALOGD("_ZN5MTKCc4mainEj() called");
    return 0;
}

/* Demangled: sw_warp_y_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: getWarpCoord(float*, float, float, int**, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12getWarpCoordPfffPPijj(void) {
    ALOGD("_Z12getWarpCoordPfffPPijj() called");
    return 0;
}

/* Demangled: free2DMtx(float**) */
extern "C" __attribute__((visibility("default"))) int _Z9free2DMtxPPf(void) {
    ALOGD("_Z9free2DMtxPPf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::generateRadialCurve3rdParty() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore27generateRadialCurve3rdPartyEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore27generateRadialCurve3rdPartyEv() called");
    return 0;
}

/* Demangled: get_interp_coef(STEREO_CORE_WARP_INTERPOLATION_STRUCT*, float, float, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15get_interp_coefP37STEREO_CORE_WARP_INTERPOLATION_STRUCTffjj(void) {
    ALOGD("_Z15get_interp_coefP37STEREO_CORE_WARP_INTERPOLATION_STRUCTffjj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelGetEEPROMStart(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore26StereoKernelGetEEPROMStartEPj(void) {
    ALOGD("_ZN19MTKStereoKernelCore26StereoKernelGetEEPROMStartEPj() called");
    return 0;
}

/* Demangled: MTKCc::setWorkingBuffer(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc16setWorkingBufferEPh(void) {
    ALOGD("_ZN5MTKCc16setWorkingBufferEPh() called");
    return 0;
}

/* Demangled: MTKCc::MTKCc() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCcC1Ev(void) {
    ALOGD("_ZN5MTKCcC1Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::undistortFE(float*, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int, unsigned int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11undistortFEEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_(void) {
    ALOGD("_ZN19MTKStereoKernelCore11undistortFEEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::UpdateGeoOptResult() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18UpdateGeoOptResultEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore18UpdateGeoOptResultEv() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: MTKStereoKernel::StereoKernelReset() */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernel17StereoKernelResetEv(void) {
    ALOGD("_ZN15MTKStereoKernel17StereoKernelResetEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetHmtxFromP_Scale(float*, float*, float*, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18GetHmtxFromP_ScaleEPfS0_S0_S0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore18GetHmtxFromP_ScaleEPfS0_S0_S0_j() called");
    return 0;
}

/* Demangled: sw_warp_y_semi_fixed_noLDC(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z26sw_warp_y_semi_fixed_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void) {
    ALOGD("_Z26sw_warp_y_semi_fixed_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getDistanceCVec_fromCalib(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore25getDistanceCVec_fromCalibEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void) {
    ALOGD("_ZN19MTKStereoKernelCore25getDistanceCVec_fromCalibEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::dump(__sFILE*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore4dumpEP7__sFILEPc(void) {
    ALOGD("_ZN19MTKStereoKernelCore4dumpEP7__sFILEPc() called");
    return 0;
}

/* Demangled: MTKFeFm::calSWFE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm7calSWFEEj(void) {
    ALOGD("_ZN7MTKFeFm7calSWFEEj() called");
    return 0;
}

/* Demangled: get_grid_from_hmtx_LDC(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT(void) {
    ALOGD("_Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT() called");
    return 0;
}

/* Demangled: FORMAT_YUV422toRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18FORMAT_YUV422toRGBPhS_jjj(void) {
    ALOGD("_Z18FORMAT_YUV422toRGBPhS_jjj() called");
    return 0;
}

/* Demangled: mtxInv_NonMalloc(float**, float**, float**, int) */
extern "C" __attribute__((visibility("default"))) int _Z16mtxInv_NonMallocPPfS0_S0_i(void) {
    ALOGD("_Z16mtxInv_NonMallocPPfS0_S0_i() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::loadOneLensInfo3rdParty(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore23loadOneLensInfo3rdPartyEj(void) {
    ALOGD("_ZN19MTKStereoKernelCore23loadOneLensInfo3rdPartyEj() called");
    return 0;
}

/* Demangled: MTKAC::resetResult() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC11resetResultEv(void) {
    ALOGD("_ZN5MTKAC11resetResultEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: MTKStereoKernelCore::calibData_coordUndistort(STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCT*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore24calibData_coordUndistortEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTf(void) {
    ALOGD("_ZN19MTKStereoKernelCore24calibData_coordUndistortEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::~MTKStereoKernelCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCoreD2Ev(void) {
    ALOGD("_ZN19MTKStereoKernelCoreD2Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::generateFixPt() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore13generateFixPtEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore13generateFixPtEv() called");
    return 0;
}

/* Exported Object: MTKStereoKernelCore::gLM_dacRef */
extern "C" __attribute__((visibility("default"))) void* _ZN19MTKStereoKernelCore10gLM_dacRefE = NULL;

/* Demangled: GPU_N3D_WARP::CreateEGLImage(TEXTURE_PARA_STRUCT*, void*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARP14CreateEGLImageEP19TEXTURE_PARA_STRUCTPvjb(void) {
    ALOGD("_ZN12GPU_N3D_WARP14CreateEGLImageEP19TEXTURE_PARA_STRUCTPvjb() called");
    return 0;
}

/* Demangled: sw_warp_y_fixed_point_shift(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z27sw_warp_y_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void) {
    ALOGD("_Z27sw_warp_y_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::calibData_coordRemapping(STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCT*, STEREO_CORE_REMAP_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore24calibData_coordRemappingEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore24calibData_coordRemappingEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: MTKCc::colorTransfer_DM() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc16colorTransfer_DMEv(void) {
    ALOGD("_ZN5MTKCc16colorTransfer_DMEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20StereoKernelCoreInitEPvS0_(void) {
    ALOGD("_ZN19MTKStereoKernelCore20StereoKernelCoreInitEPvS0_() called");
    return 0;
}

/* Demangled: get_grid_from_hmtx_LDC(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_(void) {
    ALOGD("_Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_() called");
    return 0;
}

/* Demangled: sw_warp_yv12_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: AppStereoKernel::AppStereoKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernelC1Ev(void) {
    ALOGD("_ZN15AppStereoKernelC1Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::loadMetadata(__sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore12loadMetadataEP7__sFILE(void) {
    ALOGD("_ZN19MTKStereoKernelCore12loadMetadataEP7__sFILE() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getDistanceCVec_fromFixPt(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore25getDistanceCVec_fromFixPtEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void) {
    ALOGD("_ZN19MTKStereoKernelCore25getDistanceCVec_fromFixPtEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_() called");
    return 0;
}

/* Demangled: AppStereoKernel::~AppStereoKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernelD2Ev(void) {
    ALOGD("_ZN15AppStereoKernelD2Ev() called");
    return 0;
}

/* Demangled: MTKFeFm::getHWFE_onlyPt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm14getHWFE_onlyPtEj(void) {
    ALOGD("_ZN7MTKFeFm14getHWFE_onlyPtEj() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: MTKCc::update(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc6updateEjj(void) {
    ALOGD("_ZN5MTKCc6updateEjj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::calibData_getOptimalPara(STEREO_CORE_CALIB_DATA_STRUCT*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore24calibData_getOptimalParaEP29STEREO_CORE_CALIB_DATA_STRUCTPf(void) {
    ALOGD("_ZN19MTKStereoKernelCore24calibData_getOptimalParaEP29STEREO_CORE_CALIB_DATA_STRUCTPf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore21StereoKernelCoreResetEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore21StereoKernelCoreResetEv() called");
    return 0;
}

/* Demangled: atand(float) */
extern "C" __attribute__((visibility("default"))) int _Z5atandf(void) {
    ALOGD("_Z5atandf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::MTKStereoKernelCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCoreC2Ev(void) {
    ALOGD("_ZN19MTKStereoKernelCoreC2Ev() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: MTKAC::updateConvergenceModel(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC22updateConvergenceModelEj(void) {
    ALOGD("_ZN5MTKAC22updateConvergenceModelEj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::loadOneLensInfo(STEREO_KERNEL_LENS_INFO_STRUCT*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore15loadOneLensInfoEP30STEREO_KERNEL_LENS_INFO_STRUCTPf(void) {
    ALOGD("_ZN19MTKStereoKernelCore15loadOneLensInfoEP30STEREO_KERNEL_LENS_INFO_STRUCTPf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreMain(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20StereoKernelCoreMainEj(void) {
    ALOGD("_ZN19MTKStereoKernelCore20StereoKernelCoreMainEj() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_1(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN17MTK_EEPROM_PARSER22parse3rdParty_EEPROM_1EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void) {
    ALOGD("_ZN17MTK_EEPROM_PARSER22parse3rdParty_EEPROM_1EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKCc::updateByMapping(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc15updateByMappingEjj(void) {
    ALOGD("_ZN5MTKCc15updateByMappingEjj() called");
    return 0;
}

/* Demangled: MTKCc::getResult(STEREO_CC_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc9getResultEP23STEREO_CC_RESULT_STRUCT(void) {
    ALOGD("_ZN5MTKCc9getResultEP23STEREO_CC_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::modelRefine() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11modelRefineEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore11modelRefineEv() called");
    return 0;
}

/* Demangled: MTKCc::colorTransfer_HMP(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc17colorTransfer_HMPEj(void) {
    ALOGD("_ZN5MTKCc17colorTransfer_HMPEj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::procData_Calib() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore14procData_CalibEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore14procData_CalibEv() called");
    return 0;
}

/* Demangled: MTKCc::getSimilarityScore(int*, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc18getSimilarityScoreEPiS0_Pf(void) {
    ALOGD("_ZN5MTKCc18getSimilarityScoreEPiS0_Pf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::genAnalysisResult() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore17genAnalysisResultEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore17genAnalysisResultEv() called");
    return 0;
}

/* Demangled: gl_LoadShaderString(unsigned int*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19gl_LoadShaderStringPjPKcj(void) {
    ALOGD("_Z19gl_LoadShaderStringPjPKcj() called");
    return 0;
}

/* Demangled: verify_intersect_x(float*, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18verify_intersect_xPfiiiPi(void) {
    ALOGD("_Z18verify_intersect_xPfiiiPi() called");
    return 0;
}

/* Demangled: get_interp_value(STEREO_CORE_WARP_INTERPOLATION_STRUCT*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPi(void) {
    ALOGD("_Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPi() called");
    return 0;
}

/* Demangled: GPU_N3D_WARP::GPU_N3D_WARP() */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARPC2Ev(void) {
    ALOGD("_ZN12GPU_N3D_WARPC2Ev() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getDistanceCVec(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore15getDistanceCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void) {
    ALOGD("_ZN19MTKStereoKernelCore15getDistanceCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_() called");
    return 0;
}

/* Demangled: linearRegress(float, float*, float*, float*, unsigned int, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _Z13linearRegressfPfS_S_jRfS0_(void) {
    ALOGD("_Z13linearRegressfPfS_S_jRfS0_() called");
    return 0;
}

/* Demangled: MTKFeFm::getOUTER_SWFE_onlyPt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm20getOUTER_SWFE_onlyPtEj(void) {
    ALOGD("_ZN7MTKFeFm20getOUTER_SWFE_onlyPtEj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getEEPROMData_3rd(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore17getEEPROMData_3rdEPj(void) {
    ALOGD("_ZN19MTKStereoKernelCore17getEEPROMData_3rdEPj() called");
    return 0;
}

/* Demangled: MTKFeFm::MTKFeFm() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFmC1Ev(void) {
    ALOGD("_ZN7MTKFeFmC1Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::CoordinateRemapWarpingMatrix(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore28CoordinateRemapWarpingMatrixEPf(void) {
    ALOGD("_ZN19MTKStereoKernelCore28CoordinateRemapWarpingMatrixEPf() called");
    return 0;
}

/* Demangled: MTKCc::reset(float (*) [10]) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc5resetEPA10_f(void) {
    ALOGD("_ZN5MTKCc5resetEPA10_f() called");
    return 0;
}

/* Demangled: GPU_N3D_WARP::dump_gpu_buffer(void*, char*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARP15dump_gpu_bufferEPvPcf(void) {
    ALOGD("_ZN12GPU_N3D_WARP15dump_gpu_bufferEPvPcf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getRectError(float*, float*, float*, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore12getRectErrorEPfS0_S0_S0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore12getRectErrorEPfS0_S0_S0_j() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::updateHmtxWithCVec(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18updateHmtxWithCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPf(void) {
    ALOGD("_ZN19MTKStereoKernelCore18updateHmtxWithCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPf() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::inverse_curve(float*, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore13inverse_curveEPfS0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore13inverse_curveEPfS0_j() called");
    return 0;
}

/* Exported Object: MTKStereoKernelCore::gLM_optDir */
extern "C" __attribute__((visibility("default"))) void* _ZN19MTKStereoKernelCore10gLM_optDirE = NULL;

/* Demangled: verify_proj(int, int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z11verify_projiiPfS_(void) {
    ALOGD("_Z11verify_projiiPfS_() called");
    return 0;
}

/* Demangled: MTKCc::colorTransfer_SGSC_RGB() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc22colorTransfer_SGSC_RGBEv(void) {
    ALOGD("_ZN5MTKCc22colorTransfer_SGSC_RGBEv() called");
    return 0;
}

/* Demangled: get_grid_from_hmtx(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z18get_grid_from_hmtxPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_(void) {
    ALOGD("_Z18get_grid_from_hmtxPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC(float*, float*, float*, float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_S0_S0_(void) {
    ALOGD("_ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: FORMAT_YUYVtoYUV420(unsigned char*, unsigned char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19FORMAT_YUYVtoYUV420PhS_jj(void) {
    ALOGD("_Z19FORMAT_YUYVtoYUV420PhS_jj() called");
    return 0;
}

/* Demangled: MTKFeFm::main() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm4mainEv(void) {
    ALOGD("_ZN7MTKFeFm4mainEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreRunGPU(GPU_BUFFER_PARA_STRUCT*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore22StereoKernelCoreRunGPUEP22GPU_BUFFER_PARA_STRUCTii(void) {
    ALOGD("_ZN19MTKStereoKernelCore22StereoKernelCoreRunGPUEP22GPU_BUFFER_PARA_STRUCTii() called");
    return 0;
}

/* Demangled: GeometryLMCostFunc_SCALE(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z24GeometryLMCostFunc_SCALEPfS_(void) {
    ALOGD("_Z24GeometryLMCostFunc_SCALEPfS_() called");
    return 0;
}

/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_30001(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_30001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void) {
    ALOGD("_ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_30001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getLDCGrid(float*, float*, float*, STEREO_KERNEL_LENS_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore10getLDCGridEPfS0_S0_P30STEREO_KERNEL_LENS_INFO_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore10getLDCGridEPfS0_S0_P30STEREO_KERNEL_LENS_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::resetLearnedData() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore16resetLearnedDataEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore16resetLearnedDataEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::preCalculateRadius(STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18preCalculateRadiusEP30STEREO_KERNEL_LENS_INFO_STRUCTjj(void) {
    ALOGD("_ZN19MTKStereoKernelCore18preCalculateRadiusEP30STEREO_KERNEL_LENS_INFO_STRUCTjj() called");
    return 0;
}

/* Exported Object: vtable for MTKStereoKernelCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV19MTKStereoKernelCore = NULL;

/* Demangled: MTKStereoKernelCore::StereoKernelCoreSetLogBuffer(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore28StereoKernelCoreSetLogBufferEPj(void) {
    ALOGD("_ZN19MTKStereoKernelCore28StereoKernelCoreSetLogBufferEPj() called");
    return 0;
}

/* Demangled: MTKCc::MTKCc() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCcC2Ev(void) {
    ALOGD("_ZN5MTKCcC2Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getEEPROMData(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore13getEEPROMDataEPj(void) {
    ALOGD("_ZN19MTKStereoKernelCore13getEEPROMDataEPj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::modeling_fromCalib() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18modeling_fromCalibEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore18modeling_fromCalibEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::dist2dac(float, STEREO_KERNEL_AF_INIT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore8dist2dacEfP28STEREO_KERNEL_AF_INIT_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore8dist2dacEfP28STEREO_KERNEL_AF_INIT_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::StereoKernelCoreModelInit() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore25StereoKernelCoreModelInitEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore25StereoKernelCoreModelInitEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF(float*, float*, float*, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore15GetHmtxFromP_AFEPfS0_S0_S0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore15GetHmtxFromP_AFEPfS0_S0_S0_j() called");
    return 0;
}

/* Demangled: MTKStereoKernel::~MTKStereoKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN15MTKStereoKernelD0Ev(void) {
    ALOGD("_ZN15MTKStereoKernelD0Ev() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::ScaleOptimization() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore17ScaleOptimizationEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore17ScaleOptimizationEv() called");
    return 0;
}

/* Demangled: AppStereoKernel::AppStereoKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernelC2Ev(void) {
    ALOGD("_ZN15AppStereoKernelC2Ev() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: MTKCc::resetResult(STEREO_CC_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc11resetResultEP23STEREO_CC_RESULT_STRUCT(void) {
    ALOGD("_ZN5MTKCc11resetResultEP23STEREO_CC_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: MTKAC::updateACHistoryArray(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC20updateACHistoryArrayEPi(void) {
    ALOGD("_ZN5MTKAC20updateACHistoryArrayEPi() called");
    return 0;
}

/* Demangled: MTKCc::backUp(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc6backUpEj(void) {
    ALOGD("_ZN5MTKCc6backUpEj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC(float*, float*, float*, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_j() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::getLDCCurve(float*, float, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore11getLDCCurveEPffP30STEREO_KERNEL_LENS_INFO_STRUCTjj(void) {
    ALOGD("_ZN19MTKStereoKernelCore11getLDCCurveEPffP30STEREO_KERNEL_LENS_INFO_STRUCTjj() called");
    return 0;
}

/* Demangled: AppStereoKernel::StereoKernelLoadMetadata(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernel24StereoKernelLoadMetadataEPv(void) {
    ALOGD("_ZN15AppStereoKernel24StereoKernelLoadMetadataEPv() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: sw_warp_yv12_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT(void) {
    ALOGD("_Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: FORMAT_RGBAtoY(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14FORMAT_RGBAtoYPhS_jjj(void) {
    ALOGD("_Z14FORMAT_RGBAtoYPhS_jjj() called");
    return 0;
}

/* Demangled: coreMath_utilLevmarBcDif(LEVMAR_CAL_STRUCT*, int) */
extern "C" __attribute__((visibility("default"))) int _Z24coreMath_utilLevmarBcDifP17LEVMAR_CAL_STRUCTi(void) {
    ALOGD("_Z24coreMath_utilLevmarBcDifP17LEVMAR_CAL_STRUCTi() called");
    return 0;
}

/* Demangled: MTKCc::histMatching_1D_NonMalloc(int*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc25histMatching_1D_NonMallocEPiS0_iiii(void) {
    ALOGD("_ZN5MTKCc25histMatching_1D_NonMallocEPiS0_iiii() called");
    return 0;
}

/* Demangled: sw_warp_rgb_fixed_point(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z23sw_warp_rgb_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z23sw_warp_rgb_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: sw_warp_y_fixed_point(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z21sw_warp_y_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void) {
    ALOGD("_Z21sw_warp_y_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT() called");
    return 0;
}

/* Demangled: sw_warp_yv12_fixed_point_shift(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z30sw_warp_yv12_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void) {
    ALOGD("_Z30sw_warp_yv12_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_() called");
    return 0;
}

/* Demangled: AppStereoKernel::~AppStereoKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernelD1Ev(void) {
    ALOGD("_ZN15AppStereoKernelD1Ev() called");
    return 0;
}

/* Demangled: MTKCc::sw_colorTransferY(unsigned char*, unsigned char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKCc17sw_colorTransferYEPhS0_jj(void) {
    ALOGD("_ZN5MTKCc17sw_colorTransferYEPhS0_jj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::CoordinateRemapping(STEREO_KERNEL_SET_ENV_INFO_STRUCT*, STEREO_CORE_REMAP_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore19CoordinateRemappingEP33STEREO_KERNEL_SET_ENV_INFO_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore19CoordinateRemappingEP33STEREO_KERNEL_SET_ENV_INFO_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::chechCalibConsistency() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore21chechCalibConsistencyEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore21chechCalibConsistencyEv() called");
    return 0;
}

/* Demangled: GPU_N3D_WARP::GPU_N3D_Auto_Convergence(GPU_BUFFER_PARA_STRUCT*, int, float*, float*, float*, float*, unsigned int, float*, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12GPU_N3D_WARP24GPU_N3D_Auto_ConvergenceEP22GPU_BUFFER_PARA_STRUCTiPfS2_S2_S2_jS2_ijj(void) {
    ALOGD("_ZN12GPU_N3D_WARP24GPU_N3D_Auto_ConvergenceEP22GPU_BUFFER_PARA_STRUCTiPfS2_S2_S2_jS2_ijj() called");
    return 0;
}

/* Demangled: AppStereoKernel::StereoKernelInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernel16StereoKernelInitEPvS0_(void) {
    ALOGD("_ZN15AppStereoKernel16StereoKernelInitEPvS0_() called");
    return 0;
}

/* Demangled: GeometryLMCostFunc_AF_AC2(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z25GeometryLMCostFunc_AF_AC2PfS_(void) {
    ALOGD("_Z25GeometryLMCostFunc_AF_AC2PfS_() called");
    return 0;
}

/* Demangled: MTKFeFm::threadFunc(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKFeFm10threadFuncEPv(void) {
    ALOGD("_ZN7MTKFeFm10threadFuncEPv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::checkRegionContain(float, float, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore18checkRegionContainEffffff(void) {
    ALOGD("_ZN19MTKStereoKernelCore18checkRegionContainEffffff() called");
    return 0;
}

/* Demangled: AppStereoKernel::StereoKernelFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AppStereoKernel23StereoKernelFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN15AppStereoKernel23StereoKernelFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::generateGrid3rdParty() */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20generateGrid3rdPartyEv(void) {
    ALOGD("_ZN19MTKStereoKernelCore20generateGrid3rdPartyEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::CoordinateRemapping_Sensor(STEREO_KERNEL_FLOW_INFO_STRUCT*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore26CoordinateRemapping_SensorEP30STEREO_KERNEL_FLOW_INFO_STRUCTPj(void) {
    ALOGD("_ZN19MTKStereoKernelCore26CoordinateRemapping_SensorEP30STEREO_KERNEL_FLOW_INFO_STRUCTPj() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::reconstructCurve_PCA(float*, float*, STEREO_KERNEL_LENS_PCA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore20reconstructCurve_PCAEPfS0_P29STEREO_KERNEL_LENS_PCA_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore20reconstructCurve_PCAEPfS0_P29STEREO_KERNEL_LENS_PCA_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for MTKStereoKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTV15MTKStereoKernel = NULL;

/* Demangled: MTKStereoKernelCore::genLDCSplineCurve(STEREO_KERNEL_LENS_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore17genLDCSplineCurveEP30STEREO_KERNEL_LENS_INFO_STRUCT(void) {
    ALOGD("_ZN19MTKStereoKernelCore17genLDCSplineCurveEP30STEREO_KERNEL_LENS_INFO_STRUCT() called");
    return 0;
}

/* Demangled: MTKAC::ConvergenceAnalysis(float*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKAC19ConvergenceAnalysisEPfjj(void) {
    ALOGD("_ZN5MTKAC19ConvergenceAnalysisEPfjj() called");
    return 0;
}

/* Demangled: StereoKernelGPUContext::DestroyEGL() */
extern "C" __attribute__((visibility("default"))) int _ZN22StereoKernelGPUContext10DestroyEGLEv(void) {
    ALOGD("_ZN22StereoKernelGPUContext10DestroyEGLEv() called");
    return 0;
}

/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC2(float*, float*, float*, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_j(void) {
    ALOGD("_ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_j() called");
    return 0;
}

/* Exported Object: vtable for AppStereoKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTV15AppStereoKernel = NULL;
