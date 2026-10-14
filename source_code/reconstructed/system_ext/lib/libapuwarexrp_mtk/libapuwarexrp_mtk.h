/*
 * Reverse-Engineered ABI Specification for: libapuwarexrp.mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libapuwarexrp.mtk.so
 */

#ifndef BEGONIA_RE_LIBAPUWAREXRP_MTK_H
#define BEGONIA_RE_LIBAPUWAREXRP_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ion_munmap */
/* Demangled: ion_munmap */
int ion_munmap(void);

/* Symbol: _ZN12MemoryHandle6munmapEyi */
/* Demangled: MemoryHandle::munmap(unsigned long long, int) */
int _ZN12MemoryHandle6munmapEyi(void);

/* Symbol: _ZN20XrpIntrinsicExecutorC2Ei */
/* Demangled: XrpIntrinsicExecutor::XrpIntrinsicExecutor(int) */
int _ZN20XrpIntrinsicExecutorC2Ei(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl17PrepareXrpCommandEyx */
/* Demangled: xrp::XrpIntrinsicImpl::PrepareXrpCommand(unsigned long long, long long) */
int _ZN3xrp16XrpIntrinsicImpl17PrepareXrpCommandEyx(void);

/* Symbol: ion_alloc_camera */
/* Demangled: ion_alloc_camera */
int ion_alloc_camera(void);

/* Symbol: ion_cache_sync_flush_all */
/* Demangled: ion_cache_sync_flush_all */
int ion_cache_sync_flush_all(void);

/* Symbol: ion_dma_map_area */
/* Demangled: ion_dma_map_area */
int ion_dma_map_area(void);

/* Symbol: _ZN20XrpIntrinsicExecutor17PrepareXrpCommandEyx */
/* Demangled: XrpIntrinsicExecutor::PrepareXrpCommand(unsigned long long, long long) */
int _ZN20XrpIntrinsicExecutor17PrepareXrpCommandEyx(void);

/* Symbol: mt_ion_open */
/* Demangled: mt_ion_open */
int mt_ion_open(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhj(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl18FinalizeXrpCommandEy */
/* Demangled: xrp::XrpIntrinsicImpl::FinalizeXrpCommand(unsigned long long) */
int _ZN3xrp16XrpIntrinsicImpl18FinalizeXrpCommandEy(void);

/* Symbol: ion_alloc_syscontig */
/* Demangled: ion_alloc_syscontig */
int ion_alloc_syscontig(void);

/* Symbol: _ZN20XrpIntrinsicExecutor16CreateXrpCommandEy */
/* Demangled: XrpIntrinsicExecutor::CreateXrpCommand(unsigned long long) */
int _ZN20XrpIntrinsicExecutor16CreateXrpCommandEy(void);

/* Symbol: _ZN20XrpIntrinsicExecutor22PrepareInternalCommandEjj */
/* Demangled: XrpIntrinsicExecutor::PrepareInternalCommand(unsigned int, unsigned int) */
int _ZN20XrpIntrinsicExecutor22PrepareInternalCommandEjj(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl14SetupXrpDeviceEv */
/* Demangled: xrp::XrpIntrinsicImpl::SetupXrpDevice() */
int _ZN3xrp16XrpIntrinsicImpl14SetupXrpDeviceEv(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImplC2Ei */
/* Demangled: xrp::XrpIntrinsicImpl::XrpIntrinsicImpl(int) */
int _ZN3xrp16XrpIntrinsicImplC2Ei(void);

/* Symbol: ion_dma_unmap_area */
/* Demangled: ion_dma_unmap_area */
int ion_dma_unmap_area(void);

/* Symbol: _ZN12MemoryHandleC1Ev */
/* Demangled: MemoryHandle::MemoryHandle() */
int _ZN12MemoryHandleC1Ev(void);

/* Symbol: _ZN20XrpIntrinsicExecutor15CreateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE */
/* Demangled: XrpIntrinsicExecutor::CreateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
int _ZN20XrpIntrinsicExecutor15CreateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE(void);

/* Symbol: _ZN20XrpIntrinsicExecutorD2Ev */
/* Demangled: XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
int _ZN20XrpIntrinsicExecutorD2Ev(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE */
/* Demangled: xrp::XrpIntrinsicImpl::CreateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
int _ZN3xrp16XrpIntrinsicImpl15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void);

/* Symbol: _ZN12MemoryHandleD2Ev */
/* Demangled: MemoryHandle::~MemoryHandle() */
int _ZN12MemoryHandleD2Ev(void);

/* Symbol: _ZN12MemoryHandle4mmapEii */
/* Demangled: MemoryHandle::mmap(int, int) */
int _ZN12MemoryHandle4mmapEii(void);

/* Symbol: _ZN20XrpIntrinsicExecutor15UpdateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE */
/* Demangled: XrpIntrinsicExecutor::UpdateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
int _ZN20XrpIntrinsicExecutor15UpdateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE(void);

/* Symbol: ion_share_close */
/* Demangled: ion_share_close */
int ion_share_close(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhjjjxPNS0_9EventFlagE */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::readBlocking(unsigned char*, unsigned int, unsigned int, unsigned int, long long, android::hardware::EventFlag*) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhjjjxPNS0_9EventFlagE(void);

/* Symbol: createXrpInstanceInternal */
/* Demangled: createXrpInstanceInternal */
int createXrpInstanceInternal(void);

/* Symbol: _Z18InitXrpDebugConfigv */
/* Demangled: InitXrpDebugConfig() */
int _Z18InitXrpDebugConfigv(void);

/* Symbol: _ZN20XrpIntrinsicExecutor18FinalizeXrpCommandEy */
/* Demangled: XrpIntrinsicExecutor::FinalizeXrpCommand(unsigned long long) */
int _ZN20XrpIntrinsicExecutor18FinalizeXrpCommandEy(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImplD0Ev */
/* Demangled: xrp::XrpIntrinsicImpl::~XrpIntrinsicImpl() */
int _ZN3xrp16XrpIntrinsicImplD0Ev(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImplD2Ev */
/* Demangled: xrp::XrpIntrinsicImpl::~XrpIntrinsicImpl() */
int _ZN3xrp16XrpIntrinsicImplD2Ev(void);

/* Symbol: _ZNK3xrp16XrpIntrinsicImpl12GetXrpBufferEx */
/* Demangled: xrp::XrpIntrinsicImpl::GetXrpBuffer(long long) const */
int _ZNK3xrp16XrpIntrinsicImpl12GetXrpBufferEx(void);

/* Symbol: _ZNK3xrp16XrpIntrinsicImpl24GetPreparedRequestsCountEy */
/* Demangled: xrp::XrpIntrinsicImpl::GetPreparedRequestsCount(unsigned long long) const */
int _ZNK3xrp16XrpIntrinsicImpl24GetPreparedRequestsCountEy(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl16CreateXrpCommandEy */
/* Demangled: xrp::XrpIntrinsicImpl::CreateXrpCommand(unsigned long long) */
int _ZN3xrp16XrpIntrinsicImpl16CreateXrpCommandEy(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl22PrepareInternalCommandEjj */
/* Demangled: xrp::XrpIntrinsicImpl::PrepareInternalCommand(unsigned int, unsigned int) */
int _ZN3xrp16XrpIntrinsicImpl22PrepareInternalCommandEjj(void);

/* Symbol: ion_custom_ioctl */
/* Demangled: ion_custom_ioctl */
int ion_custom_ioctl(void);

/* Symbol: ion_dma_map_area_va */
/* Demangled: ion_dma_map_area_va */
int ion_dma_map_area_va(void);

/* Symbol: _ZN20XrpIntrinsicExecutorC1Ei */
/* Demangled: XrpIntrinsicExecutor::XrpIntrinsicExecutor(int) */
int _ZN20XrpIntrinsicExecutorC1Ei(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb(void);

/* Symbol: _ZNK3xrp16XrpIntrinsicImpl15GetDeviceStatusEy */
/* Demangled: xrp::XrpIntrinsicImpl::GetDeviceStatus(unsigned long long) const */
int _ZNK3xrp16XrpIntrinsicImpl15GetDeviceStatusEy(void);

/* Symbol: _ZN12MemoryHandle4freeEiyi */
/* Demangled: MemoryHandle::free(int, unsigned long long, int) */
int _ZN12MemoryHandle4freeEiyi(void);

/* Symbol: _ZN20XrpIntrinsicExecutor13SyncXrpBufferEiRKN3xrp10BufferInfoE */
/* Demangled: XrpIntrinsicExecutor::SyncXrpBuffer(int, xrp::BufferInfo const&) */
int _ZN20XrpIntrinsicExecutor13SyncXrpBufferEiRKN3xrp10BufferInfoE(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl13SyncXrpBufferEiRKNS_10BufferInfoE */
/* Demangled: xrp::XrpIntrinsicImpl::SyncXrpBuffer(int, xrp::BufferInfo const&) */
int _ZN3xrp16XrpIntrinsicImpl13SyncXrpBufferEiRKNS_10BufferInfoE(void);

/* Symbol: _ZNK3xrp16XrpIntrinsicImpl18GetPreparedRequestEyj */
/* Demangled: xrp::XrpIntrinsicImpl::GetPreparedRequest(unsigned long long, unsigned int) const */
int _ZNK3xrp16XrpIntrinsicImpl18GetPreparedRequestEyj(void);

/* Symbol: ion_cache_sync_flush_range */
/* Demangled: ion_cache_sync_flush_range */
int ion_cache_sync_flush_range(void);

/* Symbol: ion_mmap */
/* Demangled: ion_mmap */
int ion_mmap(void);

/* Symbol: DEBUG_LOG_XRP */
/* Demangled: DEBUG_LOG_XRP */
extern void* DEBUG_LOG_XRP;

/* Symbol: _ZN20XrpIntrinsicExecutor12GetXrpBufferEx */
/* Demangled: XrpIntrinsicExecutor::GetXrpBuffer(long long) */
int _ZN20XrpIntrinsicExecutor12GetXrpBufferEx(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImpl15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE */
/* Demangled: xrp::XrpIntrinsicImpl::UpdateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
int _ZN3xrp16XrpIntrinsicImpl15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void);

/* Symbol: _ZTVN3xrp16XrpIntrinsicImplE */
/* Demangled: vtable for xrp::XrpIntrinsicImpl */
extern void* _ZTVN3xrp16XrpIntrinsicImplE;

/* Symbol: deleteXrpInstanceInternal */
/* Demangled: deleteXrpInstanceInternal */
int deleteXrpInstanceInternal(void);

/* Symbol: ion_alloc_camera_pool */
/* Demangled: ion_alloc_camera_pool */
int ion_alloc_camera_pool(void);

/* Symbol: _ZN20XrpIntrinsicExecutor14SetupXrpDeviceEv */
/* Demangled: XrpIntrinsicExecutor::SetupXrpDevice() */
int _ZN20XrpIntrinsicExecutor14SetupXrpDeviceEv(void);

/* Symbol: _ZNSt3__16vectorI13BufferWrapperNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<BufferWrapper, std::__1::allocator<BufferWrapper> >::__push_back_slow_path<BufferWrapper const&>(BufferWrapper const&) */
int _ZNSt3__16vectorI13BufferWrapperNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImplC1Ei */
/* Demangled: xrp::XrpIntrinsicImpl::XrpIntrinsicImpl(int) */
int _ZN3xrp16XrpIntrinsicImplC1Ei(void);

/* Symbol: _ZN12MemoryHandleD1Ev */
/* Demangled: MemoryHandle::~MemoryHandle() */
int _ZN12MemoryHandleD1Ev(void);

/* Symbol: _ZN20XrpIntrinsicExecutor24GetPreparedRequestsCountEy */
/* Demangled: XrpIntrinsicExecutor::GetPreparedRequestsCount(unsigned long long) */
int _ZN20XrpIntrinsicExecutor24GetPreparedRequestsCountEy(void);

/* Symbol: _ZN20XrpIntrinsicExecutorD1Ev */
/* Demangled: XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
int _ZN20XrpIntrinsicExecutorD1Ev(void);

/* Symbol: _ZNK3xrp16XrpIntrinsicImpl13RunXrpCommandEyRNS_13InferenceInfoE */
/* Demangled: xrp::XrpIntrinsicImpl::RunXrpCommand(unsigned long long, xrp::InferenceInfo&) const */
int _ZNK3xrp16XrpIntrinsicImpl13RunXrpCommandEyRNS_13InferenceInfoE(void);

/* Symbol: ion_dma_unmap_area_va */
/* Demangled: ion_dma_unmap_area_va */
int ion_dma_unmap_area_va(void);

/* Symbol: _ZN12MemoryHandleC2Ev */
/* Demangled: MemoryHandle::MemoryHandle() */
int _ZN12MemoryHandleC2Ev(void);

/* Symbol: _ZN20XrpIntrinsicExecutor13RunXrpCommandEyRN3xrp13InferenceInfoE */
/* Demangled: XrpIntrinsicExecutor::RunXrpCommand(unsigned long long, xrp::InferenceInfo&) */
int _ZN20XrpIntrinsicExecutor13RunXrpCommandEyRN3xrp13InferenceInfoE(void);

/* Symbol: _ZN20XrpIntrinsicExecutor15GetDeviceStatusEy */
/* Demangled: XrpIntrinsicExecutor::GetDeviceStatus(unsigned long long) */
int _ZN20XrpIntrinsicExecutor15GetDeviceStatusEy(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_ */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void);

/* Symbol: ion_alloc_mm */
/* Demangled: ion_alloc_mm */
int ion_alloc_mm(void);

/* Symbol: _ZN20XrpIntrinsicExecutor18GetPreparedRequestEyj */
/* Demangled: XrpIntrinsicExecutor::GetPreparedRequest(unsigned long long, unsigned int) */
int _ZN20XrpIntrinsicExecutor18GetPreparedRequestEyj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN3xrp16XrpIntrinsicImplD1Ev */
/* Demangled: xrp::XrpIntrinsicImpl::~XrpIntrinsicImpl() */
int _ZN3xrp16XrpIntrinsicImplD1Ev(void);

/* Symbol: ion_cache_sync_flush_range_va */
/* Demangled: ion_cache_sync_flush_range_va */
int ion_cache_sync_flush_range_va(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAPUWAREXRP_MTK_H */
