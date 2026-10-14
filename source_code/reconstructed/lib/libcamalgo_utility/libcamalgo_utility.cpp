/*
 * Reverse-Engineered Source for: libcamalgo.utility.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcamalgo_utility"

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
#include "libcamalgo_utility.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: utilBlur(unsigned char*, UTIL_CLIP_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z8utilBlurPhP22UTIL_CLIP_IMAGE_STRUCT(void) {
    ALOGD("_Z8utilBlurPhP22UTIL_CLIP_IMAGE_STRUCT() called");
    return 0;
}

/* Demangled: utilVecScale(float*, float const*, float) */
extern "C" __attribute__((visibility("default"))) int _Z12utilVecScalePfPKff(void) {
    ALOGD("_Z12utilVecScalePfPKff() called");
    return 0;
}

/* Demangled: utilImageClip(UTIL_CLIP_IMAGE_STRUCT*, UTIL_CLIP_IMAGE_STRUCT*, UTL_IMAGE_FORMAT_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z13utilImageClipP22UTIL_CLIP_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM(void) {
    ALOGD("_Z13utilImageClipP22UTIL_CLIP_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM() called");
    return 0;
}

/* Demangled: utilTraceInitOnce() */
extern "C" __attribute__((visibility("default"))) int _Z17utilTraceInitOncev(void) {
    ALOGD("_Z17utilTraceInitOncev() called");
    return 0;
}

/* Demangled: __floatundisf */
extern "C" __attribute__((visibility("default"))) int __floatundisf(void) {
    ALOGD("__floatundisf() called");
    return 0;
}

/* Demangled: utilSobel(unsigned int*, UTIL_CLIP_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z9utilSobelPjP22UTIL_CLIP_IMAGE_STRUCT(void) {
    ALOGD("_Z9utilSobelPjP22UTIL_CLIP_IMAGE_STRUCT() called");
    return 0;
}

/* Demangled: UtlMetTagInit() */
extern "C" __attribute__((visibility("default"))) int _Z13UtlMetTagInitv(void) {
    ALOGD("_Z13UtlMetTagInitv() called");
    return 0;
}

/* Demangled: Convolve(UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z8ConvolvePK22UTIL_BASE_IMAGE_STRUCTS1_PS_(void) {
    ALOGD("_Z8ConvolvePK22UTIL_BASE_IMAGE_STRUCTS1_PS_() called");
    return 0;
}

/* Demangled: igFreeImage(unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _Z11igFreeImagejPKj(void) {
    ALOGD("_Z11igFreeImagejPKj() called");
    return 0;
}

/* Demangled: igCreateProgram(unsigned int*, unsigned int, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _Z15igCreateProgramPjjjPf(void) {
    ALOGD("_Z15igCreateProgramPjjjPf() called");
    return 0;
}

/* Demangled: utilBoxProject(float*, float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _Z14utilBoxProjectPfS_S_i(void) {
    ALOGD("_Z14utilBoxProjectPfS_S_i() called");
    return 0;
}

/* Demangled: utilLevmarBcDer(LEVMAR_CAL_STRUCT*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15utilLevmarBcDerP17LEVMAR_CAL_STRUCTi(void) {
    ALOGD("_Z15utilLevmarBcDerP17LEVMAR_CAL_STRUCTi() called");
    return 0;
}

/* Demangled: utilLevmarBoxCheck(float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18utilLevmarBoxCheckPfS_i(void) {
    ALOGD("_Z18utilLevmarBoxCheckPfS_i() called");
    return 0;
}

/* Demangled: utilCosE(float) */
extern "C" __attribute__((visibility("default"))) int _Z8utilCosEf(void) {
    ALOGD("_Z8utilCosEf() called");
    return 0;
}

