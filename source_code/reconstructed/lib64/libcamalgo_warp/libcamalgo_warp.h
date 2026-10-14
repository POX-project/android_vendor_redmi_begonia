/*
 * Reverse-Engineered ABI Specification for: libcamalgo.warp.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.warp.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_WARP_H
#define BEGONIA_RE_LIBCAMALGO_WARP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10AppCpuWarp15WarpFeatureCtrlEjPvS0_ */
/* Demangled: AppCpuWarp::WarpFeatureCtrl(unsigned int, void*, void*) */
int _ZN10AppCpuWarp15WarpFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN10AppCpuWarpC2Ev */
/* Demangled: AppCpuWarp::AppCpuWarp() */
int _ZN10AppCpuWarpC2Ev(void);

/* Symbol: _ZN14AppGlesWarpExtD1Ev */
/* Demangled: AppGlesWarpExt::~AppGlesWarpExt() */
int _ZN14AppGlesWarpExtD1Ev(void);

/* Symbol: _Z12igReadTargetjjPvj */
/* Demangled: igReadTarget(unsigned int, unsigned int, void*, unsigned int) */
int _Z12igReadTargetjjPvj(void);

/* Symbol: _Z19igLoadFloatingImagePKciii */
/* Demangled: igLoadFloatingImage(char const*, int, int, int) */
int _Z19igLoadFloatingImagePKciii(void);

/* Symbol: _Z6igProciiiiiiii */
/* Demangled: igProc(int, int, int, int, int, int, int, int) */
int _Z6igProciiiiiiii(void);

/* Symbol: _ZN11CoreCpuWarp10CpuWarpingEv */
/* Demangled: CoreCpuWarp::CpuWarping() */
int _ZN11CoreCpuWarp10CpuWarpingEv(void);

/* Symbol: _Z11igCreateVPEiiiiPj */
/* Demangled: igCreateVPE(int, int, int, int, unsigned int*) */
int _Z11igCreateVPEiiiiPj(void);

/* Symbol: _Z14igLoadSubImagePvijiiiiiiPj */
/* Demangled: igLoadSubImage(void*, int, unsigned int, int, int, int, int, int, int, unsigned int*) */
int _Z14igLoadSubImagePvijiiiiiiPj(void);

/* Symbol: _ZN10AppCpuWarp8WarpMainEv */
/* Demangled: AppCpuWarp::WarpMain() */
int _ZN10AppCpuWarp8WarpMainEv(void);

/* Symbol: _ZN14AppGlesWarpExt15destroyInstanceEP10MTKWarpExt */
/* Demangled: AppGlesWarpExt::destroyInstance(MTKWarpExt*) */
int _ZN14AppGlesWarpExt15destroyInstanceEP10MTKWarpExt(void);

/* Symbol: _ZN15CoreGlesWarpExt12InitEGLImageEv */
/* Demangled: CoreGlesWarpExt::InitEGLImage() */
int _ZN15CoreGlesWarpExt12InitEGLImageEv(void);

/* Symbol: _Z11igCheckLinkj */
/* Demangled: igCheckLink(unsigned int) */
int _Z11igCheckLinkj(void);

/* Symbol: _Z16igUpdateSubImagejPaiijj */
/* Demangled: igUpdateSubImage(unsigned int, signed char*, int, int, unsigned int, unsigned int) */
int _Z16igUpdateSubImagejPaiijj(void);

/* Symbol: _Z18igFreeBufferObjectRj */
/* Demangled: igFreeBufferObject(unsigned int&) */
int _Z18igFreeBufferObjectRj(void);

/* Symbol: _ZN14AppGlesWarpExtC1Ev */
/* Demangled: AppGlesWarpExt::AppGlesWarpExt() */
int _ZN14AppGlesWarpExtC1Ev(void);

/* Symbol: _ZN15CoreGlesWarpExt20DestroyShaderProgramEv */
/* Demangled: CoreGlesWarpExt::DestroyShaderProgram() */
int _ZN15CoreGlesWarpExt20DestroyShaderProgramEv(void);

/* Symbol: _Z11igCreateVPEiiiiPjPf */
/* Demangled: igCreateVPE(int, int, int, int, unsigned int*, float*) */
int _Z11igCreateVPEiiiiPjPf(void);

