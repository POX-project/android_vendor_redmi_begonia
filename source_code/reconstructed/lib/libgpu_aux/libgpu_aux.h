/*
 * Reverse-Engineered ABI Specification for: libgpu_aux.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgpu_aux.so
 */

#ifndef BEGONIA_RE_LIBGPU_AUX_H
#define BEGONIA_RE_LIBGPU_AUX_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN17GPUAUXBufferQueueC1Ej */
/* Demangled: GPUAUXBufferQueue::GPUAUXBufferQueue(unsigned int) */
int _ZN17GPUAUXBufferQueueC1Ej(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyiEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long, int)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long, int)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyiEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZN7android9SingletonI10AuxGrallocEC1Ev */
/* Demangled: android::Singleton<AuxGralloc>::Singleton() */
int _ZN7android9SingletonI10AuxGrallocEC1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEv(void);

/* Symbol: _ZNK17AuxGralloc3Mapper8isLoadedEv */
/* Demangled: AuxGralloc3Mapper::isLoaded() const */
int _ZNK17AuxGralloc3Mapper8isLoadedEv(void);

/* Symbol: _ZN7android9SingletonI15AuxBufferMapperEC2Ev */
/* Demangled: android::Singleton<AuxBufferMapper>::Singleton() */
int _ZN7android9SingletonI15AuxBufferMapperEC2Ev(void);

/* Symbol: _ZN7android9SingletonI15AuxBufferMapperED1Ev */
/* Demangled: android::Singleton<AuxBufferMapper>::~Singleton() */
int _ZN7android9SingletonI15AuxBufferMapperED1Ev(void);

/* Symbol: GuiExtAuxDestroyBufferQueue */
/* Demangled: GuiExtAuxDestroyBufferQueue */
int GuiExtAuxDestroyBufferQueue(void);

