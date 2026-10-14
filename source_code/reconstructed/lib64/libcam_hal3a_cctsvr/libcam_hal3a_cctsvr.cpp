/*
 * Reverse-Engineered Source for: libcam.hal3a.cctsvr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcam_hal3a_cctsvr"

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
#include "libcam_hal3a_cctsvr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: WriteCctOutStatus(unsigned int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17WriteCctOutStatusjiii(void) {
    ALOGD("_Z17WriteCctOutStatusjiii() called");
    return 0;
}

/* Demangled: CctHandle::cct_OpDispatch(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14cct_OpDispatchE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle14cct_OpDispatchE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: CctHandle::mrOBStability(int, int, int, int, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle13mrOBStabilityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle13mrOBStabilityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T() called");
    return 0;
}

/* Demangled: CctHandle::CalculateSlope(double, double, double, double, double, double, double, double, double&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14CalculateSlopeEddddddddRd(void) {
    ALOGD("_ZN9CctHandle14CalculateSlopeEddddddddRd() called");
    return 0;
}

/* Demangled: CctHandle::cct_HandleNvramOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle17cct_HandleNvramOpE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle17cct_HandleNvramOpE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_ABF() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_ABFEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_ABFEv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_CCR() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_CCREv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_CCREv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_NR1() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_NR1Ev(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_NR1Ev() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_UDM() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_UDMEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_UDMEv() called");
    return 0;
}

/* Demangled: CloseFifo(int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z9CloseFifoiPc(void) {
    ALOGD("_Z9CloseFifoiPc() called");
    return 0;
}

/* Demangled: CctServer::CCT_CaptureCallback(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctServer19CCT_CaptureCallbackEPvi(void) {
    ALOGD("_ZN9CctServer19CCT_CaptureCallbackEPvi() called");
    return 0;
}

/* Demangled: CctHandle::GetShadingRaw(eACDK_CAMERA_MODE, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle13GetShadingRawE17eACDK_CAMERA_MODEh(void) {
    ALOGD("_ZN9CctHandle13GetShadingRawE17eACDK_CAMERA_MODEh() called");
    return 0;
}

/* Demangled: CctHandle::getShadingOnOff() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15getShadingOnOffEv(void) {
    ALOGD("_ZN9CctHandle15getShadingOnOffEv() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_BPC(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_BPCEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_BPCEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_MFB(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_MFBEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_MFBEi() called");
    return 0;
}

/* Demangled: CctHandle::cct_HandleSensorOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle18cct_HandleSensorOpE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle18cct_HandleSensorOpE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: ReadCctOp(unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z9ReadCctOpPjS_i(void) {
    ALOGD("_Z9ReadCctOpPjS_i() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: CctHandle::mrAEPlineTableLinearity(ACDK_CDVT_AE_PLINE_TEST_INPUT_T*, int, ACDK_CDVT_AE_PLINE_TEST_OUTPUT_T*, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle23mrAEPlineTableLinearityEP31ACDK_CDVT_AE_PLINE_TEST_INPUT_TiP32ACDK_CDVT_AE_PLINE_TEST_OUTPUT_TiPj(void) {
    ALOGD("_ZN9CctHandle23mrAEPlineTableLinearityEP31ACDK_CDVT_AE_PLINE_TEST_INPUT_TiP32ACDK_CDVT_AE_PLINE_TEST_OUTPUT_TiPj() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_ANR2() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle16getIspOnOff_ANR2Ev(void) {
    ALOGD("_ZNK9CctHandle16getIspOnOff_ANR2Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: CctHandle::cct_WriteSensorReg(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle18cct_WriteSensorRegEPv(void) {
    ALOGD("_ZN9CctHandle18cct_WriteSensorRegEPv() called");
    return 0;
}

/* Demangled: CctHandle::mrCalMinimumSaturationGain(int, int, int, int, int, ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle26mrCalMinimumSaturationGainEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle26mrCalMinimumSaturationGainEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T() called");
    return 0;
}

/* Exported Object: giCctCmdOutBufSize */
extern "C" __attribute__((visibility("default"))) void* giCctCmdOutBufSize = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: vtable for std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_EE = NULL;