/* Demangled: utilImageSad(UTIL_IMAGE_SAD_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z12utilImageSadP21UTIL_IMAGE_SAD_STRUCTPjS1_(void) {
    ALOGD("_Z12utilImageSadP21UTIL_IMAGE_SAD_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: igCreateVPE(int*, int*, vtx_fmt*, unsigned short*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z11igCreateVPEPiS_P7vtx_fmtPtPj(void) {
    ALOGD("_Z11igCreateVPEPiS_P7vtx_fmtPtPj() called");
    return 0;
}

/* Demangled: igLoadShaderString(unsigned int*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18igLoadShaderStringPjPKcj(void) {
    ALOGD("_Z18igLoadShaderStringPjPKcj() called");
    return 0;
}

/* Demangled: utilMatMul(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z10utilMatMulPfS_S_(void) {
    ALOGD("_Z10utilMatMulPfS_S_() called");
    return 0;
}

/* Demangled: utilFastLog2(float) */
extern "C" __attribute__((visibility("default"))) int _Z12utilFastLog2f(void) {
    ALOGD("_Z12utilFastLog2f() called");
    return 0;
}

/* Demangled: CreateGLESContext::GPUContextCreate(MTK_GPU_CONTEXT_VERSION_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN17CreateGLESContext16GPUContextCreateE28MTK_GPU_CONTEXT_VERSION_ENUM(void) {
    ALOGD("_ZN17CreateGLESContext16GPUContextCreateE28MTK_GPU_CONTEXT_VERSION_ENUM() called");
    return 0;
}

/* Demangled: CreateGLESContext::CreateGLESContext() */
extern "C" __attribute__((visibility("default"))) int _ZN17CreateGLESContextC1Ev(void) {
    ALOGD("_ZN17CreateGLESContextC1Ev() called");
    return 0;
}

/* Demangled: utilMatVecMul(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z13utilMatVecMulPfS_S_(void) {
    ALOGD("_Z13utilMatVecMulPfS_S_() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: UtlMetTagUninit() */
extern "C" __attribute__((visibility("default"))) int _Z15UtlMetTagUninitv(void) {
    ALOGD("_Z15UtlMetTagUninitv() called");
    return 0;
}

/* Demangled: CreateGLESContext::CreateGLESContext() */
extern "C" __attribute__((visibility("default"))) int _ZN17CreateGLESContextC2Ev(void) {
    ALOGD("_ZN17CreateGLESContextC2Ev() called");
    return 0;
}

/* Demangled: CreateGLESContext::~CreateGLESContext() */
extern "C" __attribute__((visibility("default"))) int _ZN17CreateGLESContextD1Ev(void) {
    ALOGD("_ZN17CreateGLESContextD1Ev() called");
    return 0;
}

/* Demangled: DestroyEGLImage(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z15DestroyEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void) {
    ALOGD("_Z15DestroyEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT() called");
    return 0;
}

/* Demangled: utilxmul_64(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11utilxmul_64iij(void) {
    ALOGD("_Z11utilxmul_64iij() called");
    return 0;
}

/* Demangled: utilSinE(float) */
extern "C" __attribute__((visibility("default"))) int _Z8utilSinEf(void) {
    ALOGD("_Z8utilSinEf() called");
    return 0;
}

/* Demangled: utilPow3E(float) */
extern "C" __attribute__((visibility("default"))) int _Z9utilPow3Ef(void) {
    ALOGD("_Z9utilPow3Ef() called");
    return 0;
}

/* Demangled: UtlRGBA8888toGrey(UTIL_MP_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17UtlRGBA8888toGreyP20UTIL_MP_IMAGE_STRUCTPv(void) {
    ALOGD("_Z17UtlRGBA8888toGreyP20UTIL_MP_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: UtlRGBA8888toGrey(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17UtlRGBA8888toGreyP22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z17UtlRGBA8888toGreyP22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: tpq_group_create(int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z16tpq_group_createiiPKc(void) {
    ALOGD("_Z16tpq_group_createiiPKc() called");
    return 0;
}

/* Demangled: CreateGLESContext::~CreateGLESContext() */
extern "C" __attribute__((visibility("default"))) int _ZN17CreateGLESContextD2Ev(void) {
    ALOGD("_ZN17CreateGLESContextD2Ev() called");
    return 0;
}

