/*
 * Reverse-Engineered Source for: libcamalgo.warp.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_warp"

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
#include "libcamalgo_warp.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: AppCpuWarp::WarpFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarp15WarpFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN10AppCpuWarp15WarpFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: AppCpuWarp::AppCpuWarp() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarpC2Ev(void) {
    ALOGD("_ZN10AppCpuWarpC2Ev() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::~AppGlesWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExtD1Ev(void) {
    ALOGD("_ZN14AppGlesWarpExtD1Ev() called");
    return 0;
}

/* Demangled: igReadTarget(unsigned int, unsigned int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12igReadTargetjjPvj(void) {
    ALOGD("_Z12igReadTargetjjPvj() called");
    return 0;
}

/* Demangled: igLoadFloatingImage(char const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19igLoadFloatingImagePKciii(void) {
    ALOGD("_Z19igLoadFloatingImagePKciii() called");
    return 0;
}

/* Demangled: igProc(int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z6igProciiiiiiii(void) {
    ALOGD("_Z6igProciiiiiiii() called");
    return 0;
}

/* Demangled: CoreCpuWarp::CpuWarping() */
extern "C" __attribute__((visibility("default"))) int _ZN11CoreCpuWarp10CpuWarpingEv(void) {
    ALOGD("_ZN11CoreCpuWarp10CpuWarpingEv() called");
    return 0;
}

/* Demangled: igCreateVPE(int, int, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z11igCreateVPEiiiiPj(void) {
    ALOGD("_Z11igCreateVPEiiiiPj() called");
    return 0;
}

/* Demangled: igLoadSubImage(void*, int, unsigned int, int, int, int, int, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z14igLoadSubImagePvijiiiiiiPj(void) {
    ALOGD("_Z14igLoadSubImagePvijiiiiiiPj() called");
    return 0;
}

/* Demangled: AppCpuWarp::WarpMain() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarp8WarpMainEv(void) {
    ALOGD("_ZN10AppCpuWarp8WarpMainEv() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::destroyInstance(MTKWarpExt*) */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExt15destroyInstanceEP10MTKWarpExt(void) {
    ALOGD("_ZN14AppGlesWarpExt15destroyInstanceEP10MTKWarpExt() called");
    return 0;
}

/* Demangled: CoreGlesWarpExt::InitEGLImage() */
extern "C" __attribute__((visibility("default"))) int _ZN15CoreGlesWarpExt12InitEGLImageEv(void) {
    ALOGD("_ZN15CoreGlesWarpExt12InitEGLImageEv() called");
    return 0;
}

/* Demangled: igCheckLink(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11igCheckLinkj(void) {
    ALOGD("_Z11igCheckLinkj() called");
    return 0;
}

/* Demangled: igUpdateSubImage(unsigned int, signed char*, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16igUpdateSubImagejPaiijj(void) {
    ALOGD("_Z16igUpdateSubImagejPaiijj() called");
    return 0;
}

/* Demangled: igFreeBufferObject(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _Z18igFreeBufferObjectRj(void) {
    ALOGD("_Z18igFreeBufferObjectRj() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::AppGlesWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExtC1Ev(void) {
    ALOGD("_ZN14AppGlesWarpExtC1Ev() called");
    return 0;
}

/* Demangled: CoreGlesWarpExt::DestroyShaderProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN15CoreGlesWarpExt20DestroyShaderProgramEv(void) {
    ALOGD("_ZN15CoreGlesWarpExt20DestroyShaderProgramEv() called");
    return 0;
}

/* Demangled: igCreateVPE(int, int, int, int, unsigned int*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z11igCreateVPEiiiiPjPf(void) {
    ALOGD("_Z11igCreateVPEiiiiPjPf() called");
    return 0;
}

/* Demangled: igCreateVPE(int, int, int, int, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z11igCreateVPEiiiiiiPj(void) {
    ALOGD("_Z11igCreateVPEiiiiiiPj() called");
    return 0;
}

/* Demangled: MTKWarpExt::WarpFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExt15WarpFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN10MTKWarpExt15WarpFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: MTKWarpExt::~MTKWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExtD1Ev(void) {
    ALOGD("_ZN10MTKWarpExtD1Ev() called");
    return 0;
}

/* Exported Object: vtable for AppCpuWarp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AppCpuWarp = NULL;

/* Demangled: AppGlesWarpExt::WarpFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExt15WarpFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN14AppGlesWarpExt15WarpFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: igProc(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z6igProciij(void) {
    ALOGD("_Z6igProciij() called");
    return 0;
}

/* Demangled: AppCpuWarp::WarpReset() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarp9WarpResetEv(void) {
    ALOGD("_ZN10AppCpuWarp9WarpResetEv() called");
    return 0;
}

/* Demangled: CoreCpuWarp::CpuWarpingInit() */
extern "C" __attribute__((visibility("default"))) int _ZN11CoreCpuWarp14CpuWarpingInitEv(void) {
    ALOGD("_ZN11CoreCpuWarp14CpuWarpingInitEv() called");
    return 0;
}