/* Symbol: _AUXCheckIfSrcSizeValid */
/* Demangled: _AUXCheckIfSrcSizeValid */
int _AUXCheckIfSrcSizeValid(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: GuiExtAuxReleaseBuffer */
/* Demangled: GuiExtAuxReleaseBuffer */
int GuiExtAuxReleaseBuffer(void);

/* Symbol: _ZNK7android6VectorIjE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIjEE */
/* Demangled: vtable for android::Vector<unsigned int> */
extern void* _ZTVN7android6VectorIjEE;

/* Symbol: _ZN11MTKGralloc117get_buffer_handleEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc1::get_buffer_handle(ANativeWindowBuffer*) */
int _ZN11MTKGralloc117get_buffer_handleEP19ANativeWindowBuffer(void);

/* Symbol: _ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr */
/* Demangled: AuxGralloc3Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, android_ycbcr*) const */
int _ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr(void);

/* Symbol: _ZNK17AuxGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE */
/* Demangled: AuxGralloc4Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK17AuxGralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS3_9allocatorISA_EEEE(void);

/* Symbol: GpuAuxIsSupportPQWhiteList */
/* Demangled: GpuAuxIsSupportPQWhiteList */
int GpuAuxIsSupportPQWhiteList(void);

/* Symbol: _AUXPrepareDstRoi */
/* Demangled: _AUXPrepareDstRoi */
int _AUXPrepareDstRoi(void);

/* Symbol: _ZN11MTKGralloc111allocBufferEjjjyPP19ANativeWindowBuffer */
/* Demangled: MTKGralloc1::allocBuffer(unsigned int, unsigned int, unsigned int, unsigned long long, ANativeWindowBuffer**) */
int _ZN11MTKGralloc111allocBufferEjjjyPP19ANativeWindowBuffer(void);

/* Symbol: GpuAuxGetCurrentIdx */
/* Demangled: GpuAuxGetCurrentIdx */
int GpuAuxGetCurrentIdx(void);

/* Symbol: _AUXCheckIfPQEnable */
/* Demangled: _AUXCheckIfPQEnable */
int _AUXCheckIfPQEnable(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_ */
/* Demangled: AuxGralloc4Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, void**, int*, int*) const */
int _ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_(void);

/* Symbol: GpuAuxPrepareBuffer */
/* Demangled: GpuAuxPrepareBuffer */
int GpuAuxPrepareBuffer(void);

/* Symbol: GuiExtAuxQueueBuffer */
/* Demangled: GuiExtAuxQueueBuffer */
int GuiExtAuxQueueBuffer(void);

/* Symbol: _AUXGPUDPrepareSrcImageInfo */
/* Demangled: _AUXGPUDPrepareSrcImageInfo */
int _AUXGPUDPrepareSrcImageInfo(void);

/* Symbol: _AUXPrepareSrcImageInfo */
/* Demangled: _AUXPrepareSrcImageInfo */
int _AUXPrepareSrcImageInfo(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handlePiEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, native_handle const*, int*)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, native_handle const*, int*)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handlePiEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZTV17GPUAUXBufferQueue */
/* Demangled: vtable for GPUAUXBufferQueue */
extern void* _ZTV17GPUAUXBufferQueue;

/* Symbol: _ZN16AuxGrallocMapperD0Ev */
/* Demangled: AuxGrallocMapper::~AuxGrallocMapper() */
int _ZN16AuxGrallocMapperD0Ev(void);

/* Symbol: _AUXGetFormat4Private */
/* Demangled: _AUXGetFormat4Private */
int _AUXGetFormat4Private(void);

/* Symbol: _ZN17GPUAUXBufferQueue13dequeueBufferEiiiPiPP19ANativeWindowBufferS0_b */
/* Demangled: GPUAUXBufferQueue::dequeueBuffer(int, int, int, int*, ANativeWindowBuffer**, int*, bool) */
int _ZN17GPUAUXBufferQueue13dequeueBufferEiiiPiPP19ANativeWindowBufferS0_b(void);

/* Symbol: _ZN7android2spI12GPUAUXBufferEaSEPS1_ */
/* Demangled: android::sp<GPUAUXBuffer>::operator=(GPUAUXBuffer*) */
int _ZN7android2spI12GPUAUXBufferEaSEPS1_(void);

/* Symbol: _ZNK7android6VectorIjE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE7do_copyEPvPKvj(void);

/* Symbol: _ZN11MTKGralloc010lockBufferEP19ANativeWindowBufferyPPv */
/* Demangled: MTKGralloc0::lockBuffer(ANativeWindowBuffer*, unsigned long long, void**) */
int _ZN11MTKGralloc010lockBufferEP19ANativeWindowBufferyPPv(void);

/* Symbol: _ZN11MTKGralloc113setBufferParaEP19ANativeWindowBufferjj */
/* Demangled: MTKGralloc1::setBufferPara(ANativeWindowBuffer*, unsigned int, unsigned int) */
int _ZN11MTKGralloc113setBufferParaEP19ANativeWindowBufferjj(void);

/* Symbol: _ZTV17AuxGralloc3Mapper */
/* Demangled: vtable for AuxGralloc3Mapper */
extern void* _ZTV17AuxGralloc3Mapper;

/* Symbol: GpuAuxDoConversionIfNeedV2 */
/* Demangled: GpuAuxDoConversionIfNeedV2 */
int GpuAuxDoConversionIfNeedV2(void);

/* Symbol: GuiExtAuxIsSupportFormat */
/* Demangled: GuiExtAuxIsSupportFormat */
int GuiExtAuxIsSupportFormat(void);

/* Symbol: _ZN17GPUAUXBufferQueue13releaseBufferEj */
/* Demangled: GPUAUXBufferQueue::releaseBuffer(unsigned int) */
int _ZN17GPUAUXBufferQueue13releaseBufferEj(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyjjEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long, unsigned int, unsigned int)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long, unsigned int, unsigned int)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyjjEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZN15AuxBufferMapper12unlockBufferEPK19ANativeWindowBuffer */
/* Demangled: AuxBufferMapper::unlockBuffer(ANativeWindowBuffer const*) */
int _ZN15AuxBufferMapper12unlockBufferEPK19ANativeWindowBuffer(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN17GPUAUXBufferQueueD0Ev */
/* Demangled: GPUAUXBufferQueue::~GPUAUXBufferQueue() */
int _ZN17GPUAUXBufferQueueD0Ev(void);

/* Symbol: GpuAuxGetCurrentSourceBuffer */
/* Demangled: GpuAuxGetCurrentSourceBuffer */
int GpuAuxGetCurrentSourceBuffer(void);

/* Symbol: GuiExtAuxGetStatus */
/* Demangled: GuiExtAuxGetStatus */
int GuiExtAuxGetStatus(void);

/* Symbol: _ZN15AuxBufferMapper10lockBufferEPK19ANativeWindowBufferPPv */
/* Demangled: AuxBufferMapper::lockBuffer(ANativeWindowBuffer const*, void**) */
int _ZN15AuxBufferMapper10lockBufferEPK19ANativeWindowBufferPPv(void);

/* Symbol: _ZN10MTKGralloc15destroyInstanceEv */
/* Demangled: MTKGralloc::destroyInstance() */
int _ZN10MTKGralloc15destroyInstanceEv(void);

/* Symbol: _ZN17AuxGralloc2MapperC2Ev */
/* Demangled: AuxGralloc2Mapper::AuxGralloc2Mapper() */
int _ZN17AuxGralloc2MapperC2Ev(void);

/* Symbol: _AUXPreparePQInfo */
/* Demangled: _AUXPreparePQInfo */
int _AUXPreparePQInfo(void);

/* Symbol: _ZN11MTKGralloc1C1Ev */
/* Demangled: MTKGralloc1::MTKGralloc1() */
int _ZN11MTKGralloc1C1Ev(void);

/* Symbol: _ZN11MTKGralloc0C2Ev */
/* Demangled: MTKGralloc0::MTKGralloc0() */
int _ZN11MTKGralloc0C2Ev(void);

/* Symbol: _ZN11MTKGralloc0D1Ev */
/* Demangled: MTKGralloc0::~MTKGralloc0() */
int _ZN11MTKGralloc0D1Ev(void);

/* Symbol: _ZN11MTKGralloc1D0Ev */
/* Demangled: MTKGralloc1::~MTKGralloc1() */
int _ZN11MTKGralloc1D0Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, native_handle const*)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, native_handle const*)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZN7android9SingletonI10AuxGrallocE11hasInstanceEv */
/* Demangled: android::Singleton<AuxGralloc>::hasInstance() */
int _ZN7android9SingletonI10AuxGrallocE11hasInstanceEv(void);

