/*
 * Reverse-Engineered ABI Specification for: libgpud.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgpud.so
 */

#ifndef BEGONIA_RE_LIBGPUD_H
#define BEGONIA_RE_LIBGPUD_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN16GPUDBufferMapper10lockBufferEPK19ANativeWindowBufferPPv */
/* Demangled: GPUDBufferMapper::lockBuffer(ANativeWindowBuffer const*, void**) */
int _ZN16GPUDBufferMapper10lockBufferEPK19ANativeWindowBufferPPv(void);

/* Symbol: gpudGetProcessInfo */
/* Demangled: gpudGetProcessInfo */
int gpudGetProcessInfo(void);

/* Symbol: gpudGlDumpBindFramebuffer */
/* Demangled: gpudGlDumpBindFramebuffer */
int gpudGlDumpBindFramebuffer(void);

/* Symbol: gpudVkHackGetPhysicalDeviceQueueFamilyProperties2 */
/* Demangled: gpudVkHackGetPhysicalDeviceQueueFamilyProperties2 */
int gpudVkHackGetPhysicalDeviceQueueFamilyProperties2(void);

/* Symbol: _ZN17GrallocHalWrapper16mapGralloc1ErrorEi */
/* Demangled: GrallocHalWrapper::mapGralloc1Error(int) */
int _ZN17GrallocHalWrapper16mapGralloc1ErrorEi(void);