/* Demangled: CoreCpuWarp::CpuWarpingReset() */
extern "C" __attribute__((visibility("default"))) int _ZN11CoreCpuWarp15CpuWarpingResetEv(void) {
    ALOGD("_ZN11CoreCpuWarp15CpuWarpingResetEv() called");
    return 0;
}

/* Demangled: igLoadSubImage(char const*, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14igLoadSubImagePKciiiiiii(void) {
    ALOGD("_Z14igLoadSubImagePKciiiiiii() called");
    return 0;
}

/* Demangled: WarpingFinish() */
extern "C" __attribute__((visibility("default"))) int _Z13WarpingFinishv(void) {
    ALOGD("_Z13WarpingFinishv() called");
    return 0;
}

/* Demangled: MTKWarpExt::WarpInit(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExt8WarpInitEPjS0_(void) {
    ALOGD("_ZN10MTKWarpExt8WarpInitEPjS0_() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::WarpInit(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExt8WarpInitEPjS0_(void) {
    ALOGD("_ZN14AppGlesWarpExt8WarpInitEPjS0_() called");
    return 0;
}

/* Demangled: igProgramBindImage(unsigned int, char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18igProgramBindImagejPKcjj(void) {
    ALOGD("_Z18igProgramBindImagejPKcjj() called");
    return 0;
}

/* Exported Object: vtable for MTKWarpExt */
extern "C" __attribute__((visibility("default"))) void* _ZTV10MTKWarpExt = NULL;

/* Demangled: AppCpuWarp::~AppCpuWarp() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarpD1Ev(void) {
    ALOGD("_ZN10AppCpuWarpD1Ev() called");
    return 0;
}

/* Exported Object: vtable for AppGlesWarpExt */
extern "C" __attribute__((visibility("default"))) void* _ZTV14AppGlesWarpExt = NULL;

/* Demangled: igLoadShader(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12igLoadShaderPKcj(void) {
    ALOGD("_Z12igLoadShaderPKcj() called");
    return 0;
}

/* Demangled: igProc(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z6igProciiii(void) {
    ALOGD("_Z6igProciiii() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::~AppGlesWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExtD2Ev(void) {
    ALOGD("_ZN14AppGlesWarpExtD2Ev() called");
    return 0;
}

/* Demangled: CoreGlesWarpExt::GlesWarpingInit() */
extern "C" __attribute__((visibility("default"))) int _ZN15CoreGlesWarpExt15GlesWarpingInitEv(void) {
    ALOGD("_ZN15CoreGlesWarpExt15GlesWarpingInitEv() called");
    return 0;
}

/* Demangled: CoreGlesWarpExt::GlesWarpingReset() */
extern "C" __attribute__((visibility("default"))) int _ZN15CoreGlesWarpExt16GlesWarpingResetEv(void) {
    ALOGD("_ZN15CoreGlesWarpExt16GlesWarpingResetEv() called");
    return 0;
}

