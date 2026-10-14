/*
 * Reverse-Engineered Source for: libgpu_aux.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgpu_aux"

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
#include "libgpu_aux.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: GPUAUXBufferQueue::GPUAUXBufferQueue(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueueC1Ej(void) {
    ALOGD("_ZN17GPUAUXBufferQueueC1Ej() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long, int)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyiEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyiEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: android::Singleton<AuxGralloc>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10AuxGrallocEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI10AuxGrallocEC1Ev() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv() called");
    return 0;
}

/* Demangled: AuxGralloc3Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc3Mapper8isLoadedEv(void) {
    ALOGD("_ZNK17AuxGralloc3Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: android::Singleton<AuxBufferMapper>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15AuxBufferMapperEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI15AuxBufferMapperEC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<AuxBufferMapper>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15AuxBufferMapperED1Ev(void) {
    ALOGD("_ZN7android9SingletonI15AuxBufferMapperED1Ev() called");
    return 0;
}

/* Demangled: GuiExtAuxDestroyBufferQueue */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxDestroyBufferQueue(void) {
    ALOGD("GuiExtAuxDestroyBufferQueue() called");
    return 0;
}

/* Demangled: _AUXCheckIfSrcSizeValid */
extern "C" __attribute__((visibility("default"))) int _AUXCheckIfSrcSizeValid(void) {
    ALOGD("_AUXCheckIfSrcSizeValid() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: GuiExtAuxReleaseBuffer */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxReleaseBuffer(void) {
    ALOGD("GuiExtAuxReleaseBuffer() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIjEE = NULL;

/* Demangled: MTKGralloc1::get_buffer_handle(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc117get_buffer_handleEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc117get_buffer_handleEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: AuxGralloc3Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr(void) {
    ALOGD("_ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr() called");
    return 0;
}

/* Demangled: AuxGralloc4Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE(void) {
    ALOGD("_ZNK17AuxGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE() called");
    return 0;
}

/* Demangled: GpuAuxIsSupportPQWhiteList */
extern "C" __attribute__((visibility("default"))) int GpuAuxIsSupportPQWhiteList(void) {
    ALOGD("GpuAuxIsSupportPQWhiteList() called");
    return 0;
}

/* Demangled: _AUXPrepareDstRoi */
extern "C" __attribute__((visibility("default"))) int _AUXPrepareDstRoi(void) {
    ALOGD("_AUXPrepareDstRoi() called");
    return 0;
}

/* Demangled: MTKGralloc1::allocBuffer(unsigned int, unsigned int, unsigned int, unsigned long long, ANativeWindowBuffer**) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc111allocBufferEjjjyPP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc111allocBufferEjjjyPP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: GpuAuxGetCurrentIdx */
extern "C" __attribute__((visibility("default"))) int GpuAuxGetCurrentIdx(void) {
    ALOGD("GpuAuxGetCurrentIdx() called");
    return 0;
}

/* Demangled: _AUXCheckIfPQEnable */
extern "C" __attribute__((visibility("default"))) int _AUXCheckIfPQEnable(void) {
    ALOGD("_AUXCheckIfPQEnable() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: AuxGralloc4Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_(void) {
    ALOGD("_ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_() called");
    return 0;
}

/* Demangled: GpuAuxPrepareBuffer */
extern "C" __attribute__((visibility("default"))) int GpuAuxPrepareBuffer(void) {
    ALOGD("GpuAuxPrepareBuffer() called");
    return 0;
}

/* Demangled: GuiExtAuxQueueBuffer */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxQueueBuffer(void) {
    ALOGD("GuiExtAuxQueueBuffer() called");
    return 0;
}

/* Demangled: _AUXGPUDPrepareSrcImageInfo */
extern "C" __attribute__((visibility("default"))) int _AUXGPUDPrepareSrcImageInfo(void) {
    ALOGD("_AUXGPUDPrepareSrcImageInfo() called");
    return 0;
}

/* Demangled: _AUXPrepareSrcImageInfo */
extern "C" __attribute__((visibility("default"))) int _AUXPrepareSrcImageInfo(void) {
    ALOGD("_AUXPrepareSrcImageInfo() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, native_handle const*, int*)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, native_handle const*, int*)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handlePiEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handlePiEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Exported Object: vtable for GPUAUXBufferQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTV17GPUAUXBufferQueue = NULL;

/* Demangled: AuxGrallocMapper::~AuxGrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN16AuxGrallocMapperD0Ev(void) {
    ALOGD("_ZN16AuxGrallocMapperD0Ev() called");
    return 0;
}

/* Demangled: _AUXGetFormat4Private */
extern "C" __attribute__((visibility("default"))) int _AUXGetFormat4Private(void) {
    ALOGD("_AUXGetFormat4Private() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::dequeueBuffer(int, int, int, int*, ANativeWindowBuffer**, int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueue13dequeueBufferEiiiPiPP19ANativeWindowBufferS0_b(void) {
    ALOGD("_ZN17GPUAUXBufferQueue13dequeueBufferEiiiPiPP19ANativeWindowBufferS0_b() called");
    return 0;
}

/* Demangled: android::sp<GPUAUXBuffer>::operator=(GPUAUXBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI12GPUAUXBufferEaSEPS1_(void) {
    ALOGD("_ZN7android2spI12GPUAUXBufferEaSEPS1_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: MTKGralloc0::lockBuffer(ANativeWindowBuffer*, unsigned long long, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc010lockBufferEP19ANativeWindowBufferyPPv(void) {
    ALOGD("_ZN11MTKGralloc010lockBufferEP19ANativeWindowBufferyPPv() called");
    return 0;
}

/* Demangled: MTKGralloc1::setBufferPara(ANativeWindowBuffer*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc113setBufferParaEP19ANativeWindowBufferjj(void) {
    ALOGD("_ZN11MTKGralloc113setBufferParaEP19ANativeWindowBufferjj() called");
    return 0;
}

/* Exported Object: vtable for AuxGralloc3Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV17AuxGralloc3Mapper = NULL;

/* Demangled: GpuAuxDoConversionIfNeedV2 */
extern "C" __attribute__((visibility("default"))) int GpuAuxDoConversionIfNeedV2(void) {
    ALOGD("GpuAuxDoConversionIfNeedV2() called");
    return 0;
}

/* Demangled: GuiExtAuxIsSupportFormat */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxIsSupportFormat(void) {
    ALOGD("GuiExtAuxIsSupportFormat() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::releaseBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueue13releaseBufferEj(void) {
    ALOGD("_ZN17GPUAUXBufferQueue13releaseBufferEj() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long, unsigned int, unsigned int)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long, unsigned int, unsigned int)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyjjEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyjjEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: AuxBufferMapper::unlockBuffer(ANativeWindowBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AuxBufferMapper12unlockBufferEPK19ANativeWindowBuffer(void) {
    ALOGD("_ZN15AuxBufferMapper12unlockBufferEPK19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::~GPUAUXBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueueD0Ev(void) {
    ALOGD("_ZN17GPUAUXBufferQueueD0Ev() called");
    return 0;
}

/* Demangled: GpuAuxGetCurrentSourceBuffer */
extern "C" __attribute__((visibility("default"))) int GpuAuxGetCurrentSourceBuffer(void) {
    ALOGD("GpuAuxGetCurrentSourceBuffer() called");
    return 0;
}

/* Demangled: GuiExtAuxGetStatus */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxGetStatus(void) {
    ALOGD("GuiExtAuxGetStatus() called");
    return 0;
}

/* Demangled: AuxBufferMapper::lockBuffer(ANativeWindowBuffer const*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN15AuxBufferMapper10lockBufferEPK19ANativeWindowBufferPPv(void) {
    ALOGD("_ZN15AuxBufferMapper10lockBufferEPK19ANativeWindowBufferPPv() called");
    return 0;
}

/* Demangled: MTKGralloc::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKGralloc15destroyInstanceEv(void) {
    ALOGD("_ZN10MTKGralloc15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AuxGralloc2Mapper::AuxGralloc2Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17AuxGralloc2MapperC2Ev(void) {
    ALOGD("_ZN17AuxGralloc2MapperC2Ev() called");
    return 0;
}

/* Demangled: _AUXPreparePQInfo */
extern "C" __attribute__((visibility("default"))) int _AUXPreparePQInfo(void) {
    ALOGD("_AUXPreparePQInfo() called");
    return 0;
}

/* Demangled: MTKGralloc1::MTKGralloc1() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc1C1Ev(void) {
    ALOGD("_ZN11MTKGralloc1C1Ev() called");
    return 0;
}

/* Demangled: MTKGralloc0::MTKGralloc0() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc0C2Ev(void) {
    ALOGD("_ZN11MTKGralloc0C2Ev() called");
    return 0;
}

/* Demangled: MTKGralloc0::~MTKGralloc0() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc0D1Ev(void) {
    ALOGD("_ZN11MTKGralloc0D1Ev() called");
    return 0;
}

/* Demangled: MTKGralloc1::~MTKGralloc1() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc1D0Ev(void) {
    ALOGD("_ZN11MTKGralloc1D0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, native_handle const*)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, native_handle const*)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: android::Singleton<AuxGralloc>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10AuxGrallocE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI10AuxGrallocE11hasInstanceEv() called");
    return 0;
}

/* Demangled: AuxGralloc4Mapper::AuxGralloc4Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17AuxGralloc4MapperC2Ev(void) {
    ALOGD("_ZN17AuxGralloc4MapperC2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: GuiExtAuxIsSupportPQWhiteList */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxIsSupportPQWhiteList(void) {
    ALOGD("GuiExtAuxIsSupportPQWhiteList() called");
    return 0;
}

/* Demangled: _AUXUseHidl */
extern "C" __attribute__((visibility("default"))) int _AUXUseHidl(void) {
    ALOGD("_AUXUseHidl() called");
    return 0;
}

/* Demangled: guiExtIsMultipleDisplayScene() */
extern "C" __attribute__((visibility("default"))) int _Z28guiExtIsMultipleDisplayScenev(void) {
    ALOGD("_Z28guiExtIsMultipleDisplayScenev() called");
    return 0;
}

/* Demangled: AuxGralloc::~AuxGralloc() */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGrallocD2Ev(void) {
    ALOGD("_ZN10AuxGrallocD2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv() called");
    return 0;
}

/* Demangled: android::Singleton<AuxBufferMapper>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15AuxBufferMapperEC1Ev(void) {
    ALOGD("_ZN7android9SingletonI15AuxBufferMapperEC1Ev() called");
    return 0;
}

/* Demangled: GpuAuxIsSupportFormat */
extern "C" __attribute__((visibility("default"))) int GpuAuxIsSupportFormat(void) {
    ALOGD("GpuAuxIsSupportFormat() called");
    return 0;
}

/* Demangled: GuiExtAuxDequeueBuffer */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxDequeueBuffer(void) {
    ALOGD("GuiExtAuxDequeueBuffer() called");
    return 0;
}

/* Demangled: _AUXPreparePQScltmInfo */
extern "C" __attribute__((visibility("default"))) int _AUXPreparePQScltmInfo(void) {
    ALOGD("_AUXPreparePQScltmInfo() called");
    return 0;
}

/* Demangled: AuxGralloc3Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc3Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK17AuxGralloc3Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: GuiExtAuxCheckAuxPath */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxCheckAuxPath(void) {
    ALOGD("GuiExtAuxCheckAuxPath() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIjE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MTKGralloc1::getBufferInfo(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc113getBufferInfoEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc113getBufferInfoEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: android::Singleton<AuxGralloc>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10AuxGrallocED2Ev(void) {
    ALOGD("_ZN7android9SingletonI10AuxGrallocED2Ev() called");
    return 0;
}

/* Demangled: AuxGralloc4Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc4Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK17AuxGralloc4Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: AuxGralloc4Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc4Mapper8isLoadedEv(void) {
    ALOGD("_ZNK17AuxGralloc4Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_() called");
    return 0;
}

/* Demangled: GpuAuxIsUIPQFormat */
extern "C" __attribute__((visibility("default"))) int GpuAuxIsUIPQFormat(void) {
    ALOGD("GpuAuxIsUIPQFormat() called");
    return 0;
}

/* Exported Object: vtable for MTKANativeObjectBase<ANativeWindowBuffer, GPUAUXBuffer, android::RefBase> */
extern "C" __attribute__((visibility("default"))) void* _ZTV20MTKANativeObjectBaseI19ANativeWindowBuffer12GPUAUXBufferN7android7RefBaseEE = NULL;

/* Demangled: AuxGralloc2Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr(void) {
    ALOGD("_ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE = NULL;

/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: MTKGralloc0::freeBuffer(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc010freeBufferEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc010freeBufferEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: GuiExtAuxDoConversionIfNeedV2 */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxDoConversionIfNeedV2(void) {
    ALOGD("GuiExtAuxDoConversionIfNeedV2() called");
    return 0;
}

/* Demangled: MTKGralloc::getUsage() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKGralloc8getUsageEv(void) {
    ALOGD("_ZN10MTKGralloc8getUsageEv() called");
    return 0;
}

/* Demangled: MTKGralloc0::allocBuffer(unsigned int, unsigned int, unsigned int, unsigned long long, ANativeWindowBuffer**) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc011allocBufferEjjjyPP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc011allocBufferEjjjyPP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: MTKGralloc1::freeBuffer(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc110freeBufferEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc110freeBufferEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: AuxGralloc2Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_(void) {
    ALOGD("_ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_() called");
    return 0;
}

/* Exported Object: vtable for AuxGrallocMapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV16AuxGrallocMapper = NULL;

/* Demangled: android::sp<android::hardware::graphics::mapper::V2_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V2_0::IMapper>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware8graphics6mapper4V2_07IMapperEEaSEOS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware8graphics6mapper4V2_07IMapperEEaSEOS6_() called");
    return 0;
}

/* Exported Object: android::Singleton<AuxBufferMapper>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI15AuxBufferMapperE5sLockE = NULL;

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long*)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long*)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePyEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePyEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: GpuAuxCheckAuxPath */
extern "C" __attribute__((visibility("default"))) int GpuAuxCheckAuxPath(void) {
    ALOGD("GpuAuxCheckAuxPath() called");
    return 0;
}

/* Demangled: GuiExtAuxGetAuxOutFormat */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxGetAuxOutFormat(void) {
    ALOGD("GuiExtAuxGetAuxOutFormat() called");
    return 0;
}

/* Demangled: _AUXUseBlitStream2 */
extern "C" __attribute__((visibility("default"))) int _AUXUseBlitStream2(void) {
    ALOGD("_AUXUseBlitStream2() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<void (*)(gralloc1_device*, unsigned int*, char*)>(gralloc1_function_descriptor_t, void (**)(gralloc1_device*, unsigned int*, char*)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFvP15gralloc1_devicePjPcEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFvP15gralloc1_devicePjPcEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIjE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: MTKGralloc::s_pInst */
extern "C" __attribute__((visibility("default"))) void* _ZN10MTKGralloc7s_pInstE = NULL;

/* Demangled: MTKGralloc0::setBufferPara(ANativeWindowBuffer*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc013setBufferParaEP19ANativeWindowBufferjj(void) {
    ALOGD("_ZN11MTKGralloc013setBufferParaEP19ANativeWindowBufferjj() called");
    return 0;
}

/* Exported Object: vtable for AuxGralloc2Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV17AuxGralloc2Mapper = NULL;

/* Demangled: GpuAuxGetCurrentAuxBuffer */
extern "C" __attribute__((visibility("default"))) int GpuAuxGetCurrentAuxBuffer(void) {
    ALOGD("GpuAuxGetCurrentAuxBuffer() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::acquireBuffer(int*, ANativeWindowBuffer**, int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueue13acquireBufferEPiPP19ANativeWindowBufferS0_b(void) {
    ALOGD("_ZN17GPUAUXBufferQueue13acquireBufferEPiPP19ANativeWindowBufferS0_b() called");
    return 0;
}

/* Demangled: MTKGralloc1::lockBuffer(ANativeWindowBuffer*, unsigned long long, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc110lockBufferEP19ANativeWindowBufferyPPv(void) {
    ALOGD("_ZN11MTKGralloc110lockBufferEP19ANativeWindowBufferyPPv() called");
    return 0;
}

/* Demangled: AuxGrallocMapper::~AuxGrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN16AuxGrallocMapperD2Ev(void) {
    ALOGD("_ZN16AuxGrallocMapperD2Ev() called");
    return 0;
}

/* Demangled: GuiExtAuxCreateBufferQueue */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxCreateBufferQueue(void) {
    ALOGD("GuiExtAuxCreateBufferQueue() called");
    return 0;
}

/* Demangled: GuiExtAuxRequestBuffer */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxRequestBuffer(void) {
    ALOGD("GuiExtAuxRequestBuffer() called");
    return 0;
}

/* Demangled: AuxGralloc2Mapper::AuxGralloc2Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17AuxGralloc2MapperC1Ev(void) {
    ALOGD("_ZN17AuxGralloc2MapperC1Ev() called");
    return 0;
}

/* Demangled: GuiExtAuxIsUIPQFormat */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxIsUIPQFormat(void) {
    ALOGD("GuiExtAuxIsUIPQFormat() called");
    return 0;
}

/* Demangled: AuxGralloc::getBufferInfo(ANativeWindowBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGralloc13getBufferInfoEPK19ANativeWindowBuffer(void) {
    ALOGD("_ZN10AuxGralloc13getBufferInfoEPK19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::queueBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueue11queueBufferEj(void) {
    ALOGD("_ZN17GPUAUXBufferQueue11queueBufferEj() called");
    return 0;
}

/* Demangled: MTKGralloc0::MTKGralloc0() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc0C1Ev(void) {
    ALOGD("_ZN11MTKGralloc0C1Ev() called");
    return 0;
}

/* Demangled: MTKGralloc0::~MTKGralloc0() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc0D0Ev(void) {
    ALOGD("_ZN11MTKGralloc0D0Ev() called");
    return 0;
}

/* Demangled: GpuAuxDestoryContext */
extern "C" __attribute__((visibility("default"))) int GpuAuxDestoryContext(void) {
    ALOGD("GpuAuxDestoryContext() called");
    return 0;
}

/* Demangled: GpuAuxGetAuxOutFormat */
extern "C" __attribute__((visibility("default"))) int GpuAuxGetAuxOutFormat(void) {
    ALOGD("GpuAuxGetAuxOutFormat() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::~GPUAUXBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueueD2Ev(void) {
    ALOGD("_ZN17GPUAUXBufferQueueD2Ev() called");
    return 0;
}

/* Demangled: AuxGralloc3Mapper::AuxGralloc3Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17AuxGralloc3MapperC2Ev(void) {
    ALOGD("_ZN17AuxGralloc3MapperC2Ev() called");
    return 0;
}

/* Demangled: AuxGralloc4Mapper::AuxGralloc4Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17AuxGralloc4MapperC1Ev(void) {
    ALOGD("_ZN17AuxGralloc4MapperC1Ev() called");
    return 0;
}

/* Demangled: _AUXGetTargetEndTime */
extern "C" __attribute__((visibility("default"))) int _AUXGetTargetEndTime(void) {
    ALOGD("_AUXGetTargetEndTime() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::setConsumerName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueue15setConsumerNameEPKc(void) {
    ALOGD("_ZN17GPUAUXBufferQueue15setConsumerNameEPKc() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIjE12do_constructEPvj() called");
    return 0;
}

/* Demangled: MTKGralloc::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKGralloc11getInstanceEv(void) {
    ALOGD("_ZN10MTKGralloc11getInstanceEv() called");
    return 0;
}

/* Demangled: AuxGralloc::AuxGralloc() */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGrallocC2Ev(void) {
    ALOGD("_ZN10AuxGrallocC2Ev() called");
    return 0;
}

/* Demangled: AuxGralloc::~AuxGralloc() */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGrallocD1Ev(void) {
    ALOGD("_ZN10AuxGrallocD1Ev() called");
    return 0;
}

/* Demangled: AuxBufferMapper::AuxBufferMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN15AuxBufferMapperC2Ev(void) {
    ALOGD("_ZN15AuxBufferMapperC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<AuxBufferMapper>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15AuxBufferMapperE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonI15AuxBufferMapperE11hasInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: GuiExtAuxSetSize */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxSetSize(void) {
    ALOGD("GuiExtAuxSetSize() called");
    return 0;
}

/* Demangled: _AUXGetPreRotationAngle */
extern "C" __attribute__((visibility("default"))) int _AUXGetPreRotationAngle(void) {
    ALOGD("_AUXGetPreRotationAngle() called");
    return 0;
}

/* Demangled: MTKGralloc0::unlockBuffer(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc012unlockBufferEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc012unlockBufferEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long, unsigned long long)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long, unsigned long long)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyyEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyyEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: MTKGralloc1::~MTKGralloc1() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc1D2Ev(void) {
    ALOGD("_ZN11MTKGralloc1D2Ev() called");
    return 0;
}

/* Demangled: AuxGralloc2Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc2Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK17AuxGralloc2Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: AuxGralloc2Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc2Mapper8isLoadedEv(void) {
    ALOGD("_ZNK17AuxGralloc2Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: GuiExtAuxKickConversion */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxKickConversion(void) {
    ALOGD("GuiExtAuxKickConversion() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::GPUAUXBufferQueue(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueueC2Ej(void) {
    ALOGD("_ZN17GPUAUXBufferQueueC2Ej() called");
    return 0;
}

/* Demangled: MTKGralloc0::getBufferInfo(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc013getBufferInfoEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc013getBufferInfoEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: MTKGralloc1::initDispatch() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchEv(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchEv() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, native_handle const*, unsigned long long, unsigned long long, gralloc1_rect const*, void**, int)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, native_handle const*, unsigned long long, unsigned long long, gralloc1_rect const*, void**, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleyyPK13gralloc1_rectPPviEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleyyPK13gralloc1_rectPPviEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: MTKGralloc1::unlockBuffer(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112unlockBufferEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc112unlockBufferEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: android::Singleton<AuxGralloc>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10AuxGrallocEC2Ev(void) {
    ALOGD("_ZN7android9SingletonI10AuxGrallocEC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<AuxGralloc>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI10AuxGrallocED1Ev(void) {
    ALOGD("_ZN7android9SingletonI10AuxGrallocED1Ev() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayoutComponent, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayoutComponent> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<AuxBufferMapper>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonI15AuxBufferMapperED2Ev(void) {
    ALOGD("_ZN7android9SingletonI15AuxBufferMapperED2Ev() called");
    return 0;
}

/* Demangled: GpuAuxDoConversionIfNeed */
extern "C" __attribute__((visibility("default"))) int GpuAuxDoConversionIfNeed(void) {
    ALOGD("GpuAuxDoConversionIfNeed() called");
    return 0;
}

/* Demangled: _AUXCheckIfSrcDirty */
extern "C" __attribute__((visibility("default"))) int _AUXCheckIfSrcDirty(void) {
    ALOGD("_AUXCheckIfSrcDirty() called");
    return 0;
}

/* Demangled: _AUXPrepareSrcRoi */
extern "C" __attribute__((visibility("default"))) int _AUXPrepareSrcRoi(void) {
    ALOGD("_AUXPrepareSrcRoi() called");
    return 0;
}

/* Demangled: MTKGralloc0::get_buffer_handle(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc017get_buffer_handleEP19ANativeWindowBuffer(void) {
    ALOGD("_ZN11MTKGralloc017get_buffer_handleEP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: GpuAuxSetBufferCropSize */
extern "C" __attribute__((visibility("default"))) int GpuAuxSetBufferCropSize(void) {
    ALOGD("GpuAuxSetBufferCropSize() called");
    return 0;
}

/* Demangled: AuxGralloc::freeBuffer(ANativeWindowBuffer*, AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGralloc10freeBufferEP19ANativeWindowBufferP15AHardwareBuffer(void) {
    ALOGD("_ZN10AuxGralloc10freeBufferEP19ANativeWindowBufferP15AHardwareBuffer() called");
    return 0;
}

/* Demangled: AuxGralloc4Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr(void) {
    ALOGD("_ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr() called");
    return 0;
}

/* Demangled: GuiExtAuxSetName */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxSetName(void) {
    ALOGD("GuiExtAuxSetName() called");
    return 0;
}

/* Demangled: AuxGralloc3Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_(void) {
    ALOGD("_ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_() called");
    return 0;
}

/* Exported Object: android::Singleton<AuxGralloc>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI10AuxGrallocE5sLockE = NULL;

/* Exported Object: android::Singleton<AuxGralloc>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI10AuxGrallocE9sInstanceE = NULL;

/* Exported Object: android::Singleton<AuxBufferMapper>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonI15AuxBufferMapperE9sInstanceE = NULL;

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

/* Demangled: android::sp<android::hardware::graphics::mapper::V2_1::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V2_1::IMapper>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware8graphics6mapper4V2_17IMapperEEaSEOS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware8graphics6mapper4V2_17IMapperEEaSEOS6_() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::graphics::mapper::V3_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V3_0::IMapper>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware8graphics6mapper4V3_07IMapperEEaSEOS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware8graphics6mapper4V3_07IMapperEEaSEOS6_() called");
    return 0;
}

/* Demangled: GpuAuxCreateContext */
extern "C" __attribute__((visibility("default"))) int GpuAuxCreateContext(void) {
    ALOGD("GpuAuxCreateContext() called");
    return 0;
}

/* Demangled: AuxGralloc::setBufferSFInfo(ANativeWindowBuffer const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGralloc15setBufferSFInfoEPK19ANativeWindowBufferjj(void) {
    ALOGD("_ZN10AuxGralloc15setBufferSFInfoEPK19ANativeWindowBufferjj() called");
    return 0;
}

/* Demangled: AuxGralloc::allocateBuffer(unsigned int, unsigned int, int, ANativeWindowBuffer**, AHardwareBuffer**) */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGralloc14allocateBufferEjjiPP19ANativeWindowBufferPP15AHardwareBuffer(void) {
    ALOGD("_ZN10AuxGralloc14allocateBufferEjjiPP19ANativeWindowBufferPP15AHardwareBuffer() called");
    return 0;
}

/* Demangled: android::sp<GPUAUXBuffer>::operator=(android::sp<GPUAUXBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI12GPUAUXBufferEaSERKS2_(void) {
    ALOGD("_ZN7android2spI12GPUAUXBufferEaSERKS2_() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::graphics::mapper::V4_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V4_0::IMapper>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_() called");
    return 0;
}

/* Demangled: int AuxGralloc4Mapper::get<std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> > >(native_handle const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*), std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17AuxGralloc4Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_(void) {
    ALOGD("_ZNK17AuxGralloc4Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mms::V1_5::IMms>::operator=(android::sp<vendor::mediatek::hardware::mms::V1_5::IMms>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware3mms4V1_54IMmsEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware3mms4V1_54IMmsEEaSEOS7_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Exported Object: vtable for MTKGralloc0 */
extern "C" __attribute__((visibility("default"))) void* _ZTV11MTKGralloc0 = NULL;

/* Demangled: AuxGrallocMapper::~AuxGrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN16AuxGrallocMapperD1Ev(void) {
    ALOGD("_ZN16AuxGrallocMapperD1Ev() called");
    return 0;
}

/* Demangled: _AUXGPUDPrepareDstImageInfo */
extern "C" __attribute__((visibility("default"))) int _AUXGPUDPrepareDstImageInfo(void) {
    ALOGD("_AUXGPUDPrepareDstImageInfo() called");
    return 0;
}

/* Demangled: _AUXPrepareDstImageInfo */
extern "C" __attribute__((visibility("default"))) int _AUXPrepareDstImageInfo(void) {
    ALOGD("_AUXPrepareDstImageInfo() called");
    return 0;
}

/* Exported Object: vtable for MTKGralloc1 */
extern "C" __attribute__((visibility("default"))) void* _ZTV11MTKGralloc1 = NULL;

/* Exported Object: vtable for AuxGralloc4Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV17AuxGralloc4Mapper = NULL;

/* Demangled: GuiExtAuxAcquireBuffer */
extern "C" __attribute__((visibility("default"))) int GuiExtAuxAcquireBuffer(void) {
    ALOGD("GuiExtAuxAcquireBuffer() called");
    return 0;
}

/* Demangled: GuiExtSetDstColorSpace */
extern "C" __attribute__((visibility("default"))) int GuiExtSetDstColorSpace(void) {
    ALOGD("GuiExtSetDstColorSpace() called");
    return 0;
}

/* Demangled: _AUXGetBufferInfo(ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _Z17_AUXGetBufferInfoP19ANativeWindowBuffer(void) {
    ALOGD("_Z17_AUXGetBufferInfoP19ANativeWindowBuffer() called");
    return 0;
}

/* Demangled: GPUAUXBufferQueue::~GPUAUXBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN17GPUAUXBufferQueueD1Ev(void) {
    ALOGD("_ZN17GPUAUXBufferQueueD1Ev() called");
    return 0;
}

/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned int, unsigned long long const*, native_handle const**)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned int, unsigned long long const*, native_handle const**)) */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicejPKyPPK13native_handleEEEv30gralloc1_function_descriptor_tPT_(void) {
    ALOGD("_ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicejPKyPPK13native_handleEEEv30gralloc1_function_descriptor_tPT_() called");
    return 0;
}

/* Demangled: AuxGralloc3Mapper::AuxGralloc3Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN17AuxGralloc3MapperC1Ev(void) {
    ALOGD("_ZN17AuxGralloc3MapperC1Ev() called");
    return 0;
}

/* Demangled: _AUXCheckIfSrcSecure */
extern "C" __attribute__((visibility("default"))) int _AUXCheckIfSrcSecure(void) {
    ALOGD("_AUXCheckIfSrcSecure() called");
    return 0;
}

/* Demangled: _AUXGPUDPreparePQInfo */
extern "C" __attribute__((visibility("default"))) int _AUXGPUDPreparePQInfo(void) {
    ALOGD("_AUXGPUDPreparePQInfo() called");
    return 0;
}

/* Demangled: AuxGralloc::AuxGralloc() */
extern "C" __attribute__((visibility("default"))) int _ZN10AuxGrallocC1Ev(void) {
    ALOGD("_ZN10AuxGrallocC1Ev() called");
    return 0;
}

/* Demangled: AuxBufferMapper::AuxBufferMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN15AuxBufferMapperC1Ev(void) {
    ALOGD("_ZN15AuxBufferMapperC1Ev() called");
    return 0;
}

/* Exported Object: MTKGralloc::s_mutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10MTKGralloc7s_mutexE = NULL;

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: guiExtAuxSetWidthHieghtFromSrcBuffer(GuiExtAuxBufferQueue*, ANativeWindowBuffer*) */
extern "C" __attribute__((visibility("default"))) int _Z36guiExtAuxSetWidthHieghtFromSrcBufferP20GuiExtAuxBufferQueueP19ANativeWindowBuffer(void) {
    ALOGD("_Z36guiExtAuxSetWidthHieghtFromSrcBufferP20GuiExtAuxBufferQueueP19ANativeWindowBuffer() called");
    return 0;
}

/* Exported Object: vtable for GPUAUXBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTV12GPUAUXBuffer = NULL;

/* Demangled: MTKGralloc0::~MTKGralloc0() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc0D2Ev(void) {
    ALOGD("_ZN11MTKGralloc0D2Ev() called");
    return 0;
}

/* Demangled: MTKGralloc1::MTKGralloc1() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc1C2Ev(void) {
    ALOGD("_ZN11MTKGralloc1C2Ev() called");
    return 0;
}

/* Demangled: MTKGralloc1::~MTKGralloc1() */
extern "C" __attribute__((visibility("default"))) int _ZN11MTKGralloc1D1Ev(void) {
    ALOGD("_ZN11MTKGralloc1D1Ev() called");
    return 0;
}