/* Symbol: _Z11igCreateVPEiiiiiiPj */
/* Demangled: igCreateVPE(int, int, int, int, int, int, unsigned int*) */
int _Z11igCreateVPEiiiiiiPj(void);

/* Symbol: _ZN10MTKWarpExt15WarpFeatureCtrlEjPvS0_ */
/* Demangled: MTKWarpExt::WarpFeatureCtrl(unsigned int, void*, void*) */
int _ZN10MTKWarpExt15WarpFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN10MTKWarpExtD1Ev */
/* Demangled: MTKWarpExt::~MTKWarpExt() */
int _ZN10MTKWarpExtD1Ev(void);

/* Symbol: _ZTV10AppCpuWarp */
/* Demangled: vtable for AppCpuWarp */
extern void* _ZTV10AppCpuWarp;

/* Symbol: _ZN14AppGlesWarpExt15WarpFeatureCtrlEjPvS0_ */
/* Demangled: AppGlesWarpExt::WarpFeatureCtrl(unsigned int, void*, void*) */
int _ZN14AppGlesWarpExt15WarpFeatureCtrlEjPvS0_(void);

/* Symbol: _Z6igProciij */
/* Demangled: igProc(int, int, unsigned int) */
int _Z6igProciij(void);

/* Symbol: _ZN10AppCpuWarp9WarpResetEv */
/* Demangled: AppCpuWarp::WarpReset() */
int _ZN10AppCpuWarp9WarpResetEv(void);

/* Symbol: _ZN11CoreCpuWarp14CpuWarpingInitEv */
/* Demangled: CoreCpuWarp::CpuWarpingInit() */
int _ZN11CoreCpuWarp14CpuWarpingInitEv(void);

/* Symbol: _ZN11CoreCpuWarp15CpuWarpingResetEv */
/* Demangled: CoreCpuWarp::CpuWarpingReset() */
int _ZN11CoreCpuWarp15CpuWarpingResetEv(void);

/* Symbol: _Z14igLoadSubImagePKciiiiiii */
/* Demangled: igLoadSubImage(char const*, int, int, int, int, int, int, int) */
int _Z14igLoadSubImagePKciiiiiii(void);

/* Symbol: _Z13WarpingFinishv */
/* Demangled: WarpingFinish() */
int _Z13WarpingFinishv(void);

/* Symbol: _ZN10MTKWarpExt8WarpInitEPjS0_ */
/* Demangled: MTKWarpExt::WarpInit(unsigned int*, unsigned int*) */
int _ZN10MTKWarpExt8WarpInitEPjS0_(void);

/* Symbol: _ZN14AppGlesWarpExt8WarpInitEPjS0_ */
/* Demangled: AppGlesWarpExt::WarpInit(unsigned int*, unsigned int*) */
int _ZN14AppGlesWarpExt8WarpInitEPjS0_(void);

/* Symbol: _Z18igProgramBindImagejPKcjj */
/* Demangled: igProgramBindImage(unsigned int, char const*, unsigned int, unsigned int) */
int _Z18igProgramBindImagejPKcjj(void);

/* Symbol: _ZTV10MTKWarpExt */
/* Demangled: vtable for MTKWarpExt */
extern void* _ZTV10MTKWarpExt;

/* Symbol: _ZN10AppCpuWarpD1Ev */
/* Demangled: AppCpuWarp::~AppCpuWarp() */
int _ZN10AppCpuWarpD1Ev(void);

/* Symbol: _ZTV14AppGlesWarpExt */
/* Demangled: vtable for AppGlesWarpExt */
extern void* _ZTV14AppGlesWarpExt;

/* Symbol: _Z12igLoadShaderPKcj */
/* Demangled: igLoadShader(char const*, unsigned int) */
int _Z12igLoadShaderPKcj(void);

/* Symbol: _Z6igProciiii */
/* Demangled: igProc(int, int, int, int) */
int _Z6igProciiii(void);

/* Symbol: _ZN14AppGlesWarpExtD2Ev */
/* Demangled: AppGlesWarpExt::~AppGlesWarpExt() */
int _ZN14AppGlesWarpExtD2Ev(void);

/* Symbol: _ZN15CoreGlesWarpExt15GlesWarpingInitEv */
/* Demangled: CoreGlesWarpExt::GlesWarpingInit() */
int _ZN15CoreGlesWarpExt15GlesWarpingInitEv(void);