/* Demangled: igLoadFloatingImage(float*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19igLoadFloatingImagePfiiii(void) {
    ALOGD("_Z19igLoadFloatingImagePfiiii() called");
    return 0;
}

/* Demangled: MTKWarpExt::WarpMain() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExt8WarpMainEv(void) {
    ALOGD("_ZN10MTKWarpExt8WarpMainEv() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExt11getInstanceEv(void) {
    ALOGD("_ZN14AppGlesWarpExt11getInstanceEv() called");
    return 0;
}

/* Demangled: AppWarpTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppWarpTmp11getInstanceEv(void) {
    ALOGD("_ZN10AppWarpTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: AppWarpTmp::destroyInstance(MTKWarpExt*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppWarpTmp15destroyInstanceEP10MTKWarpExt(void) {
    ALOGD("_ZN10AppWarpTmp15destroyInstanceEP10MTKWarpExt() called");
    return 0;
}

/* Demangled: AppCpuWarp::AppCpuWarp() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarpC1Ev(void) {
    ALOGD("_ZN10AppCpuWarpC1Ev() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::~AppGlesWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExtD0Ev(void) {
    ALOGD("_ZN14AppGlesWarpExtD0Ev() called");
    return 0;
}

/* Demangled: igUpdateShader(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14igUpdateShaderjjj(void) {
    ALOGD("_Z14igUpdateShaderjjj() called");
    return 0;
}

/* Demangled: igCreateBufferObject(int, int, unsigned int&, unsigned int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20igCreateBufferObjectiiRjS_j(void) {
    ALOGD("_Z20igCreateBufferObjectiiRjS_j() called");
    return 0;
}

/* Exported Object: g_wap_cal_data */
extern "C" __attribute__((visibility("default"))) void* g_wap_cal_data = NULL;

/* Demangled: AppGlesWarpExt::AppGlesWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExtC2Ev(void) {
    ALOGD("_ZN14AppGlesWarpExtC2Ev() called");
    return 0;
}

/* Demangled: igCheckCompile(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14igCheckCompilej(void) {
    ALOGD("_Z14igCheckCompilej() called");
    return 0;
}

/* Exported Object: g_wap_sw_cal_data */
extern "C" __attribute__((visibility("default"))) void* g_wap_sw_cal_data = NULL;