/* Symbol: _ZN17AuxGralloc4MapperC2Ev */
/* Demangled: AuxGralloc4Mapper::AuxGralloc4Mapper() */
int _ZN17AuxGralloc4MapperC2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: GuiExtAuxIsSupportPQWhiteList */
/* Demangled: GuiExtAuxIsSupportPQWhiteList */
int GuiExtAuxIsSupportPQWhiteList(void);

/* Symbol: _AUXUseHidl */
/* Demangled: _AUXUseHidl */
int _AUXUseHidl(void);

/* Symbol: _Z28guiExtIsMultipleDisplayScenev */
/* Demangled: guiExtIsMultipleDisplayScene() */
int _Z28guiExtIsMultipleDisplayScenev(void);

/* Symbol: _ZN10AuxGrallocD2Ev */
/* Demangled: AuxGralloc::~AuxGralloc() */
int _ZN10AuxGrallocD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7destroyEv(void);

/* Symbol: _ZN7android9SingletonI15AuxBufferMapperEC1Ev */
/* Demangled: android::Singleton<AuxBufferMapper>::Singleton() */
int _ZN7android9SingletonI15AuxBufferMapperEC1Ev(void);

/* Symbol: GpuAuxIsSupportFormat */
/* Demangled: GpuAuxIsSupportFormat */
int GpuAuxIsSupportFormat(void);

/* Symbol: GuiExtAuxDequeueBuffer */
/* Demangled: GuiExtAuxDequeueBuffer */
int GuiExtAuxDequeueBuffer(void);

/* Symbol: _AUXPreparePQScltmInfo */
/* Demangled: _AUXPreparePQScltmInfo */
int _AUXPreparePQScltmInfo(void);

/* Symbol: _ZNK17AuxGralloc3Mapper6unlockEPK13native_handle */
/* Demangled: AuxGralloc3Mapper::unlock(native_handle const*) const */
int _ZNK17AuxGralloc3Mapper6unlockEPK13native_handle(void);

/* Symbol: GuiExtAuxCheckAuxPath */
/* Demangled: GuiExtAuxCheckAuxPath */
int GuiExtAuxCheckAuxPath(void);

/* Symbol: _ZNK7android6VectorIjE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIjE10do_destroyEPvj(void);

/* Symbol: _ZN11MTKGralloc113getBufferInfoEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc1::getBufferInfo(ANativeWindowBuffer*) */
int _ZN11MTKGralloc113getBufferInfoEP19ANativeWindowBuffer(void);

/* Symbol: _ZN7android9SingletonI10AuxGrallocED2Ev */
/* Demangled: android::Singleton<AuxGralloc>::~Singleton() */
int _ZN7android9SingletonI10AuxGrallocED2Ev(void);

/* Symbol: _ZNK17AuxGralloc4Mapper6unlockEPK13native_handle */
/* Demangled: AuxGralloc4Mapper::unlock(native_handle const*) const */
int _ZNK17AuxGralloc4Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZNK17AuxGralloc4Mapper8isLoadedEv */
/* Demangled: AuxGralloc4Mapper::isLoaded() const */
int _ZNK17AuxGralloc4Mapper8isLoadedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_ */
int _ZNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEclEOS12_ST_(void);

/* Symbol: GpuAuxIsUIPQFormat */
/* Demangled: GpuAuxIsUIPQFormat */
int GpuAuxIsUIPQFormat(void);

/* Symbol: _ZTV20MTKANativeObjectBaseI19ANativeWindowBuffer12GPUAUXBufferN7android7RefBaseEE */
/* Demangled: vtable for MTKANativeObjectBase<ANativeWindowBuffer, GPUAUXBuffer, android::RefBase> */
extern void* _ZTV20MTKANativeObjectBaseI19ANativeWindowBuffer12GPUAUXBufferN7android7RefBaseEE;