/* Demangled: CctHandle::setIspOnOff_ABF(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_ABFEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_ABFEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_CCR(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_CCREi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_CCREi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_NR1(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_NR1Ei(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_NR1Ei() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_UDM(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_UDMEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_UDMEi() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_EE() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle14getIspOnOff_EEEv(void) {
    ALOGD("_ZNK9CctHandle14getIspOnOff_EEEv() called");
    return 0;
}

/* Exported Object: gb_MT6757P_ISP_ID_TEXT */
extern "C" __attribute__((visibility("default"))) void* gb_MT6757P_ISP_ID_TEXT = NULL;

/* Exported Object: giCctNvramNumber */
extern "C" __attribute__((visibility("default"))) void* giCctNvramNumber = NULL;

/* Demangled: CctHandle::cct_QuerySensor(void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15cct_QuerySensorEPvPj(void) {
    ALOGD("_ZN9CctHandle15cct_QuerySensorEPvPj() called");
    return 0;
}

/* Demangled: CctHandle::mrGainLinearity(int, int, int, int, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15mrGainLinearityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle15mrGainLinearityEiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T() called");
    return 0;
}

/* Demangled: CctHandle::cctNvram_GetNvramStruct(int, int*, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle23cctNvram_GetNvramStructEiPiiS0_S0_(void) {
    ALOGD("_ZN9CctHandle23cctNvram_GetNvramStructEiPiiS0_S0_() called");
    return 0;
}

/* Demangled: CctHandle::cct_getSensorStaticInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle23cct_getSensorStaticInfoEv(void) {
    ALOGD("_ZN9CctHandle23cct_getSensorStaticInfoEv() called");
    return 0;
}

/* Demangled: CctSvrIF_DeInit */
extern "C" __attribute__((visibility("default"))) int CctSvrIF_DeInit(void) {
    ALOGD("CctSvrIF_DeInit() called");
    return 0;
}

/* Demangled: CctImgTool::CctImgTool() */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgToolC2Ev(void) {
    ALOGD("_ZN10CctImgToolC2Ev() called");
    return 0;
}

/* Demangled: CctHandle::CctHandle(NVRAM_CAMERA_ISP_PARAM_STRUCT*, NVRAM_CAMERA_SHADING_STRUCT*, NVRAM_CAMERA_3A_STRUCT*, NVRAM_LENS_PARA_STRUCT*, NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT*, NvramDrvBase*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandleC2EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej(void) {
    ALOGD("_ZN9CctHandleC2EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej() called");
    return 0;
}

/* Demangled: CctHandle::~CctHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandleD2Ev(void) {
    ALOGD("_ZN9CctHandleD2Ev() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_GGM() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_GGMEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_GGMEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7destroyEv() called");
    return 0;
}

/* Demangled: CctImgTool::CctImgTool() */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgToolC1Ev(void) {
    ALOGD("_ZN10CctImgToolC1Ev() called");
    return 0;
}

/* Demangled: OpenFifo(int*, char*, LNX_FIFO_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _Z8OpenFifoPiPc15LNX_FIFO_MODE_T(void) {
    ALOGD("_Z8OpenFifoPiPc15LNX_FIFO_MODE_T() called");
    return 0;
}

/* Demangled: CctHandle::createInstance(CAMERA_DUAL_CAMERA_SENSOR_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14createInstanceE30CAMERA_DUAL_CAMERA_SENSOR_ENUM(void) {
    ALOGD("_ZN9CctHandle14createInstanceE30CAMERA_DUAL_CAMERA_SENSOR_ENUM() called");
    return 0;
}

/* Demangled: CctHandle::~CctHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandleD1Ev(void) {
    ALOGD("_ZN9CctHandleD1Ev() called");
    return 0;
}

/* Demangled: WriteCctOutData(unsigned int, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15WriteCctOutDatajPhi(void) {
    ALOGD("_Z15WriteCctOutDatajPhi() called");
    return 0;
}

/* Demangled: CctServer::~CctServer() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctServerD2Ev(void) {
    ALOGD("_ZN9CctServerD2Ev() called");
    return 0;
}

/* Exported Object: g_CctSvrPipeInFilename */
extern "C" __attribute__((visibility("default"))) void* g_CctSvrPipeInFilename = NULL;