/* Demangled: GetCornerResponse(signed char*, signed char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17GetCornerResponsePaS_i(void) {
    ALOGD("_Z17GetCornerResponsePaS_i() called");
    return 0;
}

/* Demangled: UtlI420toYUYV(UTIL_BASE_IMAGE_STRUCT*, UTIL_BASE_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z13UtlI420toYUYVP22UTIL_BASE_IMAGE_STRUCTS0_(void) {
    ALOGD("_Z13UtlI420toYUYVP22UTIL_BASE_IMAGE_STRUCTS0_() called");
    return 0;
}

/* Demangled: UtlYUYVtoI420(UTIL_BASE_IMAGE_STRUCT*, UTIL_BASE_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z13UtlYUYVtoI420P22UTIL_BASE_IMAGE_STRUCTS0_(void) {
    ALOGD("_Z13UtlYUYVtoI420P22UTIL_BASE_IMAGE_STRUCTS0_() called");
    return 0;
}

/* Demangled: utilTimeToMS(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z12utilTimeToMSy(void) {
    ALOGD("_Z12utilTimeToMSy() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: utilFloorf(float) */
extern "C" __attribute__((visibility("default"))) int _Z10utilFloorff(void) {
    ALOGD("_Z10utilFloorff() called");
    return 0;
}

/* Demangled: utilforElim_int(int const*, int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15utilforElim_intPKiPijj(void) {
    ALOGD("_Z15utilforElim_intPKiPijj() called");
    return 0;
}

/* Demangled: utilxdiv(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8utilxdiviij(void) {
    ALOGD("_Z8utilxdiviij() called");
    return 0;
}

/* Demangled: UtlNV21toYV12(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z13UtlNV21toYV12P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z13UtlNV21toYV12P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: UtlYV12toNV21(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z13UtlYV12toNV21P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z13UtlYV12toNV21P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: utilPrintPerf(utilPerf*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z13utilPrintPerfP8utilPerfPKc(void) {
    ALOGD("_Z13utilPrintPerfP8utilPerfPKc() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: utilinverse(float*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _Z11utilinversePfjS_(void) {
    ALOGD("_Z11utilinversePfjS_() called");
    return 0;
}

/* Demangled: ImageSubstract(UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT const*, int, UTIL_BASE_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z14ImageSubstractPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_(void) {
    ALOGD("_Z14ImageSubstractPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: utilQuickSort(float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13utilQuickSortPfii(void) {
    ALOGD("_Z13utilQuickSortPfii() called");
    return 0;
}

/* Demangled: ImageAdd(UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT const*, int, UTIL_BASE_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z8ImageAddPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_(void) {
    ALOGD("_Z8ImageAddPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_() called");
    return 0;
}

/* Demangled: __aeabi_ul2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2f(void) {
    ALOGD("__aeabi_ul2f() called");
    return 0;
}

/* Demangled: UtlMetTagOneShot(unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16UtlMetTagOneShotjPKcj(void) {
    ALOGD("_Z16UtlMetTagOneShotjPKcj() called");
    return 0;
}

/* Demangled: tpq_create(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z10tpq_createiPKc(void) {
    ALOGD("_Z10tpq_createiPKc() called");
    return 0;
}

/* Demangled: utilLmbcDifJacf(float*, LEVMAR_CAL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z15utilLmbcDifJacfPfP17LEVMAR_CAL_STRUCT(void) {
    ALOGD("_Z15utilLmbcDifJacfPfP17LEVMAR_CAL_STRUCT() called");
    return 0;
}

/* Demangled: utilsolveLS_Sym_int(int*, int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19utilsolveLS_Sym_intPiS_jj(void) {
    ALOGD("_Z19utilsolveLS_Sym_intPiS_jj() called");
    return 0;
}

/* Demangled: vmemset(void*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z7vmemsetPvij(void) {
    ALOGD("_Z7vmemsetPvij() called");
    return 0;
}

/* Demangled: utilStopCapture(utilPerf*) */
extern "C" __attribute__((visibility("default"))) int _Z15utilStopCaptureP8utilPerf(void) {
    ALOGD("_Z15utilStopCaptureP8utilPerf() called");
    return 0;
}

