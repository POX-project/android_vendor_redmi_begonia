/*
 * Reverse-Engineered Source for: libvpuapi.mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libvpuapi_mtk"

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
#include "libvpuapi_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HidlVpuClient::getVpuStream() */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient12getVpuStreamEv(void) {
    ALOGD("_ZN13HidlVpuClient12getVpuStreamEv() called");
    return 0;
}

/* Demangled: MemoryHandle::add_mem_buffer_fd(void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle17add_mem_buffer_fdEPvjj(void) {
    ALOGD("_ZN12MemoryHandle17add_mem_buffer_fdEPvjj() called");
    return 0;
}

/* Demangled: mt_ion_open */
extern "C" __attribute__((visibility("default"))) int mt_ion_open(void) {
    ALOGD("mt_ion_open() called");
    return 0;
}

/* Exported Object: guard variable for apuwareMemInit::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ14apuwareMemInitE2fn = NULL;

/* Demangled: HidlVpuClient::runPack(std::__1::vector<int, std::__1::allocator<int> >&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient7runPackERNSt3__16vectorIiNS0_9allocatorIiEEEEb(void) {
    ALOGD("_ZN13HidlVpuClient7runPackERNSt3__16vectorIiNS0_9allocatorIiEEEEb() called");
    return 0;
}

/* Demangled: HidlVpuClient::waitReq(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient7waitReqEi(void) {
    ALOGD("_ZN13HidlVpuClient7waitReqEi() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: VpuStreamImpl::deque() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl5dequeEv(void) {
    ALOGD("_ZN13VpuStreamImpl5dequeEv() called");
    return 0;
}

/* Exported Object: apuwareMemCacheSync::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ19apuwareMemCacheSyncE2fn = NULL;

/* Exported Object: guard variable for apuwareMemFree::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ14apuwareMemFreeE2fn = NULL;

/* Demangled: HidlVpuClient::getProperty(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient11getPropertyEiPvi(void) {
    ALOGD("_ZN13HidlVpuClient11getPropertyEiPvi() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::writeBlocking(unsigned char const*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS0_9EventFlagE(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS0_9EventFlagE() called");
    return 0;
}

/* Exported Object: vtable for VpuClient */
extern "C" __attribute__((visibility("default"))) void* _ZTV9VpuClient = NULL;

/* Demangled: InitDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _Z15InitDebugConfigv(void) {
    ALOGD("_Z15InitDebugConfigv() called");
    return 0;
}

/* Demangled: ion_dma_map_area_va */
extern "C" __attribute__((visibility("default"))) int ion_dma_map_area_va(void) {
    ALOGD("ion_dma_map_area_va() called");
    return 0;
}

/* Demangled: HidlVpuClient::getAlgo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient7getAlgoEPKc(void) {
    ALOGD("_ZN13HidlVpuClient7getAlgoEPKc() called");
    return 0;
}

/* Demangled: VpuRequestImpl::setVpuClient(VpuClient*) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl12setVpuClientEP9VpuClient(void) {
    ALOGD("_ZN14VpuRequestImpl12setVpuClientEP9VpuClient() called");
    return 0;
}

/* Demangled: VpuStreamImpl::tryEnque(VpuRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl8tryEnqueEP10VpuRequest(void) {
    ALOGD("_ZN13VpuStreamImpl8tryEnqueEP10VpuRequest() called");
    return 0;
}

/* Demangled: MemoryControl::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControl11getInstanceEv(void) {
    ALOGD("_ZN13MemoryControl11getInstanceEv() called");
    return 0;
}

/* Demangled: MemoryControl::set_project_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControl16set_project_nameENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN13MemoryControl16set_project_nameENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: MemoryHandle::~MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleD1Ev(void) {
    ALOGD("_ZN12MemoryHandleD1Ev() called");
    return 0;
}

/* Demangled: apuwareMemFreeInternal */
extern "C" __attribute__((visibility("default"))) int apuwareMemFreeInternal(void) {
    ALOGD("apuwareMemFreeInternal() called");
    return 0;
}