/* Demangled: CctImgTool::vUnPackRawImg(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgTool13vUnPackRawImgEPhS0_jjjh(void) {
    ALOGD("_ZN10CctImgTool13vUnPackRawImgEPhS0_jjjh() called");
    return 0;
}

/* Demangled: CctHandle::mrExpLinearity(int, int, int, int, int, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14mrExpLinearityEiiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle14mrExpLinearityEiiiiiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_GGM(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_GGMEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_GGMEi() called");
    return 0;
}

/* Demangled: CctSvrIF_Init */
extern "C" __attribute__((visibility("default"))) int CctSvrIF_Init(void) {
    ALOGD("CctSvrIF_Init() called");
    return 0;
}

/* Demangled: CctHandle::cct_GetCctOutBufSize(CCT_OP_ID, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDjPh(void) {
    ALOGD("_ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDjPh() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_NR3D() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle16getIspOnOff_NR3DEv(void) {
    ALOGD("_ZNK9CctHandle16getIspOnOff_NR3DEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::__clone(std::__1::__function::__base<void (void*, int)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE() called");
    return 0;
}

/* Demangled: CctHandle::UnpackRAWImage() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14UnpackRAWImageEv(void) {
    ALOGD("_ZN9CctHandle14UnpackRAWImageEv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_PCA() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_PCAEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_PCAEv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_SL2() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_SL2Ev(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_SL2Ev() called");
    return 0;
}

/* Demangled: CctServer::~CctServer() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctServerD1Ev(void) {
    ALOGD("_ZN9CctServerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::operator()(void*&&, int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_EclEOS2_Oi(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_EclEOS2_Oi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_ADBS(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle16setIspOnOff_ADBSEi(void) {
    ALOGD("_ZN9CctHandle16setIspOnOff_ADBSEi() called");
    return 0;
}

/* Demangled: CctHandle::cct_ReadSensorReg(void*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle17cct_ReadSensorRegEPvS0_Pj(void) {
    ALOGD("_ZN9CctHandle17cct_ReadSensorRegEPvS0_Pj() called");
    return 0;
}

/* Demangled: CctHandle::cctNvram_SetIspNvramData(ISP_NVRAM_REGISTER_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle24cctNvram_SetIspNvramDataEP25ISP_NVRAM_REGISTER_STRUCT(void) {
    ALOGD("_ZN9CctHandle24cctNvram_SetIspNvramDataEP25ISP_NVRAM_REGISTER_STRUCT() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_SL2F() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle16getIspOnOff_SL2FEv(void) {
    ALOGD("_ZNK9CctHandle16getIspOnOff_SL2FEv() called");
    return 0;
}

/* Exported Object: bFalseFlag */
extern "C" __attribute__((visibility("default"))) void* bFalseFlag = NULL;