/* Symbol: _ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr */
/* Demangled: AuxGralloc2Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, android_ycbcr*) const */
int _ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EEE;

/* Symbol: _ZNK7android6VectorIjE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE16do_move_backwardEPvPKvj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN11MTKGralloc010freeBufferEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc0::freeBuffer(ANativeWindowBuffer*) */
int _ZN11MTKGralloc010freeBufferEP19ANativeWindowBuffer(void);

/* Symbol: GuiExtAuxDoConversionIfNeedV2 */
/* Demangled: GuiExtAuxDoConversionIfNeedV2 */
int GuiExtAuxDoConversionIfNeedV2(void);

/* Symbol: _ZN10MTKGralloc8getUsageEv */
/* Demangled: MTKGralloc::getUsage() */
int _ZN10MTKGralloc8getUsageEv(void);

/* Symbol: _ZN11MTKGralloc011allocBufferEjjjyPP19ANativeWindowBuffer */
/* Demangled: MTKGralloc0::allocBuffer(unsigned int, unsigned int, unsigned int, unsigned long long, ANativeWindowBuffer**) */
int _ZN11MTKGralloc011allocBufferEjjjyPP19ANativeWindowBuffer(void);

/* Symbol: _ZN11MTKGralloc110freeBufferEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc1::freeBuffer(ANativeWindowBuffer*) */
int _ZN11MTKGralloc110freeBufferEP19ANativeWindowBuffer(void);

/* Symbol: _ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_ */
/* Demangled: AuxGralloc2Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, void**, int*, int*) const */
int _ZNK17AuxGralloc2Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_(void);

/* Symbol: _ZTV16AuxGrallocMapper */
/* Demangled: vtable for AuxGrallocMapper */
extern void* _ZTV16AuxGrallocMapper;

/* Symbol: _ZN7android2spINS_8hardware8graphics6mapper4V2_07IMapperEEaSEOS6_ */
/* Demangled: android::sp<android::hardware::graphics::mapper::V2_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V2_0::IMapper>&&) */
int _ZN7android2spINS_8hardware8graphics6mapper4V2_07IMapperEEaSEOS6_(void);

/* Symbol: _ZN7android9SingletonI15AuxBufferMapperE5sLockE */
/* Demangled: android::Singleton<AuxBufferMapper>::sLock */
extern void* _ZN7android9SingletonI15AuxBufferMapperE5sLockE;

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePyEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long*)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long*)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePyEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: GpuAuxCheckAuxPath */
/* Demangled: GpuAuxCheckAuxPath */
int GpuAuxCheckAuxPath(void);

/* Symbol: GuiExtAuxGetAuxOutFormat */
/* Demangled: GuiExtAuxGetAuxOutFormat */
int GuiExtAuxGetAuxOutFormat(void);

