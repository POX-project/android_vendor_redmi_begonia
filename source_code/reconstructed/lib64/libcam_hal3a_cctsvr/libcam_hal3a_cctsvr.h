/*
 * Reverse-Engineered ABI Specification for: libcam.hal3a.cctsvr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.hal3a.cctsvr.so
 */

#ifndef BEGONIA_RE_LIBCAM_HAL3A_CCTSVR_H
#define BEGONIA_RE_LIBCAM_HAL3A_CCTSVR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z17WriteCctOutStatusjiii */
/* Demangled: WriteCctOutStatus(unsigned int, int, int, int) */
int _Z17WriteCctOutStatusjiii(void);

/* Symbol: _ZN9CctHandle14cct_OpDispatchE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_OpDispatch(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle14cct_OpDispatchE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _ZN9CctHandle13mrOBStabilityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T */
/* Demangled: CctHandle::mrOBStability(int, int, int, int, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
int _ZN9CctHandle13mrOBStabilityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void);

/* Symbol: _ZN9CctHandle14CalculateSlopeEddddddddRd */
/* Demangled: CctHandle::CalculateSlope(double, double, double, double, double, double, double, double, double&) */
int _ZN9CctHandle14CalculateSlopeEddddddddRd(void);

/* Symbol: _ZN9CctHandle17cct_HandleNvramOpE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_HandleNvramOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle17cct_HandleNvramOpE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_ABFEv */
/* Demangled: CctHandle::getIspOnOff_ABF() const */
int _ZNK9CctHandle15getIspOnOff_ABFEv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_CCREv */
/* Demangled: CctHandle::getIspOnOff_CCR() const */
int _ZNK9CctHandle15getIspOnOff_CCREv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_NR1Ev */
/* Demangled: CctHandle::getIspOnOff_NR1() const */
int _ZNK9CctHandle15getIspOnOff_NR1Ev(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_UDMEv */
/* Demangled: CctHandle::getIspOnOff_UDM() const */
int _ZNK9CctHandle15getIspOnOff_UDMEv(void);

/* Symbol: _Z9CloseFifoiPc */
/* Demangled: CloseFifo(int, char*) */
int _Z9CloseFifoiPc(void);

/* Symbol: _ZN9CctServer19CCT_CaptureCallbackEPvi */
/* Demangled: CctServer::CCT_CaptureCallback(void*, int) */
int _ZN9CctServer19CCT_CaptureCallbackEPvi(void);

/* Symbol: _ZN9CctHandle13GetShadingRawE17eACDK_CAMERA_MODEh */
/* Demangled: CctHandle::GetShadingRaw(eACDK_CAMERA_MODE, unsigned char) */
int _ZN9CctHandle13GetShadingRawE17eACDK_CAMERA_MODEh(void);

/* Symbol: _ZN9CctHandle15getShadingOnOffEv */
/* Demangled: CctHandle::getShadingOnOff() */
int _ZN9CctHandle15getShadingOnOffEv(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_BPCEi */
/* Demangled: CctHandle::setIspOnOff_BPC(int) */
int _ZN9CctHandle15setIspOnOff_BPCEi(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_MFBEi */
/* Demangled: CctHandle::setIspOnOff_MFB(int) */
int _ZN9CctHandle15setIspOnOff_MFBEi(void);

/* Symbol: _ZN9CctHandle18cct_HandleSensorOpE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_HandleSensorOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle18cct_HandleSensorOpE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _Z9ReadCctOpPjS_i */
/* Demangled: ReadCctOp(unsigned int*, unsigned int*, int) */
int _Z9ReadCctOpPjS_i(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void);

/* Symbol: _ZN9CctHandle23mrAEPlineTableLinearityEP31ACDK_CDVT_AE_PLINE_TEST_INPUT_TiP32ACDK_CDVT_AE_PLINE_TEST_OUTPUT_TiPj */
/* Demangled: CctHandle::mrAEPlineTableLinearity(ACDK_CDVT_AE_PLINE_TEST_INPUT_T*, int, ACDK_CDVT_AE_PLINE_TEST_OUTPUT_T*, int, unsigned int*) */
int _ZN9CctHandle23mrAEPlineTableLinearityEP31ACDK_CDVT_AE_PLINE_TEST_INPUT_TiP32ACDK_CDVT_AE_PLINE_TEST_OUTPUT_TiPj(void);

/* Symbol: _ZNK9CctHandle16getIspOnOff_ANR2Ev */
/* Demangled: CctHandle::getIspOnOff_ANR2() const */
int _ZNK9CctHandle16getIspOnOff_ANR2Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN9CctHandle18cct_WriteSensorRegEPv */
/* Demangled: CctHandle::cct_WriteSensorReg(void*) */
int _ZN9CctHandle18cct_WriteSensorRegEPv(void);

/* Symbol: _ZN9CctHandle26mrCalMinimumSaturationGainEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T */
/* Demangled: CctHandle::mrCalMinimumSaturationGain(int, int, int, int, int, ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T*) */
int _ZN9CctHandle26mrCalMinimumSaturationGainEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T(void);

/* Symbol: giCctCmdOutBufSize */
/* Demangled: giCctCmdOutBufSize */
extern void* giCctCmdOutBufSize;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZTVNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)> */
extern void* _ZTVNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_EE;

/* Symbol: _ZN9CctHandle15setIspOnOff_ABFEi */
/* Demangled: CctHandle::setIspOnOff_ABF(int) */
int _ZN9CctHandle15setIspOnOff_ABFEi(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_CCREi */
/* Demangled: CctHandle::setIspOnOff_CCR(int) */
int _ZN9CctHandle15setIspOnOff_CCREi(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_NR1Ei */
/* Demangled: CctHandle::setIspOnOff_NR1(int) */
int _ZN9CctHandle15setIspOnOff_NR1Ei(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_UDMEi */
/* Demangled: CctHandle::setIspOnOff_UDM(int) */
int _ZN9CctHandle15setIspOnOff_UDMEi(void);

/* Symbol: _ZNK9CctHandle14getIspOnOff_EEEv */
/* Demangled: CctHandle::getIspOnOff_EE() const */
int _ZNK9CctHandle14getIspOnOff_EEEv(void);

/* Symbol: gb_MT6757P_ISP_ID_TEXT */
/* Demangled: gb_MT6757P_ISP_ID_TEXT */
extern void* gb_MT6757P_ISP_ID_TEXT;

/* Symbol: giCctNvramNumber */
/* Demangled: giCctNvramNumber */
extern void* giCctNvramNumber;

/* Symbol: _ZN9CctHandle15cct_QuerySensorEPvPj */
/* Demangled: CctHandle::cct_QuerySensor(void*, unsigned int*) */
int _ZN9CctHandle15cct_QuerySensorEPvPj(void);

/* Symbol: _ZN9CctHandle15mrGainLinearityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T */
/* Demangled: CctHandle::mrGainLinearity(int, int, int, int, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
int _ZN9CctHandle15mrGainLinearityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void);

/* Symbol: _ZN9CctHandle23cctNvram_GetNvramStructEiPiiS0_S0_ */
/* Demangled: CctHandle::cctNvram_GetNvramStruct(int, int*, int, int*, int*) */
int _ZN9CctHandle23cctNvram_GetNvramStructEiPiiS0_S0_(void);

/* Symbol: _ZN9CctHandle23cct_getSensorStaticInfoEv */
/* Demangled: CctHandle::cct_getSensorStaticInfo() */
int _ZN9CctHandle23cct_getSensorStaticInfoEv(void);

/* Symbol: CctSvrIF_DeInit */
/* Demangled: CctSvrIF_DeInit */
int CctSvrIF_DeInit(void);

/* Symbol: _ZN10CctImgToolC2Ev */
/* Demangled: CctImgTool::CctImgTool() */
int _ZN10CctImgToolC2Ev(void);

/* Symbol: _ZN9CctHandleC2EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej */
/* Demangled: CctHandle::CctHandle(NVRAM_CAMERA_ISP_PARAM_STRUCT*, NVRAM_CAMERA_SHADING_STRUCT*, NVRAM_CAMERA_3A_STRUCT*, NVRAM_LENS_PARA_STRUCT*, NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT*, NvramDrvBase*, unsigned int) */
int _ZN9CctHandleC2EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej(void);

/* Symbol: _ZN9CctHandleD2Ev */
/* Demangled: CctHandle::~CctHandle() */
int _ZN9CctHandleD2Ev(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_GGMEv */
/* Demangled: CctHandle::getIspOnOff_GGM() const */
int _ZNK9CctHandle15getIspOnOff_GGMEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::destroy() */
int _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7destroyEv(void);

/* Symbol: _ZN10CctImgToolC1Ev */
/* Demangled: CctImgTool::CctImgTool() */
int _ZN10CctImgToolC1Ev(void);

/* Symbol: _Z8OpenFifoPiPc15LNX_FIFO_MODE_T */
/* Demangled: OpenFifo(int*, char*, LNX_FIFO_MODE_T) */
int _Z8OpenFifoPiPc15LNX_FIFO_MODE_T(void);

/* Symbol: _ZN9CctHandle14createInstanceE30CAMERA_DUAL_CAMERA_SENSOR_ENUM */
/* Demangled: CctHandle::createInstance(CAMERA_DUAL_CAMERA_SENSOR_ENUM) */
int _ZN9CctHandle14createInstanceE30CAMERA_DUAL_CAMERA_SENSOR_ENUM(void);

/* Symbol: _ZN9CctHandleD1Ev */
/* Demangled: CctHandle::~CctHandle() */
int _ZN9CctHandleD1Ev(void);

/* Symbol: _Z15WriteCctOutDatajPhi */
/* Demangled: WriteCctOutData(unsigned int, unsigned char*, int) */
int _Z15WriteCctOutDatajPhi(void);

/* Symbol: _ZN9CctServerD2Ev */
/* Demangled: CctServer::~CctServer() */
int _ZN9CctServerD2Ev(void);

/* Symbol: g_CctSvrPipeInFilename */
/* Demangled: g_CctSvrPipeInFilename */
extern void* g_CctSvrPipeInFilename;

/* Symbol: _ZN10CctImgTool13vUnPackRawImgEPhS0_jjjh */
/* Demangled: CctImgTool::vUnPackRawImg(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned char) */
int _ZN10CctImgTool13vUnPackRawImgEPhS0_jjjh(void);

/* Symbol: _ZN9CctHandle14mrExpLinearityEiiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T */
/* Demangled: CctHandle::mrExpLinearity(int, int, int, int, int, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
int _ZN9CctHandle14mrExpLinearityEiiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_GGMEi */
/* Demangled: CctHandle::setIspOnOff_GGM(int) */
int _ZN9CctHandle15setIspOnOff_GGMEi(void);

/* Symbol: CctSvrIF_Init */
/* Demangled: CctSvrIF_Init */
int CctSvrIF_Init(void);

/* Symbol: _ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDjPh */
/* Demangled: CctHandle::cct_GetCctOutBufSize(CCT_OP_ID, unsigned int, unsigned char*) */
int _ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDjPh(void);

/* Symbol: _ZNK9CctHandle16getIspOnOff_NR3DEv */
/* Demangled: CctHandle::getIspOnOff_NR3D() const */
int _ZNK9CctHandle16getIspOnOff_NR3DEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE */
/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::__clone(std::__1::__function::__base<void (void*, int)>*) const */
int _ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void);

/* Symbol: _ZN9CctHandle14UnpackRAWImageEv */
/* Demangled: CctHandle::UnpackRAWImage() */
int _ZN9CctHandle14UnpackRAWImageEv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_PCAEv */
/* Demangled: CctHandle::getIspOnOff_PCA() const */
int _ZNK9CctHandle15getIspOnOff_PCAEv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_SL2Ev */
/* Demangled: CctHandle::getIspOnOff_SL2() const */
int _ZNK9CctHandle15getIspOnOff_SL2Ev(void);

/* Symbol: _ZN9CctServerD1Ev */
/* Demangled: CctServer::~CctServer() */
int _ZN9CctServerD1Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_EclEOS2_Oi */
/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::operator()(void*&&, int&&) */
int _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_EclEOS2_Oi(void);

/* Symbol: _ZN9CctHandle16setIspOnOff_ADBSEi */
/* Demangled: CctHandle::setIspOnOff_ADBS(int) */
int _ZN9CctHandle16setIspOnOff_ADBSEi(void);

/* Symbol: _ZN9CctHandle17cct_ReadSensorRegEPvS0_Pj */
/* Demangled: CctHandle::cct_ReadSensorReg(void*, void*, unsigned int*) */
int _ZN9CctHandle17cct_ReadSensorRegEPvS0_Pj(void);

/* Symbol: _ZN9CctHandle24cctNvram_SetIspNvramDataEP25ISP_NVRAM_REGISTER_STRUCT */
/* Demangled: CctHandle::cctNvram_SetIspNvramData(ISP_NVRAM_REGISTER_STRUCT*) */
int _ZN9CctHandle24cctNvram_SetIspNvramDataEP25ISP_NVRAM_REGISTER_STRUCT(void);

/* Symbol: _ZNK9CctHandle16getIspOnOff_SL2FEv */
/* Demangled: CctHandle::getIspOnOff_SL2F() const */
int _ZNK9CctHandle16getIspOnOff_SL2FEv(void);

/* Symbol: bFalseFlag */
/* Demangled: bFalseFlag */
extern void* bFalseFlag;

/* Symbol: _ZN9CctHandle15destroyInstanceEv */
/* Demangled: CctHandle::destroyInstance() */
int _ZN9CctHandle15destroyInstanceEv(void);

/* Symbol: _ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDi */
/* Demangled: CctHandle::cct_GetCctOutBufSize(CCT_OP_ID, int) */
int _ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDi(void);

/* Symbol: _ZN9CctHandle20mrGainTableLinearityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T */
/* Demangled: CctHandle::mrGainTableLinearity(int, int, int*, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
int _ZN9CctHandle20mrGainTableLinearityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_CCMEv */
/* Demangled: CctHandle::getIspOnOff_CCM() const */
int _ZNK9CctHandle15getIspOnOff_CCMEv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_HFGEv */
/* Demangled: CctHandle::getIspOnOff_HFG() const */
int _ZNK9CctHandle15getIspOnOff_HFGEv(void);

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZN10CctImgTool17mrAnalyzeRAWImageEPhjj15eRAW_ColorOrderRK7ROIRectR31ACDK_CDVT_RAW_ANALYSIS_RESULT_T */
/* Demangled: CctImgTool::mrAnalyzeRAWImage(unsigned char*, unsigned int, unsigned int, eRAW_ColorOrder, ROIRect const&, ACDK_CDVT_RAW_ANALYSIS_RESULT_T&) */
int _ZN10CctImgTool17mrAnalyzeRAWImageEPhjj15eRAW_ColorOrderRK7ROIRectR31ACDK_CDVT_RAW_ANALYSIS_RESULT_T(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_PCAEi */
/* Demangled: CctHandle::setIspOnOff_PCA(int) */
int _ZN9CctHandle15setIspOnOff_PCAEi(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_SL2Ei */
/* Demangled: CctHandle::setIspOnOff_SL2(int) */
int _ZN9CctHandle15setIspOnOff_SL2Ei(void);

/* Symbol: _ZN10CctImgTool22vExtractUnPackedRawROIEPhS0_jjRK7ROIRect */
/* Demangled: CctImgTool::vExtractUnPackedRawROI(unsigned char*, unsigned char*, unsigned int, unsigned int, ROIRect const&) */
int _ZN10CctImgTool22vExtractUnPackedRawROIEPhS0_jjRK7ROIRect(void);

/* Symbol: _Z17CCTIF_FeatureCtrljPhjS_jPj */
/* Demangled: CCTIF_FeatureCtrl(unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int, unsigned int*) */
int _Z17CCTIF_FeatureCtrljPhjS_jPj(void);

/* Symbol: CctSvrIF_Ctrl */
/* Demangled: CctSvrIF_Ctrl */
int CctSvrIF_Ctrl(void);

/* Symbol: _ZN9CctHandle14setIspOnOff_EEEi */
/* Demangled: CctHandle::setIspOnOff_EE(int) */
int _ZN9CctHandle14setIspOnOff_EEEi(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_OBCEv */
/* Demangled: CctHandle::getIspOnOff_OBC() const */
int _ZNK9CctHandle15getIspOnOff_OBCEv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_RMMEv */
/* Demangled: CctHandle::getIspOnOff_RMM() const */
int _ZNK9CctHandle15getIspOnOff_RMMEv(void);

/* Symbol: _ZN9CctServerC2Ej */
/* Demangled: CctServer::CctServer(unsigned int) */
int _ZN9CctServerC2Ej(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_CCMEi */
/* Demangled: CctHandle::setIspOnOff_CCM(int) */
int _ZN9CctHandle15setIspOnOff_CCMEi(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_HFGEi */
/* Demangled: CctHandle::setIspOnOff_HFG(int) */
int _ZN9CctHandle15setIspOnOff_HFGEi(void);

/* Symbol: bTrueFlag */
/* Demangled: bTrueFlag */
extern void* bTrueFlag;

/* Symbol: gb_MT6799P_ISP_ID_TEXT */
/* Demangled: gb_MT6799P_ISP_ID_TEXT */
extern void* gb_MT6799P_ISP_ID_TEXT;

/* Symbol: _ZN10CctImgTool14mrAnalyzeYInfoEPhjjRK7ROIRectRjS4_ */
/* Demangled: CctImgTool::mrAnalyzeYInfo(unsigned char*, unsigned int, unsigned int, ROIRect const&, unsigned int&, unsigned int&) */
int _ZN10CctImgTool14mrAnalyzeYInfoEPhjjRK7ROIRectRjS4_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEv(void);

/* Symbol: _ZN9CctHandle22mrGainTableOBStabilityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T */
/* Demangled: CctHandle::mrGainTableOBStability(int, int, int*, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
int _ZN9CctHandle22mrGainTableOBStabilityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void);

/* Symbol: _ZN9CctHandle7mrCalOBEiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T */
/* Demangled: CctHandle::mrCalOB(int, int, int, int, ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T*) */
int _ZN9CctHandle7mrCalOBEiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T(void);

/* Symbol: _ZN9CctHandle17cct_HandleEmcamOpE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_HandleEmcamOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle17cct_HandleEmcamOpE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_RNREv */
/* Demangled: CctHandle::getIspOnOff_RNR() const */
int _ZNK9CctHandle15getIspOnOff_RNREv(void);

/* Symbol: _ZN9CctServerC1Ej */
/* Demangled: CctServer::CctServer(unsigned int) */
int _ZN9CctServerC1Ej(void);

/* Symbol: _ZN9CctHandle15cct_HandleIspOpE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_HandleIspOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle15cct_HandleIspOpE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_OBCEi */
/* Demangled: CctHandle::setIspOnOff_OBC(int) */
int _ZN9CctHandle15setIspOnOff_OBCEi(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_RMMEi */
/* Demangled: CctHandle::setIspOnOff_RMM(int) */
int _ZN9CctHandle15setIspOnOff_RMMEi(void);

/* Symbol: _ZN9CctHandle16setIspOnOff_ANR2Ei */
/* Demangled: CctHandle::setIspOnOff_ANR2(int) */
int _ZN9CctHandle16setIspOnOff_ANR2Ei(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZN10CctImgToolD2Ev */
/* Demangled: CctImgTool::~CctImgTool() */
int _ZN10CctImgToolD2Ev(void);

/* Symbol: g_CctSvrPipeOutFilename */
/* Demangled: g_CctSvrPipeOutFilename */
extern void* g_CctSvrPipeOutFilename;

/* Symbol: _ZN9CctHandle11setIspOnOffEji */
/* Demangled: CctHandle::setIspOnOff(unsigned int, int) */
int _ZN9CctHandle11setIspOnOffEji(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_ANREv */
/* Demangled: CctHandle::getIspOnOff_ANR() const */
int _ZNK9CctHandle15getIspOnOff_ANREv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_PDCEv */
/* Demangled: CctHandle::getIspOnOff_PDC() const */
int _ZNK9CctHandle15getIspOnOff_PDCEv(void);

/* Symbol: gb_MT6763_ISP_ID_TEXT */
/* Demangled: gb_MT6763_ISP_ID_TEXT */
extern void* gb_MT6763_ISP_ID_TEXT;

/* Symbol: _ZN9CctHandle15setIspOnOff_RNREi */
/* Demangled: CctHandle::setIspOnOff_RNR(int) */
int _ZN9CctHandle15setIspOnOff_RNREi(void);

/* Symbol: _ZN9CctHandle21cctNvram_GetNvramDataE16CCT_NVRAM_DATA_TiPhiPvPi */
/* Demangled: CctHandle::cctNvram_GetNvramData(CCT_NVRAM_DATA_T, int, unsigned char*, int, void*, int*) */
int _ZN9CctHandle21cctNvram_GetNvramDataE16CCT_NVRAM_DATA_TiPhiPvPi(void);

/* Symbol: _ZN10CctImgTool12mrCalcMedianEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t */
/* Demangled: CctImgTool::mrCalcMedian(unsigned char*, unsigned int, unsigned int, eRAW_ColorOrder, ROIRect const&, RAWAnalyzeResult_t&) */
int _ZN10CctImgTool12mrCalcMedianEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t(void);

/* Symbol: _ZN10CctImgToolD1Ev */
/* Demangled: CctImgTool::~CctImgTool() */
int _ZN10CctImgToolD1Ev(void);

/* Symbol: _ZN9CctHandle14cct_Handle3AOpE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_Handle3AOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle14cct_Handle3AOpE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _ZN9CctHandle20setIspOnOff_IHDR_GGMEi */
/* Demangled: CctHandle::setIspOnOff_IHDR_GGM(int) */
int _ZN9CctHandle20setIspOnOff_IHDR_GGMEi(void);

/* Symbol: _ZN9CctServer16CCT_ServerThreadEPv */
/* Demangled: CctServer::CCT_ServerThread(void*) */
int _ZN9CctServer16CCT_ServerThreadEPv(void);

/* Symbol: _ZN9CctHandle15setShadingOnOffEi */
/* Demangled: CctHandle::setShadingOnOff(int) */
int _ZN9CctHandle15setShadingOnOffEi(void);

/* Symbol: _ZN9CctHandle23cct_HandleCalibrationOpE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_HandleCalibrationOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle23cct_HandleCalibrationOpE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _ZNK9CctHandle11getIspOnOffEjRi */
/* Demangled: CctHandle::getIspOnOff(unsigned int, int&) const */
int _ZNK9CctHandle11getIspOnOffEjRi(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_DBSEv */
/* Demangled: CctHandle::getIspOnOff_DBS() const */
int _ZNK9CctHandle15getIspOnOff_DBSEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_ANREi */
/* Demangled: CctHandle::setIspOnOff_ANR(int) */
int _ZN9CctHandle15setIspOnOff_ANREi(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_PDCEi */
/* Demangled: CctHandle::setIspOnOff_PDC(int) */
int _ZN9CctHandle15setIspOnOff_PDCEi(void);

/* Symbol: _ZNK9CctHandle17getIspOnOff_COLOREv */
/* Demangled: CctHandle::getIspOnOff_COLOR() const */
int _ZNK9CctHandle17getIspOnOff_COLOREv(void);

/* Symbol: _ZNK9CctHandle20getIspOnOff_IHDR_GGMEv */
/* Demangled: CctHandle::getIspOnOff_IHDR_GGM() const */
int _ZNK9CctHandle20getIspOnOff_IHDR_GGMEv(void);

/* Symbol: _ZN10CctImgToolD0Ev */
/* Demangled: CctImgTool::~CctImgTool() */
int _ZN10CctImgToolD0Ev(void);

/* Symbol: _ZN9CctHandle4initENSt3__18functionIFvPviEEE */
/* Demangled: CctHandle::init(std::__1::function<void (void*, int)>) */
int _ZN9CctHandle4initENSt3__18functionIFvPviEEE(void);

/* Symbol: _ZN9CctHandle12SetShadingAEEi */
/* Demangled: CctHandle::SetShadingAE(int) */
int _ZN9CctHandle12SetShadingAEEi(void);

/* Symbol: _ZN9CctHandle22cctNvram_SaveNvramDataE16CCT_NVRAM_DATA_T */
/* Demangled: CctHandle::cctNvram_SaveNvramData(CCT_NVRAM_DATA_T) */
int _ZN9CctHandle22cctNvram_SaveNvramDataE16CCT_NVRAM_DATA_T(void);

/* Symbol: _ZN10CctImgTool20vExtractPackedRawROIEPhS0_jjjjRK7ROIRect */
/* Demangled: CctImgTool::vExtractPackedRawROI(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, ROIRect const&) */
int _ZN10CctImgTool20vExtractPackedRawROIEPhS0_jjjjRK7ROIRect(void);

/* Symbol: _ZN9CctHandle11TakePictureEjji */
/* Demangled: CctHandle::TakePicture(unsigned int, unsigned int, int) */
int _ZN9CctHandle11TakePictureEjji(void);

/* Symbol: _ZN9CctHandle15setIspOnOff_DBSEi */
/* Demangled: CctHandle::setIspOnOff_DBS(int) */
int _ZN9CctHandle15setIspOnOff_DBSEi(void);

/* Symbol: _ZN9CctHandle16setIspOnOff_NR3DEi */
/* Demangled: CctHandle::setIspOnOff_NR3D(int) */
int _ZN9CctHandle16setIspOnOff_NR3DEi(void);

/* Symbol: _ZN9CctHandle28cctNvram_SetPartialNvramDataE16CCT_NVRAM_DATA_TijPh */
/* Demangled: CctHandle::cctNvram_SetPartialNvramData(CCT_NVRAM_DATA_T, int, unsigned int, unsigned char*) */
int _ZN9CctHandle28cctNvram_SetPartialNvramDataE16CCT_NVRAM_DATA_TijPh(void);

/* Symbol: _ZN10CctImgTool16mrAnalyzeRAWInfoEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t */
/* Demangled: CctImgTool::mrAnalyzeRAWInfo(unsigned char*, unsigned int, unsigned int, eRAW_ColorOrder, ROIRect const&, RAWAnalyzeResult_t&) */
int _ZN10CctImgTool16mrAnalyzeRAWInfoEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t(void);

/* Symbol: _ZTV10CctImgTool */
/* Demangled: vtable for CctImgTool */
extern void* _ZTV10CctImgTool;

/* Symbol: _Z12OpenFifoHostPiPc15LNX_FIFO_MODE_T */
/* Demangled: OpenFifoHost(int*, char*, LNX_FIFO_MODE_T) */
int _Z12OpenFifoHostPiPc15LNX_FIFO_MODE_T(void);

/* Symbol: _ZNK9CctHandle16getIspOnOff_ADBSEv */
/* Demangled: CctHandle::getIspOnOff_ADBS() const */
int _ZNK9CctHandle16getIspOnOff_ADBSEv(void);

/* Symbol: _Z13CloseFifoHostiPc */
/* Demangled: CloseFifoHost(int, char*) */
int _Z13CloseFifoHostiPc(void);

/* Symbol: _ZN9CctHandle15AnalyzeRAWImageER31ACDK_CDVT_RAW_ANALYSIS_RESULT_T */
/* Demangled: CctHandle::AnalyzeRAWImage(ACDK_CDVT_RAW_ANALYSIS_RESULT_T&) */
int _ZN9CctHandle15AnalyzeRAWImageER31ACDK_CDVT_RAW_ANALYSIS_RESULT_T(void);

/* Symbol: _ZN9CctHandleC1EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej */
/* Demangled: CctHandle::CctHandle(NVRAM_CAMERA_ISP_PARAM_STRUCT*, NVRAM_CAMERA_SHADING_STRUCT*, NVRAM_CAMERA_3A_STRUCT*, NVRAM_LENS_PARA_STRUCT*, NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT*, NvramDrvBase*, unsigned int) */
int _ZN9CctHandleC1EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej(void);

/* Symbol: _Z13ReadCctInDatajPhPji */
/* Demangled: ReadCctInData(unsigned int, unsigned char*, unsigned int*, int) */
int _Z13ReadCctInDatajPhPji(void);

/* Symbol: _ZN9CctHandle11mrCalMinISOEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T */
/* Demangled: CctHandle::mrCalMinISO(int, int, int, int, int, ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T*) */
int _ZN9CctHandle11mrCalMinISOEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T(void);

/* Symbol: _ZN9CctHandle16setIspOnOff_SL2FEi */
/* Demangled: CctHandle::setIspOnOff_SL2F(int) */
int _ZN9CctHandle16setIspOnOff_SL2FEi(void);

/* Symbol: _ZN9CctHandle17setIspOnOff_COLOREi */
/* Demangled: CctHandle::setIspOnOff_COLOR(int) */
int _ZN9CctHandle17setIspOnOff_COLOREi(void);

/* Symbol: _ZN9CctHandle18setIspOnOff_MIXER3Ei */
/* Demangled: CctHandle::setIspOnOff_MIXER3(int) */
int _ZN9CctHandle18setIspOnOff_MIXER3Ei(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: gb_MT6775_ISP_ID_TEXT */
/* Demangled: gb_MT6775_ISP_ID_TEXT */
extern void* gb_MT6775_ISP_ID_TEXT;

/* Symbol: _ZN9CctHandle14cct_InternalOpE9CCT_OP_IDjPhjS1_Pj */
/* Demangled: CctHandle::cct_InternalOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
int _ZN9CctHandle14cct_InternalOpE9CCT_OP_IDjPhjS1_Pj(void);

/* Symbol: _ZN9CctHandle15mrCalLenShadingEiiiitjihi */
/* Demangled: CctHandle::mrCalLenShading(int, int, int, int, unsigned short, unsigned int, int, unsigned char, int) */
int _ZN9CctHandle15mrCalLenShadingEiiiitjihi(void);

/* Symbol: _ZN9CctHandle9SetAFModeEi */
/* Demangled: CctHandle::SetAFMode(int) */
int _ZN9CctHandle9SetAFModeEi(void);

/* Symbol: _ZNK9CctHandle18getIspOnOff_MIXER3Ev */
/* Demangled: CctHandle::getIspOnOff_MIXER3() const */
int _ZNK9CctHandle18getIspOnOff_MIXER3Ev(void);

/* Symbol: gb_MT6771_ISP_ID_TEXT */
/* Demangled: gb_MT6771_ISP_ID_TEXT */
extern void* gb_MT6771_ISP_ID_TEXT;

/* Symbol: giCctNvramCmdOutBufSize */
/* Demangled: giCctNvramCmdOutBufSize */
extern void* giCctNvramCmdOutBufSize;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN9CctServer14CCT_ServerCtrlE13CCT_SVR_CTL_T */
/* Demangled: CctServer::CCT_ServerCtrl(CCT_SVR_CTL_T) */
int _ZN9CctServer14CCT_ServerCtrlE13CCT_SVR_CTL_T(void);

/* Symbol: gbCaptureCallback */
/* Demangled: gbCaptureCallback */
extern void* gbCaptureCallback;

/* Symbol: _ZN9CctHandle21cctNvram_SetNvramDataE16CCT_NVRAM_DATA_TiPh */
/* Demangled: CctHandle::cctNvram_SetNvramData(CCT_NVRAM_DATA_T, int, unsigned char*) */
int _ZN9CctHandle21cctNvram_SetNvramDataE16CCT_NVRAM_DATA_TiPh(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_BPCEv */
/* Demangled: CctHandle::getIspOnOff_BPC() const */
int _ZNK9CctHandle15getIspOnOff_BPCEv(void);

/* Symbol: _ZNK9CctHandle15getIspOnOff_MFBEv */
/* Demangled: CctHandle::getIspOnOff_MFB() const */
int _ZNK9CctHandle15getIspOnOff_MFBEv(void);

/* Symbol: gpCctSvrObj */
/* Demangled: gpCctSvrObj */
extern void* gpCctSvrObj;

/* Symbol: _ZN9CctHandle16cct_GetSensorResEPvPj */
/* Demangled: CctHandle::cct_GetSensorRes(void*, unsigned int*) */
int _ZN9CctHandle16cct_GetSensorResEPvPj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_HAL3A_CCTSVR_H */