/* Symbol: _ZN15CoreGlesWarpExt16GlesWarpingResetEv */
/* Demangled: CoreGlesWarpExt::GlesWarpingReset() */
int _ZN15CoreGlesWarpExt16GlesWarpingResetEv(void);

/* Symbol: _Z19igLoadFloatingImagePfiiii */
/* Demangled: igLoadFloatingImage(float*, int, int, int, int) */
int _Z19igLoadFloatingImagePfiiii(void);

/* Symbol: _ZN10MTKWarpExt8WarpMainEv */
/* Demangled: MTKWarpExt::WarpMain() */
int _ZN10MTKWarpExt8WarpMainEv(void);

/* Symbol: _ZN14AppGlesWarpExt11getInstanceEv */
/* Demangled: AppGlesWarpExt::getInstance() */
int _ZN14AppGlesWarpExt11getInstanceEv(void);

/* Symbol: _ZN10AppWarpTmp11getInstanceEv */
/* Demangled: AppWarpTmp::getInstance() */
int _ZN10AppWarpTmp11getInstanceEv(void);

/* Symbol: _ZN10AppWarpTmp15destroyInstanceEP10MTKWarpExt */
/* Demangled: AppWarpTmp::destroyInstance(MTKWarpExt*) */
int _ZN10AppWarpTmp15destroyInstanceEP10MTKWarpExt(void);

/* Symbol: _ZN10AppCpuWarpC1Ev */
/* Demangled: AppCpuWarp::AppCpuWarp() */
int _ZN10AppCpuWarpC1Ev(void);

/* Symbol: _ZN14AppGlesWarpExtD0Ev */
/* Demangled: AppGlesWarpExt::~AppGlesWarpExt() */
int _ZN14AppGlesWarpExtD0Ev(void);

/* Symbol: _Z14igUpdateShaderjjj */
/* Demangled: igUpdateShader(unsigned int, unsigned int, unsigned int) */
int _Z14igUpdateShaderjjj(void);

/* Symbol: _Z20igCreateBufferObjectiiRjS_j */
/* Demangled: igCreateBufferObject(int, int, unsigned int&, unsigned int&, unsigned int) */
int _Z20igCreateBufferObjectiiRjS_j(void);

/* Symbol: g_wap_cal_data */
/* Demangled: g_wap_cal_data */
extern void* g_wap_cal_data;

/* Symbol: _ZN14AppGlesWarpExtC2Ev */
/* Demangled: AppGlesWarpExt::AppGlesWarpExt() */
int _ZN14AppGlesWarpExtC2Ev(void);

/* Symbol: _Z14igCheckCompilej */
/* Demangled: igCheckCompile(unsigned int) */
int _Z14igCheckCompilej(void);

/* Symbol: g_wap_sw_cal_data */
/* Demangled: g_wap_sw_cal_data */
extern void* g_wap_sw_cal_data;

/* Symbol: _ZN10MTKWarpExt9WarpResetEv */
/* Demangled: MTKWarpExt::WarpReset() */
int _ZN10MTKWarpExt9WarpResetEv(void);

/* Symbol: _ZN10MTKWarpExtD2Ev */
/* Demangled: MTKWarpExt::~MTKWarpExt() */
int _ZN10MTKWarpExtD2Ev(void);

/* Symbol: _ZTV10AppWarpTmp */
/* Demangled: vtable for AppWarpTmp */
extern void* _ZTV10AppWarpTmp;

/* Symbol: _ZN10AppCpuWarp11getInstanceEv */
/* Demangled: AppCpuWarp::getInstance() */
int _ZN10AppCpuWarp11getInstanceEv(void);

/* Symbol: _ZN10AppCpuWarp15destroyInstanceEP10MTKWarpExt */
/* Demangled: AppCpuWarp::destroyInstance(MTKWarpExt*) */
int _ZN10AppCpuWarp15destroyInstanceEP10MTKWarpExt(void);

/* Symbol: _ZN11CoreCpuWarp14CpuWarpingMainEv */
/* Demangled: CoreCpuWarp::CpuWarpingMain() */
int _ZN11CoreCpuWarp14CpuWarpingMainEv(void);