/* Demangled: utilTraceAsyncEnd(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17utilTraceAsyncEndPKci(void) {
    ALOGD("_Z17utilTraceAsyncEndPKci() called");
    return 0;
}

/* Demangled: utiltranspose_int(int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17utiltranspose_intPij(void) {
    ALOGD("_Z17utiltranspose_intPij() called");
    return 0;
}

/* Demangled: UtlMetTagStart(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14UtlMetTagStartjPKc(void) {
    ALOGD("_Z14UtlMetTagStartjPKc() called");
    return 0;
}

/* Demangled: utilLnsrch(void*, void*, LEVMAR_CAL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z10utilLnsrchPvS_P17LEVMAR_CAL_STRUCT(void) {
    ALOGD("_Z10utilLnsrchPvS_P17LEVMAR_CAL_STRUCT() called");
    return 0;
}

/* Demangled: utilLevmarInit(LEVMAR_CAL_STRUCT*, void*, int, int, void (*)(float*, float*)) */
extern "C" __attribute__((visibility("default"))) int _Z14utilLevmarInitP17LEVMAR_CAL_STRUCTPviiPFvPfS2_E(void) {
    ALOGD("_Z14utilLevmarInitP17LEVMAR_CAL_STRUCTPviiPFvPfS2_E() called");
    return 0;
}

/* Demangled: UtlI420toRGBA8888(UTIL_MP_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17UtlI420toRGBA8888P20UTIL_MP_IMAGE_STRUCTPv(void) {
    ALOGD("_Z17UtlI420toRGBA8888P20UTIL_MP_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: UtlI420toRGBA8888(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17UtlI420toRGBA8888P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z17UtlI420toRGBA8888P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: UtlRGBA8888toI420(UTIL_MP_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17UtlRGBA8888toI420P20UTIL_MP_IMAGE_STRUCTPv(void) {
    ALOGD("_Z17UtlRGBA8888toI420P20UTIL_MP_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: UtlRGBA8888toI420(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17UtlRGBA8888toI420P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z17UtlRGBA8888toI420P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: tpq_exec(tpq_*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8tpq_execP4tpq_j(void) {
    ALOGD("_Z8tpq_execP4tpq_j() called");
    return 0;
}

/* Demangled: utilLevmarTransMatMatMult(float*, float*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z25utilLevmarTransMatMatMultPfS_ii(void) {
    ALOGD("_Z25utilLevmarTransMatMatMultPfS_ii() called");
    return 0;
}

/* Demangled: utilSqrt(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8utilSqrtjj(void) {
    ALOGD("_Z8utilSqrtjj() called");
    return 0;
}

/* Demangled: utilRotate(UTIL_CLIP_IMAGE_STRUCT*, UTIL_CLIP_IMAGE_STRUCT*, UTIL_ANGLE) */
extern "C" __attribute__((visibility("default"))) int _Z10utilRotateP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE(void) {
    ALOGD("_Z10utilRotateP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE() called");
    return 0;
}

/* Demangled: tpq_add_group_work(int, tpq_*, void* (*)(void*, rtinfo*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z18tpq_add_group_workiP4tpq_PFPvS1_P6rtinfoES1_(void) {
    ALOGD("_Z18tpq_add_group_workiP4tpq_PFPvS1_P6rtinfoES1_() called");
    return 0;
}

/* Demangled: GetEGLImageTexture(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z18GetEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void) {
    ALOGD("_Z18GetEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: utilInitPerf(utilPerf*) */
extern "C" __attribute__((visibility("default"))) int _Z12utilInitPerfP8utilPerf(void) {
    ALOGD("_Z12utilInitPerfP8utilPerf() called");
    return 0;
}