/* Symbol: gpudGlHackClearDepthf */
/* Demangled: gpudGlHackClearDepthf */
int gpudGlHackClearDepthf(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv(void);

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperE11hasInstanceEv */
/* Demangled: android::Singleton<GPUDBufferMapper>::hasInstance() */
int _ZN7android9SingletonI16GPUDBufferMapperE11hasInstanceEv(void);

/* Symbol: gpudGlDumpFramebuffer */
/* Demangled: gpudGlDumpFramebuffer */
int gpudGlDumpFramebuffer(void);

/* Symbol: gpudGlDumpCopyTexImage2D */
/* Demangled: gpudGlDumpCopyTexImage2D */
int gpudGlDumpCopyTexImage2D(void);

/* Symbol: _ZNK18GPUDGralloc2Mapper6unlockEPK13native_handle */
/* Demangled: GPUDGralloc2Mapper::unlock(native_handle const*) const */
int _ZNK18GPUDGralloc2Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZNK18GPUDGralloc2Mapper8isLoadedEv */
/* Demangled: GPUDGralloc2Mapper::isLoaded() const */
int _ZNK18GPUDGralloc2Mapper8isLoadedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv(void);

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperEC1Ev */
/* Demangled: android::Singleton<GPUDBufferMapper>::Singleton() */
int _ZN7android9SingletonI16GPUDBufferMapperEC1Ev(void);

/* Symbol: gpudGlHackUseProgram */
/* Demangled: gpudGlHackUseProgram */
int gpudGlHackUseProgram(void);

/* Symbol: _ZNK18GPUDGralloc3Mapper6unlockEPK13native_handle */
/* Demangled: GPUDGralloc3Mapper::unlock(native_handle const*) const */
int _ZNK18GPUDGralloc3Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZNK18GPUDGralloc3Mapper8isLoadedEv */
/* Demangled: GPUDGralloc3Mapper::isLoaded() const */
int _ZNK18GPUDGralloc3Mapper8isLoadedEv(void);

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperEC2Ev */
/* Demangled: android::Singleton<GPUDBufferMapper>::Singleton() */
int _ZN7android9SingletonI16GPUDBufferMapperEC2Ev(void);

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperED1Ev */
/* Demangled: android::Singleton<GPUDBufferMapper>::~Singleton() */
int _ZN7android9SingletonI16GPUDBufferMapperED1Ev(void);

/* Symbol: gpudDumpANativeWindowBuffer */
/* Demangled: gpudDumpANativeWindowBuffer */
int gpudDumpANativeWindowBuffer(void);

/* Symbol: gpudGlHackClearColor */
/* Demangled: gpudGlHackClearColor */
int gpudGlHackClearColor(void);

/* Symbol: gpudGlHackScissor */
/* Demangled: gpudGlHackScissor */
int gpudGlHackScissor(void);

/* Symbol: _ZNK18GPUDGralloc4Mapper6unlockEPK13native_handle */
/* Demangled: GPUDGralloc4Mapper::unlock(native_handle const*) const */
int _ZNK18GPUDGralloc4Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZNK18GPUDGralloc4Mapper8isLoadedEv */
/* Demangled: GPUDGralloc4Mapper::isLoaded() const */
int _ZNK18GPUDGralloc4Mapper8isLoadedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_ */
int _ZNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_(void);

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperED2Ev */
/* Demangled: android::Singleton<GPUDBufferMapper>::~Singleton() */
int _ZN7android9SingletonI16GPUDBufferMapperED2Ev(void);

/* Symbol: gpudAuxGetConversionStatusStr */
/* Demangled: gpudAuxGetConversionStatusStr */
int gpudAuxGetConversionStatusStr(void);

/* Symbol: gpudGlDumpShaderSource */
/* Demangled: gpudGlDumpShaderSource */
int gpudGlDumpShaderSource(void);

/* Symbol: gpudGlHackClear */
/* Demangled: gpudGlHackClear */
int gpudGlHackClear(void);

/* Symbol: gpudGrallocDumpAllocInfo */
/* Demangled: gpudGrallocDumpAllocInfo */
int gpudGrallocDumpAllocInfo(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE9sInstanceE */
/* Demangled: android::Singleton<GrallocHalWrapper>::sInstance */
extern void* _ZN7android9SingletonI17GrallocHalWrapperE9sInstanceE;

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperE11getInstanceEv */
/* Demangled: android::Singleton<GPUDBufferMapper>::getInstance() */
int _ZN7android9SingletonI16GPUDBufferMapperE11getInstanceEv(void);

/* Symbol: gpudAuxGetColorSpaceStr */
/* Demangled: gpudAuxGetColorSpaceStr */
int gpudAuxGetColorSpaceStr(void);

/* Symbol: gpudGlDumpCompressedTexSubImage2D */
/* Demangled: gpudGlDumpCompressedTexSubImage2D */
int gpudGlDumpCompressedTexSubImage2D(void);

/* Symbol: gpudInitialize */
/* Demangled: gpudInitialize */
int gpudInitialize(void);

/* Symbol: gpudIsGlBindFramebufferDumpEnabled */
/* Demangled: gpudIsGlBindFramebufferDumpEnabled */
int gpudIsGlBindFramebufferDumpEnabled(void);

/* Symbol: gpudVkHackGetPhysicalDeviceProperties */
/* Demangled: gpudVkHackGetPhysicalDeviceProperties */
int gpudVkHackGetPhysicalDeviceProperties(void);

/* Symbol: gpudValidateFileformat */
/* Demangled: gpudValidateFileformat */
int gpudValidateFileformat(void);

/* Symbol: gpudGlDumpCompressedTexSubImage3D */
/* Demangled: gpudGlDumpCompressedTexSubImage3D */
int gpudGlDumpCompressedTexSubImage3D(void);

/* Symbol: gpudGlDumpTexImage2D */
/* Demangled: gpudGlDumpTexImage2D */
int gpudGlDumpTexImage2D(void);

/* Symbol: gpudGlDumpStateError */
/* Demangled: gpudGlDumpStateError */
int gpudGlDumpStateError(void);

/* Symbol: gpudGlDumpTexImage3D */
/* Demangled: gpudGlDumpTexImage3D */
int gpudGlDumpTexImage3D(void);

/* Symbol: _ZTV17GPUDGrallocMapper */
/* Demangled: vtable for GPUDGrallocMapper */
extern void* _ZTV17GPUDGrallocMapper;

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperE5sLockE */
/* Demangled: android::Singleton<GPUDBufferMapper>::sLock */
extern void* _ZN7android9SingletonI16GPUDBufferMapperE5sLockE;

/* Symbol: gpudAuxDumpAUXImage */
/* Demangled: gpudAuxDumpAUXImage */
int gpudAuxDumpAUXImage(void);

/* Symbol: gpudGlDumpPresentFrame */
/* Demangled: gpudGlDumpPresentFrame */
int gpudGlDumpPresentFrame(void);

/* Symbol: gpudVkDumpAllocateMemory */
/* Demangled: gpudVkDumpAllocateMemory */
int gpudVkDumpAllocateMemory(void);

/* Symbol: gpudGetDumpProcessName */
/* Demangled: gpudGetDumpProcessName */
int gpudGetDumpProcessName(void);

/* Symbol: _ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr */
/* Demangled: GPUDGralloc2Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, android_ycbcr*) const */
int _ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr(void);

/* Symbol: gpudGetInitTypeName */
/* Demangled: gpudGetInitTypeName */
int gpudGetInitTypeName(void);

/* Symbol: _ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr */
/* Demangled: GPUDGralloc3Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, android_ycbcr*) const */
int _ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr(void);

/* Symbol: gpudGlDumpCopyTexSubImage2D */
/* Demangled: gpudGlDumpCopyTexSubImage2D */
int gpudGlDumpCopyTexSubImage2D(void);

/* Symbol: _ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr */
/* Demangled: GPUDGralloc4Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, android_ycbcr*) const */
int _ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiP13android_ycbcr(void);

/* Symbol: gpudAuxShowConversionStatus */
/* Demangled: gpudAuxShowConversionStatus */
int gpudAuxShowConversionStatus(void);

/* Symbol: gpudGlDumpCopyTexSubImage3D */
/* Demangled: gpudGlDumpCopyTexSubImage3D */
int gpudGlDumpCopyTexSubImage3D(void);

/* Symbol: gpudGlDumpEGLImageTargetTexture2DOES */
/* Demangled: gpudGlDumpEGLImageTargetTexture2DOES */
int gpudGlDumpEGLImageTargetTexture2DOES(void);

/* Symbol: gpudGlHackPolygonOffset */
/* Demangled: gpudGlHackPolygonOffset */
int gpudGlHackPolygonOffset(void);

/* Symbol: gpudVkHackGetPhysicalDeviceQueueFamilyProperties */
/* Demangled: gpudVkHackGetPhysicalDeviceQueueFamilyProperties */
int gpudVkHackGetPhysicalDeviceQueueFamilyProperties(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE11hasInstanceEv */
/* Demangled: android::Singleton<GrallocHalWrapper>::hasInstance() */
int _ZN7android9SingletonI17GrallocHalWrapperE11hasInstanceEv(void);

/* Symbol: _ZN16GPUDBufferMapper12unlockBufferEPK19ANativeWindowBuffer */
/* Demangled: GPUDBufferMapper::unlockBuffer(ANativeWindowBuffer const*) */
int _ZN16GPUDBufferMapper12unlockBufferEPK19ANativeWindowBuffer(void);

/* Symbol: gpudGlDumpReadPixels */
/* Demangled: gpudGlDumpReadPixels */
int gpudGlDumpReadPixels(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperEC1Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperEC1Ev(void);

/* Symbol: _ZN18GPUDGralloc2MapperC1Ev */
/* Demangled: GPUDGralloc2Mapper::GPUDGralloc2Mapper() */
int _ZN18GPUDGralloc2MapperC1Ev(void);

/* Symbol: gpudSfDumpPresentFrame */
/* Demangled: gpudSfDumpPresentFrame */
int gpudSfDumpPresentFrame(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperEC2Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperEC2Ev(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperED1Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::~Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperED1Ev(void);

/* Symbol: _ZN18GPUDGralloc2MapperC2Ev */
/* Demangled: GPUDGralloc2Mapper::GPUDGralloc2Mapper() */
int _ZN18GPUDGralloc2MapperC2Ev(void);

/* Symbol: _ZN18GPUDGralloc3MapperC1Ev */
/* Demangled: GPUDGralloc3Mapper::GPUDGralloc3Mapper() */
int _ZN18GPUDGralloc3MapperC1Ev(void);

/* Symbol: _ZN16GPUDBufferMapperC1Ev */
/* Demangled: GPUDBufferMapper::GPUDBufferMapper() */
int _ZN16GPUDBufferMapperC1Ev(void);

/* Symbol: gpudAuxGetPQScenarioStr */
/* Demangled: gpudAuxGetPQScenarioStr */
int gpudAuxGetPQScenarioStr(void);

/* Symbol: gpudAuxShowPQInfo */
/* Demangled: gpudAuxShowPQInfo */
int gpudAuxShowPQInfo(void);

/* Symbol: gpudGrallocShowAllocInfo */
/* Demangled: gpudGrallocShowAllocInfo */
int gpudGrallocShowAllocInfo(void);

/* Symbol: gpudAuxHackAUXImageSupportFormat */
/* Demangled: gpudAuxHackAUXImageSupportFormat */
int gpudAuxHackAUXImageSupportFormat(void);

/* Symbol: gpudVkHackCreateDevice */
/* Demangled: gpudVkHackCreateDevice */
int gpudVkHackCreateDevice(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperED2Ev */
/* Demangled: android::Singleton<GrallocHalWrapper>::~Singleton() */
int _ZN7android9SingletonI17GrallocHalWrapperED2Ev(void);

/* Symbol: _ZN18GPUDGralloc3MapperC2Ev */
/* Demangled: GPUDGralloc3Mapper::GPUDGralloc3Mapper() */
int _ZN18GPUDGralloc3MapperC2Ev(void);

/* Symbol: _ZN18GPUDGralloc4MapperC1Ev */
/* Demangled: GPUDGralloc4Mapper::GPUDGralloc4Mapper() */
int _ZN18GPUDGralloc4MapperC1Ev(void);

/* Symbol: gpudCheckFBCDisable */
/* Demangled: gpudCheckFBCDisable */
int gpudCheckFBCDisable(void);

/* Symbol: gpudGlDumpTexImage */
/* Demangled: gpudGlDumpTexImage */
int gpudGlDumpTexImage(void);

/* Symbol: gpudReplaceSubString */
/* Demangled: gpudReplaceSubString */
int gpudReplaceSubString(void);

/* Symbol: gpudAuxDumpAUXImageSrc */
/* Demangled: gpudAuxDumpAUXImageSrc */
int gpudAuxDumpAUXImageSrc(void);

/* Symbol: gpudGlDumpTexSubImage2D */
/* Demangled: gpudGlDumpTexSubImage2D */
int gpudGlDumpTexSubImage2D(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE11getInstanceEv */
/* Demangled: android::Singleton<GrallocHalWrapper>::getInstance() */
int _ZN7android9SingletonI17GrallocHalWrapperE11getInstanceEv(void);

/* Symbol: _ZN18GPUDGralloc4MapperC2Ev */
/* Demangled: GPUDGralloc4Mapper::GPUDGralloc4Mapper() */
int _ZN18GPUDGralloc4MapperC2Ev(void);

/* Symbol: _ZN16GPUDBufferMapperC2Ev */
/* Demangled: GPUDBufferMapper::GPUDBufferMapper() */
int _ZN16GPUDBufferMapperC2Ev(void);

/* Symbol: gpudAuxShowImageInfo */
/* Demangled: gpudAuxShowImageInfo */
int gpudAuxShowImageInfo(void);

/* Symbol: gpudGlDumpTexSubImage3D */
/* Demangled: gpudGlDumpTexSubImage3D */
int gpudGlDumpTexSubImage3D(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv(void);

/* Symbol: gpudGetHashCode */
/* Demangled: gpudGetHashCode */
int gpudGetHashCode(void);

/* Symbol: gpudFBCDisable */
/* Demangled: gpudFBCDisable */
int gpudFBCDisable(void);

/* Symbol: gpudAuxDumpAUXImageDst */
/* Demangled: gpudAuxDumpAUXImageDst */
int gpudAuxDumpAUXImageDst(void);

/* Symbol: _ZN17GrallocHalWrapper10lockBufferEPK19ANativeWindowBufferiPPv */
/* Demangled: GrallocHalWrapper::lockBuffer(ANativeWindowBuffer const*, int, void**) */
int _ZN17GrallocHalWrapper10lockBufferEPK19ANativeWindowBufferiPPv(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE */
int _ZNKSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE(void);

/* Symbol: gpudGlHackGetString */
/* Demangled: gpudGlHackGetString */
int gpudGlHackGetString(void);

/* Symbol: gpudVkHackCreateInstance */
/* Demangled: gpudVkHackCreateInstance */
int gpudVkHackCreateInstance(void);

/* Symbol: _ZN17GrallocHalWrapper14registerBufferEPK19ANativeWindowBuffer */
/* Demangled: GrallocHalWrapper::registerBuffer(ANativeWindowBuffer const*) */
int _ZN17GrallocHalWrapper14registerBufferEPK19ANativeWindowBuffer(void);

/* Symbol: _ZN7android9SingletonI17GrallocHalWrapperE5sLockE */
/* Demangled: android::Singleton<GrallocHalWrapper>::sLock */
extern void* _ZN7android9SingletonI17GrallocHalWrapperE5sLockE;

/* Symbol: _ZTVNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK18GPUDGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE;

/* Symbol: gpudAuxGetAuxPathStr */
/* Demangled: gpudAuxGetAuxPathStr */
int gpudAuxGetAuxPathStr(void);

/* Symbol: gpudMMDumpInitialize */
/* Demangled: gpudMMDumpInitialize */
int gpudMMDumpInitialize(void);

/* Symbol: _ZNK18GPUDGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE */
/* Demangled: GPUDGralloc4Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK18GPUDGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE(void);

/* Symbol: gpudGlHackClearStencil */
/* Demangled: gpudGlHackClearStencil */
int gpudGlHackClearStencil(void);

/* Symbol: gpudVkDumpPresentFrame */
/* Demangled: gpudVkDumpPresentFrame */
int gpudVkDumpPresentFrame(void);

/* Symbol: gpudVkHackGetPhysicalDeviceProperties2 */
/* Demangled: gpudVkHackGetPhysicalDeviceProperties2 */
int gpudVkHackGetPhysicalDeviceProperties2(void);

/* Symbol: _ZN7android9SingletonI16GPUDBufferMapperE9sInstanceE */
/* Demangled: android::Singleton<GPUDBufferMapper>::sInstance */
extern void* _ZN7android9SingletonI16GPUDBufferMapperE9sInstanceE;

/* Symbol: gpudAuxHackAUXImageYUVColorSpace */
/* Demangled: gpudAuxHackAUXImageYUVColorSpace */
int gpudAuxHackAUXImageYUVColorSpace(void);

/* Symbol: _ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiPPvPiS5_ */
/* Demangled: GPUDGralloc2Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, void**, int*, int*) const */
int _ZNK18GPUDGralloc2Mapper4lockEPK13native_handleyiiiiiPPvPiS5_(void);

/* Symbol: _ZN17GrallocHalWrapper12unlockBufferEPK19ANativeWindowBuffer */
/* Demangled: GrallocHalWrapper::unlockBuffer(ANativeWindowBuffer const*) */
int _ZN17GrallocHalWrapper12unlockBufferEPK19ANativeWindowBuffer(void);

/* Symbol: _ZN17GrallocHalWrapper16unregisterBufferEPK19ANativeWindowBuffer */
/* Demangled: GrallocHalWrapper::unregisterBuffer(ANativeWindowBuffer const*) */
int _ZN17GrallocHalWrapper16unregisterBufferEPK19ANativeWindowBuffer(void);

/* Symbol: _ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiPPvPiS5_ */
/* Demangled: GPUDGralloc3Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, void**, int*, int*) const */
int _ZNK18GPUDGralloc3Mapper4lockEPK13native_handleyiiiiiPPvPiS5_(void);

/* Symbol: gpudIsEnabled */
/* Demangled: gpudIsEnabled */
int gpudIsEnabled(void);

/* Symbol: _ZTV18GPUDGralloc2Mapper */
/* Demangled: vtable for GPUDGralloc2Mapper */
extern void* _ZTV18GPUDGralloc2Mapper;

/* Symbol: _ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiPPvPiS5_ */
/* Demangled: GPUDGralloc4Mapper::lock(native_handle const*, unsigned long long, int, int, int, int, int, void**, int*, int*) const */
int _ZNK18GPUDGralloc4Mapper4lockEPK13native_handleyiiiiiPPvPiS5_(void);

/* Symbol: _ZN17GPUDGrallocMapperD0Ev */
/* Demangled: GPUDGrallocMapper::~GPUDGrallocMapper() */
int _ZN17GPUDGrallocMapperD0Ev(void);

/* Symbol: gpudGlDumpCompressedTexImage2D */
/* Demangled: gpudGlDumpCompressedTexImage2D */
int gpudGlDumpCompressedTexImage2D(void);

/* Symbol: _ZN17GrallocHalWrapperC1Ev */
/* Demangled: GrallocHalWrapper::GrallocHalWrapper() */
int _ZN17GrallocHalWrapperC1Ev(void);

/* Symbol: _ZTV18GPUDGralloc3Mapper */
/* Demangled: vtable for GPUDGralloc3Mapper */
extern void* _ZTV18GPUDGralloc3Mapper;

/* Symbol: _ZN17GPUDGrallocMapperD1Ev */
/* Demangled: GPUDGrallocMapper::~GPUDGrallocMapper() */
int _ZN17GPUDGrallocMapperD1Ev(void);

/* Symbol: gpudGlDumpCompressedTexImage3D */
/* Demangled: gpudGlDumpCompressedTexImage3D */
int gpudGlDumpCompressedTexImage3D(void);

/* Symbol: gpudGlHackOrDumpShaderSource */
/* Demangled: gpudGlHackOrDumpShaderSource */
int gpudGlHackOrDumpShaderSource(void);

/* Symbol: _ZN17GrallocHalWrapper15getBufferHandleEPK19ANativeWindowBuffer */
/* Demangled: GrallocHalWrapper::getBufferHandle(ANativeWindowBuffer const*) */
int _ZN17GrallocHalWrapper15getBufferHandleEPK19ANativeWindowBuffer(void);

/* Symbol: _ZN17GrallocHalWrapperC2Ev */
/* Demangled: GrallocHalWrapper::GrallocHalWrapper() */
int _ZN17GrallocHalWrapperC2Ev(void);

/* Symbol: _ZN17GrallocHalWrapperD1Ev */
/* Demangled: GrallocHalWrapper::~GrallocHalWrapper() */
int _ZN17GrallocHalWrapperD1Ev(void);

/* Symbol: _ZN17GPUDGrallocMapperD2Ev */
/* Demangled: GPUDGrallocMapper::~GPUDGrallocMapper() */
int _ZN17GPUDGrallocMapperD2Ev(void);

/* Symbol: _ZTV18GPUDGralloc4Mapper */
/* Demangled: vtable for GPUDGralloc4Mapper */
extern void* _ZTV18GPUDGralloc4Mapper;

/* Symbol: g_gpud_context */
/* Demangled: g_gpud_context */
extern void* g_gpud_context;

/* Symbol: gpudAuxHackAUXImageDstFormat */
/* Demangled: gpudAuxHackAUXImageDstFormat */
int gpudAuxHackAUXImageDstFormat(void);

/* Symbol: gpudAuxShowAUXPath */
/* Demangled: gpudAuxShowAUXPath */
int gpudAuxShowAUXPath(void);

/* Symbol: gpudGlHackViewport */
/* Demangled: gpudGlHackViewport */
int gpudGlHackViewport(void);

/* Symbol: _ZN17GrallocHalWrapperD2Ev */
/* Demangled: GrallocHalWrapper::~GrallocHalWrapper() */
int _ZN17GrallocHalWrapperD2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGPUD_H */
