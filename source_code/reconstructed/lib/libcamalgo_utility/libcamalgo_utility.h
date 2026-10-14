/*
 * Reverse-Engineered ABI Specification for: libcamalgo.utility.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.utility.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_UTILITY_H
#define BEGONIA_RE_LIBCAMALGO_UTILITY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z8utilBlurPhP22UTIL_CLIP_IMAGE_STRUCT */
/* Demangled: utilBlur(unsigned char*, UTIL_CLIP_IMAGE_STRUCT*) */
int _Z8utilBlurPhP22UTIL_CLIP_IMAGE_STRUCT(void);

/* Symbol: _Z12utilVecScalePfPKff */
/* Demangled: utilVecScale(float*, float const*, float) */
int _Z12utilVecScalePfPKff(void);

/* Symbol: _Z13utilImageClipP22UTIL_CLIP_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM */
/* Demangled: utilImageClip(UTIL_CLIP_IMAGE_STRUCT*, UTIL_CLIP_IMAGE_STRUCT*, UTL_IMAGE_FORMAT_ENUM) */
int _Z13utilImageClipP22UTIL_CLIP_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM(void);

/* Symbol: _Z17utilTraceInitOncev */
/* Demangled: utilTraceInitOnce() */
int _Z17utilTraceInitOncev(void);

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: _Z9utilSobelPjP22UTIL_CLIP_IMAGE_STRUCT */
/* Demangled: utilSobel(unsigned int*, UTIL_CLIP_IMAGE_STRUCT*) */
int _Z9utilSobelPjP22UTIL_CLIP_IMAGE_STRUCT(void);

/* Symbol: _Z13UtlMetTagInitv */
/* Demangled: UtlMetTagInit() */
int _Z13UtlMetTagInitv(void);

/* Symbol: _Z8ConvolvePK22UTIL_BASE_IMAGE_STRUCTS1_PS_ */
/* Demangled: Convolve(UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT*) */
int _Z8ConvolvePK22UTIL_BASE_IMAGE_STRUCTS1_PS_(void);

/* Symbol: _Z11igFreeImagejPKj */
/* Demangled: igFreeImage(unsigned int, unsigned int const*) */
int _Z11igFreeImagejPKj(void);

/* Symbol: _Z15igCreateProgramPjjjPf */
/* Demangled: igCreateProgram(unsigned int*, unsigned int, unsigned int, float*) */
int _Z15igCreateProgramPjjjPf(void);

/* Symbol: _Z14utilBoxProjectPfS_S_i */
/* Demangled: utilBoxProject(float*, float*, float*, int) */
int _Z14utilBoxProjectPfS_S_i(void);

/* Symbol: _Z15utilLevmarBcDerP17LEVMAR_CAL_STRUCTi */
/* Demangled: utilLevmarBcDer(LEVMAR_CAL_STRUCT*, int) */
int _Z15utilLevmarBcDerP17LEVMAR_CAL_STRUCTi(void);

/* Symbol: _Z18utilLevmarBoxCheckPfS_i */
/* Demangled: utilLevmarBoxCheck(float*, float*, int) */
int _Z18utilLevmarBoxCheckPfS_i(void);

/* Symbol: _Z8utilCosEf */
/* Demangled: utilCosE(float) */
int _Z8utilCosEf(void);

/* Symbol: _Z12utilImageSadP21UTIL_IMAGE_SAD_STRUCTPjS1_ */
/* Demangled: utilImageSad(UTIL_IMAGE_SAD_STRUCT*, unsigned int*, unsigned int*) */
int _Z12utilImageSadP21UTIL_IMAGE_SAD_STRUCTPjS1_(void);

/* Symbol: _Z11igCreateVPEPiS_P7vtx_fmtPtPj */
/* Demangled: igCreateVPE(int*, int*, vtx_fmt*, unsigned short*, unsigned int*) */
int _Z11igCreateVPEPiS_P7vtx_fmtPtPj(void);

/* Symbol: _Z18igLoadShaderStringPjPKcj */
/* Demangled: igLoadShaderString(unsigned int*, char const*, unsigned int) */
int _Z18igLoadShaderStringPjPKcj(void);