/* Demangled: MTKWarpExt::WarpReset() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExt9WarpResetEv(void) {
    ALOGD("_ZN10MTKWarpExt9WarpResetEv() called");
    return 0;
}

/* Demangled: MTKWarpExt::~MTKWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExtD2Ev(void) {
    ALOGD("_ZN10MTKWarpExtD2Ev() called");
    return 0;
}

/* Exported Object: vtable for AppWarpTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AppWarpTmp = NULL;

/* Demangled: AppCpuWarp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarp11getInstanceEv(void) {
    ALOGD("_ZN10AppCpuWarp11getInstanceEv() called");
    return 0;
}

/* Demangled: AppCpuWarp::destroyInstance(MTKWarpExt*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarp15destroyInstanceEP10MTKWarpExt(void) {
    ALOGD("_ZN10AppCpuWarp15destroyInstanceEP10MTKWarpExt() called");
    return 0;
}

/* Demangled: CoreCpuWarp::CpuWarpingMain() */
extern "C" __attribute__((visibility("default"))) int _ZN11CoreCpuWarp14CpuWarpingMainEv(void) {
    ALOGD("_ZN11CoreCpuWarp14CpuWarpingMainEv() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::WarpMain() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExt8WarpMainEv(void) {
    ALOGD("_ZN14AppGlesWarpExt8WarpMainEv() called");
    return 0;
}

/* Demangled: CoreGlesWarpExt::GlesWarpingMain() */
extern "C" __attribute__((visibility("default"))) int _ZN15CoreGlesWarpExt15GlesWarpingMainEv(void) {
    ALOGD("_ZN15CoreGlesWarpExt15GlesWarpingMainEv() called");
    return 0;
}

/* Demangled: CoreGlesWarpExt::CreateShderProgram(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15CoreGlesWarpExt18CreateShderProgramEPKcS1_(void) {
    ALOGD("_ZN15CoreGlesWarpExt18CreateShderProgramEPKcS1_() called");
    return 0;
}

/* Exported Object: count */
extern "C" __attribute__((visibility("default"))) void* count = NULL;

/* Demangled: igProc(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z6igProciiiiii(void) {
    ALOGD("_Z6igProciiiiii() called");
    return 0;
}

/* Demangled: MTKWarpExt::~MTKWarpExt() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExtD0Ev(void) {
    ALOGD("_ZN10MTKWarpExtD0Ev() called");
    return 0;
}

/* Demangled: AppCpuWarp::WarpInit(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarp8WarpInitEPjS0_(void) {
    ALOGD("_ZN10AppCpuWarp8WarpInitEPjS0_() called");
    return 0;
}

/* Demangled: igImageParameter(unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16igImageParameterjjii(void) {
    ALOGD("_Z16igImageParameterjjii() called");
    return 0;
}

/* Demangled: MTKWarpExt::createInstance(DRVWarpObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKWarpExt14createInstanceE15DRVWarpObject_s(void) {
    ALOGD("_ZN10MTKWarpExt14createInstanceE15DRVWarpObject_s() called");
    return 0;
}

/* Demangled: WarpingInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z11WarpingInitPvS_(void) {
    ALOGD("_Z11WarpingInitPvS_() called");
    return 0;
}

/* Demangled: Warping(int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z7WarpingiPv(void) {
    ALOGD("_Z7WarpingiPv() called");
    return 0;
}

/* Demangled: SwWarping(int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z9SwWarpingiPv(void) {
    ALOGD("_Z9SwWarpingiPv() called");
    return 0;
}

/* Demangled: AppCpuWarp::~AppCpuWarp() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarpD2Ev(void) {
    ALOGD("_ZN10AppCpuWarpD2Ev() called");
    return 0;
}

/* Demangled: AppGlesWarpExt::WarpReset() */
extern "C" __attribute__((visibility("default"))) int _ZN14AppGlesWarpExt9WarpResetEv(void) {
    ALOGD("_ZN14AppGlesWarpExt9WarpResetEv() called");
    return 0;
}

/* Demangled: CoreGlesWarpExt::GlesWarping() */
extern "C" __attribute__((visibility("default"))) int _ZN15CoreGlesWarpExt11GlesWarpingEv(void) {
    ALOGD("_ZN15CoreGlesWarpExt11GlesWarpingEv() called");
    return 0;
}

/* Demangled: igCreateVPE(int, int, int, int, int, int, unsigned int*, float*) */
extern "C" __attribute__((visibility("default"))) int _Z11igCreateVPEiiiiiiPjPf(void) {
    ALOGD("_Z11igCreateVPEiiiiiiPjPf() called");
    return 0;
}

/* Demangled: igCreateProgram(unsigned int, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _Z15igCreateProgramjjPf(void) {
    ALOGD("_Z15igCreateProgramjjPf() called");
    return 0;
}

/* Demangled: SwWarpingInit(void*) */
extern "C" __attribute__((visibility("default"))) int _Z13SwWarpingInitPv(void) {
    ALOGD("_Z13SwWarpingInitPv() called");
    return 0;
}

/* Demangled: AppCpuWarp::~AppCpuWarp() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppCpuWarpD0Ev(void) {
    ALOGD("_ZN10AppCpuWarpD0Ev() called");
    return 0;
}

/* Demangled: igLoadSubImage(char const*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14igLoadSubImagePKciiiii(void) {
    ALOGD("_Z14igLoadSubImagePKciiiii() called");
    return 0;
}

/* Demangled: igLoadSubImage(void*, int, unsigned int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14igLoadSubImagePvijiiiiii(void) {
    ALOGD("_Z14igLoadSubImagePvijiiiiii() called");
    return 0;
}
