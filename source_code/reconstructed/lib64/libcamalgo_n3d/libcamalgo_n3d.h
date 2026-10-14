/*
 * Reverse-Engineered ABI Specification for: libcamalgo.n3d.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.n3d.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_N3D_H
#define BEGONIA_RE_LIBCAMALGO_N3D_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7MTKFeFm7getSWFEEj */
/* Demangled: MTKFeFm::getSWFE(unsigned int) */
int _ZN7MTKFeFm7getSWFEEj(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _ZN19MTKStereoKernelCore33StereoKernelCoreSetWorkingBufInfoEPv */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreSetWorkingBufInfo(void*) */
int _ZN19MTKStereoKernelCore33StereoKernelCoreSetWorkingBufInfoEPv(void);

/* Symbol: _ZN19MTKStereoKernelCore18distort_info_checkEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS1_ */
/* Demangled: MTKStereoKernelCore::distort_info_check(STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _ZN19MTKStereoKernelCore18distort_info_checkEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS1_(void);

/* Symbol: _ZN19MTKStereoKernelCore22GetHmtxFromP_AF_AC_SELEPfS0_S0_S0_j */
/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC_SEL(float*, float*, float*, float*, unsigned int) */
int _ZN19MTKStereoKernelCore22GetHmtxFromP_AF_AC_SELEPfS0_S0_S0_j(void);

/* Symbol: _ZN15AppStereoKernel16StereoKernelMainEj */
/* Demangled: AppStereoKernel::StereoKernelMain(unsigned int) */
int _ZN15AppStereoKernel16StereoKernelMainEj(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: _ZN19MTKStereoKernelCore27StereoKernelLoadNVRAM2CalibEPj */
/* Demangled: MTKStereoKernelCore::StereoKernelLoadNVRAM2Calib(unsigned int*) */
int _ZN19MTKStereoKernelCore27StereoKernelLoadNVRAM2CalibEPj(void);

/* Symbol: _ZN7MTKFeFmC2Ev */
/* Demangled: MTKFeFm::MTKFeFm() */
int _ZN7MTKFeFmC2Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore11SafetyCheckEPfPij */
/* Demangled: MTKStereoKernelCore::SafetyCheck(float*, int*, unsigned int) */
int _ZN19MTKStereoKernelCore11SafetyCheckEPfPij(void);

/* Symbol: _Z9make2DMtxii */
/* Demangled: make2DMtx(int, int) */
int _Z9make2DMtxii(void);

/* Symbol: _ZN19MTKStereoKernelCore15destroyInstanceEPS_ */
/* Demangled: MTKStereoKernelCore::destroyInstance(MTKStereoKernelCore*) */
int _ZN19MTKStereoKernelCore15destroyInstanceEPS_(void);

/* Symbol: total_time_LM */
/* Demangled: total_time_LM */
extern void* total_time_LM;

/* Symbol: _ZN19MTKStereoKernelCore25getDistanceCVec_fromLearnEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_ */
/* Demangled: MTKStereoKernelCore::getDistanceCVec_fromLearn(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
int _ZN19MTKStereoKernelCore25getDistanceCVec_fromLearnEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void);

/* Symbol: _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_10001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT */
/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_10001(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
int _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_10001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore11reverseGridEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCT */
/* Demangled: MTKStereoKernelCore::reverseGrid(float*, float*, STEREO_KERNEL_LENS_INFO_STRUCT*) */
int _ZN19MTKStereoKernelCore11reverseGridEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCT(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _ZN19MTKStereoKernelCore17genWarpParametersEv */
/* Demangled: MTKStereoKernelCore::genWarpParameters() */
int _ZN19MTKStereoKernelCore17genWarpParametersEv(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: _ZN5MTKCc31executeColorCorrectionAlgorithmEv */
/* Demangled: MTKCc::executeColorCorrectionAlgorithm() */
int _ZN5MTKCc31executeColorCorrectionAlgorithmEv(void);

/* Symbol: _ZN19MTKStereoKernelCore14modelSelectionEv */
/* Demangled: MTKStereoKernelCore::modelSelection() */
int _ZN19MTKStereoKernelCore14modelSelectionEv(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _ZN5MTKAC18setConvergenceParaEfj */
/* Demangled: MTKAC::setConvergencePara(float, unsigned int) */
int _ZN5MTKAC18setConvergenceParaEfj(void);

/* Symbol: _ZN19MTKStereoKernelCoreD0Ev */
/* Demangled: MTKStereoKernelCore::~MTKStereoKernelCore() */
int _ZN19MTKStereoKernelCoreD0Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore13procData_FEFMEv */
/* Demangled: MTKStereoKernelCore::procData_FEFM() */
int _ZN19MTKStereoKernelCore13procData_FEFMEv(void);

/* Symbol: _ZN19MTKStereoKernelCore18loadOneLensInfoMTKEj */
/* Demangled: MTKStereoKernelCore::loadOneLensInfoMTK(unsigned int) */
int _ZN19MTKStereoKernelCore18loadOneLensInfoMTKEj(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _Z16FORMAT_RGBtoYV12PhS_jjj */
/* Demangled: FORMAT_RGBtoYV12(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z16FORMAT_RGBtoYV12PhS_jjj(void);

/* Symbol: _Z12verify_crossPfS_S_ */
/* Demangled: verify_cross(float*, float*, float*) */
int _Z12verify_crossPfS_S_(void);

/* Symbol: _Z17eval_max_main_fovfffff */
/* Demangled: eval_max_main_fov(float, float, float, float, float) */
int _Z17eval_max_main_fovfffff(void);

/* Symbol: _Z18verify_intersect_yPfiiiPi */
/* Demangled: verify_intersect_y(float*, int, int, int, int*) */
int _Z18verify_intersect_yPfiiiPi(void);

/* Symbol: _ZN5MTKAC4initEv */
/* Demangled: MTKAC::init() */
int _ZN5MTKAC4initEv(void);

/* Symbol: _ZN19MTKStereoKernelCore21StereoKernelGetResultEPv */
/* Demangled: MTKStereoKernelCore::StereoKernelGetResult(void*) */
int _ZN19MTKStereoKernelCore21StereoKernelGetResultEPv(void);

/* Symbol: _ZN19MTKStereoKernelCore33StereoKernelLoadDefaultParametersEPv */
/* Demangled: MTKStereoKernelCore::StereoKernelLoadDefaultParameters(void*) */
int _ZN19MTKStereoKernelCore33StereoKernelLoadDefaultParametersEPv(void);

/* Symbol: _ZN15AppStereoKernel17StereoKernelResetEv */
/* Demangled: AppStereoKernel::StereoKernelReset() */
int _ZN15AppStereoKernel17StereoKernelResetEv(void);

/* Symbol: _ZN19MTKStereoKernelCore20StereoKernelCoreWarpEv */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreWarp() */
int _ZN19MTKStereoKernelCore20StereoKernelCoreWarpEv(void);

/* Symbol: _ZN19MTKStereoKernelCore11gLevmarInfoE */
/* Demangled: MTKStereoKernelCore::gLevmarInfo */
extern void* _ZN19MTKStereoKernelCore11gLevmarInfoE;

/* Symbol: _ZN7MTKFeFm4initEP22STEREO_FEFM_ENV_STRUCTP19CStereoFeFmTuneInfo */
/* Demangled: MTKFeFm::init(STEREO_FEFM_ENV_STRUCT*, CStereoFeFmTuneInfo*) */
int _ZN7MTKFeFm4initEP22STEREO_FEFM_ENV_STRUCTP19CStereoFeFmTuneInfo(void);

/* Symbol: _ZN5MTKCc12selectPointsEv */
/* Demangled: MTKCc::selectPoints() */
int _ZN5MTKCc12selectPointsEv(void);

/* Symbol: _ZN15MTKStereoKernel16StereoKernelInitEPvS0_ */
/* Demangled: MTKStereoKernel::StereoKernelInit(void*, void*) */
int _ZN15MTKStereoKernel16StereoKernelInitEPvS0_(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _Z17FORMAT_YUYVtoYV12PhS_jj */
/* Demangled: FORMAT_YUYVtoYV12(unsigned char*, unsigned char*, unsigned int, unsigned int) */
int _Z17FORMAT_YUYVtoYV12PhS_jj(void);

/* Symbol: _Z11sw_wpe_warpPhjjS_jjjPPijj */
/* Demangled: sw_wpe_warp(unsigned char*, unsigned int, unsigned int, unsigned char*, unsigned int, unsigned int, unsigned int, int**, unsigned int, unsigned int) */
int _Z11sw_wpe_warpPhjjS_jjjPPijj(void);

/* Symbol: _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_20001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT */
/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_20001(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
int _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_20001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void);

/* Symbol: _Z5usqrtj */
/* Demangled: usqrt(unsigned int) */
int _Z5usqrtj(void);

/* Symbol: _ZN19MTKStereoKernelCore27StereoKernelSaveCalib2NVRAMEPj */
/* Demangled: MTKStereoKernelCore::StereoKernelSaveCalib2NVRAM(unsigned int*) */
int _ZN19MTKStereoKernelCore27StereoKernelSaveCalib2NVRAMEPj(void);

/* Symbol: _ZN19MTKStereoKernelCore11checkRegionEffffff */
/* Demangled: MTKStereoKernelCore::checkRegion(float, float, float, float, float, float) */
int _ZN19MTKStereoKernelCore11checkRegionEffffff(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Z16FORMAT_YUYVtoRGBPhS_jjj */
/* Demangled: FORMAT_YUYVtoRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z16FORMAT_YUYVtoRGBPhS_jjj(void);

/* Symbol: _Z16FORMAT_YV12toRGBPhS_jjjjj */
/* Demangled: FORMAT_YV12toRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _Z16FORMAT_YV12toRGBPhS_jjjjj(void);

/* Symbol: _ZN15AppStereoKernel15destroyInstanceEv */
/* Demangled: AppStereoKernel::destroyInstance() */
int _ZN15AppStereoKernel15destroyInstanceEv(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: _Z7sw_warpPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z7sw_warpPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _ZN15AppStereoKernelD0Ev */
/* Demangled: AppStereoKernel::~AppStereoKernel() */
int _ZN15AppStereoKernelD0Ev(void);

/* Symbol: _ZN15MTKStereoKernel24StereoKernelLoadMetadataEPv */
/* Demangled: MTKStereoKernel::StereoKernelLoadMetadata(void*) */
int _ZN15MTKStereoKernel24StereoKernelLoadMetadataEPv(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZN19MTKStereoKernelCore14loadDEBUG_infoEPi */
/* Demangled: MTKStereoKernelCore::loadDEBUG_info(int*) */
int _ZN19MTKStereoKernelCore14loadDEBUG_infoEPi(void);

/* Symbol: _ZN12GPU_N3D_WARP19CreateShaderProgramEjjjj */
/* Demangled: GPU_N3D_WARP::CreateShaderProgram(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN12GPU_N3D_WARP19CreateShaderProgramEjjjj(void);

/* Symbol: _Z14FORMAT_YV12toYPhS_jjj */
/* Demangled: FORMAT_YV12toY(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z14FORMAT_YV12toYPhS_jjj(void);

/* Symbol: _ZN7MTKFeFm9getResultEP25STEREO_FEFM_RESULT_STRUCT */
/* Demangled: MTKFeFm::getResult(STEREO_FEFM_RESULT_STRUCT*) */
int _ZN7MTKFeFm9getResultEP25STEREO_FEFM_RESULT_STRUCT(void);

/* Symbol: _ZN7MTKFeFm7getHWFMEv */
/* Demangled: MTKFeFm::getHWFM() */
int _ZN7MTKFeFm7getHWFMEv(void);

/* Symbol: _Z16FORMAT_RGBtoYUYVPhS_jjj */
/* Demangled: FORMAT_RGBtoYUYV(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z16FORMAT_RGBtoYUYVPhS_jjj(void);

/* Symbol: _Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPh */
/* Demangled: get_interp_value(STEREO_CORE_WARP_INTERPOLATION_STRUCT*, unsigned char*) */
int _Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPh(void);

/* Symbol: _ZN22StereoKernelGPUContextC2Ev */
/* Demangled: StereoKernelGPUContext::StereoKernelGPUContext() */
int _ZN22StereoKernelGPUContextC2Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore11getLDCCurveEPfS0_S0_fP30STEREO_KERNEL_LENS_INFO_STRUCTjj */
/* Demangled: MTKStereoKernelCore::getLDCCurve(float*, float*, float*, float, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int) */
int _ZN19MTKStereoKernelCore11getLDCCurveEPfS0_S0_fP30STEREO_KERNEL_LENS_INFO_STRUCTjj(void);

/* Symbol: _ZN5MTKCc16colorTransfer_HMEv */
/* Demangled: MTKCc::colorTransfer_HM() */
int _ZN5MTKCc16colorTransfer_HMEv(void);

/* Symbol: _ZN15MTKStereoKernel15destroyInstanceEv */
/* Demangled: MTKStereoKernel::destroyInstance() */
int _ZN15MTKStereoKernel15destroyInstanceEv(void);

/* Symbol: _ZN5MTKCc7setProcEP21STEREO_CC_PROC_STRUCT */
/* Demangled: MTKCc::setProc(STEREO_CC_PROC_STRUCT*) */
int _ZN5MTKCc7setProcEP21STEREO_CC_PROC_STRUCT(void);

/* Symbol: _ZN5MTKCc35getHistogramUsingColorMappingMatrixEjPi */
/* Demangled: MTKCc::getHistogramUsingColorMappingMatrix(unsigned int, int*) */
int _ZN5MTKCc35getHistogramUsingColorMappingMatrixEjPi(void);

/* Symbol: _ZN5MTKCc17setRotationMatrixEv */
/* Demangled: MTKCc::setRotationMatrix() */
int _ZN5MTKCc17setRotationMatrixEv(void);

/* Symbol: _ZN19MTKStereoKernelCore12gAF_dacStartE */
/* Demangled: MTKStereoKernelCore::gAF_dacStart */
extern void* _ZN19MTKStereoKernelCore12gAF_dacStartE;

/* Symbol: _ZN5MTKCc16sw_colorTransferEPhjjj */
/* Demangled: MTKCc::sw_colorTransfer(unsigned char*, unsigned int, unsigned int, unsigned int) */
int _ZN5MTKCc16sw_colorTransferEPhjjj(void);

/* Symbol: _Z24StereoKernelVerificationPhP29STEREO_KERNEL_IMG_INFO_STRUCTP30STEREO_CORE_VERIFY_INFO_STRUCT */
/* Demangled: StereoKernelVerification(unsigned char*, STEREO_KERNEL_IMG_INFO_STRUCT*, STEREO_CORE_VERIFY_INFO_STRUCT*) */
int _Z24StereoKernelVerificationPhP29STEREO_KERNEL_IMG_INFO_STRUCTP30STEREO_CORE_VERIFY_INFO_STRUCT(void);

/* Symbol: _Z4tandf */
/* Demangled: tand(float) */
int _Z4tandf(void);

/* Symbol: _ZN19MTKStereoKernelCore18modeling_fromLearnEv */
/* Demangled: MTKStereoKernelCore::modeling_fromLearn() */
int _ZN19MTKStereoKernelCore18modeling_fromLearnEv(void);

/* Symbol: _ZN12GPU_N3D_WARP13DestroyShaderEv */
/* Demangled: GPU_N3D_WARP::DestroyShader() */
int _ZN12GPU_N3D_WARP13DestroyShaderEv(void);

/* Symbol: _ZN19MTKStereoKernelCore23StereoKernelSetProcInfoEPv */
/* Demangled: MTKStereoKernelCore::StereoKernelSetProcInfo(void*) */
int _ZN19MTKStereoKernelCore23StereoKernelSetProcInfoEPv(void);

/* Symbol: _ZN19MTKStereoKernelCore8dac2distEjP28STEREO_KERNEL_AF_INIT_STRUCT */
/* Demangled: MTKStereoKernelCore::dac2dist(unsigned int, STEREO_KERNEL_AF_INIT_STRUCT*) */
int _ZN19MTKStereoKernelCore8dac2distEjP28STEREO_KERNEL_AF_INIT_STRUCT(void);

/* Symbol: _ZN7MTKFeFm13getOUTER_SWFMEv */
/* Demangled: MTKFeFm::getOUTER_SWFM() */
int _ZN7MTKFeFm13getOUTER_SWFMEv(void);

/* Symbol: _ZN7MTKFeFm7getHWFEEj */
/* Demangled: MTKFeFm::getHWFE(unsigned int) */
int _ZN7MTKFeFm7getHWFEEj(void);

/* Symbol: _ZN5MTKCc5resetEPA256_iPi */
/* Demangled: MTKCc::reset(int (*) [256], int*) */
int _ZN5MTKCc5resetEPA256_iPi(void);

/* Symbol: _ZN15MTKStereoKernel23StereoKernelFeatureCtrlEjPvS0_ */
/* Demangled: MTKStereoKernel::StereoKernelFeatureCtrl(unsigned int, void*, void*) */
int _ZN15MTKStereoKernel23StereoKernelFeatureCtrlEjPvS0_(void);

/* Symbol: _Z21GeometryLMCostFunc_AFPfS_ */
/* Demangled: GeometryLMCostFunc_AF(float*, float*) */
int _Z21GeometryLMCostFunc_AFPfS_(void);

/* Symbol: _ZN19MTKStereoKernelCore11undistortFEEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_ */
/* Demangled: MTKStereoKernelCore::undistortFE(float*, float*, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int, unsigned int, float*, float*) */
int _ZN19MTKStereoKernelCore11undistortFEEPfS0_P30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_(void);

/* Symbol: _ZN19MTKStereoKernelCore25StereoKernelWriteDebugLogEv */
/* Demangled: MTKStereoKernelCore::StereoKernelWriteDebugLog() */
int _ZN19MTKStereoKernelCore25StereoKernelWriteDebugLogEv(void);

/* Symbol: _ZN5MTKAC4mainEjiPfj */
/* Demangled: MTKAC::main(unsigned int, int, float*, unsigned int) */
int _ZN5MTKAC4mainEjiPfj(void);

/* Symbol: _ZN5MTKCc28prepareDataPolynomialFittingEj */
/* Demangled: MTKCc::prepareDataPolynomialFitting(unsigned int) */
int _ZN5MTKCc28prepareDataPolynomialFittingEj(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _ZN17MTK_EEPROM_PARSER20parse3rdParty_EEPROMEPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT */
/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
int _ZN17MTK_EEPROM_PARSER20parse3rdParty_EEPROMEPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void);

/* Symbol: _ZN5MTKCc18getColorMappingMtxEv */
/* Demangled: MTKCc::getColorMappingMtx() */
int _ZN5MTKCc18getColorMappingMtxEv(void);

/* Symbol: _Z18sw_warp_yv12_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp_yv12_noLDC(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z18sw_warp_yv12_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _ZN19MTKStereoKernelCore11getInstanceEv */
/* Demangled: MTKStereoKernelCore::getInstance() */
int _ZN19MTKStereoKernelCore11getInstanceEv(void);

/* Symbol: _ZN5MTKCc22multiPolynomialFittingEj */
/* Demangled: MTKCc::multiPolynomialFitting(unsigned int) */
int _ZN5MTKCc22multiPolynomialFittingEj(void);

/* Symbol: _ZN5MTKCc17colorTransfer_DMPEj */
/* Demangled: MTKCc::colorTransfer_DMP(unsigned int) */
int _ZN5MTKCc17colorTransfer_DMPEj(void);

/* Symbol: _ZN19MTKStereoKernelCore17modeling_fromSPECEv */
/* Demangled: MTKStereoKernelCore::modeling_fromSPEC() */
int _ZN19MTKStereoKernelCore17modeling_fromSPECEv(void);

/* Symbol: _ZN19MTKStereoKernelCore28reconstructCurve_CubicSplineEPfjS0_jf */
/* Demangled: MTKStereoKernelCore::reconstructCurve_CubicSpline(float*, unsigned int, float*, unsigned int, float) */
int _ZN19MTKStereoKernelCore28reconstructCurve_CubicSplineEPfjS0_jf(void);

/* Symbol: _Z7theta2RPfS_ */
/* Demangled: theta2R(float*, float*) */
int _Z7theta2RPfS_(void);

/* Symbol: _ZN7MTKFeFm7getSWFMEv */
/* Demangled: MTKFeFm::getSWFM() */
int _ZN7MTKFeFm7getSWFMEv(void);

/* Symbol: _ZN15AppStereoKernel11getInstanceEv */
/* Demangled: AppStereoKernel::getInstance() */
int _ZN15AppStereoKernel11getInstanceEv(void);

/* Symbol: _ZN19MTKStereoKernelCore20UpdateScaleOptResultEv */
/* Demangled: MTKStereoKernelCore::UpdateScaleOptResult() */
int _ZN19MTKStereoKernelCore20UpdateScaleOptResultEv(void);

/* Symbol: _Z15verify_min_distPii */
/* Demangled: verify_min_dist(int*, int) */
int _Z15verify_min_distPii(void);

/* Symbol: _ZN22StereoKernelGPUContext9CreateEGLEii */
/* Demangled: StereoKernelGPUContext::CreateEGL(int, int) */
int _ZN22StereoKernelGPUContext9CreateEGLEii(void);

/* Symbol: _ZN5MTKCc18colorTransfer_DMMPEj */
/* Demangled: MTKCc::colorTransfer_DMMP(unsigned int) */
int _ZN5MTKCc18colorTransfer_DMMPEj(void);

/* Symbol: _ZN22StereoKernelGPUContext12TestEGLErrorEPc */
/* Demangled: StereoKernelGPUContext::TestEGLError(char*) */
int _ZN22StereoKernelGPUContext12TestEGLErrorEPc(void);

/* Symbol: _ZN19MTKStereoKernelCore15reGenerateCurveEPfS0_jf */
/* Demangled: MTKStereoKernelCore::reGenerateCurve(float*, float*, unsigned int, float) */
int _ZN19MTKStereoKernelCore15reGenerateCurveEPfS0_jf(void);

/* Symbol: _ZN19MTKStereoKernelCore15undistortFEGridEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_ */
/* Demangled: MTKStereoKernelCore::undistortFEGrid(float*, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int, unsigned int, float*, float*) */
int _ZN19MTKStereoKernelCore15undistortFEGridEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_(void);

/* Symbol: _ZN22StereoKernelGPUContextC1Ev */
/* Demangled: StereoKernelGPUContext::StereoKernelGPUContext() */
int _ZN22StereoKernelGPUContextC1Ev(void);

/* Symbol: _ZN5MTKCc4initEP20STEREO_CC_ENV_STRUCTP17CStereoCcTuneInfo */
/* Demangled: MTKCc::init(STEREO_CC_ENV_STRUCT*, CStereoCcTuneInfo*) */
int _ZN5MTKCc4initEP20STEREO_CC_ENV_STRUCTP17CStereoCcTuneInfo(void);

/* Symbol: _Z11sw_warp_rgbPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp_rgb(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z11sw_warp_rgbPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _Z16FORMAT_YV12toRGBPhS_jjj */
/* Demangled: FORMAT_YV12toRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z16FORMAT_YV12toRGBPhS_jjj(void);

/* Symbol: _Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT */
/* Demangled: sw_warp_y_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT(void);

/* Symbol: _ZN7MTKFeFm16setWorkingBufferEPh */
/* Demangled: MTKFeFm::setWorkingBuffer(unsigned char*) */
int _ZN7MTKFeFm16setWorkingBufferEPh(void);

/* Symbol: _ZN19MTKStereoKernelCore24StereoKernelLoadLensInfoEPf */
/* Demangled: MTKStereoKernelCore::StereoKernelLoadLensInfo(float*) */
int _ZN19MTKStereoKernelCore24StereoKernelLoadLensInfoEPf(void);

/* Symbol: _ZN19MTKStereoKernelCore20parseLensInfo_EEPROMEPjjP30STEREO_KERNEL_LENS_INFO_STRUCTS2_ */
/* Demangled: MTKStereoKernelCore::parseLensInfo_EEPROM(unsigned int*, unsigned int, STEREO_KERNEL_LENS_INFO_STRUCT*, STEREO_KERNEL_LENS_INFO_STRUCT*) */
int _ZN19MTKStereoKernelCore20parseLensInfo_EEPROMEPjjP30STEREO_KERNEL_LENS_INFO_STRUCTS2_(void);

/* Symbol: _ZN5MTKAC17StereoCoreACResetEv */
/* Demangled: MTKAC::StereoCoreACReset() */
int _ZN5MTKAC17StereoCoreACResetEv(void);

/* Symbol: _ZN19MTKStereoKernelCore8getBoundEPfS0_iii */
/* Demangled: MTKStereoKernelCore::getBound(float*, float*, int, int, int) */
int _ZN19MTKStereoKernelCore8getBoundEPfS0_iii(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _ZN12GPU_N3D_WARP15DestroyEGLImageEP19TEXTURE_PARA_STRUCTjb */
/* Demangled: GPU_N3D_WARP::DestroyEGLImage(TEXTURE_PARA_STRUCT*, unsigned int, bool) */
int _ZN12GPU_N3D_WARP15DestroyEGLImageEP19TEXTURE_PARA_STRUCTjb(void);

/* Symbol: _ZN19MTKStereoKernelCore13LDC_inv_curveEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTPfS2_ */
/* Demangled: MTKStereoKernelCore::LDC_inv_curve(STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, float*, float*) */
int _ZN19MTKStereoKernelCore13LDC_inv_curveEP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTPfS2_(void);

/* Symbol: _Z24get_grid_from_hmtx_noLDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCT */
/* Demangled: get_grid_from_hmtx_noLDC(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
int _Z24get_grid_from_hmtx_noLDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_jS0_j */
/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC2(float*, float*, float*, float*, unsigned int, float*, unsigned int) */
int _ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_jS0_j(void);

/* Symbol: _Z24sw_warp_yv12_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp_yv12_fixed_point(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z24sw_warp_yv12_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _Z20eval_boundary_shrinkPjffjjf */
/* Demangled: eval_boundary_shrink(unsigned int*, float, float, unsigned int, unsigned int, float) */
int _Z20eval_boundary_shrinkPjffjjf(void);

/* Symbol: _ZN12GPU_N3D_WARPC1Ev */
/* Demangled: GPU_N3D_WARP::GPU_N3D_WARP() */
int _ZN12GPU_N3D_WARPC1Ev(void);

/* Symbol: _ZN15MTKStereoKernel14createInstanceEv */
/* Demangled: MTKStereoKernel::createInstance() */
int _ZN15MTKStereoKernel14createInstanceEv(void);

/* Symbol: _ZN7MTKFeFm7setProcEP23STEREO_FEFM_PROC_STRUCT */
/* Demangled: MTKFeFm::setProc(STEREO_FEFM_PROC_STRUCT*) */
int _ZN7MTKFeFm7setProcEP23STEREO_FEFM_PROC_STRUCT(void);

/* Symbol: _ZN7MTKFeFm13getOUTER_SWFEEj */
/* Demangled: MTKFeFm::getOUTER_SWFE(unsigned int) */
int _ZN7MTKFeFm13getOUTER_SWFEEj(void);

/* Symbol: _ZN15MTKStereoKernelD2Ev */
/* Demangled: MTKStereoKernel::~MTKStereoKernel() */
int _ZN15MTKStereoKernelD2Ev(void);

/* Symbol: _Z13FORMAT_YtoRGBPhS_jjj */
/* Demangled: FORMAT_YtoRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z13FORMAT_YtoRGBPhS_jjj(void);

/* Symbol: _ZN15MTKStereoKernel16StereoKernelMainEj */
/* Demangled: MTKStereoKernel::StereoKernelMain(unsigned int) */
int _ZN15MTKStereoKernel16StereoKernelMainEj(void);

/* Symbol: _ZN5MTKCc17polynomialFittingEj */
/* Demangled: MTKCc::polynomialFitting(unsigned int) */
int _ZN5MTKCc17polynomialFittingEj(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN19MTKStereoKernelCore28StereoKernelCoreDebugControlEPv */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreDebugControl(void*) */
int _ZN19MTKStereoKernelCore28StereoKernelCoreDebugControlEPv(void);

/* Symbol: _ZN19MTKStereoKernelCore31GetWarpingMatrix_forImageOutputEPfS0_fff */
/* Demangled: MTKStereoKernelCore::GetWarpingMatrix_forImageOutput(float*, float*, float, float, float) */
int _ZN19MTKStereoKernelCore31GetWarpingMatrix_forImageOutputEPfS0_fff(void);

/* Symbol: _ZN19MTKStereoKernelCore15writeDEBUG_infoEv */
/* Demangled: MTKStereoKernelCore::writeDEBUG_info() */
int _ZN19MTKStereoKernelCore15writeDEBUG_infoEv(void);

/* Symbol: _ZN19MTKStereoKernelCore20GeometryOptimizationEv */
/* Demangled: MTKStereoKernelCore::GeometryOptimization() */
int _ZN19MTKStereoKernelCore20GeometryOptimizationEv(void);

/* Symbol: _Z16mtxMul_NonMallocPPfS0_S0_iii */
/* Demangled: mtxMul_NonMalloc(float**, float**, float**, int, int, int) */
int _Z16mtxMul_NonMallocPPfS0_S0_iii(void);

/* Symbol: _ZN5MTKCc4mainEj */
/* Demangled: MTKCc::main(unsigned int) */
int _ZN5MTKCc4mainEj(void);

/* Symbol: _Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp_y_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z20sw_warp_y_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _Z12getWarpCoordPfffPPijj */
/* Demangled: getWarpCoord(float*, float, float, int**, unsigned int, unsigned int) */
int _Z12getWarpCoordPfffPPijj(void);

/* Symbol: _Z9free2DMtxPPf */
/* Demangled: free2DMtx(float**) */
int _Z9free2DMtxPPf(void);

/* Symbol: _ZN19MTKStereoKernelCore27generateRadialCurve3rdPartyEv */
/* Demangled: MTKStereoKernelCore::generateRadialCurve3rdParty() */
int _ZN19MTKStereoKernelCore27generateRadialCurve3rdPartyEv(void);

/* Symbol: _Z15get_interp_coefP37STEREO_CORE_WARP_INTERPOLATION_STRUCTffjj */
/* Demangled: get_interp_coef(STEREO_CORE_WARP_INTERPOLATION_STRUCT*, float, float, unsigned int, unsigned int) */
int _Z15get_interp_coefP37STEREO_CORE_WARP_INTERPOLATION_STRUCTffjj(void);

/* Symbol: _ZN19MTKStereoKernelCore26StereoKernelGetEEPROMStartEPj */
/* Demangled: MTKStereoKernelCore::StereoKernelGetEEPROMStart(unsigned int*) */
int _ZN19MTKStereoKernelCore26StereoKernelGetEEPROMStartEPj(void);

/* Symbol: _ZN5MTKCc16setWorkingBufferEPh */
/* Demangled: MTKCc::setWorkingBuffer(unsigned char*) */
int _ZN5MTKCc16setWorkingBufferEPh(void);

/* Symbol: _ZN5MTKCcC1Ev */
/* Demangled: MTKCc::MTKCc() */
int _ZN5MTKCcC1Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore11undistortFEEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_ */
/* Demangled: MTKStereoKernelCore::undistortFE(float*, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int, unsigned int, float*, float*) */
int _ZN19MTKStereoKernelCore11undistortFEEPfP30STEREO_KERNEL_LENS_INFO_STRUCTjjjS0_S0_(void);

/* Symbol: _ZN19MTKStereoKernelCore18UpdateGeoOptResultEv */
/* Demangled: MTKStereoKernelCore::UpdateGeoOptResult() */
int _ZN19MTKStereoKernelCore18UpdateGeoOptResultEv(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN15MTKStereoKernel17StereoKernelResetEv */
/* Demangled: MTKStereoKernel::StereoKernelReset() */
int _ZN15MTKStereoKernel17StereoKernelResetEv(void);

/* Symbol: _ZN19MTKStereoKernelCore18GetHmtxFromP_ScaleEPfS0_S0_S0_j */
/* Demangled: MTKStereoKernelCore::GetHmtxFromP_Scale(float*, float*, float*, float*, unsigned int) */
int _ZN19MTKStereoKernelCore18GetHmtxFromP_ScaleEPfS0_S0_S0_j(void);

/* Symbol: _Z26sw_warp_y_semi_fixed_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT */
/* Demangled: sw_warp_y_semi_fixed_noLDC(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
int _Z26sw_warp_y_semi_fixed_noLDCPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore25getDistanceCVec_fromCalibEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_ */
/* Demangled: MTKStereoKernelCore::getDistanceCVec_fromCalib(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
int _ZN19MTKStereoKernelCore25getDistanceCVec_fromCalibEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void);

/* Symbol: _ZN19MTKStereoKernelCore4dumpEP7__sFILEPc */
/* Demangled: MTKStereoKernelCore::dump(__sFILE*, char*) */
int _ZN19MTKStereoKernelCore4dumpEP7__sFILEPc(void);

/* Symbol: _ZN7MTKFeFm7calSWFEEj */
/* Demangled: MTKFeFm::calSWFE(unsigned int) */
int _ZN7MTKFeFm7calSWFEEj(void);

/* Symbol: _Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT */
/* Demangled: get_grid_from_hmtx_LDC(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT(void);

/* Symbol: _Z18FORMAT_YUV422toRGBPhS_jjj */
/* Demangled: FORMAT_YUV422toRGB(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z18FORMAT_YUV422toRGBPhS_jjj(void);

/* Symbol: _Z16mtxInv_NonMallocPPfS0_S0_i */
/* Demangled: mtxInv_NonMalloc(float**, float**, float**, int) */
int _Z16mtxInv_NonMallocPPfS0_S0_i(void);

/* Symbol: _ZN19MTKStereoKernelCore23loadOneLensInfo3rdPartyEj */
/* Demangled: MTKStereoKernelCore::loadOneLensInfo3rdParty(unsigned int) */
int _ZN19MTKStereoKernelCore23loadOneLensInfo3rdPartyEj(void);

/* Symbol: _ZN5MTKAC11resetResultEv */
/* Demangled: MTKAC::resetResult() */
int _ZN5MTKAC11resetResultEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN19MTKStereoKernelCore24calibData_coordUndistortEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTf */
/* Demangled: MTKStereoKernelCore::calibData_coordUndistort(STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCT*, float) */
int _ZN19MTKStereoKernelCore24calibData_coordUndistortEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTf(void);

/* Symbol: _ZN19MTKStereoKernelCoreD2Ev */
/* Demangled: MTKStereoKernelCore::~MTKStereoKernelCore() */
int _ZN19MTKStereoKernelCoreD2Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore13generateFixPtEv */
/* Demangled: MTKStereoKernelCore::generateFixPt() */
int _ZN19MTKStereoKernelCore13generateFixPtEv(void);

/* Symbol: _ZN19MTKStereoKernelCore10gLM_dacRefE */
/* Demangled: MTKStereoKernelCore::gLM_dacRef */
extern void* _ZN19MTKStereoKernelCore10gLM_dacRefE;

/* Symbol: _ZN12GPU_N3D_WARP14CreateEGLImageEP19TEXTURE_PARA_STRUCTPvjb */
/* Demangled: GPU_N3D_WARP::CreateEGLImage(TEXTURE_PARA_STRUCT*, void*, unsigned int, bool) */
int _ZN12GPU_N3D_WARP14CreateEGLImageEP19TEXTURE_PARA_STRUCTPvjb(void);

/* Symbol: _Z27sw_warp_y_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT */
/* Demangled: sw_warp_y_fixed_point_shift(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
int _Z27sw_warp_y_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore24calibData_coordRemappingEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT */
/* Demangled: MTKStereoKernelCore::calibData_coordRemapping(STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCT*, STEREO_CORE_REMAP_RESULT_STRUCT*) */
int _ZN19MTKStereoKernelCore24calibData_coordRemappingEP37STEREO_CORE_CALIB_DATA_PT_DUAL_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT(void);

/* Symbol: _ZN5MTKCc16colorTransfer_DMEv */
/* Demangled: MTKCc::colorTransfer_DM() */
int _ZN5MTKCc16colorTransfer_DMEv(void);

/* Symbol: _ZN19MTKStereoKernelCore20StereoKernelCoreInitEPvS0_ */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreInit(void*, void*) */
int _ZN19MTKStereoKernelCore20StereoKernelCoreInitEPvS0_(void);

/* Symbol: _Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_ */
/* Demangled: get_grid_from_hmtx_LDC(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z22get_grid_from_hmtx_LDCPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_(void);

/* Symbol: _Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp_yv12_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _ZN15AppStereoKernelC1Ev */
/* Demangled: AppStereoKernel::AppStereoKernel() */
int _ZN15AppStereoKernelC1Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore12loadMetadataEP7__sFILE */
/* Demangled: MTKStereoKernelCore::loadMetadata(__sFILE*) */
int _ZN19MTKStereoKernelCore12loadMetadataEP7__sFILE(void);

/* Symbol: _ZN19MTKStereoKernelCore25getDistanceCVec_fromFixPtEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_ */
/* Demangled: MTKStereoKernelCore::getDistanceCVec_fromFixPt(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
int _ZN19MTKStereoKernelCore25getDistanceCVec_fromFixPtEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void);

/* Symbol: _ZN15AppStereoKernelD2Ev */
/* Demangled: AppStereoKernel::~AppStereoKernel() */
int _ZN15AppStereoKernelD2Ev(void);

/* Symbol: _ZN7MTKFeFm14getHWFE_onlyPtEj */
/* Demangled: MTKFeFm::getHWFE_onlyPt(unsigned int) */
int _ZN7MTKFeFm14getHWFE_onlyPtEj(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN5MTKCc6updateEjj */
/* Demangled: MTKCc::update(unsigned int, unsigned int) */
int _ZN5MTKCc6updateEjj(void);

/* Symbol: _ZN19MTKStereoKernelCore24calibData_getOptimalParaEP29STEREO_CORE_CALIB_DATA_STRUCTPf */
/* Demangled: MTKStereoKernelCore::calibData_getOptimalPara(STEREO_CORE_CALIB_DATA_STRUCT*, float*) */
int _ZN19MTKStereoKernelCore24calibData_getOptimalParaEP29STEREO_CORE_CALIB_DATA_STRUCTPf(void);

/* Symbol: _ZN19MTKStereoKernelCore21StereoKernelCoreResetEv */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreReset() */
int _ZN19MTKStereoKernelCore21StereoKernelCoreResetEv(void);

/* Symbol: _Z5atandf */
/* Demangled: atand(float) */
int _Z5atandf(void);

/* Symbol: _ZN19MTKStereoKernelCoreC2Ev */
/* Demangled: MTKStereoKernelCore::MTKStereoKernelCore() */
int _ZN19MTKStereoKernelCoreC2Ev(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _ZN5MTKAC22updateConvergenceModelEj */
/* Demangled: MTKAC::updateConvergenceModel(unsigned int) */
int _ZN5MTKAC22updateConvergenceModelEj(void);

/* Symbol: _ZN19MTKStereoKernelCore15loadOneLensInfoEP30STEREO_KERNEL_LENS_INFO_STRUCTPf */
/* Demangled: MTKStereoKernelCore::loadOneLensInfo(STEREO_KERNEL_LENS_INFO_STRUCT*, float*) */
int _ZN19MTKStereoKernelCore15loadOneLensInfoEP30STEREO_KERNEL_LENS_INFO_STRUCTPf(void);

/* Symbol: _ZN19MTKStereoKernelCore20StereoKernelCoreMainEj */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreMain(unsigned int) */
int _ZN19MTKStereoKernelCore20StereoKernelCoreMainEj(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN17MTK_EEPROM_PARSER22parse3rdParty_EEPROM_1EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT */
/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_1(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
int _ZN17MTK_EEPROM_PARSER22parse3rdParty_EEPROM_1EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void);

/* Symbol: _ZN5MTKCc15updateByMappingEjj */
/* Demangled: MTKCc::updateByMapping(unsigned int, unsigned int) */
int _ZN5MTKCc15updateByMappingEjj(void);

/* Symbol: _ZN5MTKCc9getResultEP23STEREO_CC_RESULT_STRUCT */
/* Demangled: MTKCc::getResult(STEREO_CC_RESULT_STRUCT*) */
int _ZN5MTKCc9getResultEP23STEREO_CC_RESULT_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore11modelRefineEv */
/* Demangled: MTKStereoKernelCore::modelRefine() */
int _ZN19MTKStereoKernelCore11modelRefineEv(void);

/* Symbol: _ZN5MTKCc17colorTransfer_HMPEj */
/* Demangled: MTKCc::colorTransfer_HMP(unsigned int) */
int _ZN5MTKCc17colorTransfer_HMPEj(void);

/* Symbol: _ZN19MTKStereoKernelCore14procData_CalibEv */
/* Demangled: MTKStereoKernelCore::procData_Calib() */
int _ZN19MTKStereoKernelCore14procData_CalibEv(void);

/* Symbol: _ZN5MTKCc18getSimilarityScoreEPiS0_Pf */
/* Demangled: MTKCc::getSimilarityScore(int*, int*, float*) */
int _ZN5MTKCc18getSimilarityScoreEPiS0_Pf(void);

/* Symbol: _ZN19MTKStereoKernelCore17genAnalysisResultEv */
/* Demangled: MTKStereoKernelCore::genAnalysisResult() */
int _ZN19MTKStereoKernelCore17genAnalysisResultEv(void);

/* Symbol: _Z19gl_LoadShaderStringPjPKcj */
/* Demangled: gl_LoadShaderString(unsigned int*, char const*, unsigned int) */
int _Z19gl_LoadShaderStringPjPKcj(void);

/* Symbol: _Z18verify_intersect_xPfiiiPi */
/* Demangled: verify_intersect_x(float*, int, int, int, int*) */
int _Z18verify_intersect_xPfiiiPi(void);

/* Symbol: _Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPi */
/* Demangled: get_interp_value(STEREO_CORE_WARP_INTERPOLATION_STRUCT*, int*) */
int _Z16get_interp_valueP37STEREO_CORE_WARP_INTERPOLATION_STRUCTPi(void);

/* Symbol: _ZN12GPU_N3D_WARPC2Ev */
/* Demangled: GPU_N3D_WARP::GPU_N3D_WARP() */
int _ZN12GPU_N3D_WARPC2Ev(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN19MTKStereoKernelCore15getDistanceCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_ */
/* Demangled: MTKStereoKernelCore::getDistanceCVec(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*, float*) */
int _ZN19MTKStereoKernelCore15getDistanceCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPfS2_(void);

/* Symbol: _Z13linearRegressfPfS_S_jRfS0_ */
/* Demangled: linearRegress(float, float*, float*, float*, unsigned int, float&, float&) */
int _Z13linearRegressfPfS_S_jRfS0_(void);

/* Symbol: _ZN7MTKFeFm20getOUTER_SWFE_onlyPtEj */
/* Demangled: MTKFeFm::getOUTER_SWFE_onlyPt(unsigned int) */
int _ZN7MTKFeFm20getOUTER_SWFE_onlyPtEj(void);

/* Symbol: _ZN19MTKStereoKernelCore17getEEPROMData_3rdEPj */
/* Demangled: MTKStereoKernelCore::getEEPROMData_3rd(unsigned int*) */
int _ZN19MTKStereoKernelCore17getEEPROMData_3rdEPj(void);

/* Symbol: _ZN7MTKFeFmC1Ev */
/* Demangled: MTKFeFm::MTKFeFm() */
int _ZN7MTKFeFmC1Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore28CoordinateRemapWarpingMatrixEPf */
/* Demangled: MTKStereoKernelCore::CoordinateRemapWarpingMatrix(float*) */
int _ZN19MTKStereoKernelCore28CoordinateRemapWarpingMatrixEPf(void);

/* Symbol: _ZN5MTKCc5resetEPA10_f */
/* Demangled: MTKCc::reset(float (*) [10]) */
int _ZN5MTKCc5resetEPA10_f(void);

/* Symbol: _ZN12GPU_N3D_WARP15dump_gpu_bufferEPvPcf */
/* Demangled: GPU_N3D_WARP::dump_gpu_buffer(void*, char*, float) */
int _ZN12GPU_N3D_WARP15dump_gpu_bufferEPvPcf(void);

/* Symbol: _ZN19MTKStereoKernelCore12getRectErrorEPfS0_S0_S0_j */
/* Demangled: MTKStereoKernelCore::getRectError(float*, float*, float*, float*, unsigned int) */
int _ZN19MTKStereoKernelCore12getRectErrorEPfS0_S0_S0_j(void);

/* Symbol: _ZN19MTKStereoKernelCore18updateHmtxWithCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPf */
/* Demangled: MTKStereoKernelCore::updateHmtxWithCVec(STEREO_CORE_GEOMETRIC_OPT_STRUCT*, float*) */
int _ZN19MTKStereoKernelCore18updateHmtxWithCVecEP32STEREO_CORE_GEOMETRIC_OPT_STRUCTPf(void);

/* Symbol: _ZN19MTKStereoKernelCore13inverse_curveEPfS0_j */
/* Demangled: MTKStereoKernelCore::inverse_curve(float*, float*, unsigned int) */
int _ZN19MTKStereoKernelCore13inverse_curveEPfS0_j(void);

/* Symbol: _ZN19MTKStereoKernelCore10gLM_optDirE */
/* Demangled: MTKStereoKernelCore::gLM_optDir */
extern void* _ZN19MTKStereoKernelCore10gLM_optDirE;

/* Symbol: _Z11verify_projiiPfS_ */
/* Demangled: verify_proj(int, int, float*, float*) */
int _Z11verify_projiiPfS_(void);

/* Symbol: _ZN5MTKCc22colorTransfer_SGSC_RGBEv */
/* Demangled: MTKCc::colorTransfer_SGSC_RGB() */
int _ZN5MTKCc22colorTransfer_SGSC_RGBEv(void);

/* Symbol: _Z18get_grid_from_hmtxPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_ */
/* Demangled: get_grid_from_hmtx(int**, unsigned int, unsigned int, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z18get_grid_from_hmtxPPijjPfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS5_(void);

/* Symbol: _ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_S0_S0_ */
/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC(float*, float*, float*, float*, float*, float*) */
int _ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_S0_S0_(void);

/* Symbol: _Z19FORMAT_YUYVtoYUV420PhS_jj */
/* Demangled: FORMAT_YUYVtoYUV420(unsigned char*, unsigned char*, unsigned int, unsigned int) */
int _Z19FORMAT_YUYVtoYUV420PhS_jj(void);

/* Symbol: _ZN7MTKFeFm4mainEv */
/* Demangled: MTKFeFm::main() */
int _ZN7MTKFeFm4mainEv(void);

/* Symbol: _ZN19MTKStereoKernelCore22StereoKernelCoreRunGPUEP22GPU_BUFFER_PARA_STRUCTii */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreRunGPU(GPU_BUFFER_PARA_STRUCT*, int, int) */
int _ZN19MTKStereoKernelCore22StereoKernelCoreRunGPUEP22GPU_BUFFER_PARA_STRUCTii(void);

/* Symbol: _Z24GeometryLMCostFunc_SCALEPfS_ */
/* Demangled: GeometryLMCostFunc_SCALE(float*, float*) */
int _Z24GeometryLMCostFunc_SCALEPfS_(void);

/* Symbol: _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_30001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT */
/* Demangled: MTK_EEPROM_PARSER::parse3rdParty_EEPROM_30001(unsigned int*, STEREO_KERNEL_3RDPARTY_INFO_STRUCT&) */
int _ZN17MTK_EEPROM_PARSER26parse3rdParty_EEPROM_30001EPjR34STEREO_KERNEL_3RDPARTY_INFO_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore10getLDCGridEPfS0_S0_P30STEREO_KERNEL_LENS_INFO_STRUCT */
/* Demangled: MTKStereoKernelCore::getLDCGrid(float*, float*, float*, STEREO_KERNEL_LENS_INFO_STRUCT*) */
int _ZN19MTKStereoKernelCore10getLDCGridEPfS0_S0_P30STEREO_KERNEL_LENS_INFO_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore16resetLearnedDataEv */
/* Demangled: MTKStereoKernelCore::resetLearnedData() */
int _ZN19MTKStereoKernelCore16resetLearnedDataEv(void);

/* Symbol: _ZN19MTKStereoKernelCore18preCalculateRadiusEP30STEREO_KERNEL_LENS_INFO_STRUCTjj */
/* Demangled: MTKStereoKernelCore::preCalculateRadius(STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int) */
int _ZN19MTKStereoKernelCore18preCalculateRadiusEP30STEREO_KERNEL_LENS_INFO_STRUCTjj(void);

/* Symbol: _ZTV19MTKStereoKernelCore */
/* Demangled: vtable for MTKStereoKernelCore */
extern void* _ZTV19MTKStereoKernelCore;

/* Symbol: _ZN19MTKStereoKernelCore28StereoKernelCoreSetLogBufferEPj */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreSetLogBuffer(unsigned int*) */
int _ZN19MTKStereoKernelCore28StereoKernelCoreSetLogBufferEPj(void);

/* Symbol: _ZN5MTKCcC2Ev */
/* Demangled: MTKCc::MTKCc() */
int _ZN5MTKCcC2Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore13getEEPROMDataEPj */
/* Demangled: MTKStereoKernelCore::getEEPROMData(unsigned int*) */
int _ZN19MTKStereoKernelCore13getEEPROMDataEPj(void);

/* Symbol: _ZN19MTKStereoKernelCore18modeling_fromCalibEv */
/* Demangled: MTKStereoKernelCore::modeling_fromCalib() */
int _ZN19MTKStereoKernelCore18modeling_fromCalibEv(void);

/* Symbol: _ZN19MTKStereoKernelCore8dist2dacEfP28STEREO_KERNEL_AF_INIT_STRUCT */
/* Demangled: MTKStereoKernelCore::dist2dac(float, STEREO_KERNEL_AF_INIT_STRUCT*) */
int _ZN19MTKStereoKernelCore8dist2dacEfP28STEREO_KERNEL_AF_INIT_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore25StereoKernelCoreModelInitEv */
/* Demangled: MTKStereoKernelCore::StereoKernelCoreModelInit() */
int _ZN19MTKStereoKernelCore25StereoKernelCoreModelInitEv(void);

/* Symbol: _ZN19MTKStereoKernelCore15GetHmtxFromP_AFEPfS0_S0_S0_j */
/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF(float*, float*, float*, float*, unsigned int) */
int _ZN19MTKStereoKernelCore15GetHmtxFromP_AFEPfS0_S0_S0_j(void);

/* Symbol: _ZN15MTKStereoKernelD0Ev */
/* Demangled: MTKStereoKernel::~MTKStereoKernel() */
int _ZN15MTKStereoKernelD0Ev(void);

/* Symbol: _ZN19MTKStereoKernelCore17ScaleOptimizationEv */
/* Demangled: MTKStereoKernelCore::ScaleOptimization() */
int _ZN19MTKStereoKernelCore17ScaleOptimizationEv(void);

/* Symbol: _ZN15AppStereoKernelC2Ev */
/* Demangled: AppStereoKernel::AppStereoKernel() */
int _ZN15AppStereoKernelC2Ev(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: _ZN5MTKCc11resetResultEP23STEREO_CC_RESULT_STRUCT */
/* Demangled: MTKCc::resetResult(STEREO_CC_RESULT_STRUCT*) */
int _ZN5MTKCc11resetResultEP23STEREO_CC_RESULT_STRUCT(void);

/* Symbol: _ZN5MTKAC20updateACHistoryArrayEPi */
/* Demangled: MTKAC::updateACHistoryArray(int*) */
int _ZN5MTKAC20updateACHistoryArrayEPi(void);

/* Symbol: _ZN5MTKCc6backUpEj */
/* Demangled: MTKCc::backUp(unsigned int) */
int _ZN5MTKCc6backUpEj(void);

/* Symbol: _ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_j */
/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC(float*, float*, float*, float*, unsigned int) */
int _ZN19MTKStereoKernelCore18GetHmtxFromP_AF_ACEPfS0_S0_S0_j(void);

/* Symbol: _ZN19MTKStereoKernelCore11getLDCCurveEPffP30STEREO_KERNEL_LENS_INFO_STRUCTjj */
/* Demangled: MTKStereoKernelCore::getLDCCurve(float*, float, STEREO_KERNEL_LENS_INFO_STRUCT*, unsigned int, unsigned int) */
int _ZN19MTKStereoKernelCore11getLDCCurveEPffP30STEREO_KERNEL_LENS_INFO_STRUCTjj(void);

/* Symbol: _ZN15AppStereoKernel24StereoKernelLoadMetadataEPv */
/* Demangled: AppStereoKernel::StereoKernelLoadMetadata(void*) */
int _ZN15AppStereoKernel24StereoKernelLoadMetadataEPv(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: _Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT */
/* Demangled: sw_warp_yv12_semi_fixed(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z23sw_warp_yv12_semi_fixedPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCT(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _Z14FORMAT_RGBAtoYPhS_jjj */
/* Demangled: FORMAT_RGBAtoY(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int) */
int _Z14FORMAT_RGBAtoYPhS_jjj(void);

/* Symbol: _Z24coreMath_utilLevmarBcDifP17LEVMAR_CAL_STRUCTi */
/* Demangled: coreMath_utilLevmarBcDif(LEVMAR_CAL_STRUCT*, int) */
int _Z24coreMath_utilLevmarBcDifP17LEVMAR_CAL_STRUCTi(void);

/* Symbol: _ZN5MTKCc25histMatching_1D_NonMallocEPiS0_iiii */
/* Demangled: MTKCc::histMatching_1D_NonMalloc(int*, int*, int, int, int, int) */
int _ZN5MTKCc25histMatching_1D_NonMallocEPiS0_iiii(void);

/* Symbol: _Z23sw_warp_rgb_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp_rgb_fixed_point(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z23sw_warp_rgb_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _Z21sw_warp_y_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT */
/* Demangled: sw_warp_y_fixed_point(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*) */
int _Z21sw_warp_y_fixed_pointPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCT(void);

/* Symbol: _Z30sw_warp_yv12_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_ */
/* Demangled: sw_warp_yv12_fixed_point_shift(unsigned char*, unsigned char*, unsigned char*, float*, STEREO_CORE_WARP_IMG_INFO_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*, STEREO_CORE_WARP_DISTORTION_PARA_STRUCT*) */
int _Z30sw_warp_yv12_fixed_point_shiftPhS_S_PfP32STEREO_CORE_WARP_IMG_INFO_STRUCTP39STEREO_CORE_WARP_DISTORTION_PARA_STRUCTS4_(void);

/* Symbol: _ZN15AppStereoKernelD1Ev */
/* Demangled: AppStereoKernel::~AppStereoKernel() */
int _ZN15AppStereoKernelD1Ev(void);

/* Symbol: _ZN5MTKCc17sw_colorTransferYEPhS0_jj */
/* Demangled: MTKCc::sw_colorTransferY(unsigned char*, unsigned char*, unsigned int, unsigned int) */
int _ZN5MTKCc17sw_colorTransferYEPhS0_jj(void);

/* Symbol: _ZN19MTKStereoKernelCore19CoordinateRemappingEP33STEREO_KERNEL_SET_ENV_INFO_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT */
/* Demangled: MTKStereoKernelCore::CoordinateRemapping(STEREO_KERNEL_SET_ENV_INFO_STRUCT*, STEREO_CORE_REMAP_RESULT_STRUCT*) */
int _ZN19MTKStereoKernelCore19CoordinateRemappingEP33STEREO_KERNEL_SET_ENV_INFO_STRUCTP31STEREO_CORE_REMAP_RESULT_STRUCT(void);

/* Symbol: _ZN19MTKStereoKernelCore21chechCalibConsistencyEv */
/* Demangled: MTKStereoKernelCore::chechCalibConsistency() */
int _ZN19MTKStereoKernelCore21chechCalibConsistencyEv(void);

/* Symbol: _ZN12GPU_N3D_WARP24GPU_N3D_Auto_ConvergenceEP22GPU_BUFFER_PARA_STRUCTiPfS2_S2_S2_jS2_ijj */
/* Demangled: GPU_N3D_WARP::GPU_N3D_Auto_Convergence(GPU_BUFFER_PARA_STRUCT*, int, float*, float*, float*, float*, unsigned int, float*, int, unsigned int, unsigned int) */
int _ZN12GPU_N3D_WARP24GPU_N3D_Auto_ConvergenceEP22GPU_BUFFER_PARA_STRUCTiPfS2_S2_S2_jS2_ijj(void);

/* Symbol: _ZN15AppStereoKernel16StereoKernelInitEPvS0_ */
/* Demangled: AppStereoKernel::StereoKernelInit(void*, void*) */
int _ZN15AppStereoKernel16StereoKernelInitEPvS0_(void);

/* Symbol: _Z25GeometryLMCostFunc_AF_AC2PfS_ */
/* Demangled: GeometryLMCostFunc_AF_AC2(float*, float*) */
int _Z25GeometryLMCostFunc_AF_AC2PfS_(void);

/* Symbol: _ZN7MTKFeFm10threadFuncEPv */
/* Demangled: MTKFeFm::threadFunc(void*) */
int _ZN7MTKFeFm10threadFuncEPv(void);

/* Symbol: _ZN19MTKStereoKernelCore18checkRegionContainEffffff */
/* Demangled: MTKStereoKernelCore::checkRegionContain(float, float, float, float, float, float) */
int _ZN19MTKStereoKernelCore18checkRegionContainEffffff(void);

/* Symbol: _ZN15AppStereoKernel23StereoKernelFeatureCtrlEjPvS0_ */
/* Demangled: AppStereoKernel::StereoKernelFeatureCtrl(unsigned int, void*, void*) */
int _ZN15AppStereoKernel23StereoKernelFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN19MTKStereoKernelCore20generateGrid3rdPartyEv */
/* Demangled: MTKStereoKernelCore::generateGrid3rdParty() */
int _ZN19MTKStereoKernelCore20generateGrid3rdPartyEv(void);

/* Symbol: _ZN19MTKStereoKernelCore26CoordinateRemapping_SensorEP30STEREO_KERNEL_FLOW_INFO_STRUCTPj */
/* Demangled: MTKStereoKernelCore::CoordinateRemapping_Sensor(STEREO_KERNEL_FLOW_INFO_STRUCT*, unsigned int*) */
int _ZN19MTKStereoKernelCore26CoordinateRemapping_SensorEP30STEREO_KERNEL_FLOW_INFO_STRUCTPj(void);

/* Symbol: _ZN19MTKStereoKernelCore20reconstructCurve_PCAEPfS0_P29STEREO_KERNEL_LENS_PCA_STRUCT */
/* Demangled: MTKStereoKernelCore::reconstructCurve_PCA(float*, float*, STEREO_KERNEL_LENS_PCA_STRUCT*) */
int _ZN19MTKStereoKernelCore20reconstructCurve_PCAEPfS0_P29STEREO_KERNEL_LENS_PCA_STRUCT(void);

/* Symbol: _ZTV15MTKStereoKernel */
/* Demangled: vtable for MTKStereoKernel */
extern void* _ZTV15MTKStereoKernel;

/* Symbol: _ZN19MTKStereoKernelCore17genLDCSplineCurveEP30STEREO_KERNEL_LENS_INFO_STRUCT */
/* Demangled: MTKStereoKernelCore::genLDCSplineCurve(STEREO_KERNEL_LENS_INFO_STRUCT*) */
int _ZN19MTKStereoKernelCore17genLDCSplineCurveEP30STEREO_KERNEL_LENS_INFO_STRUCT(void);

/* Symbol: _ZN5MTKAC19ConvergenceAnalysisEPfjj */
/* Demangled: MTKAC::ConvergenceAnalysis(float*, unsigned int, unsigned int) */
int _ZN5MTKAC19ConvergenceAnalysisEPfjj(void);

/* Symbol: _ZN22StereoKernelGPUContext10DestroyEGLEv */
/* Demangled: StereoKernelGPUContext::DestroyEGL() */
int _ZN22StereoKernelGPUContext10DestroyEGLEv(void);

/* Symbol: _ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_j */
/* Demangled: MTKStereoKernelCore::GetHmtxFromP_AF_AC2(float*, float*, float*, float*, unsigned int) */
int _ZN19MTKStereoKernelCore19GetHmtxFromP_AF_AC2EPfS0_S0_S0_j(void);

/* Symbol: _ZTV15AppStereoKernel */
/* Demangled: vtable for AppStereoKernel */
extern void* _ZTV15AppStereoKernel;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_N3D_H */