/* Demangled: ion_dma_unmap_area */
extern "C" __attribute__((visibility("default"))) int ion_dma_unmap_area(void) {
    ALOGD("ion_dma_unmap_area() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for VpuStreamImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV13VpuStreamImpl = NULL;

/* Demangled: AndroidMemoryHandle::mem_cache_invalid(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle17mem_cache_invalidEiPvi(void) {
    ALOGD("_ZN19AndroidMemoryHandle17mem_cache_invalidEiPvi() called");
    return 0;
}

/* Demangled: VpuRequestImpl::getResult() */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl9getResultEv(void) {
    ALOGD("_ZN14VpuRequestImpl9getResultEv() called");
    return 0;
}

/* Demangled: VpuRequestImpl::~VpuRequestImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImplD0Ev(void) {
    ALOGD("_ZN14VpuRequestImplD0Ev() called");
    return 0;
}

/* Demangled: VpuStreamImpl::getVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN13VpuStreamImpl12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: MemoryControl::~MemoryControl() */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControlD1Ev(void) {
    ALOGD("_ZN13MemoryControlD1Ev() called");
    return 0;
}

/* Demangled: MemoryHandle::remove_mem_buffer_fd_by_buffer(MemBufferSharefd*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle30remove_mem_buffer_fd_by_bufferEP16MemBufferSharefd(void) {
    ALOGD("_ZN12MemoryHandle30remove_mem_buffer_fd_by_bufferEP16MemBufferSharefd() called");
    return 0;
}

/* Demangled: apuwareMemInitInternal */
extern "C" __attribute__((visibility("default"))) int apuwareMemInitInternal(void) {
    ALOGD("apuwareMemInitInternal() called");
    return 0;
}

/* Demangled: HidlVpuClient::setProperty(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient11setPropertyEiPvi(void) {
    ALOGD("_ZN13HidlVpuClient11setPropertyEiPvi() called");
    return 0;
}

/* Demangled: VpuStreamImpl::createAlgo(char const*, char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl10createAlgoEPKcPcjj(void) {
    ALOGD("_ZN13VpuStreamImpl10createAlgoEPKcPcjj() called");
    return 0;
}

/* Demangled: HidlVpuClient::addBuffer(int, VpuPort*, VpuBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient9addBufferEiP7VpuPortR9VpuBuffer(void) {
    ALOGD("_ZN13HidlVpuClient9addBufferEiP7VpuPortR9VpuBuffer() called");
    return 0;
}

/* Demangled: ion_munmap */
extern "C" __attribute__((visibility("default"))) int ion_munmap(void) {
    ALOGD("ion_munmap() called");
    return 0;
}

/* Demangled: HidlVpuClient::release(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient7releaseEi(void) {
    ALOGD("_ZN13HidlVpuClient7releaseEi() called");
    return 0;
}

/* Demangled: HidlVpuClient::getResult(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient9getResultEi(void) {
    ALOGD("_ZN13HidlVpuClient9getResultEi() called");
    return 0;
}

/* Demangled: VpuRequestImpl::getInferenceInfo(VpuInferenceInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl16getInferenceInfoER16VpuInferenceInfo(void) {
    ALOGD("_ZN14VpuRequestImpl16getInferenceInfoER16VpuInferenceInfo() called");
    return 0;
}

/* Demangled: apuwareMemAllocInternal */
extern "C" __attribute__((visibility("default"))) int apuwareMemAllocInternal(void) {
    ALOGD("apuwareMemAllocInternal() called");
    return 0;
}

/* Demangled: createVpuStreamInternal */
extern "C" __attribute__((visibility("default"))) int createVpuStreamInternal(void) {
    ALOGD("createVpuStreamInternal() called");
    return 0;
}

/* Demangled: ion_alloc_camera */
extern "C" __attribute__((visibility("default"))) int ion_alloc_camera(void) {
    ALOGD("ion_alloc_camera() called");
    return 0;
}

/* Demangled: VpuStreamImpl::~VpuStreamImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImplD2Ev(void) {
    ALOGD("_ZN13VpuStreamImplD2Ev() called");
    return 0;
}

/* Demangled: ion_alloc_camera_pool */
extern "C" __attribute__((visibility("default"))) int ion_alloc_camera_pool(void) {
    ALOGD("ion_alloc_camera_pool() called");
    return 0;
}

/* Demangled: VpuStreamImpl::runPack(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl7runPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEEb(void) {
    ALOGD("_ZN13VpuStreamImpl7runPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEEb() called");
    return 0;
}

/* Demangled: void std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >::__push_back_slow_path<VpuStatus const&>(VpuStatus const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: DEBUG_LOG */
extern "C" __attribute__((visibility("default"))) void* DEBUG_LOG = NULL;

/* Exported Object: pMemControl */
extern "C" __attribute__((visibility("default"))) void* pMemControl = NULL;

/* Demangled: VpuAlgoImpl::VpuAlgoImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImplC2Ei(void) {
    ALOGD("_ZN11VpuAlgoImplC2Ei() called");
    return 0;
}

/* Demangled: HidlVpuClient::enque(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient5enqueEij(void) {
    ALOGD("_ZN13HidlVpuClient5enqueEij() called");
    return 0;
}

/* Demangled: HidlVpuClient::deque() */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient5dequeEv(void) {
    ALOGD("_ZN13HidlVpuClient5dequeEv() called");
    return 0;
}

/* Demangled: VpuAlgoImpl::~VpuAlgoImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImplD2Ev(void) {
    ALOGD("_ZN11VpuAlgoImplD2Ev() called");
    return 0;
}

/* Exported Object: vtable for VpuRequestImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV14VpuRequestImpl = NULL;

/* Demangled: AndroidMemoryHandle::mem_cache_clean(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle15mem_cache_cleanEiPvi(void) {
    ALOGD("_ZN19AndroidMemoryHandle15mem_cache_cleanEiPvi() called");
    return 0;
}

/* Demangled: MemoryHandle::~MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleD0Ev(void) {
    ALOGD("_ZN12MemoryHandleD0Ev() called");
    return 0;
}

/* Exported Object: guard variable for apuwareMemDeInit::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ16apuwareMemDeInitE2fn = NULL;

/* Demangled: AndroidMemoryHandle::mem_cache_sync(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle14mem_cache_syncEiPvi(void) {
    ALOGD("_ZN19AndroidMemoryHandle14mem_cache_syncEiPvi() called");
    return 0;
}

/* Demangled: HidlVpuClient::setProperty(int, char const*, VpuProperty const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient11setPropertyEiPKcRK11VpuProperty(void) {
    ALOGD("_ZN13HidlVpuClient11setPropertyEiPKcRK11VpuProperty() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: VpuStream::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9VpuStream14createInstanceEv(void) {
    ALOGD("_ZN9VpuStream14createInstanceEv() called");
    return 0;
}

/* Demangled: MemoryControl::mem_free(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControl8mem_freeEPv(void) {
    ALOGD("_ZN13MemoryControl8mem_freeEPv() called");
    return 0;
}

/* Demangled: MemoryControl::~MemoryControl() */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControlD0Ev(void) {
    ALOGD("_ZN13MemoryControlD0Ev() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::~AndroidMemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandleD2Ev(void) {
    ALOGD("_ZN19AndroidMemoryHandleD2Ev() called");
    return 0;
}

/* Exported Object: vtable for VpuAlgoImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV11VpuAlgoImpl = NULL;

/* Demangled: VpuRequestImpl::setProperty(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl11setPropertyEPvi(void) {
    ALOGD("_ZN14VpuRequestImpl11setPropertyEPvi() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: ion_alloc_mm */
extern "C" __attribute__((visibility("default"))) int ion_alloc_mm(void) {
    ALOGD("ion_alloc_mm() called");
    return 0;
}

/* Demangled: VpuStreamImpl::acquire(VpuAlgo*, VpuModuleType) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl7acquireEP7VpuAlgo13VpuModuleType(void) {
    ALOGD("_ZN13VpuStreamImpl7acquireEP7VpuAlgo13VpuModuleType() called");
    return 0;
}

/* Demangled: VpuStreamImpl::release(VpuRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl7releaseEP10VpuRequest(void) {
    ALOGD("_ZN13VpuStreamImpl7releaseEP10VpuRequest() called");
    return 0;
}

/* Demangled: VpuStreamImpl::setPower(VpuPower&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl8setPowerER8VpuPowerj(void) {
    ALOGD("_ZN13VpuStreamImpl8setPowerER8VpuPowerj() called");
    return 0;
}

/* Demangled: MemoryControl::mem_init() */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControl8mem_initEv(void) {
    ALOGD("_ZN13MemoryControl8mem_initEv() called");
    return 0;
}

/* Demangled: apuwareMemDeInitInternal */
extern "C" __attribute__((visibility("default"))) int apuwareMemDeInitInternal(void) {
    ALOGD("apuwareMemDeInitInternal() called");
    return 0;
}

/* Demangled: ion_alloc_syscontig */
extern "C" __attribute__((visibility("default"))) int ion_alloc_syscontig(void) {
    ALOGD("ion_alloc_syscontig() called");
    return 0;
}

/* Demangled: MemoryControl::getMemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControl15getMemoryHandleEv(void) {
    ALOGD("_ZN13MemoryControl15getMemoryHandleEv() called");
    return 0;
}

/* Exported Object: vtable for AndroidMemoryHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTV19AndroidMemoryHandle = NULL;

/* Demangled: MemoryHandle::find_mem_buffer_fd_by_fd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle24find_mem_buffer_fd_by_fdEi(void) {
    ALOGD("_ZN12MemoryHandle24find_mem_buffer_fd_by_fdEi() called");
    return 0;
}

/* Exported Object: guard variable for apuwareMemAlloc::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ15apuwareMemAllocE2fn = NULL;

/* Demangled: HidlVpuClient::acquire(int, VpuModuleType) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient7acquireEi13VpuModuleType(void) {
    ALOGD("_ZN13HidlVpuClient7acquireEi13VpuModuleType() called");
    return 0;
}

/* Demangled: HidlVpuClient::setPower(VpuPower&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient8setPowerER8VpuPowerj(void) {
    ALOGD("_ZN13HidlVpuClient8setPowerER8VpuPowerj() called");
    return 0;
}

/* Demangled: HidlVpuClient::getResult(int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient9getResultEiRj(void) {
    ALOGD("_ZN13HidlVpuClient9getResultEiRj() called");
    return 0;
}

/* Demangled: VpuStreamImpl::VpuStreamImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImplC2Ev(void) {
    ALOGD("_ZN13VpuStreamImplC2Ev() called");
    return 0;
}

/* Demangled: VpuStreamImpl::~VpuStreamImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImplD1Ev(void) {
    ALOGD("_ZN13VpuStreamImplD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, VpuRequest*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, VpuRequest*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, VpuRequest*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, VpuRequest*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiP10VpuRequestEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiP10VpuRequestEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: ion_mmap */
extern "C" __attribute__((visibility("default"))) int ion_mmap(void) {
    ALOGD("ion_mmap() called");
    return 0;
}

/* Demangled: HidlVpuClient::getProperty(int, char const*, VpuProperty&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient11getPropertyEiPKcR11VpuProperty(void) {
    ALOGD("_ZN13HidlVpuClient11getPropertyEiPKcR11VpuProperty() called");
    return 0;
}

/* Demangled: VpuStreamImpl::getAlgo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl7getAlgoEPKc(void) {
    ALOGD("_ZN13VpuStreamImpl7getAlgoEPKc() called");
    return 0;
}

/* Exported Object: vtable for MemoryControl */
extern "C" __attribute__((visibility("default"))) void* _ZTV13MemoryControl = NULL;

/* Demangled: HidlVpuClient::unpackRequest(std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient13unpackRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE(void) {
    ALOGD("_ZN13HidlVpuClient13unpackRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: VpuAlgoImpl::setVpuClient(VpuClient*) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImpl12setVpuClientEP9VpuClient(void) {
    ALOGD("_ZN11VpuAlgoImpl12setVpuClientEP9VpuClient() called");
    return 0;
}

/* Demangled: VpuRequestImpl::addBuffer(VpuPort*, VpuBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl9addBufferEP7VpuPortR9VpuBuffer(void) {
    ALOGD("_ZN14VpuRequestImpl9addBufferEP7VpuPortR9VpuBuffer() called");
    return 0;
}

/* Demangled: VpuStreamImpl::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl5flushEv(void) {
    ALOGD("_ZN13VpuStreamImpl5flushEv() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::mem_alloc(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle9mem_allocEjj(void) {
    ALOGD("_ZN19AndroidMemoryHandle9mem_allocEjj() called");
    return 0;
}

/* Demangled: ion_custom_ioctl */
extern "C" __attribute__((visibility("default"))) int ion_custom_ioctl(void) {
    ALOGD("ion_custom_ioctl() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_range */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_range(void) {
    ALOGD("ion_cache_sync_flush_range() called");
    return 0;
}

/* Demangled: HidlVpuClient::getVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN13HidlVpuClient12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: HidlVpuClient::VS_deInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient13VS_deInstanceEv(void) {
    ALOGD("_ZN13HidlVpuClient13VS_deInstanceEv() called");
    return 0;
}

/* Demangled: VpuAlgoImpl::VpuAlgoImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImplC1Ei(void) {
    ALOGD("_ZN11VpuAlgoImplC1Ei() called");
    return 0;
}

/* Demangled: VpuRequestImpl::addBuffer(VpuBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl9addBufferER9VpuBuffer(void) {
    ALOGD("_ZN14VpuRequestImpl9addBufferER9VpuBuffer() called");
    return 0;
}

/* Demangled: VpuRequestImpl::getResult(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl9getResultERj(void) {
    ALOGD("_ZN14VpuRequestImpl9getResultERj() called");
    return 0;
}

/* Demangled: VpuStreamImpl::acquire(VpuAlgo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl7acquireEP7VpuAlgo(void) {
    ALOGD("_ZN13VpuStreamImpl7acquireEP7VpuAlgo() called");
    return 0;
}

/* Demangled: VpuStreamImpl::freeAlgo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl8freeAlgoEm(void) {
    ALOGD("_ZN13VpuStreamImpl8freeAlgoEm() called");
    return 0;
}

/* Demangled: VpuAlgoImpl::getPort(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImpl7getPortEPKc(void) {
    ALOGD("_ZN11VpuAlgoImpl7getPortEPKc() called");
    return 0;
}

/* Demangled: MemoryControl::mem_alloc(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControl9mem_allocEjj(void) {
    ALOGD("_ZN13MemoryControl9mem_allocEjj() called");
    return 0;
}

/* Exported Object: memoryControl_mutex */
extern "C" __attribute__((visibility("default"))) void* memoryControl_mutex = NULL;

/* Demangled: apuwareMemCacheInvalidInternal */
extern "C" __attribute__((visibility("default"))) int apuwareMemCacheInvalidInternal(void) {
    ALOGD("apuwareMemCacheInvalidInternal() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_range_va */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_range_va(void) {
    ALOGD("ion_cache_sync_flush_range_va() called");
    return 0;
}

/* Demangled: HidlVpuClient::getInferenceInfo(int, VpuInferenceInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient16getInferenceInfoEiR16VpuInferenceInfo(void) {
    ALOGD("_ZN13HidlVpuClient16getInferenceInfoEiR16VpuInferenceInfo() called");
    return 0;
}

/* Demangled: HidlVpuClient::tryEnque(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient8tryEnqueEi(void) {
    ALOGD("_ZN13HidlVpuClient8tryEnqueEi() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb() called");
    return 0;
}

/* Demangled: VpuAlgoImpl::~VpuAlgoImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImplD1Ev(void) {
    ALOGD("_ZN11VpuAlgoImplD1Ev() called");
    return 0;
}

/* Demangled: VpuRequestImpl::VpuRequestImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImplC2Ei(void) {
    ALOGD("_ZN14VpuRequestImplC2Ei() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::getHandleId() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle11getHandleIdEv(void) {
    ALOGD("_ZN19AndroidMemoryHandle11getHandleIdEv() called");
    return 0;
}

/* Demangled: ion_share_close */
extern "C" __attribute__((visibility("default"))) int ion_share_close(void) {
    ALOGD("ion_share_close() called");
    return 0;
}

/* Demangled: HidlVpuClient::va_getProperty(int, char const*, VpuProperty&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient14va_getPropertyEiPKcR11VpuProperty(void) {
    ALOGD("_ZN13HidlVpuClient14va_getPropertyEiPKcR11VpuProperty() called");
    return 0;
}

/* Demangled: HidlVpuClient::HidlVpuClient() */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClientC2Ev(void) {
    ALOGD("_ZN13HidlVpuClientC2Ev() called");
    return 0;
}

/* Demangled: HidlVpuClient::setPropertyImprove(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient18setPropertyImproveEiPvi(void) {
    ALOGD("_ZN13HidlVpuClient18setPropertyImproveEiPvi() called");
    return 0;
}

/* Demangled: HidlVpuClient::waitPack(std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient8waitPackERNSt3__16vectorIiNS0_9allocatorIiEEEE(void) {
    ALOGD("_ZN13HidlVpuClient8waitPackERNSt3__16vectorIiNS0_9allocatorIiEEEE() called");
    return 0;
}

/* Exported Object: apuwareMemAlloc::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ15apuwareMemAllocE2fn = NULL;

/* Demangled: VpuRequestImpl::~VpuRequestImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImplD2Ev(void) {
    ALOGD("_ZN14VpuRequestImplD2Ev() called");
    return 0;
}

/* Demangled: VpuStreamImpl::packRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN13VpuStreamImpl11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: VpuStreamImpl::enque(VpuRequest*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl5enqueEP10VpuRequestj(void) {
    ALOGD("_ZN13VpuStreamImpl5enqueEP10VpuRequestj() called");
    return 0;
}

/* Demangled: VpuStreamImpl::runReq(VpuRequest*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl6runReqEP10VpuRequestb(void) {
    ALOGD("_ZN13VpuStreamImpl6runReqEP10VpuRequestb() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::AndroidMemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandleC2Ev(void) {
    ALOGD("_ZN19AndroidMemoryHandleC2Ev() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::~AndroidMemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandleD1Ev(void) {
    ALOGD("_ZN19AndroidMemoryHandleD1Ev() called");
    return 0;
}

/* Demangled: VpuAlgoImpl::get_algo_id() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImpl11get_algo_idEv(void) {
    ALOGD("_ZN11VpuAlgoImpl11get_algo_idEv() called");
    return 0;
}

/* Demangled: VpuRequestImpl::getProperty(char const*, VpuProperty&) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl11getPropertyEPKcR11VpuProperty(void) {
    ALOGD("_ZN14VpuRequestImpl11getPropertyEPKcR11VpuProperty() called");
    return 0;
}

/* Demangled: VpuStreamImpl::unpackRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN13VpuStreamImpl13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: MemoryControl::mem_deinit() */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControl10mem_deinitEv(void) {
    ALOGD("_ZN13MemoryControl10mem_deinitEv() called");
    return 0;
}

/* Demangled: apuwareMemCacheCleanInternal */
extern "C" __attribute__((visibility("default"))) int apuwareMemCacheCleanInternal(void) {
    ALOGD("apuwareMemCacheCleanInternal() called");
    return 0;
}

/* Demangled: HidlVpuClient::acquire(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient7acquireEi(void) {
    ALOGD("_ZN13HidlVpuClient7acquireEi() called");
    return 0;
}

/* Demangled: VpuStreamImpl::waitPack(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl8waitPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN13VpuStreamImpl8waitPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: ion_dma_unmap_area_va */
extern "C" __attribute__((visibility("default"))) int ion_dma_unmap_area_va(void) {
    ALOGD("ion_dma_unmap_area_va() called");
    return 0;
}

/* Exported Object: guard variable for apuwareMemCacheSync::fn */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ19apuwareMemCacheSyncE2fn = NULL;

/* Demangled: VpuRequestImpl::get_request_id() */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl14get_request_idEv(void) {
    ALOGD("_ZN14VpuRequestImpl14get_request_idEv() called");
    return 0;
}

/* Demangled: HidlVpuClient::va_getPort(int, char const*, VpuPort&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient10va_getPortEiPKcR7VpuPort(void) {
    ALOGD("_ZN13HidlVpuClient10va_getPortEiPKcR7VpuPort() called");
    return 0;
}

/* Demangled: VpuRequestImpl::setProperty(char const*, VpuProperty const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl11setPropertyEPKcRK11VpuProperty(void) {
    ALOGD("_ZN14VpuRequestImpl11setPropertyEPKcRK11VpuProperty() called");
    return 0;
}

/* Demangled: VpuStreamImpl::VpuStreamImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImplC1Ev(void) {
    ALOGD("_ZN13VpuStreamImplC1Ev() called");
    return 0;
}

/* Demangled: VpuStreamImpl::~VpuStreamImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImplD0Ev(void) {
    ALOGD("_ZN13VpuStreamImplD0Ev() called");
    return 0;
}

/* Exported Object: vtable for MemoryHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTV12MemoryHandle = NULL;

/* Demangled: HidlVpuClient::addBuffer(int, VpuBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient9addBufferEiR9VpuBuffer(void) {
    ALOGD("_ZN13HidlVpuClient9addBufferEiR9VpuBuffer() called");
    return 0;
}

/* Demangled: VpuRequestImpl::setExtraParam(VpuExtraParam) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl13setExtraParamE13VpuExtraParam(void) {
    ALOGD("_ZN14VpuRequestImpl13setExtraParamE13VpuExtraParam() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::mem_init() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle8mem_initEv(void) {
    ALOGD("_ZN19AndroidMemoryHandle8mem_initEv() called");
    return 0;
}

/* Demangled: ion_dma_map_area */
extern "C" __attribute__((visibility("default"))) int ion_dma_map_area(void) {
    ALOGD("ion_dma_map_area() called");
    return 0;
}

/* Demangled: HidlVpuClient::packRequest(std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient11packRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE(void) {
    ALOGD("_ZN13HidlVpuClient11packRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: HidlVpuClient::setExtraParam(int, VpuExtraParam) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient13setExtraParamEi13VpuExtraParam(void) {
    ALOGD("_ZN13HidlVpuClient13setExtraParamEi13VpuExtraParam() called");
    return 0;
}

/* Demangled: VpuRequestImpl::getProperty(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImpl11getPropertyEPvi(void) {
    ALOGD("_ZN14VpuRequestImpl11getPropertyEPvi() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::mem_free(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle8mem_freeEPv(void) {
    ALOGD("_ZN19AndroidMemoryHandle8mem_freeEPv() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_all */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_all(void) {
    ALOGD("ion_cache_sync_flush_all() called");
    return 0;
}

/* Exported Object: apuwareMemInit::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ14apuwareMemInitE2fn = NULL;

/* Demangled: VpuAlgoImpl::getProperty(char const*, VpuProperty&) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImpl11getPropertyEPKcR11VpuProperty(void) {
    ALOGD("_ZN11VpuAlgoImpl11getPropertyEPKcR11VpuProperty() called");
    return 0;
}

/* Demangled: HidlVpuClient::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient5flushEv(void) {
    ALOGD("_ZN13HidlVpuClient5flushEv() called");
    return 0;
}

/* Demangled: VpuAlgoImpl::~VpuAlgoImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoImplD0Ev(void) {
    ALOGD("_ZN11VpuAlgoImplD0Ev() called");
    return 0;
}

/* Demangled: VpuRequestImpl::VpuRequestImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImplC1Ei(void) {
    ALOGD("_ZN14VpuRequestImplC1Ei() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, VpuAlgo*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, VpuAlgo*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, VpuAlgo*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, VpuAlgo*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiP7VpuAlgoEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiP7VpuAlgoEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Exported Object: MemoryControl::pMemControl */
extern "C" __attribute__((visibility("default"))) void* _ZN13MemoryControl11pMemControlE = NULL;

/* Demangled: MemoryHandle::find_mem_buffer_fd_by_buffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle28find_mem_buffer_fd_by_bufferEPv(void) {
    ALOGD("_ZN12MemoryHandle28find_mem_buffer_fd_by_bufferEPv() called");
    return 0;
}

/* Demangled: MemoryHandle::~MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleD2Ev(void) {
    ALOGD("_ZN12MemoryHandleD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<MemBufferSharefd, std::__1::allocator<MemBufferSharefd> >::__push_back_slow_path<MemBufferSharefd const&>(MemBufferSharefd const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI16MemBufferSharefdNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI16MemBufferSharefdNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: HidlVpuClient::HidlVpuClient() */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClientC1Ev(void) {
    ALOGD("_ZN13HidlVpuClientC1Ev() called");
    return 0;
}

/* Exported Object: vtable for HidlVpuClient */
extern "C" __attribute__((visibility("default"))) void* _ZTV13HidlVpuClient = NULL;

/* Exported Object: apuwareMemDeInit::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ16apuwareMemDeInitE2fn = NULL;

/* Demangled: VpuRequestImpl::~VpuRequestImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN14VpuRequestImplD1Ev(void) {
    ALOGD("_ZN14VpuRequestImplD1Ev() called");
    return 0;
}

/* Demangled: VpuStreamImpl::waitReq(VpuRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuStreamImpl7waitReqEP10VpuRequest(void) {
    ALOGD("_ZN13VpuStreamImpl7waitReqEP10VpuRequest() called");
    return 0;
}

/* Demangled: MemoryControl::~MemoryControl() */
extern "C" __attribute__((visibility("default"))) int _ZN13MemoryControlD2Ev(void) {
    ALOGD("_ZN13MemoryControlD2Ev() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::AndroidMemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandleC1Ev(void) {
    ALOGD("_ZN19AndroidMemoryHandleC1Ev() called");
    return 0;
}

/* Demangled: AndroidMemoryHandle::~AndroidMemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandleD0Ev(void) {
    ALOGD("_ZN19AndroidMemoryHandleD0Ev() called");
    return 0;
}

/* Demangled: HidlVpuClient::createAlgo(char const*, char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient10createAlgoEPKcPcjj(void) {
    ALOGD("_ZN13HidlVpuClient10createAlgoEPKcPcjj() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm() called");
    return 0;
}

/* Demangled: HidlVpuClient::runReq(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient6runReqEib(void) {
    ALOGD("_ZN13HidlVpuClient6runReqEib() called");
    return 0;
}

/* Demangled: HidlVpuClient::freeAlgo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13HidlVpuClient8freeAlgoEm(void) {
    ALOGD("_ZN13HidlVpuClient8freeAlgoEm() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_() called");
    return 0;
}

/* Exported Object: apuwareMemFree::fn */
extern "C" __attribute__((visibility("default"))) void* _ZZ14apuwareMemFreeE2fn = NULL;

/* Demangled: AndroidMemoryHandle::mem_deinit() */
extern "C" __attribute__((visibility("default"))) int _ZN19AndroidMemoryHandle10mem_deinitEv(void) {
    ALOGD("_ZN19AndroidMemoryHandle10mem_deinitEv() called");
    return 0;
}

/* Demangled: apuwareMemCacheSyncInternal */
extern "C" __attribute__((visibility("default"))) int apuwareMemCacheSyncInternal(void) {
    ALOGD("apuwareMemCacheSyncInternal() called");
    return 0;
}