/* Demangled: utilTraceBegin(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14utilTraceBeginPKc(void) {
    ALOGD("_Z14utilTraceBeginPKc() called");
    return 0;
}

/* Demangled: utilTraceTerminate() */
extern "C" __attribute__((visibility("default"))) int _Z18utilTraceTerminatev(void) {
    ALOGD("_Z18utilTraceTerminatev() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: utilPartialDerivative(signed char*, signed char*, UTIL_BASE_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z21utilPartialDerivativePaS_P22UTIL_BASE_IMAGE_STRUCT(void) {
    ALOGD("_Z21utilPartialDerivativePaS_P22UTIL_BASE_IMAGE_STRUCT() called");
    return 0;
}

/* Demangled: utilHarrisDetector(UTIL_CLIP_IMAGE_STRUCT*, signed char*, signed char*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18utilHarrisDetectorP22UTIL_CLIP_IMAGE_STRUCTPaS1_Pi(void) {
    ALOGD("_Z18utilHarrisDetectorP22UTIL_CLIP_IMAGE_STRUCTPaS1_Pi() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: igFreeShader(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12igFreeShaderj(void) {
    ALOGD("_Z12igFreeShaderj() called");
    return 0;
}

/* Demangled: igCreateBufferObject(int, int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _Z20igCreateBufferObjectiiRjS_(void) {
    ALOGD("_Z20igCreateBufferObjectiiRjS_() called");
    return 0;
}

/* Demangled: utilPow(float, float) */
extern "C" __attribute__((visibility("default"))) int _Z7utilPowff(void) {
    ALOGD("_Z7utilPowff() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: igFreeProgram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13igFreeProgramj(void) {
    ALOGD("_Z13igFreeProgramj() called");
    return 0;
}

/* Demangled: UtlI420toRGB888(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15UtlI420toRGB888P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z15UtlI420toRGB888P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: UtlRGB888toI420(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15UtlRGB888toI420P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z15UtlRGB888toI420P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: tpq_destroy(tpq_*) */
extern "C" __attribute__((visibility("default"))) int _Z11tpq_destroyP4tpq_(void) {
    ALOGD("_Z11tpq_destroyP4tpq_() called");
    return 0;
}

/* Demangled: CreateGLESContext::GPUContextDestroy() */
extern "C" __attribute__((visibility("default"))) int _ZN17CreateGLESContext17GPUContextDestroyEv(void) {
    ALOGD("_ZN17CreateGLESContext17GPUContextDestroyEv() called");
    return 0;
}

/* Demangled: utilSwap(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z8utilSwapPfS_(void) {
    ALOGD("_Z8utilSwapPfS_() called");
    return 0;
}

/* Demangled: UtlMetTagEnd(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z12UtlMetTagEndjPKc(void) {
    ALOGD("_Z12UtlMetTagEndjPKc() called");
    return 0;
}

/* Demangled: tpq_add_work(tpq_*, void* (*)(void*, rtinfo*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z12tpq_add_workP4tpq_PFPvS1_P6rtinfoES1_(void) {
    ALOGD("_Z12tpq_add_workP4tpq_PFPvS1_P6rtinfoES1_() called");
    return 0;
}

/* Demangled: DestroyEGLImageTexture(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22DestroyEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void) {
    ALOGD("_Z22DestroyEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: igLoadImage(void*, int, unsigned int, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z11igLoadImagePvijiiPj(void) {
    ALOGD("_Z11igLoadImagePvijiiPj() called");
    return 0;
}

/* Demangled: igFreeBufferObject(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _Z18igFreeBufferObjectRjS_(void) {
    ALOGD("_Z18igFreeBufferObjectRjS_() called");
    return 0;
}

/* Demangled: utilbackSub_int(int const*, int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15utilbackSub_intPKiPijj(void) {
    ALOGD("_Z15utilbackSub_intPKiPijj() called");
    return 0;
}

/* Demangled: utilLevmarL2nrmxmy(float*, float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18utilLevmarL2nrmxmyPfS_S_i(void) {
    ALOGD("_Z18utilLevmarL2nrmxmyPfS_S_i() called");
    return 0;
}

/* Demangled: UtlI420toNV21(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z13UtlI420toNV21P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z13UtlI420toNV21P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: UtlNV21toI420(UTIL_BASE_IMAGE_STRUCT*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z13UtlNV21toI420P22UTIL_BASE_IMAGE_STRUCTPv(void) {
    ALOGD("_Z13UtlNV21toI420P22UTIL_BASE_IMAGE_STRUCTPv() called");
    return 0;
}

/* Demangled: vmemcpy(void*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z7vmemcpyPvS_j(void) {
    ALOGD("_Z7vmemcpyPvS_j() called");
    return 0;
}

/* Demangled: utilStartCapture(utilPerf*) */
extern "C" __attribute__((visibility("default"))) int _Z16utilStartCaptureP8utilPerf(void) {
    ALOGD("_Z16utilStartCaptureP8utilPerf() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: igFreeVPE(unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _Z9igFreeVPEPKj(void) {
    ALOGD("_Z9igFreeVPEPKj() called");
    return 0;
}

/* Demangled: utilLevmarBufferSizeQuery(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z25utilLevmarBufferSizeQueryiiii(void) {
    ALOGD("_Z25utilLevmarBufferSizeQueryiiii() called");
    return 0;
}

/* Exported Object: util_atrace_log_enable */
extern "C" __attribute__((visibility("default"))) void* util_atrace_log_enable = NULL;

/* Demangled: utilBilinearResizer(UTIL_BASE_IMAGE_STRUCT*, UTIL_BASE_IMAGE_STRUCT*, UTL_IMAGE_FORMAT_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z19utilBilinearResizerP22UTIL_BASE_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM(void) {
    ALOGD("_Z19utilBilinearResizerP22UTIL_BASE_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM() called");
    return 0;
}

/* Demangled: UtlSetpThreadProp(pthread_attr_t*) */
extern "C" __attribute__((visibility("default"))) int _Z17UtlSetpThreadPropP14pthread_attr_t(void) {
    ALOGD("_Z17UtlSetpThreadPropP14pthread_attr_t() called");
    return 0;
}

/* Demangled: GetEGLImage(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z11GetEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void) {
    ALOGD("_Z11GetEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT() called");
    return 0;
}

/* Demangled: utilTraceEnd() */
extern "C" __attribute__((visibility("default"))) int _Z12utilTraceEndv(void) {
    ALOGD("_Z12utilTraceEndv() called");
    return 0;
}

/* Demangled: igStartRendering(unsigned int, char const*, unsigned int, unsigned int, UTIL_CLIP_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z16igStartRenderingjPKcjjP22UTIL_CLIP_IMAGE_STRUCT(void) {
    ALOGD("_Z16igStartRenderingjPKcjjP22UTIL_CLIP_IMAGE_STRUCT() called");
    return 0;
}

/* Demangled: utilLevmarBcDif(LEVMAR_CAL_STRUCT*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15utilLevmarBcDifP17LEVMAR_CAL_STRUCTi(void) {
    ALOGD("_Z15utilLevmarBcDifP17LEVMAR_CAL_STRUCTi() called");
    return 0;
}

/* Demangled: UtlRgb565ToGray(UTIL_BASE_IMAGE_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z15UtlRgb565ToGrayP22UTIL_BASE_IMAGE_STRUCT(void) {
    ALOGD("_Z15UtlRgb565ToGrayP22UTIL_BASE_IMAGE_STRUCT() called");
    return 0;
}

/* Exported Object: util_atrace_marker_fd */
extern "C" __attribute__((visibility("default"))) void* util_atrace_marker_fd = NULL;

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: utilMatInv(float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10utilMatInvPfS_i(void) {
    ALOGD("_Z10utilMatInvPfS_i() called");
    return 0;
}

/* Demangled: utilAxEqBLu(float*, float*, float*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11utilAxEqBLuPfS_S_ij(void) {
    ALOGD("_Z11utilAxEqBLuPfS_S_ij() called");
    return 0;
}

/* Demangled: utilCholeskyDecomposition_int(int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29utilCholeskyDecomposition_intPijj(void) {
    ALOGD("_Z29utilCholeskyDecomposition_intPijj() called");
    return 0;
}

/* Demangled: igLoadImage(void*, int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11igLoadImagePvijii(void) {
    ALOGD("_Z11igLoadImagePvijii() called");
    return 0;
}

/* Demangled: igLoadShaderBinary(unsigned int*, char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18igLoadShaderBinaryPjPKcij(void) {
    ALOGD("_Z18igLoadShaderBinaryPjPKcij() called");
    return 0;
}

/* Demangled: utilMirror(UTIL_CLIP_IMAGE_STRUCT*, UTIL_CLIP_IMAGE_STRUCT*, UTIL_ANGLE) */
extern "C" __attribute__((visibility("default"))) int _Z10utilMirrorP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE(void) {
    ALOGD("_Z10utilMirrorP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE() called");
    return 0;
}

/* Demangled: CreateGLESContext::GPUContextGetDisplayHandle(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN17CreateGLESContext26GPUContextGetDisplayHandleEPv(void) {
    ALOGD("_ZN17CreateGLESContext26GPUContextGetDisplayHandleEPv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: utilPerf::operator+(utilPerf const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8utilPerfplERKS_(void) {
    ALOGD("_ZN8utilPerfplERKS_() called");
    return 0;
}

/* Demangled: utilTraceAsyncBegin(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z19utilTraceAsyncBeginPKci(void) {
    ALOGD("_Z19utilTraceAsyncBeginPKci() called");
    return 0;
}
