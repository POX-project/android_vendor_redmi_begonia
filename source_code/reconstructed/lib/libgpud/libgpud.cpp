/*
 * Reverse-Engineered Source for: libgpud.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgpud"

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
#include "libgpud.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: GPUDBufferMapper::lockBuffer(ANativeWindowBuffer const*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN16GPUDBufferMapper10lockBufferEPK19ANativeWindowBufferPPv(void) {
    ALOGD("_ZN16GPUDBufferMapper10lockBufferEPK19ANativeWindowBufferPPv() called");
    return 0;
}

/* Demangled: gpudGetProcessInfo */
extern "C" __attribute__((visibility("default"))) int gpudGetProcessInfo(void) {
    ALOGD("gpudGetProcessInfo() called");
    return 0;
}

/* Demangled: gpudGlDumpBindFramebuffer */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpBindFramebuffer(void) {
    ALOGD("gpudGlDumpBindFramebuffer() called");
    return 0;
}

/* Demangled: gpudVkHackGetPhysicalDeviceQueueFamilyProperties2 */
extern "C" __attribute__((visibility("default"))) int gpudVkHackGetPhysicalDeviceQueueFamilyProperties2(void) {
    ALOGD("gpudVkHackGetPhysicalDeviceQueueFamilyProperties2() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::mapGralloc1Error(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapper16mapGralloc1ErrorEi(void) {
    ALOGD("_ZN17GrallocHalWrapper16mapGralloc1ErrorEi() called");
    return 0;
}

/* Demangled: gpudGlHackClearDepthf */
extern "C" __attribute__((visibility("default"))) int gpudGlHackClearDepthf(void) {
    ALOGD("gpudGlHackClearDepthf() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::Singleton<GPUDBufferMapper>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GPUDBufferMapperE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI16GPUDBufferMapperE11hasInstanceEv() called");
    return 0;
}

/* Demangled: gpudGlDumpFramebuffer */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpFramebuffer(void) {
    ALOGD("gpudGlDumpFramebuffer() called");
    return 0;
}

/* Demangled: gpudGlDumpCopyTexImage2D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpCopyTexImage2D(void) {
    ALOGD("gpudGlDumpCopyTexImage2D() called");
    return 0;
}

/* Demangled: GPUDGralloc2Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc2Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK18GPUDGralloc2Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: GPUDGralloc2Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc2Mapper8isLoadedEv(void) {
    ALOGD("_ZNK18GPUDGralloc2Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv() called");
    return 0;
}

/* Demangled: android::Singleton<GPUDBufferMapper>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GPUDBufferMapperEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI16GPUDBufferMapperEC1Ev() called");
    return 0;
}

/* Demangled: gpudGlHackUseProgram */
extern "C" __attribute__((visibility("default"))) int gpudGlHackUseProgram(void) {
    ALOGD("gpudGlHackUseProgram() called");
    return 0;
}

/* Demangled: GPUDGralloc3Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc3Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK18GPUDGralloc3Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: GPUDGralloc3Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc3Mapper8isLoadedEv(void) {
    ALOGD("_ZNK18GPUDGralloc3Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: android::Singleton<GPUDBufferMapper>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GPUDBufferMapperEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI16GPUDBufferMapperEC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<GPUDBufferMapper>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GPUDBufferMapperED1Ev(void) {
    ALOGD("_ZN7android9SingletonI16GPUDBufferMapperED1Ev() called");
    return 0;
}

/* Demangled: gpudDumpANativeWindowBuffer */
extern "C" __attribute__((visibility("default"))) int gpudDumpANativeWindowBuffer(void) {
    ALOGD("gpudDumpANativeWindowBuffer() called");
    return 0;
}

/* Demangled: gpudGlHackClearColor */
extern "C" __attribute__((visibility("default"))) int gpudGlHackClearColor(void) {
    ALOGD("gpudGlHackClearColor() called");
    return 0;
}

/* Demangled: gpudGlHackScissor */
extern "C" __attribute__((visibility("default"))) int gpudGlHackScissor(void) {
    ALOGD("gpudGlHackScissor() called");
    return 0;
}

/* Demangled: GPUDGralloc4Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc4Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK18GPUDGralloc4Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: GPUDGralloc4Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc4Mapper8isLoadedEv(void) {
    ALOGD("_ZNK18GPUDGralloc4Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_() called");
    return 0;
}

/* Demangled: android::Singleton<GPUDBufferMapper>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GPUDBufferMapperED2Ev(void) {
    ALOGD("_ZN7android9SingletonI16GPUDBufferMapperED2Ev() called");
    return 0;
}

/* Demangled: gpudAuxGetConversionStatusStr */
extern "C" __attribute__((visibility("default"))) int gpudAuxGetConversionStatusStr(void) {
    ALOGD("gpudAuxGetConversionStatusStr() called");
    return 0;
}

/* Demangled: gpudGlDumpShaderSource */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpShaderSource(void) {
    ALOGD("gpudGlDumpShaderSource() called");
    return 0;
}

/* Demangled: gpudGlHackClear */
extern "C" __attribute__((visibility("default"))) int gpudGlHackClear(void) {
    ALOGD("gpudGlHackClear() called");
    return 0;
}

/* Demangled: gpudGrallocDumpAllocInfo */
extern "C" __attribute__((visibility("default"))) int gpudGrallocDumpAllocInfo(void) {
    ALOGD("gpudGrallocDumpAllocInfo() called");
    return 0;
}

/* Exported Object: android::Singleton<GrallocHalWrapper>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI17GrallocHalWrapperE9sInstanceE = NULL;

/* Demangled: android::Singleton<GPUDBufferMapper>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI16GPUDBufferMapperE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI16GPUDBufferMapperE11getInstanceEv() called");
    return 0;
}

/* Demangled: gpudAuxGetColorSpaceStr */
extern "C" __attribute__((visibility("default"))) int gpudAuxGetColorSpaceStr(void) {
    ALOGD("gpudAuxGetColorSpaceStr() called");
    return 0;
}

/* Demangled: gpudGlDumpCompressedTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpCompressedTexSubImage2D(void) {
    ALOGD("gpudGlDumpCompressedTexSubImage2D() called");
    return 0;
}

/* Demangled: gpudInitialize */
extern "C" __attribute__((visibility("default"))) int gpudInitialize(void) {
    ALOGD("gpudInitialize() called");
    return 0;
}

/* Demangled: gpudIsGlBindFramebufferDumpEnabled */
extern "C" __attribute__((visibility("default"))) int gpudIsGlBindFramebufferDumpEnabled(void) {
    ALOGD("gpudIsGlBindFramebufferDumpEnabled() called");
    return 0;
}

/* Demangled: gpudVkHackGetPhysicalDeviceProperties */
extern "C" __attribute__((visibility("default"))) int gpudVkHackGetPhysicalDeviceProperties(void) {
    ALOGD("gpudVkHackGetPhysicalDeviceProperties() called");
    return 0;
}

/* Demangled: gpudValidateFileformat */
extern "C" __attribute__((visibility("default"))) int gpudValidateFileformat(void) {
    ALOGD("gpudValidateFileformat() called");
    return 0;
}

/* Demangled: gpudGlDumpCompressedTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpCompressedTexSubImage3D(void) {
    ALOGD("gpudGlDumpCompressedTexSubImage3D() called");
    return 0;
}

/* Demangled: gpudGlDumpTexImage2D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpTexImage2D(void) {
    ALOGD("gpudGlDumpTexImage2D() called");
    return 0;
}

/* Demangled: gpudGlDumpStateError */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpStateError(void) {
    ALOGD("gpudGlDumpStateError() called");
    return 0;
}

/* Demangled: gpudGlDumpTexImage3D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpTexImage3D(void) {
    ALOGD("gpudGlDumpTexImage3D() called");
    return 0;
}

/* Exported Object: vtable for GPUDGrallocMapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV17GPUDGrallocMapper = NULL;

/* Exported Object: android::Singleton<GPUDBufferMapper>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI16GPUDBufferMapperE5sLockE = NULL;

/* Demangled: gpudAuxDumpAUXImage */
extern "C" __attribute__((visibility("default"))) int gpudAuxDumpAUXImage(void) {
    ALOGD("gpudAuxDumpAUXImage() called");
    return 0;
}

/* Demangled: gpudGlDumpPresentFrame */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpPresentFrame(void) {
    ALOGD("gpudGlDumpPresentFrame() called");
    return 0;
}

/* Demangled: gpudVkDumpAllocateMemory */
extern "C" __attribute__((visibility("default"))) int gpudVkDumpAllocateMemory(void) {
    ALOGD("gpudVkDumpAllocateMemory() called");
    return 0;
}

/* Demangled: gpudGetDumpProcessName */
extern "C" __attribute__((visibility("default"))) int gpudGetDumpProcessName(void) {
    ALOGD("gpudGetDumpProcessName() called");
    return 0;
}

/* Demangled: GPUDGralloc2Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr(void) {
    ALOGD("_ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr() called");
    return 0;
}

/* Demangled: gpudGetInitTypeName */
extern "C" __attribute__((visibility("default"))) int gpudGetInitTypeName(void) {
    ALOGD("gpudGetInitTypeName() called");
    return 0;
}

/* Demangled: GPUDGralloc3Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr(void) {
    ALOGD("_ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr() called");
    return 0;
}

/* Demangled: gpudGlDumpCopyTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpCopyTexSubImage2D(void) {
    ALOGD("gpudGlDumpCopyTexSubImage2D() called");
    return 0;
}

/* Demangled: GPUDGralloc4Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr(void) {
    ALOGD("_ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr() called");
    return 0;
}

/* Demangled: gpudAuxShowConversionStatus */
extern "C" __attribute__((visibility("default"))) int gpudAuxShowConversionStatus(void) {
    ALOGD("gpudAuxShowConversionStatus() called");
    return 0;
}

/* Demangled: gpudGlDumpCopyTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpCopyTexSubImage3D(void) {
    ALOGD("gpudGlDumpCopyTexSubImage3D() called");
    return 0;
}

/* Demangled: gpudGlDumpEGLImageTargetTexture2DOES */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpEGLImageTargetTexture2DOES(void) {
    ALOGD("gpudGlDumpEGLImageTargetTexture2DOES() called");
    return 0;
}

/* Demangled: gpudGlHackPolygonOffset */
extern "C" __attribute__((visibility("default"))) int gpudGlHackPolygonOffset(void) {
    ALOGD("gpudGlHackPolygonOffset() called");
    return 0;
}

/* Demangled: gpudVkHackGetPhysicalDeviceQueueFamilyProperties */
extern "C" __attribute__((visibility("default"))) int gpudVkHackGetPhysicalDeviceQueueFamilyProperties(void) {
    ALOGD("gpudVkHackGetPhysicalDeviceQueueFamilyProperties() called");
    return 0;
}

/* Demangled: android::Singleton<GrallocHalWrapper>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI17GrallocHalWrapperE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI17GrallocHalWrapperE11hasInstanceEv() called");
    return 0;
}

/* Demangled: GPUDBufferMapper::unlockBuffer(ANativeWindowBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16GPUDBufferMapper12unlockBufferEPK19ANativeWindowBuffer(void) {
    ALOGD("_ZN16GPUDBufferMapper12unlockBufferEPK19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: gpudGlDumpReadPixels */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpReadPixels(void) {
    ALOGD("gpudGlDumpReadPixels() called");
    return 0;
}

/* Demangled: android::Singleton<GrallocHalWrapper>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI17GrallocHalWrapperEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI17GrallocHalWrapperEC1Ev() called");
    return 0;
}

/* Demangled: GPUDGralloc2Mapper::GPUDGralloc2Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN18GPUDGralloc2MapperC1Ev(void) {
    ALOGD("_ZN18GPUDGralloc2MapperC1Ev() called");
    return 0;
}

/* Demangled: gpudSfDumpPresentFrame */
extern "C" __attribute__((visibility("default"))) int gpudSfDumpPresentFrame(void) {
    ALOGD("gpudSfDumpPresentFrame() called");
    return 0;
}

/* Demangled: android::Singleton<GrallocHalWrapper>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI17GrallocHalWrapperEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI17GrallocHalWrapperEC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<GrallocHalWrapper>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI17GrallocHalWrapperED1Ev(void) {
    ALOGD("_ZN7android9SingletonI17GrallocHalWrapperED1Ev() called");
    return 0;
}

/* Demangled: GPUDGralloc2Mapper::GPUDGralloc2Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN18GPUDGralloc2MapperC2Ev(void) {
    ALOGD("_ZN18GPUDGralloc2MapperC2Ev() called");
    return 0;
}

/* Demangled: GPUDGralloc3Mapper::GPUDGralloc3Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN18GPUDGralloc3MapperC1Ev(void) {
    ALOGD("_ZN18GPUDGralloc3MapperC1Ev() called");
    return 0;
}

/* Demangled: GPUDBufferMapper::GPUDBufferMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN16GPUDBufferMapperC1Ev(void) {
    ALOGD("_ZN16GPUDBufferMapperC1Ev() called");
    return 0;
}

/* Demangled: gpudAuxGetPQScenarioStr */
extern "C" __attribute__((visibility("default"))) int gpudAuxGetPQScenarioStr(void) {
    ALOGD("gpudAuxGetPQScenarioStr() called");
    return 0;
}

/* Demangled: gpudAuxShowPQInfo */
extern "C" __attribute__((visibility("default"))) int gpudAuxShowPQInfo(void) {
    ALOGD("gpudAuxShowPQInfo() called");
    return 0;
}

/* Demangled: gpudGrallocShowAllocInfo */
extern "C" __attribute__((visibility("default"))) int gpudGrallocShowAllocInfo(void) {
    ALOGD("gpudGrallocShowAllocInfo() called");
    return 0;
}

/* Demangled: gpudAuxHackAUXImageSupportFormat */
extern "C" __attribute__((visibility("default"))) int gpudAuxHackAUXImageSupportFormat(void) {
    ALOGD("gpudAuxHackAUXImageSupportFormat() called");
    return 0;
}

/* Demangled: gpudVkHackCreateDevice */
extern "C" __attribute__((visibility("default"))) int gpudVkHackCreateDevice(void) {
    ALOGD("gpudVkHackCreateDevice() called");
    return 0;
}

/* Demangled: android::Singleton<GrallocHalWrapper>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI17GrallocHalWrapperED2Ev(void) {
    ALOGD("_ZN7android9SingletonI17GrallocHalWrapperED2Ev() called");
    return 0;
}

/* Demangled: GPUDGralloc3Mapper::GPUDGralloc3Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN18GPUDGralloc3MapperC2Ev(void) {
    ALOGD("_ZN18GPUDGralloc3MapperC2Ev() called");
    return 0;
}

/* Demangled: GPUDGralloc4Mapper::GPUDGralloc4Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN18GPUDGralloc4MapperC1Ev(void) {
    ALOGD("_ZN18GPUDGralloc4MapperC1Ev() called");
    return 0;
}

/* Demangled: gpudCheckFBCDisable */
extern "C" __attribute__((visibility("default"))) int gpudCheckFBCDisable(void) {
    ALOGD("gpudCheckFBCDisable() called");
    return 0;
}

/* Demangled: gpudGlDumpTexImage */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpTexImage(void) {
    ALOGD("gpudGlDumpTexImage() called");
    return 0;
}

/* Demangled: gpudReplaceSubString */
extern "C" __attribute__((visibility("default"))) int gpudReplaceSubString(void) {
    ALOGD("gpudReplaceSubString() called");
    return 0;
}

/* Demangled: gpudAuxDumpAUXImageSrc */
extern "C" __attribute__((visibility("default"))) int gpudAuxDumpAUXImageSrc(void) {
    ALOGD("gpudAuxDumpAUXImageSrc() called");
    return 0;
}

/* Demangled: gpudGlDumpTexSubImage2D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpTexSubImage2D(void) {
    ALOGD("gpudGlDumpTexSubImage2D() called");
    return 0;
}

/* Demangled: android::Singleton<GrallocHalWrapper>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI17GrallocHalWrapperE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI17GrallocHalWrapperE11getInstanceEv() called");
    return 0;
}

/* Demangled: GPUDGralloc4Mapper::GPUDGralloc4Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN18GPUDGralloc4MapperC2Ev(void) {
    ALOGD("_ZN18GPUDGralloc4MapperC2Ev() called");
    return 0;
}

/* Demangled: GPUDBufferMapper::GPUDBufferMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN16GPUDBufferMapperC2Ev(void) {
    ALOGD("_ZN16GPUDBufferMapperC2Ev() called");
    return 0;
}

/* Demangled: gpudAuxShowImageInfo */
extern "C" __attribute__((visibility("default"))) int gpudAuxShowImageInfo(void) {
    ALOGD("gpudAuxShowImageInfo() called");
    return 0;
}

/* Demangled: gpudGlDumpTexSubImage3D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpTexSubImage3D(void) {
    ALOGD("gpudGlDumpTexSubImage3D() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv() called");
    return 0;
}

/* Demangled: gpudGetHashCode */
extern "C" __attribute__((visibility("default"))) int gpudGetHashCode(void) {
    ALOGD("gpudGetHashCode() called");
    return 0;
}

/* Demangled: gpudFBCDisable */
extern "C" __attribute__((visibility("default"))) int gpudFBCDisable(void) {
    ALOGD("gpudFBCDisable() called");
    return 0;
}

/* Demangled: gpudAuxDumpAUXImageDst */
extern "C" __attribute__((visibility("default"))) int gpudAuxDumpAUXImageDst(void) {
    ALOGD("gpudAuxDumpAUXImageDst() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::lockBuffer(ANativeWindowBuffer const*, int, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapper10lockBufferEPK19ANativeWindowBufferiPPv(void) {
    ALOGD("_ZN17GrallocHalWrapper10lockBufferEPK19ANativeWindowBufferiPPv() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE() called");
    return 0;
}

/* Demangled: gpudGlHackGetString */
extern "C" __attribute__((visibility("default"))) int gpudGlHackGetString(void) {
    ALOGD("gpudGlHackGetString() called");
    return 0;
}

/* Demangled: gpudVkHackCreateInstance */
extern "C" __attribute__((visibility("default"))) int gpudVkHackCreateInstance(void) {
    ALOGD("gpudVkHackCreateInstance() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::registerBuffer(ANativeWindowBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapper14registerBufferEPK19ANativeWindowBuffer(void) {
    ALOGD("_ZN17GrallocHalWrapper14registerBufferEPK19ANativeWindowBuffer() called");
    return 0;
}

/* Exported Object: android::Singleton<GrallocHalWrapper>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI17GrallocHalWrapperE5sLockE = NULL;

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE = NULL;

/* Demangled: gpudAuxGetAuxPathStr */
extern "C" __attribute__((visibility("default"))) int gpudAuxGetAuxPathStr(void) {
    ALOGD("gpudAuxGetAuxPathStr() called");
    return 0;
}

/* Demangled: gpudMMDumpInitialize */
extern "C" __attribute__((visibility("default"))) int gpudMMDumpInitialize(void) {
    ALOGD("gpudMMDumpInitialize() called");
    return 0;
}

/* Demangled: GPUDGralloc4Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE(void) {
    ALOGD("_ZNK18GPUDGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE() called");
    return 0;
}

/* Demangled: gpudGlHackClearStencil */
extern "C" __attribute__((visibility("default"))) int gpudGlHackClearStencil(void) {
    ALOGD("gpudGlHackClearStencil() called");
    return 0;
}

/* Demangled: gpudVkDumpPresentFrame */
extern "C" __attribute__((visibility("default"))) int gpudVkDumpPresentFrame(void) {
    ALOGD("gpudVkDumpPresentFrame() called");
    return 0;
}

/* Demangled: gpudVkHackGetPhysicalDeviceProperties2 */
extern "C" __attribute__((visibility("default"))) int gpudVkHackGetPhysicalDeviceProperties2(void) {
    ALOGD("gpudVkHackGetPhysicalDeviceProperties2() called");
    return 0;
}

/* Exported Object: android::Singleton<GPUDBufferMapper>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI16GPUDBufferMapperE9sInstanceE = NULL;

/* Demangled: gpudAuxHackAUXImageYUVColorSpace */
extern "C" __attribute__((visibility("default"))) int gpudAuxHackAUXImageYUVColorSpace(void) {
    ALOGD("gpudAuxHackAUXImageYUVColorSpace() called");
    return 0;
}

/* Demangled: GPUDGralloc2Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiPPvPiS5_(void) {
    ALOGD("_ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiPPvPiS5_() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::unlockBuffer(ANativeWindowBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapper12unlockBufferEPK19ANativeWindowBuffer(void) {
    ALOGD("_ZN17GrallocHalWrapper12unlockBufferEPK19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::unregisterBuffer(ANativeWindowBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapper16unregisterBufferEPK19ANativeWindowBuffer(void) {
    ALOGD("_ZN17GrallocHalWrapper16unregisterBufferEPK19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: GPUDGralloc3Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiPPvPiS5_(void) {
    ALOGD("_ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiPPvPiS5_() called");
    return 0;
}

/* Demangled: gpudIsEnabled */
extern "C" __attribute__((visibility("default"))) int gpudIsEnabled(void) {
    ALOGD("gpudIsEnabled() called");
    return 0;
}

/* Exported Object: vtable for GPUDGralloc2Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV18GPUDGralloc2Mapper = NULL;

/* Demangled: GPUDGralloc4Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiPPvPiS5_(void) {
    ALOGD("_ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiPPvPiS5_() called");
    return 0;
}

/* Demangled: GPUDGrallocMapper::~GPUDGrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUDGrallocMapperD0Ev(void) {
    ALOGD("_ZN17GPUDGrallocMapperD0Ev() called");
    return 0;
}

/* Demangled: gpudGlDumpCompressedTexImage2D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpCompressedTexImage2D(void) {
    ALOGD("gpudGlDumpCompressedTexImage2D() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::GrallocHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapperC1Ev(void) {
    ALOGD("_ZN17GrallocHalWrapperC1Ev() called");
    return 0;
}

/* Exported Object: vtable for GPUDGralloc3Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV18GPUDGralloc3Mapper = NULL;

/* Demangled: GPUDGrallocMapper::~GPUDGrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUDGrallocMapperD1Ev(void) {
    ALOGD("_ZN17GPUDGrallocMapperD1Ev() called");
    return 0;
}

/* Demangled: gpudGlDumpCompressedTexImage3D */
extern "C" __attribute__((visibility("default"))) int gpudGlDumpCompressedTexImage3D(void) {
    ALOGD("gpudGlDumpCompressedTexImage3D() called");
    return 0;
}

/* Demangled: gpudGlHackOrDumpShaderSource */
extern "C" __attribute__((visibility("default"))) int gpudGlHackOrDumpShaderSource(void) {
    ALOGD("gpudGlHackOrDumpShaderSource() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::getBufferHandle(ANativeWindowBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapper15getBufferHandleEPK19ANativeWindowBuffer(void) {
    ALOGD("_ZN17GrallocHalWrapper15getBufferHandleEPK19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::GrallocHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapperC2Ev(void) {
    ALOGD("_ZN17GrallocHalWrapperC2Ev() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::~GrallocHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapperD1Ev(void) {
    ALOGD("_ZN17GrallocHalWrapperD1Ev() called");
    return 0;
}

/* Demangled: GPUDGrallocMapper::~GPUDGrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUDGrallocMapperD2Ev(void) {
    ALOGD("_ZN17GPUDGrallocMapperD2Ev() called");
    return 0;
}

/* Exported Object: vtable for GPUDGralloc4Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV18GPUDGralloc4Mapper = NULL;

/* Exported Object: g_gpud_context */
extern "C" __attribute__((visibility("default"))) void* g_gpud_context = NULL;

/* Demangled: gpudAuxHackAUXImageDstFormat */
extern "C" __attribute__((visibility("default"))) int gpudAuxHackAUXImageDstFormat(void) {
    ALOGD("gpudAuxHackAUXImageDstFormat() called");
    return 0;
}

/* Demangled: gpudAuxShowAUXPath */
extern "C" __attribute__((visibility("default"))) int gpudAuxShowAUXPath(void) {
    ALOGD("gpudAuxShowAUXPath() called");
    return 0;
}

/* Demangled: gpudGlHackViewport */
extern "C" __attribute__((visibility("default"))) int gpudGlHackViewport(void) {
    ALOGD("gpudGlHackViewport() called");
    return 0;
}

/* Demangled: GrallocHalWrapper::~GrallocHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17GrallocHalWrapperD2Ev(void) {
    ALOGD("_ZN17GrallocHalWrapperD2Ev() called");
    return 0;
}