/* Symbol: _AUXUseBlitStream2 */
/* Demangled: _AUXUseBlitStream2 */
int _AUXUseBlitStream2(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFvP15gralloc1_devicePjPcEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<void (*)(gralloc1_device*, unsigned int*, char*)>(gralloc1_function_descriptor_t, void (**)(gralloc1_device*, unsigned int*, char*)) */
int _ZN11MTKGralloc112initDispatchIPFvP15gralloc1_devicePjPcEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZNK7android6VectorIjE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIjE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN10MTKGralloc7s_pInstE */
/* Demangled: MTKGralloc::s_pInst */
extern void* _ZN10MTKGralloc7s_pInstE;

/* Symbol: _ZN11MTKGralloc013setBufferParaEP19ANativeWindowBufferjj */
/* Demangled: MTKGralloc0::setBufferPara(ANativeWindowBuffer*, unsigned int, unsigned int) */
int _ZN11MTKGralloc013setBufferParaEP19ANativeWindowBufferjj(void);

/* Symbol: _ZTV17AuxGralloc2Mapper */
/* Demangled: vtable for AuxGralloc2Mapper */
extern void* _ZTV17AuxGralloc2Mapper;

/* Symbol: GpuAuxGetCurrentAuxBuffer */
/* Demangled: GpuAuxGetCurrentAuxBuffer */
int GpuAuxGetCurrentAuxBuffer(void);

/* Symbol: _ZN17GPUAUXBufferQueue13acquireBufferEPiPP19ANativeWindowBufferS0_b */
/* Demangled: GPUAUXBufferQueue::acquireBuffer(int*, ANativeWindowBuffer**, int*, bool) */
int _ZN17GPUAUXBufferQueue13acquireBufferEPiPP19ANativeWindowBufferS0_b(void);

/* Symbol: _ZN11MTKGralloc110lockBufferEP19ANativeWindowBufferyPPv */
/* Demangled: MTKGralloc1::lockBuffer(ANativeWindowBuffer*, unsigned long long, void**) */
int _ZN11MTKGralloc110lockBufferEP19ANativeWindowBufferyPPv(void);

/* Symbol: _ZN16AuxGrallocMapperD2Ev */
/* Demangled: AuxGrallocMapper::~AuxGrallocMapper() */
int _ZN16AuxGrallocMapperD2Ev(void);

/* Symbol: GuiExtAuxCreateBufferQueue */
/* Demangled: GuiExtAuxCreateBufferQueue */
int GuiExtAuxCreateBufferQueue(void);

/* Symbol: GuiExtAuxRequestBuffer */
/* Demangled: GuiExtAuxRequestBuffer */
int GuiExtAuxRequestBuffer(void);

/* Symbol: _ZN17AuxGralloc2MapperC1Ev */
/* Demangled: AuxGralloc2Mapper::AuxGralloc2Mapper() */
int _ZN17AuxGralloc2MapperC1Ev(void);

/* Symbol: GuiExtAuxIsUIPQFormat */
/* Demangled: GuiExtAuxIsUIPQFormat */
int GuiExtAuxIsUIPQFormat(void);

/* Symbol: _ZN10AuxGralloc13getBufferInfoEPK19ANativeWindowBuffer */
/* Demangled: AuxGralloc::getBufferInfo(ANativeWindowBuffer const*) */
int _ZN10AuxGralloc13getBufferInfoEPK19ANativeWindowBuffer(void);

/* Symbol: _ZN17GPUAUXBufferQueue11queueBufferEj */
/* Demangled: GPUAUXBufferQueue::queueBuffer(unsigned int) */
int _ZN17GPUAUXBufferQueue11queueBufferEj(void);

/* Symbol: _ZN11MTKGralloc0C1Ev */
/* Demangled: MTKGralloc0::MTKGralloc0() */
int _ZN11MTKGralloc0C1Ev(void);

/* Symbol: _ZN11MTKGralloc0D0Ev */
/* Demangled: MTKGralloc0::~MTKGralloc0() */
int _ZN11MTKGralloc0D0Ev(void);

/* Symbol: GpuAuxDestoryContext */
/* Demangled: GpuAuxDestoryContext */
int GpuAuxDestoryContext(void);

/* Symbol: GpuAuxGetAuxOutFormat */
/* Demangled: GpuAuxGetAuxOutFormat */
int GpuAuxGetAuxOutFormat(void);

/* Symbol: _ZN17GPUAUXBufferQueueD2Ev */
/* Demangled: GPUAUXBufferQueue::~GPUAUXBufferQueue() */
int _ZN17GPUAUXBufferQueueD2Ev(void);

/* Symbol: _ZN17AuxGralloc3MapperC2Ev */
/* Demangled: AuxGralloc3Mapper::AuxGralloc3Mapper() */
int _ZN17AuxGralloc3MapperC2Ev(void);

/* Symbol: _ZN17AuxGralloc4MapperC1Ev */
/* Demangled: AuxGralloc4Mapper::AuxGralloc4Mapper() */
int _ZN17AuxGralloc4MapperC1Ev(void);

/* Symbol: _AUXGetTargetEndTime */
/* Demangled: _AUXGetTargetEndTime */
int _AUXGetTargetEndTime(void);

/* Symbol: _ZN17GPUAUXBufferQueue15setConsumerNameEPKc */
/* Demangled: GPUAUXBufferQueue::setConsumerName(char const*) */
int _ZN17GPUAUXBufferQueue15setConsumerNameEPKc(void);

/* Symbol: _ZNK7android6VectorIjE12do_constructEPvj */
/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIjE12do_constructEPvj(void);

/* Symbol: _ZN10MTKGralloc11getInstanceEv */
/* Demangled: MTKGralloc::getInstance() */
int _ZN10MTKGralloc11getInstanceEv(void);

/* Symbol: _ZN10AuxGrallocC2Ev */
/* Demangled: AuxGralloc::AuxGralloc() */
int _ZN10AuxGrallocC2Ev(void);

/* Symbol: _ZN10AuxGrallocD1Ev */
/* Demangled: AuxGralloc::~AuxGralloc() */
int _ZN10AuxGrallocD1Ev(void);

/* Symbol: _ZN15AuxBufferMapperC2Ev */
/* Demangled: AuxBufferMapper::AuxBufferMapper() */
int _ZN15AuxBufferMapperC2Ev(void);

/* Symbol: _ZN7android9SingletonI15AuxBufferMapperE11hasInstanceEv */
/* Demangled: android::Singleton<AuxBufferMapper>::hasInstance() */
int _ZN7android9SingletonI15AuxBufferMapperE11hasInstanceEv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: GuiExtAuxSetSize */
/* Demangled: GuiExtAuxSetSize */
int GuiExtAuxSetSize(void);

/* Symbol: _AUXGetPreRotationAngle */
/* Demangled: _AUXGetPreRotationAngle */
int _AUXGetPreRotationAngle(void);

/* Symbol: _ZN11MTKGralloc012unlockBufferEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc0::unlockBuffer(ANativeWindowBuffer*) */
int _ZN11MTKGralloc012unlockBufferEP19ANativeWindowBuffer(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyyEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned long long, unsigned long long)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned long long, unsigned long long)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_deviceyyEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZN11MTKGralloc1D2Ev */
/* Demangled: MTKGralloc1::~MTKGralloc1() */
int _ZN11MTKGralloc1D2Ev(void);

