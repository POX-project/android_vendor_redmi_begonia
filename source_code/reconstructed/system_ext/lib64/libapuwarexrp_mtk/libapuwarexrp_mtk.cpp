/*
 * Reverse-Engineered Source for: libapuwarexrp.mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libapuwarexrp_mtk"

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
#include "libapuwarexrp_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: XrpIntrinsicExecutor::GetXrpBuffer(long) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor12GetXrpBufferEl(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor12GetXrpBufferEl() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::RunXrpCommand(unsigned long, xrp::InferenceInfo&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp16XrpIntrinsicImpl13RunXrpCommandEmRNS_13InferenceInfoE(void) {
    ALOGD("_ZNK3xrp16XrpIntrinsicImpl13RunXrpCommandEmRNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: ion_munmap */
extern "C" __attribute__((visibility("default"))) int ion_munmap(void) {
    ALOGD("ion_munmap() called");
    return 0;
}

/* Demangled: MemoryHandle::munmap(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle6munmapEmi(void) {
    ALOGD("_ZN12MemoryHandle6munmapEmi() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::XrpIntrinsicExecutor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutorC2Ei(void) {
    ALOGD("_ZN20XrpIntrinsicExecutorC2Ei() called");
    return 0;
}

/* Demangled: ion_alloc_camera */
extern "C" __attribute__((visibility("default"))) int ion_alloc_camera(void) {
    ALOGD("ion_alloc_camera() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_all */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_all(void) {
    ALOGD("ion_cache_sync_flush_all() called");
    return 0;
}

/* Demangled: ion_dma_map_area */
extern "C" __attribute__((visibility("default"))) int ion_dma_map_area(void) {
    ALOGD("ion_dma_map_area() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::GetPreparedRequest(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor18GetPreparedRequestEmm(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor18GetPreparedRequestEmm() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::GetPreparedRequestsCount(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor24GetPreparedRequestsCountEm(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor24GetPreparedRequestsCountEm() called");
    return 0;
}

/* Demangled: mt_ion_open */
extern "C" __attribute__((visibility("default"))) int mt_ion_open(void) {
    ALOGD("mt_ion_open() called");
    return 0;
}

/* Demangled: ion_alloc_syscontig */
extern "C" __attribute__((visibility("default"))) int ion_alloc_syscontig(void) {
    ALOGD("ion_alloc_syscontig() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::GetDeviceStatus(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor15GetDeviceStatusEm(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor15GetDeviceStatusEm() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::PrepareInternalCommand(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor22PrepareInternalCommandEjj(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor22PrepareInternalCommandEjj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::SetupXrpDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl14SetupXrpDeviceEv(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl14SetupXrpDeviceEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::XrpIntrinsicImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImplC2Ei(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImplC2Ei() called");
    return 0;
}

/* Demangled: ion_dma_unmap_area */
extern "C" __attribute__((visibility("default"))) int ion_dma_unmap_area(void) {
    ALOGD("ion_dma_unmap_area() called");
    return 0;
}

/* Demangled: MemoryHandle::MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleC1Ev(void) {
    ALOGD("_ZN12MemoryHandleC1Ev() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::CreateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor15CreateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor15CreateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutorD2Ev(void) {
    ALOGD("_ZN20XrpIntrinsicExecutorD2Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::CreateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE() called");
    return 0;
}

/* Demangled: MemoryHandle::~MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleD2Ev(void) {
    ALOGD("_ZN12MemoryHandleD2Ev() called");
    return 0;
}

/* Demangled: MemoryHandle::mmap(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle4mmapEii(void) {
    ALOGD("_ZN12MemoryHandle4mmapEii() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::UpdateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor15UpdateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor15UpdateXrpBufferEN3xrp13XrpBufferKindENS0_14XrpAccessFlagsERKNS0_10BufferInfoE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm() called");
    return 0;
}

/* Demangled: ion_share_close */
extern "C" __attribute__((visibility("default"))) int ion_share_close(void) {
    ALOGD("ion_share_close() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::RunXrpCommand(unsigned long, xrp::InferenceInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor13RunXrpCommandEmRN3xrp13InferenceInfoE(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor13RunXrpCommandEmRN3xrp13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::PrepareXrpCommand(unsigned long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl17PrepareXrpCommandEml(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl17PrepareXrpCommandEml() called");
    return 0;
}

/* Demangled: createXrpInstanceInternal */
extern "C" __attribute__((visibility("default"))) int createXrpInstanceInternal(void) {
    ALOGD("createXrpInstanceInternal() called");
    return 0;
}

/* Demangled: InitXrpDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _Z18InitXrpDebugConfigv(void) {
    ALOGD("_Z18InitXrpDebugConfigv() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::PrepareXrpCommand(unsigned long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor17PrepareXrpCommandEml(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor17PrepareXrpCommandEml() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::~XrpIntrinsicImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImplD0Ev(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImplD0Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::~XrpIntrinsicImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImplD2Ev(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImplD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::FinalizeXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl18FinalizeXrpCommandEm(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl18FinalizeXrpCommandEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::PrepareInternalCommand(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl22PrepareInternalCommandEjj(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl22PrepareInternalCommandEjj() called");
    return 0;
}

/* Demangled: ion_custom_ioctl */
extern "C" __attribute__((visibility("default"))) int ion_custom_ioctl(void) {
    ALOGD("ion_custom_ioctl() called");
    return 0;
}

/* Demangled: ion_dma_map_area_va */
extern "C" __attribute__((visibility("default"))) int ion_dma_map_area_va(void) {
    ALOGD("ion_dma_map_area_va() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::CreateXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor16CreateXrpCommandEm(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor16CreateXrpCommandEm() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::XrpIntrinsicExecutor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutorC1Ei(void) {
    ALOGD("_ZN20XrpIntrinsicExecutorC1Ei() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb() called");
    return 0;
}

/* Demangled: MemoryHandle::free(int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle4freeEimi(void) {
    ALOGD("_ZN12MemoryHandle4freeEimi() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::SyncXrpBuffer(int, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor13SyncXrpBufferEiRKN3xrp10BufferInfoE(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor13SyncXrpBufferEiRKN3xrp10BufferInfoE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::SyncXrpBuffer(int, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl13SyncXrpBufferEiRKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl13SyncXrpBufferEiRKNS_10BufferInfoE() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_range */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_range(void) {
    ALOGD("ion_cache_sync_flush_range() called");
    return 0;
}

/* Demangled: ion_mmap */
extern "C" __attribute__((visibility("default"))) int ion_mmap(void) {
    ALOGD("ion_mmap() called");
    return 0;
}

/* Exported Object: DEBUG_LOG_XRP */
extern "C" __attribute__((visibility("default"))) void* DEBUG_LOG_XRP = NULL;

/* Demangled: xrp::XrpIntrinsicImpl::UpdateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE() called");
    return 0;
}

/* Exported Object: vtable for xrp::XrpIntrinsicImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3xrp16XrpIntrinsicImplE = NULL;

/* Demangled: deleteXrpInstanceInternal */
extern "C" __attribute__((visibility("default"))) int deleteXrpInstanceInternal(void) {
    ALOGD("deleteXrpInstanceInternal() called");
    return 0;
}

/* Demangled: ion_alloc_camera_pool */
extern "C" __attribute__((visibility("default"))) int ion_alloc_camera_pool(void) {
    ALOGD("ion_alloc_camera_pool() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::SetupXrpDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor14SetupXrpDeviceEv(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor14SetupXrpDeviceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<BufferWrapper, std::__1::allocator<BufferWrapper> >::__push_back_slow_path<BufferWrapper const&>(BufferWrapper const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13BufferWrapperNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13BufferWrapperNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::XrpIntrinsicImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImplC1Ei(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImplC1Ei() called");
    return 0;
}

/* Demangled: MemoryHandle::~MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleD1Ev(void) {
    ALOGD("_ZN12MemoryHandleD1Ev() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::FinalizeXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutor18FinalizeXrpCommandEm(void) {
    ALOGD("_ZN20XrpIntrinsicExecutor18FinalizeXrpCommandEm() called");
    return 0;
}

/* Demangled: XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
extern "C" __attribute__((visibility("default"))) int _ZN20XrpIntrinsicExecutorD1Ev(void) {
    ALOGD("_ZN20XrpIntrinsicExecutorD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::readBlocking(unsigned char*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhmjjlPNS0_9EventFlagE(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE12readBlockingEPhmjjlPNS0_9EventFlagE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::GetXrpBuffer(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp16XrpIntrinsicImpl12GetXrpBufferEl(void) {
    ALOGD("_ZNK3xrp16XrpIntrinsicImpl12GetXrpBufferEl() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::GetPreparedRequest(unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp16XrpIntrinsicImpl18GetPreparedRequestEmm(void) {
    ALOGD("_ZNK3xrp16XrpIntrinsicImpl18GetPreparedRequestEmm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::GetPreparedRequestsCount(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp16XrpIntrinsicImpl24GetPreparedRequestsCountEm(void) {
    ALOGD("_ZNK3xrp16XrpIntrinsicImpl24GetPreparedRequestsCountEm() called");
    return 0;
}

/* Demangled: ion_dma_unmap_area_va */
extern "C" __attribute__((visibility("default"))) int ion_dma_unmap_area_va(void) {
    ALOGD("ion_dma_unmap_area_va() called");
    return 0;
}

/* Demangled: MemoryHandle::MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleC2Ev(void) {
    ALOGD("_ZN12MemoryHandleC2Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::CreateXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImpl16CreateXrpCommandEm(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImpl16CreateXrpCommandEm() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::GetDeviceStatus(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp16XrpIntrinsicImpl15GetDeviceStatusEm(void) {
    ALOGD("_ZNK3xrp16XrpIntrinsicImpl15GetDeviceStatusEm() called");
    return 0;
}

/* Demangled: ion_alloc_mm */
extern "C" __attribute__((visibility("default"))) int ion_alloc_mm(void) {
    ALOGD("ion_alloc_mm() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicImpl::~XrpIntrinsicImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp16XrpIntrinsicImplD1Ev(void) {
    ALOGD("_ZN3xrp16XrpIntrinsicImplD1Ev() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_range_va */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_range_va(void) {
    ALOGD("ion_cache_sync_flush_range_va() called");
    return 0;
}