/* Symbol: _Z10utilMatMulPfS_S_ */
/* Demangled: utilMatMul(float*, float*, float*) */
int _Z10utilMatMulPfS_S_(void);

/* Symbol: _Z12utilFastLog2f */
/* Demangled: utilFastLog2(float) */
int _Z12utilFastLog2f(void);

/* Symbol: _ZN17CreateGLESContext16GPUContextCreateE28MTK_GPU_CONTEXT_VERSION_ENUM */
/* Demangled: CreateGLESContext::GPUContextCreate(MTK_GPU_CONTEXT_VERSION_ENUM) */
int _ZN17CreateGLESContext16GPUContextCreateE28MTK_GPU_CONTEXT_VERSION_ENUM(void);

/* Symbol: _ZN17CreateGLESContextC1Ev */
/* Demangled: CreateGLESContext::CreateGLESContext() */
int _ZN17CreateGLESContextC1Ev(void);

/* Symbol: _Z13utilMatVecMulPfS_S_ */
/* Demangled: utilMatVecMul(float*, float*, float*) */
int _Z13utilMatVecMulPfS_S_(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z15UtlMetTagUninitv */
/* Demangled: UtlMetTagUninit() */
int _Z15UtlMetTagUninitv(void);

/* Symbol: _ZN17CreateGLESContextC2Ev */
/* Demangled: CreateGLESContext::CreateGLESContext() */
int _ZN17CreateGLESContextC2Ev(void);

/* Symbol: _ZN17CreateGLESContextD1Ev */
/* Demangled: CreateGLESContext::~CreateGLESContext() */
int _ZN17CreateGLESContextD1Ev(void);

/* Symbol: _Z15DestroyEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT */
/* Demangled: DestroyEGLImage(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
int _Z15DestroyEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void);

/* Symbol: _Z11utilxmul_64iij */
/* Demangled: utilxmul_64(int, int, unsigned int) */
int _Z11utilxmul_64iij(void);

/* Symbol: _Z8utilSinEf */
/* Demangled: utilSinE(float) */
int _Z8utilSinEf(void);

/* Symbol: _Z9utilPow3Ef */
/* Demangled: utilPow3E(float) */
int _Z9utilPow3Ef(void);

/* Symbol: _Z17UtlRGBA8888toGreyP20UTIL_MP_IMAGE_STRUCTPv */
/* Demangled: UtlRGBA8888toGrey(UTIL_MP_IMAGE_STRUCT*, void*) */
int _Z17UtlRGBA8888toGreyP20UTIL_MP_IMAGE_STRUCTPv(void);

/* Symbol: _Z17UtlRGBA8888toGreyP22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlRGBA8888toGrey(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z17UtlRGBA8888toGreyP22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z16tpq_group_createiiPKc */
/* Demangled: tpq_group_create(int, int, char const*) */
int _Z16tpq_group_createiiPKc(void);

/* Symbol: _ZN17CreateGLESContextD2Ev */
/* Demangled: CreateGLESContext::~CreateGLESContext() */
int _ZN17CreateGLESContextD2Ev(void);

/* Symbol: _Z17GetCornerResponsePaS_i */
/* Demangled: GetCornerResponse(signed char*, signed char*, int) */
int _Z17GetCornerResponsePaS_i(void);

/* Symbol: _Z13UtlI420toYUYVP22UTIL_BASE_IMAGE_STRUCTS0_ */
/* Demangled: UtlI420toYUYV(UTIL_BASE_IMAGE_STRUCT*, UTIL_BASE_IMAGE_STRUCT*) */
int _Z13UtlI420toYUYVP22UTIL_BASE_IMAGE_STRUCTS0_(void);

/* Symbol: _Z13UtlYUYVtoI420P22UTIL_BASE_IMAGE_STRUCTS0_ */
/* Demangled: UtlYUYVtoI420(UTIL_BASE_IMAGE_STRUCT*, UTIL_BASE_IMAGE_STRUCT*) */
int _Z13UtlYUYVtoI420P22UTIL_BASE_IMAGE_STRUCTS0_(void);

/* Symbol: _Z12utilTimeToMSy */
/* Demangled: utilTimeToMS(unsigned long long) */
int _Z12utilTimeToMSy(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _Z10utilFloorff */
/* Demangled: utilFloorf(float) */
int _Z10utilFloorff(void);

/* Symbol: _Z15utilforElim_intPKiPijj */
/* Demangled: utilforElim_int(int const*, int*, unsigned int, unsigned int) */
int _Z15utilforElim_intPKiPijj(void);

/* Symbol: _Z8utilxdiviij */
/* Demangled: utilxdiv(int, int, unsigned int) */
int _Z8utilxdiviij(void);

/* Symbol: _Z13UtlNV21toYV12P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlNV21toYV12(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z13UtlNV21toYV12P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z13UtlYV12toNV21P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlYV12toNV21(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z13UtlYV12toNV21P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z13utilPrintPerfP8utilPerfPKc */
/* Demangled: utilPrintPerf(utilPerf*, char const*) */
int _Z13utilPrintPerfP8utilPerfPKc(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _Z11utilinversePfjS_ */
/* Demangled: utilinverse(float*, unsigned int, float*) */
int _Z11utilinversePfjS_(void);

/* Symbol: _Z14ImageSubstractPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_ */
/* Demangled: ImageSubstract(UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT const*, int, UTIL_BASE_IMAGE_STRUCT*) */
int _Z14ImageSubstractPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _Z13utilQuickSortPfii */
/* Demangled: utilQuickSort(float*, int, int) */
int _Z13utilQuickSortPfii(void);

/* Symbol: _Z8ImageAddPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_ */
/* Demangled: ImageAdd(UTIL_BASE_IMAGE_STRUCT const*, UTIL_BASE_IMAGE_STRUCT const*, int, UTIL_BASE_IMAGE_STRUCT*) */
int _Z8ImageAddPK22UTIL_BASE_IMAGE_STRUCTS1_iPS_(void);

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: _Z16UtlMetTagOneShotjPKcj */
/* Demangled: UtlMetTagOneShot(unsigned int, char const*, unsigned int) */
int _Z16UtlMetTagOneShotjPKcj(void);

/* Symbol: _Z10tpq_createiPKc */
/* Demangled: tpq_create(int, char const*) */
int _Z10tpq_createiPKc(void);

/* Symbol: _Z15utilLmbcDifJacfPfP17LEVMAR_CAL_STRUCT */
/* Demangled: utilLmbcDifJacf(float*, LEVMAR_CAL_STRUCT*) */
int _Z15utilLmbcDifJacfPfP17LEVMAR_CAL_STRUCT(void);

/* Symbol: _Z19utilsolveLS_Sym_intPiS_jj */
/* Demangled: utilsolveLS_Sym_int(int*, int*, unsigned int, unsigned int) */
int _Z19utilsolveLS_Sym_intPiS_jj(void);

/* Symbol: _Z7vmemsetPvij */
/* Demangled: vmemset(void*, int, unsigned int) */
int _Z7vmemsetPvij(void);

/* Symbol: _Z15utilStopCaptureP8utilPerf */
/* Demangled: utilStopCapture(utilPerf*) */
int _Z15utilStopCaptureP8utilPerf(void);

/* Symbol: _Z17utilTraceAsyncEndPKci */
/* Demangled: utilTraceAsyncEnd(char const*, int) */
int _Z17utilTraceAsyncEndPKci(void);

/* Symbol: _Z17utiltranspose_intPij */
/* Demangled: utiltranspose_int(int*, unsigned int) */
int _Z17utiltranspose_intPij(void);

/* Symbol: _Z14UtlMetTagStartjPKc */
/* Demangled: UtlMetTagStart(unsigned int, char const*) */
int _Z14UtlMetTagStartjPKc(void);

/* Symbol: _Z10utilLnsrchPvS_P17LEVMAR_CAL_STRUCT */
/* Demangled: utilLnsrch(void*, void*, LEVMAR_CAL_STRUCT*) */
int _Z10utilLnsrchPvS_P17LEVMAR_CAL_STRUCT(void);

/* Symbol: _Z14utilLevmarInitP17LEVMAR_CAL_STRUCTPviiPFvPfS2_E */
/* Demangled: utilLevmarInit(LEVMAR_CAL_STRUCT*, void*, int, int, void (*)(float*, float*)) */
int _Z14utilLevmarInitP17LEVMAR_CAL_STRUCTPviiPFvPfS2_E(void);

/* Symbol: _Z17UtlI420toRGBA8888P20UTIL_MP_IMAGE_STRUCTPv */
/* Demangled: UtlI420toRGBA8888(UTIL_MP_IMAGE_STRUCT*, void*) */
int _Z17UtlI420toRGBA8888P20UTIL_MP_IMAGE_STRUCTPv(void);

/* Symbol: _Z17UtlI420toRGBA8888P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlI420toRGBA8888(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z17UtlI420toRGBA8888P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z17UtlRGBA8888toI420P20UTIL_MP_IMAGE_STRUCTPv */
/* Demangled: UtlRGBA8888toI420(UTIL_MP_IMAGE_STRUCT*, void*) */
int _Z17UtlRGBA8888toI420P20UTIL_MP_IMAGE_STRUCTPv(void);

/* Symbol: _Z17UtlRGBA8888toI420P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlRGBA8888toI420(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z17UtlRGBA8888toI420P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z8tpq_execP4tpq_j */
/* Demangled: tpq_exec(tpq_*, unsigned int) */
int _Z8tpq_execP4tpq_j(void);

/* Symbol: _Z25utilLevmarTransMatMatMultPfS_ii */
/* Demangled: utilLevmarTransMatMatMult(float*, float*, int, int) */
int _Z25utilLevmarTransMatMatMultPfS_ii(void);

/* Symbol: _Z8utilSqrtjj */
/* Demangled: utilSqrt(unsigned int, unsigned int) */
int _Z8utilSqrtjj(void);

/* Symbol: _Z10utilRotateP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE */
/* Demangled: utilRotate(UTIL_CLIP_IMAGE_STRUCT*, UTIL_CLIP_IMAGE_STRUCT*, UTIL_ANGLE) */
int _Z10utilRotateP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE(void);

/* Symbol: _Z18tpq_add_group_workiP4tpq_PFPvS1_P6rtinfoES1_ */
/* Demangled: tpq_add_group_work(int, tpq_*, void* (*)(void*, rtinfo*), void*) */
int _Z18tpq_add_group_workiP4tpq_PFPvS1_P6rtinfoES1_(void);

/* Symbol: _Z18GetEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT */
/* Demangled: GetEGLImageTexture(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
int _Z18GetEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _Z12utilInitPerfP8utilPerf */
/* Demangled: utilInitPerf(utilPerf*) */
int _Z12utilInitPerfP8utilPerf(void);

/* Symbol: _Z14utilTraceBeginPKc */
/* Demangled: utilTraceBegin(char const*) */
int _Z14utilTraceBeginPKc(void);

/* Symbol: _Z18utilTraceTerminatev */
/* Demangled: utilTraceTerminate() */
int _Z18utilTraceTerminatev(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z21utilPartialDerivativePaS_P22UTIL_BASE_IMAGE_STRUCT */
/* Demangled: utilPartialDerivative(signed char*, signed char*, UTIL_BASE_IMAGE_STRUCT*) */
int _Z21utilPartialDerivativePaS_P22UTIL_BASE_IMAGE_STRUCT(void);

/* Symbol: _Z18utilHarrisDetectorP22UTIL_CLIP_IMAGE_STRUCTPaS1_Pi */
/* Demangled: utilHarrisDetector(UTIL_CLIP_IMAGE_STRUCT*, signed char*, signed char*, int*) */
int _Z18utilHarrisDetectorP22UTIL_CLIP_IMAGE_STRUCTPaS1_Pi(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _Z12igFreeShaderj */
/* Demangled: igFreeShader(unsigned int) */
int _Z12igFreeShaderj(void);

/* Symbol: _Z20igCreateBufferObjectiiRjS_ */
/* Demangled: igCreateBufferObject(int, int, unsigned int&, unsigned int&) */
int _Z20igCreateBufferObjectiiRjS_(void);

/* Symbol: _Z7utilPowff */
/* Demangled: utilPow(float, float) */
int _Z7utilPowff(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _Z13igFreeProgramj */
/* Demangled: igFreeProgram(unsigned int) */
int _Z13igFreeProgramj(void);

/* Symbol: _Z15UtlI420toRGB888P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlI420toRGB888(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z15UtlI420toRGB888P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z15UtlRGB888toI420P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlRGB888toI420(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z15UtlRGB888toI420P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z11tpq_destroyP4tpq_ */
/* Demangled: tpq_destroy(tpq_*) */
int _Z11tpq_destroyP4tpq_(void);

/* Symbol: _ZN17CreateGLESContext17GPUContextDestroyEv */
/* Demangled: CreateGLESContext::GPUContextDestroy() */
int _ZN17CreateGLESContext17GPUContextDestroyEv(void);

/* Symbol: _Z8utilSwapPfS_ */
/* Demangled: utilSwap(float*, float*) */
int _Z8utilSwapPfS_(void);

/* Symbol: _Z12UtlMetTagEndjPKc */
/* Demangled: UtlMetTagEnd(unsigned int, char const*) */
int _Z12UtlMetTagEndjPKc(void);

/* Symbol: _Z12tpq_add_workP4tpq_PFPvS1_P6rtinfoES1_ */
/* Demangled: tpq_add_work(tpq_*, void* (*)(void*, rtinfo*), void*) */
int _Z12tpq_add_workP4tpq_PFPvS1_P6rtinfoES1_(void);

/* Symbol: _Z22DestroyEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT */
/* Demangled: DestroyEGLImageTexture(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
int _Z22DestroyEGLImageTextureP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _Z11igLoadImagePvijiiPj */
/* Demangled: igLoadImage(void*, int, unsigned int, int, int, unsigned int*) */
int _Z11igLoadImagePvijiiPj(void);

/* Symbol: _Z18igFreeBufferObjectRjS_ */
/* Demangled: igFreeBufferObject(unsigned int&, unsigned int&) */
int _Z18igFreeBufferObjectRjS_(void);

/* Symbol: _Z15utilbackSub_intPKiPijj */
/* Demangled: utilbackSub_int(int const*, int*, unsigned int, unsigned int) */
int _Z15utilbackSub_intPKiPijj(void);

/* Symbol: _Z18utilLevmarL2nrmxmyPfS_S_i */
/* Demangled: utilLevmarL2nrmxmy(float*, float*, float*, int) */
int _Z18utilLevmarL2nrmxmyPfS_S_i(void);

/* Symbol: _Z13UtlI420toNV21P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlI420toNV21(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z13UtlI420toNV21P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z13UtlNV21toI420P22UTIL_BASE_IMAGE_STRUCTPv */
/* Demangled: UtlNV21toI420(UTIL_BASE_IMAGE_STRUCT*, void*) */
int _Z13UtlNV21toI420P22UTIL_BASE_IMAGE_STRUCTPv(void);

/* Symbol: _Z7vmemcpyPvS_j */
/* Demangled: vmemcpy(void*, void*, unsigned int) */
int _Z7vmemcpyPvS_j(void);

/* Symbol: _Z16utilStartCaptureP8utilPerf */
/* Demangled: utilStartCapture(utilPerf*) */
int _Z16utilStartCaptureP8utilPerf(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _Z9igFreeVPEPKj */
/* Demangled: igFreeVPE(unsigned int const*) */
int _Z9igFreeVPEPKj(void);

/* Symbol: _Z25utilLevmarBufferSizeQueryiiii */
/* Demangled: utilLevmarBufferSizeQuery(int, int, int, int) */
int _Z25utilLevmarBufferSizeQueryiiii(void);

/* Symbol: util_atrace_log_enable */
/* Demangled: util_atrace_log_enable */
extern void* util_atrace_log_enable;

/* Symbol: _Z19utilBilinearResizerP22UTIL_BASE_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM */
/* Demangled: utilBilinearResizer(UTIL_BASE_IMAGE_STRUCT*, UTIL_BASE_IMAGE_STRUCT*, UTL_IMAGE_FORMAT_ENUM) */
int _Z19utilBilinearResizerP22UTIL_BASE_IMAGE_STRUCTS0_21UTL_IMAGE_FORMAT_ENUM(void);

/* Symbol: _Z17UtlSetpThreadPropP14pthread_attr_t */
/* Demangled: UtlSetpThreadProp(pthread_attr_t*) */
int _Z17UtlSetpThreadPropP14pthread_attr_t(void);

/* Symbol: _Z11GetEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT */
/* Demangled: GetEGLImage(UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT*) */
int _Z11GetEGLImageP36UTIL_EGLIMAGE_IO_TEXTURE_PARA_STRUCT(void);

/* Symbol: _Z12utilTraceEndv */
/* Demangled: utilTraceEnd() */
int _Z12utilTraceEndv(void);

/* Symbol: _Z16igStartRenderingjPKcjjP22UTIL_CLIP_IMAGE_STRUCT */
/* Demangled: igStartRendering(unsigned int, char const*, unsigned int, unsigned int, UTIL_CLIP_IMAGE_STRUCT*) */
int _Z16igStartRenderingjPKcjjP22UTIL_CLIP_IMAGE_STRUCT(void);

/* Symbol: _Z15utilLevmarBcDifP17LEVMAR_CAL_STRUCTi */
/* Demangled: utilLevmarBcDif(LEVMAR_CAL_STRUCT*, int) */
int _Z15utilLevmarBcDifP17LEVMAR_CAL_STRUCTi(void);

/* Symbol: _Z15UtlRgb565ToGrayP22UTIL_BASE_IMAGE_STRUCT */
/* Demangled: UtlRgb565ToGray(UTIL_BASE_IMAGE_STRUCT*) */
int _Z15UtlRgb565ToGrayP22UTIL_BASE_IMAGE_STRUCT(void);

/* Symbol: util_atrace_marker_fd */
/* Demangled: util_atrace_marker_fd */
extern void* util_atrace_marker_fd;

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _Z10utilMatInvPfS_i */
/* Demangled: utilMatInv(float*, float*, int) */
int _Z10utilMatInvPfS_i(void);

/* Symbol: _Z11utilAxEqBLuPfS_S_ij */
/* Demangled: utilAxEqBLu(float*, float*, float*, int, unsigned int) */
int _Z11utilAxEqBLuPfS_S_ij(void);

/* Symbol: _Z29utilCholeskyDecomposition_intPijj */
/* Demangled: utilCholeskyDecomposition_int(int*, unsigned int, unsigned int) */
int _Z29utilCholeskyDecomposition_intPijj(void);

/* Symbol: _Z11igLoadImagePvijii */
/* Demangled: igLoadImage(void*, int, unsigned int, int, int) */
int _Z11igLoadImagePvijii(void);

/* Symbol: _Z18igLoadShaderBinaryPjPKcij */
/* Demangled: igLoadShaderBinary(unsigned int*, char const*, int, unsigned int) */
int _Z18igLoadShaderBinaryPjPKcij(void);

/* Symbol: _Z10utilMirrorP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE */
/* Demangled: utilMirror(UTIL_CLIP_IMAGE_STRUCT*, UTIL_CLIP_IMAGE_STRUCT*, UTIL_ANGLE) */
int _Z10utilMirrorP22UTIL_CLIP_IMAGE_STRUCTS0_10UTIL_ANGLE(void);

/* Symbol: _ZN17CreateGLESContext26GPUContextGetDisplayHandleEPv */
/* Demangled: CreateGLESContext::GPUContextGetDisplayHandle(void*) */
int _ZN17CreateGLESContext26GPUContextGetDisplayHandleEPv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN8utilPerfplERKS_ */
/* Demangled: utilPerf::operator+(utilPerf const&) */
int _ZN8utilPerfplERKS_(void);

/* Symbol: _Z19utilTraceAsyncBeginPKci */
/* Demangled: utilTraceAsyncBegin(char const*, int) */
int _Z19utilTraceAsyncBeginPKci(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_UTILITY_H */