/* Symbol: _ZNK17AuxGralloc2Mapper6unlockEPK13native_handle */
/* Demangled: AuxGralloc2Mapper::unlock(native_handle const*) const */
int _ZNK17AuxGralloc2Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZNK17AuxGralloc2Mapper8isLoadedEv */
/* Demangled: AuxGralloc2Mapper::isLoaded() const */
int _ZNK17AuxGralloc2Mapper8isLoadedEv(void);

/* Symbol: GuiExtAuxKickConversion */
/* Demangled: GuiExtAuxKickConversion */
int GuiExtAuxKickConversion(void);

/* Symbol: _ZN17GPUAUXBufferQueueC2Ej */
/* Demangled: GPUAUXBufferQueue::GPUAUXBufferQueue(unsigned int) */
int _ZN17GPUAUXBufferQueueC2Ej(void);

/* Symbol: _ZN11MTKGralloc013getBufferInfoEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc0::getBufferInfo(ANativeWindowBuffer*) */
int _ZN11MTKGralloc013getBufferInfoEP19ANativeWindowBuffer(void);

/* Symbol: _ZN11MTKGralloc112initDispatchEv */
/* Demangled: MTKGralloc1::initDispatch() */
int _ZN11MTKGralloc112initDispatchEv(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleyyPK13gralloc1_rectPPviEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, native_handle const*, unsigned long long, unsigned long long, gralloc1_rect const*, void**, int)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, native_handle const*, unsigned long long, unsigned long long, gralloc1_rect const*, void**, int)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicePK13native_handleyyPK13gralloc1_rectPPviEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZN11MTKGralloc112unlockBufferEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc1::unlockBuffer(ANativeWindowBuffer*) */
int _ZN11MTKGralloc112unlockBufferEP19ANativeWindowBuffer(void);

/* Symbol: _ZN7android9SingletonI10AuxGrallocEC2Ev */
/* Demangled: android::Singleton<AuxGralloc>::Singleton() */
int _ZN7android9SingletonI10AuxGrallocEC2Ev(void);

/* Symbol: _ZN7android9SingletonI10AuxGrallocED1Ev */
/* Demangled: android::Singleton<AuxGralloc>::~Singleton() */
int _ZN7android9SingletonI10AuxGrallocED1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE */
int _ZNKSt3__110__function6__funcIZNK17AuxGralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISA_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSI_8hidl_vecIhEEPT_ESV_EUlRKSU_ST_E_NSB_IS10_EEFvNSL_5ErrorEST_EE7__cloneEPNS0_6__baseIS13_EE(void);

/* Symbol: _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<aidl::android::hardware::graphics::common::PlaneLayoutComponent, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayoutComponent> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN4aidl7android8hardware8graphics6common20PlaneLayoutComponentENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN7android9SingletonI15AuxBufferMapperED2Ev */
/* Demangled: android::Singleton<AuxBufferMapper>::~Singleton() */
int _ZN7android9SingletonI15AuxBufferMapperED2Ev(void);

/* Symbol: GpuAuxDoConversionIfNeed */
/* Demangled: GpuAuxDoConversionIfNeed */
int GpuAuxDoConversionIfNeed(void);

/* Symbol: _AUXCheckIfSrcDirty */
/* Demangled: _AUXCheckIfSrcDirty */
int _AUXCheckIfSrcDirty(void);

/* Symbol: _AUXPrepareSrcRoi */
/* Demangled: _AUXPrepareSrcRoi */
int _AUXPrepareSrcRoi(void);