/* Demangled: CctHandle::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15destroyInstanceEv(void) {
    ALOGD("_ZN9CctHandle15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CctHandle::cct_GetCctOutBufSize(CCT_OP_ID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDi(void) {
    ALOGD("_ZN9CctHandle20cct_GetCctOutBufSizeE9CCT_OP_IDi() called");
    return 0;
}

/* Demangled: CctHandle::mrGainTableLinearity(int, int, int*, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle20mrGainTableLinearityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle20mrGainTableLinearityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_CCM() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_CCMEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_CCMEv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_HFG() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_HFGEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_HFGEv() called");
    return 0;
}

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: CctImgTool::mrAnalyzeRAWImage(unsigned char*, unsigned int, unsigned int, eRAW_ColorOrder, ROIRect const&, ACDK_CDVT_RAW_ANALYSIS_RESULT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgTool17mrAnalyzeRAWImageEPhjj15eRAW_ColorOrderRK7ROIRectR31ACDK_CDVT_RAW_ANALYSIS_RESULT_T(void) {
    ALOGD("_ZN10CctImgTool17mrAnalyzeRAWImageEPhjj15eRAW_ColorOrderRK7ROIRectR31ACDK_CDVT_RAW_ANALYSIS_RESULT_T() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_PCA(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_PCAEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_PCAEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_SL2(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_SL2Ei(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_SL2Ei() called");
    return 0;
}

/* Demangled: CctImgTool::vExtractUnPackedRawROI(unsigned char*, unsigned char*, unsigned int, unsigned int, ROIRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgTool22vExtractUnPackedRawROIEPhS0_jjRK7ROIRect(void) {
    ALOGD("_ZN10CctImgTool22vExtractUnPackedRawROIEPhS0_jjRK7ROIRect() called");
    return 0;
}

/* Demangled: CCTIF_FeatureCtrl(unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z17CCTIF_FeatureCtrljPhjS_jPj(void) {
    ALOGD("_Z17CCTIF_FeatureCtrljPhjS_jPj() called");
    return 0;
}

/* Demangled: CctSvrIF_Ctrl */
extern "C" __attribute__((visibility("default"))) int CctSvrIF_Ctrl(void) {
    ALOGD("CctSvrIF_Ctrl() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_EE(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14setIspOnOff_EEEi(void) {
    ALOGD("_ZN9CctHandle14setIspOnOff_EEEi() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_OBC() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_OBCEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_OBCEv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_RMM() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_RMMEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_RMMEv() called");
    return 0;
}

/* Demangled: CctServer::CctServer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctServerC2Ej(void) {
    ALOGD("_ZN9CctServerC2Ej() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_CCM(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_CCMEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_CCMEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_HFG(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_HFGEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_HFGEi() called");
    return 0;
}

/* Exported Object: bTrueFlag */
extern "C" __attribute__((visibility("default"))) void* bTrueFlag = NULL;

/* Exported Object: gb_MT6799P_ISP_ID_TEXT */
extern "C" __attribute__((visibility("default"))) void* gb_MT6799P_ISP_ID_TEXT = NULL;

/* Demangled: CctImgTool::mrAnalyzeYInfo(unsigned char*, unsigned int, unsigned int, ROIRect const&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgTool14mrAnalyzeYInfoEPhjjRK7ROIRectRjS4_(void) {
    ALOGD("_ZN10CctImgTool14mrAnalyzeYInfoEPhjjRK7ROIRectRjS4_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(void*, int), std::__1::allocator<void (*)(void*, int)>, void (void*, int)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvPviENS_9allocatorIS4_EES3_E7__cloneEv() called");
    return 0;
}

/* Demangled: CctHandle::mrGainTableOBStability(int, int, int*, int, ACDK_CDVT_SENSOR_TEST_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle22mrGainTableOBStabilityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle22mrGainTableOBStabilityEiiPiiP30ACDK_CDVT_SENSOR_TEST_OUTPUT_T() called");
    return 0;
}

/* Demangled: CctHandle::mrCalOB(int, int, int, int, ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle7mrCalOBEiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle7mrCalOBEiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T() called");
    return 0;
}

/* Demangled: CctHandle::cct_HandleEmcamOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle17cct_HandleEmcamOpE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle17cct_HandleEmcamOpE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_RNR() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_RNREv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_RNREv() called");
    return 0;
}

/* Demangled: CctServer::CctServer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctServerC1Ej(void) {
    ALOGD("_ZN9CctServerC1Ej() called");
    return 0;
}

/* Demangled: CctHandle::cct_HandleIspOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15cct_HandleIspOpE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle15cct_HandleIspOpE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_OBC(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_OBCEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_OBCEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_RMM(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_RMMEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_RMMEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_ANR2(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle16setIspOnOff_ANR2Ei(void) {
    ALOGD("_ZN9CctHandle16setIspOnOff_ANR2Ei() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: CctImgTool::~CctImgTool() */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgToolD2Ev(void) {
    ALOGD("_ZN10CctImgToolD2Ev() called");
    return 0;
}

/* Exported Object: g_CctSvrPipeOutFilename */
extern "C" __attribute__((visibility("default"))) void* g_CctSvrPipeOutFilename = NULL;

/* Demangled: CctHandle::setIspOnOff(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle11setIspOnOffEji(void) {
    ALOGD("_ZN9CctHandle11setIspOnOffEji() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_ANR() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_ANREv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_ANREv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_PDC() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_PDCEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_PDCEv() called");
    return 0;
}

/* Exported Object: gb_MT6763_ISP_ID_TEXT */
extern "C" __attribute__((visibility("default"))) void* gb_MT6763_ISP_ID_TEXT = NULL;

/* Demangled: CctHandle::setIspOnOff_RNR(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_RNREi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_RNREi() called");
    return 0;
}

/* Demangled: CctHandle::cctNvram_GetNvramData(CCT_NVRAM_DATA_T, int, unsigned char*, int, void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle21cctNvram_GetNvramDataE16CCT_NVRAM_DATA_TiPhiPvPi(void) {
    ALOGD("_ZN9CctHandle21cctNvram_GetNvramDataE16CCT_NVRAM_DATA_TiPhiPvPi() called");
    return 0;
}

/* Demangled: CctImgTool::mrCalcMedian(unsigned char*, unsigned int, unsigned int, eRAW_ColorOrder, ROIRect const&, RAWAnalyzeResult_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgTool12mrCalcMedianEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t(void) {
    ALOGD("_ZN10CctImgTool12mrCalcMedianEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t() called");
    return 0;
}

/* Demangled: CctImgTool::~CctImgTool() */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgToolD1Ev(void) {
    ALOGD("_ZN10CctImgToolD1Ev() called");
    return 0;
}

/* Demangled: CctHandle::cct_Handle3AOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14cct_Handle3AOpE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle14cct_Handle3AOpE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_IHDR_GGM(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle20setIspOnOff_IHDR_GGMEi(void) {
    ALOGD("_ZN9CctHandle20setIspOnOff_IHDR_GGMEi() called");
    return 0;
}

/* Demangled: CctServer::CCT_ServerThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctServer16CCT_ServerThreadEPv(void) {
    ALOGD("_ZN9CctServer16CCT_ServerThreadEPv() called");
    return 0;
}

/* Demangled: CctHandle::setShadingOnOff(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setShadingOnOffEi(void) {
    ALOGD("_ZN9CctHandle15setShadingOnOffEi() called");
    return 0;
}

/* Demangled: CctHandle::cct_HandleCalibrationOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle23cct_HandleCalibrationOpE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle23cct_HandleCalibrationOpE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff(unsigned int, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle11getIspOnOffEjRi(void) {
    ALOGD("_ZNK9CctHandle11getIspOnOffEjRi() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_DBS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_DBSEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_DBSEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_ANR(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_ANREi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_ANREi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_PDC(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_PDCEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_PDCEi() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_COLOR() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle17getIspOnOff_COLOREv(void) {
    ALOGD("_ZNK9CctHandle17getIspOnOff_COLOREv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_IHDR_GGM() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle20getIspOnOff_IHDR_GGMEv(void) {
    ALOGD("_ZNK9CctHandle20getIspOnOff_IHDR_GGMEv() called");
    return 0;
}

/* Demangled: CctImgTool::~CctImgTool() */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgToolD0Ev(void) {
    ALOGD("_ZN10CctImgToolD0Ev() called");
    return 0;
}

/* Demangled: CctHandle::init(std::__1::function<void (void*, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle4initENSt3__18functionIFvPviEEE(void) {
    ALOGD("_ZN9CctHandle4initENSt3__18functionIFvPviEEE() called");
    return 0;
}

/* Demangled: CctHandle::SetShadingAE(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle12SetShadingAEEi(void) {
    ALOGD("_ZN9CctHandle12SetShadingAEEi() called");
    return 0;
}

/* Demangled: CctHandle::cctNvram_SaveNvramData(CCT_NVRAM_DATA_T) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle22cctNvram_SaveNvramDataE16CCT_NVRAM_DATA_T(void) {
    ALOGD("_ZN9CctHandle22cctNvram_SaveNvramDataE16CCT_NVRAM_DATA_T() called");
    return 0;
}

/* Demangled: CctImgTool::vExtractPackedRawROI(unsigned char*, unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, ROIRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgTool20vExtractPackedRawROIEPhS0_jjjjRK7ROIRect(void) {
    ALOGD("_ZN10CctImgTool20vExtractPackedRawROIEPhS0_jjjjRK7ROIRect() called");
    return 0;
}

/* Demangled: CctHandle::TakePicture(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle11TakePictureEjji(void) {
    ALOGD("_ZN9CctHandle11TakePictureEjji() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_DBS(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15setIspOnOff_DBSEi(void) {
    ALOGD("_ZN9CctHandle15setIspOnOff_DBSEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_NR3D(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle16setIspOnOff_NR3DEi(void) {
    ALOGD("_ZN9CctHandle16setIspOnOff_NR3DEi() called");
    return 0;
}

/* Demangled: CctHandle::cctNvram_SetPartialNvramData(CCT_NVRAM_DATA_T, int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle28cctNvram_SetPartialNvramDataE16CCT_NVRAM_DATA_TijPh(void) {
    ALOGD("_ZN9CctHandle28cctNvram_SetPartialNvramDataE16CCT_NVRAM_DATA_TijPh() called");
    return 0;
}

/* Demangled: CctImgTool::mrAnalyzeRAWInfo(unsigned char*, unsigned int, unsigned int, eRAW_ColorOrder, ROIRect const&, RAWAnalyzeResult_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CctImgTool16mrAnalyzeRAWInfoEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t(void) {
    ALOGD("_ZN10CctImgTool16mrAnalyzeRAWInfoEPhjj15eRAW_ColorOrderRK7ROIRectR18RAWAnalyzeResult_t() called");
    return 0;
}

/* Exported Object: vtable for CctImgTool */
extern "C" __attribute__((visibility("default"))) void* _ZTV10CctImgTool = NULL;

/* Demangled: OpenFifoHost(int*, char*, LNX_FIFO_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _Z12OpenFifoHostPiPc15LNX_FIFO_MODE_T(void) {
    ALOGD("_Z12OpenFifoHostPiPc15LNX_FIFO_MODE_T() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_ADBS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle16getIspOnOff_ADBSEv(void) {
    ALOGD("_ZNK9CctHandle16getIspOnOff_ADBSEv() called");
    return 0;
}

/* Demangled: CloseFifoHost(int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z13CloseFifoHostiPc(void) {
    ALOGD("_Z13CloseFifoHostiPc() called");
    return 0;
}

/* Demangled: CctHandle::AnalyzeRAWImage(ACDK_CDVT_RAW_ANALYSIS_RESULT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15AnalyzeRAWImageER31ACDK_CDVT_RAW_ANALYSIS_RESULT_T(void) {
    ALOGD("_ZN9CctHandle15AnalyzeRAWImageER31ACDK_CDVT_RAW_ANALYSIS_RESULT_T() called");
    return 0;
}

/* Demangled: CctHandle::CctHandle(NVRAM_CAMERA_ISP_PARAM_STRUCT*, NVRAM_CAMERA_SHADING_STRUCT*, NVRAM_CAMERA_3A_STRUCT*, NVRAM_LENS_PARA_STRUCT*, NVRAM_CAMERA_FLASH_CALIBRATION_STRUCT*, NvramDrvBase*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandleC1EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej(void) {
    ALOGD("_ZN9CctHandleC1EP29NVRAM_CAMERA_ISP_PARAM_STRUCTP27NVRAM_CAMERA_SHADING_STRUCTP22NVRAM_CAMERA_3A_STRUCTP22NVRAM_LENS_PARA_STRUCTP37NVRAM_CAMERA_FLASH_CALIBRATION_STRUCTP12NvramDrvBasej() called");
    return 0;
}

/* Demangled: ReadCctInData(unsigned int, unsigned char*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13ReadCctInDatajPhPji(void) {
    ALOGD("_Z13ReadCctInDatajPhPji() called");
    return 0;
}

/* Demangled: CctHandle::mrCalMinISO(int, int, int, int, int, ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle11mrCalMinISOEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T(void) {
    ALOGD("_ZN9CctHandle11mrCalMinISOEiiiiiP37ACDK_CDVT_SENSOR_CALIBRATION_OUTPUT_T() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_SL2F(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle16setIspOnOff_SL2FEi(void) {
    ALOGD("_ZN9CctHandle16setIspOnOff_SL2FEi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_COLOR(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle17setIspOnOff_COLOREi(void) {
    ALOGD("_ZN9CctHandle17setIspOnOff_COLOREi() called");
    return 0;
}

/* Demangled: CctHandle::setIspOnOff_MIXER3(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle18setIspOnOff_MIXER3Ei(void) {
    ALOGD("_ZN9CctHandle18setIspOnOff_MIXER3Ei() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Exported Object: gb_MT6775_ISP_ID_TEXT */
extern "C" __attribute__((visibility("default"))) void* gb_MT6775_ISP_ID_TEXT = NULL;

/* Demangled: CctHandle::cct_InternalOp(CCT_OP_ID, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle14cct_InternalOpE9CCT_OP_IDjPhjS1_Pj(void) {
    ALOGD("_ZN9CctHandle14cct_InternalOpE9CCT_OP_IDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: CctHandle::mrCalLenShading(int, int, int, int, unsigned short, unsigned int, int, unsigned char, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle15mrCalLenShadingEiiiitjihi(void) {
    ALOGD("_ZN9CctHandle15mrCalLenShadingEiiiitjihi() called");
    return 0;
}

/* Demangled: CctHandle::SetAFMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle9SetAFModeEi(void) {
    ALOGD("_ZN9CctHandle9SetAFModeEi() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_MIXER3() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle18getIspOnOff_MIXER3Ev(void) {
    ALOGD("_ZNK9CctHandle18getIspOnOff_MIXER3Ev() called");
    return 0;
}

/* Exported Object: gb_MT6771_ISP_ID_TEXT */
extern "C" __attribute__((visibility("default"))) void* gb_MT6771_ISP_ID_TEXT = NULL;

/* Exported Object: giCctNvramCmdOutBufSize */
extern "C" __attribute__((visibility("default"))) void* giCctNvramCmdOutBufSize = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: CctServer::CCT_ServerCtrl(CCT_SVR_CTL_T) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctServer14CCT_ServerCtrlE13CCT_SVR_CTL_T(void) {
    ALOGD("_ZN9CctServer14CCT_ServerCtrlE13CCT_SVR_CTL_T() called");
    return 0;
}

/* Exported Object: gbCaptureCallback */
extern "C" __attribute__((visibility("default"))) void* gbCaptureCallback = NULL;

/* Demangled: CctHandle::cctNvram_SetNvramData(CCT_NVRAM_DATA_T, int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle21cctNvram_SetNvramDataE16CCT_NVRAM_DATA_TiPh(void) {
    ALOGD("_ZN9CctHandle21cctNvram_SetNvramDataE16CCT_NVRAM_DATA_TiPh() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_BPC() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_BPCEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_BPCEv() called");
    return 0;
}

/* Demangled: CctHandle::getIspOnOff_MFB() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9CctHandle15getIspOnOff_MFBEv(void) {
    ALOGD("_ZNK9CctHandle15getIspOnOff_MFBEv() called");
    return 0;
}

/* Exported Object: gpCctSvrObj */
extern "C" __attribute__((visibility("default"))) void* gpCctSvrObj = NULL;

/* Demangled: CctHandle::cct_GetSensorRes(void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CctHandle16cct_GetSensorResEPvPj(void) {
    ALOGD("_ZN9CctHandle16cct_GetSensorResEPvPj() called");
    return 0;
}