/* Symbol: _ZN14AppGlesWarpExt8WarpMainEv */
/* Demangled: AppGlesWarpExt::WarpMain() */
int _ZN14AppGlesWarpExt8WarpMainEv(void);

/* Symbol: _ZN15CoreGlesWarpExt15GlesWarpingMainEv */
/* Demangled: CoreGlesWarpExt::GlesWarpingMain() */
int _ZN15CoreGlesWarpExt15GlesWarpingMainEv(void);

/* Symbol: _ZN15CoreGlesWarpExt18CreateShderProgramEPKcS1_ */
/* Demangled: CoreGlesWarpExt::CreateShderProgram(char const*, char const*) */
int _ZN15CoreGlesWarpExt18CreateShderProgramEPKcS1_(void);

/* Symbol: count */
/* Demangled: count */
extern void* count;

/* Symbol: _Z6igProciiiiii */
/* Demangled: igProc(int, int, int, int, int, int) */
int _Z6igProciiiiii(void);

/* Symbol: _ZN10MTKWarpExtD0Ev */
/* Demangled: MTKWarpExt::~MTKWarpExt() */
int _ZN10MTKWarpExtD0Ev(void);

/* Symbol: _ZN10AppCpuWarp8WarpInitEPjS0_ */
/* Demangled: AppCpuWarp::WarpInit(unsigned int*, unsigned int*) */
int _ZN10AppCpuWarp8WarpInitEPjS0_(void);

/* Symbol: _Z16igImageParameterjjii */
/* Demangled: igImageParameter(unsigned int, unsigned int, int, int) */
int _Z16igImageParameterjjii(void);

/* Symbol: _ZN10MTKWarpExt14createInstanceE15DRVWarpObject_s */
/* Demangled: MTKWarpExt::createInstance(DRVWarpObject_s) */
int _ZN10MTKWarpExt14createInstanceE15DRVWarpObject_s(void);

/* Symbol: _Z11WarpingInitPvS_ */
/* Demangled: WarpingInit(void*, void*) */
int _Z11WarpingInitPvS_(void);

/* Symbol: _Z7WarpingiPv */
/* Demangled: Warping(int, void*) */
int _Z7WarpingiPv(void);

/* Symbol: _Z9SwWarpingiPv */
/* Demangled: SwWarping(int, void*) */
int _Z9SwWarpingiPv(void);

/* Symbol: _ZN10AppCpuWarpD2Ev */
/* Demangled: AppCpuWarp::~AppCpuWarp() */
int _ZN10AppCpuWarpD2Ev(void);

/* Symbol: _ZN14AppGlesWarpExt9WarpResetEv */
/* Demangled: AppGlesWarpExt::WarpReset() */
int _ZN14AppGlesWarpExt9WarpResetEv(void);

/* Symbol: _ZN15CoreGlesWarpExt11GlesWarpingEv */
/* Demangled: CoreGlesWarpExt::GlesWarping() */
int _ZN15CoreGlesWarpExt11GlesWarpingEv(void);

/* Symbol: _Z11igCreateVPEiiiiiiPjPf */
/* Demangled: igCreateVPE(int, int, int, int, int, int, unsigned int*, float*) */
int _Z11igCreateVPEiiiiiiPjPf(void);

/* Symbol: _Z15igCreateProgramjjPf */
/* Demangled: igCreateProgram(unsigned int, unsigned int, float*) */
int _Z15igCreateProgramjjPf(void);

/* Symbol: _Z13SwWarpingInitPv */
/* Demangled: SwWarpingInit(void*) */
int _Z13SwWarpingInitPv(void);

/* Symbol: _ZN10AppCpuWarpD0Ev */
/* Demangled: AppCpuWarp::~AppCpuWarp() */
int _ZN10AppCpuWarpD0Ev(void);

/* Symbol: _Z14igLoadSubImagePKciiiii */
/* Demangled: igLoadSubImage(char const*, int, int, int, int, int) */
int _Z14igLoadSubImagePKciiiii(void);

/* Symbol: _Z14igLoadSubImagePvijiiiiii */
/* Demangled: igLoadSubImage(void*, int, unsigned int, int, int, int, int, int, int) */
int _Z14igLoadSubImagePvijiiiiii(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_WARP_H */