/* Symbol: _ZN11MTKGralloc017get_buffer_handleEP19ANativeWindowBuffer */
/* Demangled: MTKGralloc0::get_buffer_handle(ANativeWindowBuffer*) */
int _ZN11MTKGralloc017get_buffer_handleEP19ANativeWindowBuffer(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: GpuAuxSetBufferCropSize */
/* Demangled: GpuAuxSetBufferCropSize */
int GpuAuxSetBufferCropSize(void);

/* Symbol: _ZN10AuxGralloc10freeBufferEP19ANativeWindowBufferP15AHardwareBuffer */
/* Demangled: AuxGralloc::freeBuffer(ANativeWindowBuffer*, AHardwareBuffer*) */
int _ZN10AuxGralloc10freeBufferEP19ANativeWindowBufferP15AHardwareBuffer(void);

/* Symbol: _ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr */
/* Demangled: AuxGralloc4Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, android_ycbcr*) const */
int _ZNK17AuxGralloc4Mapper4lockEPK13native_handleyRK4RectiP13android_ycbcr(void);

/* Symbol: GuiExtAuxSetName */
/* Demangled: GuiExtAuxSetName */
int GuiExtAuxSetName(void);

/* Symbol: _ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_ */
/* Demangled: AuxGralloc3Mapper::lock(native_handle const*, unsigned long long, Rect const&, int, void**, int*, int*) const */
int _ZNK17AuxGralloc3Mapper4lockEPK13native_handleyRK4RectiPPvPiS8_(void);

/* Symbol: _ZN7android9SingletonI10AuxGrallocE5sLockE */
/* Demangled: android::Singleton<AuxGralloc>::sLock */
extern void* _ZN7android9SingletonI10AuxGrallocE5sLockE;

/* Symbol: _ZN7android9SingletonI10AuxGrallocE9sInstanceE */
/* Demangled: android::Singleton<AuxGralloc>::sInstance */
extern void* _ZN7android9SingletonI10AuxGrallocE9sInstanceE;

/* Symbol: _ZN7android9SingletonI15AuxBufferMapperE9sInstanceE */
/* Demangled: android::Singleton<AuxBufferMapper>::sInstance */
extern void* _ZN7android9SingletonI15AuxBufferMapperE9sInstanceE;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7android2spINS_8hardware8graphics6mapper4V2_17IMapperEEaSEOS6_ */
/* Demangled: android::sp<android::hardware::graphics::mapper::V2_1::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V2_1::IMapper>&&) */
int _ZN7android2spINS_8hardware8graphics6mapper4V2_17IMapperEEaSEOS6_(void);

/* Symbol: _ZN7android2spINS_8hardware8graphics6mapper4V3_07IMapperEEaSEOS6_ */
/* Demangled: android::sp<android::hardware::graphics::mapper::V3_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V3_0::IMapper>&&) */
int _ZN7android2spINS_8hardware8graphics6mapper4V3_07IMapperEEaSEOS6_(void);

/* Symbol: GpuAuxCreateContext */
/* Demangled: GpuAuxCreateContext */
int GpuAuxCreateContext(void);

/* Symbol: _ZN10AuxGralloc15setBufferSFInfoEPK19ANativeWindowBufferjj */
/* Demangled: AuxGralloc::setBufferSFInfo(ANativeWindowBuffer const*, unsigned int, unsigned int) */
int _ZN10AuxGralloc15setBufferSFInfoEPK19ANativeWindowBufferjj(void);

/* Symbol: _ZN10AuxGralloc14allocateBufferEjjiPP19ANativeWindowBufferPP15AHardwareBuffer */
/* Demangled: AuxGralloc::allocateBuffer(unsigned int, unsigned int, int, ANativeWindowBuffer**, AHardwareBuffer**) */
int _ZN10AuxGralloc14allocateBufferEjjiPP19ANativeWindowBufferPP15AHardwareBuffer(void);

/* Symbol: _ZN7android2spI12GPUAUXBufferEaSERKS2_ */
/* Demangled: android::sp<GPUAUXBuffer>::operator=(android::sp<GPUAUXBuffer> const&) */
int _ZN7android2spI12GPUAUXBufferEaSERKS2_(void);

/* Symbol: _ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_ */
/* Demangled: android::sp<android::hardware::graphics::mapper::V4_0::IMapper>::operator=(android::sp<android::hardware::graphics::mapper::V4_0::IMapper>&&) */
int _ZN7android2spINS_8hardware8graphics6mapper4V4_07IMapperEEaSEOS6_(void);

/* Symbol: _ZNK17AuxGralloc4Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_ */
/* Demangled: int AuxGralloc4Mapper::get<std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> > >(native_handle const*, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*), std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK17AuxGralloc4Mapper3getINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware3mms4V1_54IMmsEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mms::V1_5::IMms>::operator=(android::sp<vendor::mediatek::hardware::mms::V1_5::IMms>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware3mms4V1_54IMmsEEaSEOS7_(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZTV11MTKGralloc0 */
/* Demangled: vtable for MTKGralloc0 */
extern void* _ZTV11MTKGralloc0;

/* Symbol: _ZN16AuxGrallocMapperD1Ev */
/* Demangled: AuxGrallocMapper::~AuxGrallocMapper() */
int _ZN16AuxGrallocMapperD1Ev(void);

/* Symbol: _AUXGPUDPrepareDstImageInfo */
/* Demangled: _AUXGPUDPrepareDstImageInfo */
int _AUXGPUDPrepareDstImageInfo(void);

/* Symbol: _AUXPrepareDstImageInfo */
/* Demangled: _AUXPrepareDstImageInfo */
int _AUXPrepareDstImageInfo(void);

/* Symbol: _ZTV11MTKGralloc1 */
/* Demangled: vtable for MTKGralloc1 */
extern void* _ZTV11MTKGralloc1;

/* Symbol: _ZTV17AuxGralloc4Mapper */
/* Demangled: vtable for AuxGralloc4Mapper */
extern void* _ZTV17AuxGralloc4Mapper;

/* Symbol: GuiExtAuxAcquireBuffer */
/* Demangled: GuiExtAuxAcquireBuffer */
int GuiExtAuxAcquireBuffer(void);

/* Symbol: GuiExtSetDstColorSpace */
/* Demangled: GuiExtSetDstColorSpace */
int GuiExtSetDstColorSpace(void);

/* Symbol: _Z17_AUXGetBufferInfoP19ANativeWindowBuffer */
/* Demangled: _AUXGetBufferInfo(ANativeWindowBuffer*) */
int _Z17_AUXGetBufferInfoP19ANativeWindowBuffer(void);

/* Symbol: _ZN17GPUAUXBufferQueueD1Ev */
/* Demangled: GPUAUXBufferQueue::~GPUAUXBufferQueue() */
int _ZN17GPUAUXBufferQueueD1Ev(void);

/* Symbol: _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicejPKyPPK13native_handleEEEv30gralloc1_function_descriptor_tPT_ */
/* Demangled: void MTKGralloc1::initDispatch<int (*)(gralloc1_device*, unsigned int, unsigned long long const*, native_handle const**)>(gralloc1_function_descriptor_t, int (**)(gralloc1_device*, unsigned int, unsigned long long const*, native_handle const**)) */
int _ZN11MTKGralloc112initDispatchIPFiP15gralloc1_devicejPKyPPK13native_handleEEEv30gralloc1_function_descriptor_tPT_(void);

/* Symbol: _ZN17AuxGralloc3MapperC1Ev */
/* Demangled: AuxGralloc3Mapper::AuxGralloc3Mapper() */
int _ZN17AuxGralloc3MapperC1Ev(void);

/* Symbol: _AUXCheckIfSrcSecure */
/* Demangled: _AUXCheckIfSrcSecure */
int _AUXCheckIfSrcSecure(void);

/* Symbol: _AUXGPUDPreparePQInfo */
/* Demangled: _AUXGPUDPreparePQInfo */
int _AUXGPUDPreparePQInfo(void);

/* Symbol: _ZN10AuxGrallocC1Ev */
/* Demangled: AuxGralloc::AuxGralloc() */
int _ZN10AuxGrallocC1Ev(void);

/* Symbol: _ZN15AuxBufferMapperC1Ev */
/* Demangled: AuxBufferMapper::AuxBufferMapper() */
int _ZN15AuxBufferMapperC1Ev(void);

/* Symbol: _ZN10MTKGralloc7s_mutexE */
/* Demangled: MTKGralloc::s_mutex */
extern void* _ZN10MTKGralloc7s_mutexE;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _Z36guiExtAuxSetWidthHieghtFromSrcBufferP20GuiExtAuxBufferQueueP19ANativeWindowBuffer */
/* Demangled: guiExtAuxSetWidthHieghtFromSrcBuffer(GuiExtAuxBufferQueue*, ANativeWindowBuffer*) */
int _Z36guiExtAuxSetWidthHieghtFromSrcBufferP20GuiExtAuxBufferQueueP19ANativeWindowBuffer(void);

/* Symbol: _ZTV12GPUAUXBuffer */
/* Demangled: vtable for GPUAUXBuffer */
extern void* _ZTV12GPUAUXBuffer;

/* Symbol: _ZN11MTKGralloc0D2Ev */
/* Demangled: MTKGralloc0::~MTKGralloc0() */
int _ZN11MTKGralloc0D2Ev(void);

/* Symbol: _ZN11MTKGralloc1C2Ev */
/* Demangled: MTKGralloc1::MTKGralloc1() */
int _ZN11MTKGralloc1C2Ev(void);

/* Symbol: _ZN11MTKGralloc1D1Ev */
/* Demangled: MTKGralloc1::~MTKGralloc1() */
int _ZN11MTKGralloc1D1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGPU_AUX_H */
