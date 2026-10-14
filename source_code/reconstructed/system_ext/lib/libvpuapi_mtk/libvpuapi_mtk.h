/*
 * Reverse-Engineered ABI Specification for: libvpuapi.mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvpuapi.mtk.so
 */

#ifndef BEGONIA_RE_LIBVPUAPI_MTK_H
#define BEGONIA_RE_LIBVPUAPI_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN13HidlVpuClient12getVpuStreamEv */
/* Demangled: HidlVpuClient::getVpuStream() */
int _ZN13HidlVpuClient12getVpuStreamEv(void);

/* Symbol: _ZN12MemoryHandle17add_mem_buffer_fdEPvjj */
/* Demangled: MemoryHandle::add_mem_buffer_fd(void*, unsigned int, unsigned int) */
int _ZN12MemoryHandle17add_mem_buffer_fdEPvjj(void);

/* Symbol: mt_ion_open */
/* Demangled: mt_ion_open */
int mt_ion_open(void);

/* Symbol: _ZGVZ14apuwareMemInitE2fn */
/* Demangled: guard variable for apuwareMemInit::fn */
extern void* _ZGVZ14apuwareMemInitE2fn;

/* Symbol: _ZN13HidlVpuClient7runPackERNSt3__16vectorIiNS0_9allocatorIiEEEEb */
/* Demangled: HidlVpuClient::runPack(std::__1::vector<int, std::__1::allocator<int> >&, bool) */
int _ZN13HidlVpuClient7runPackERNSt3__16vectorIiNS0_9allocatorIiEEEEb(void);

/* Symbol: _ZN13HidlVpuClient7waitReqEi */
/* Demangled: HidlVpuClient::waitReq(int) */
int _ZN13HidlVpuClient7waitReqEi(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN13VpuStreamImpl5dequeEv */
/* Demangled: VpuStreamImpl::deque() */
int _ZN13VpuStreamImpl5dequeEv(void);

/* Symbol: _ZZ19apuwareMemCacheSyncE2fn */
/* Demangled: apuwareMemCacheSync::fn */
extern void* _ZZ19apuwareMemCacheSyncE2fn;

/* Symbol: _ZGVZ14apuwareMemFreeE2fn */
/* Demangled: guard variable for apuwareMemFree::fn */
extern void* _ZGVZ14apuwareMemFreeE2fn;

/* Symbol: _ZN13HidlVpuClient11getPropertyEiPvi */
/* Demangled: HidlVpuClient::getProperty(int, void*, int) */
int _ZN13HidlVpuClient11getPropertyEiPvi(void);

/* Symbol: _ZTV9VpuClient */
/* Demangled: vtable for VpuClient */
extern void* _ZTV9VpuClient;

/* Symbol: _Z15InitDebugConfigv */
/* Demangled: InitDebugConfig() */
int _Z15InitDebugConfigv(void);

/* Symbol: ion_dma_map_area_va */
/* Demangled: ion_dma_map_area_va */
int ion_dma_map_area_va(void);

/* Symbol: _ZN13HidlVpuClient7getAlgoEPKc */
/* Demangled: HidlVpuClient::getAlgo(char const*) */
int _ZN13HidlVpuClient7getAlgoEPKc(void);

/* Symbol: _ZN14VpuRequestImpl12setVpuClientEP9VpuClient */
/* Demangled: VpuRequestImpl::setVpuClient(VpuClient*) */
int _ZN14VpuRequestImpl12setVpuClientEP9VpuClient(void);

/* Symbol: _ZN13VpuStreamImpl8tryEnqueEP10VpuRequest */
/* Demangled: VpuStreamImpl::tryEnque(VpuRequest*) */
int _ZN13VpuStreamImpl8tryEnqueEP10VpuRequest(void);

/* Symbol: _ZN13MemoryControl11getInstanceEv */
/* Demangled: MemoryControl::getInstance() */
int _ZN13MemoryControl11getInstanceEv(void);

/* Symbol: _ZN13MemoryControl16set_project_nameENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: MemoryControl::set_project_name(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN13MemoryControl16set_project_nameENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN12MemoryHandleD1Ev */
/* Demangled: MemoryHandle::~MemoryHandle() */
int _ZN12MemoryHandleD1Ev(void);

/* Symbol: apuwareMemFreeInternal */
/* Demangled: apuwareMemFreeInternal */
int apuwareMemFreeInternal(void);

/* Symbol: ion_dma_unmap_area */
/* Demangled: ion_dma_unmap_area */
int ion_dma_unmap_area(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZTV13VpuStreamImpl */
/* Demangled: vtable for VpuStreamImpl */
extern void* _ZTV13VpuStreamImpl;

/* Symbol: _ZN19AndroidMemoryHandle17mem_cache_invalidEiPvi */
/* Demangled: AndroidMemoryHandle::mem_cache_invalid(int, void*, int) */
int _ZN19AndroidMemoryHandle17mem_cache_invalidEiPvi(void);

/* Symbol: _ZN14VpuRequestImpl9getResultEv */
/* Demangled: VpuRequestImpl::getResult() */
int _ZN14VpuRequestImpl9getResultEv(void);

/* Symbol: _ZN14VpuRequestImplD0Ev */
/* Demangled: VpuRequestImpl::~VpuRequestImpl() */
int _ZN14VpuRequestImplD0Ev(void);

/* Symbol: _ZN13VpuStreamImpl12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE */
/* Demangled: VpuStreamImpl::getVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
int _ZN13VpuStreamImpl12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZN13MemoryControlD1Ev */
/* Demangled: MemoryControl::~MemoryControl() */
int _ZN13MemoryControlD1Ev(void);

/* Symbol: _ZN12MemoryHandle30remove_mem_buffer_fd_by_bufferEP16MemBufferSharefd */
/* Demangled: MemoryHandle::remove_mem_buffer_fd_by_buffer(MemBufferSharefd*) */
int _ZN12MemoryHandle30remove_mem_buffer_fd_by_bufferEP16MemBufferSharefd(void);

/* Symbol: apuwareMemInitInternal */
/* Demangled: apuwareMemInitInternal */
int apuwareMemInitInternal(void);

/* Symbol: _ZN13HidlVpuClient11setPropertyEiPvi */
/* Demangled: HidlVpuClient::setProperty(int, void*, int) */
int _ZN13HidlVpuClient11setPropertyEiPvi(void);

/* Symbol: _ZN13VpuStreamImpl10createAlgoEPKcPcjj */
/* Demangled: VpuStreamImpl::createAlgo(char const*, char*, unsigned int, unsigned int) */
int _ZN13VpuStreamImpl10createAlgoEPKcPcjj(void);

/* Symbol: _ZN13HidlVpuClient9addBufferEiP7VpuPortR9VpuBuffer */
/* Demangled: HidlVpuClient::addBuffer(int, VpuPort*, VpuBuffer&) */
int _ZN13HidlVpuClient9addBufferEiP7VpuPortR9VpuBuffer(void);

/* Symbol: ion_munmap */
/* Demangled: ion_munmap */
int ion_munmap(void);

/* Symbol: _ZN13HidlVpuClient7releaseEi */
/* Demangled: HidlVpuClient::release(int) */
int _ZN13HidlVpuClient7releaseEi(void);

/* Symbol: _ZN13HidlVpuClient9getResultEi */
/* Demangled: HidlVpuClient::getResult(int) */
int _ZN13HidlVpuClient9getResultEi(void);

/* Symbol: _ZN14VpuRequestImpl16getInferenceInfoER16VpuInferenceInfo */
/* Demangled: VpuRequestImpl::getInferenceInfo(VpuInferenceInfo&) */
int _ZN14VpuRequestImpl16getInferenceInfoER16VpuInferenceInfo(void);

/* Symbol: apuwareMemAllocInternal */
/* Demangled: apuwareMemAllocInternal */
int apuwareMemAllocInternal(void);

/* Symbol: createVpuStreamInternal */
/* Demangled: createVpuStreamInternal */
int createVpuStreamInternal(void);

/* Symbol: ion_alloc_camera */
/* Demangled: ion_alloc_camera */
int ion_alloc_camera(void);

/* Symbol: _ZN13HidlVpuClient8freeAlgoEy */
/* Demangled: HidlVpuClient::freeAlgo(unsigned long long) */
int _ZN13HidlVpuClient8freeAlgoEy(void);

/* Symbol: _ZN13VpuStreamImplD2Ev */
/* Demangled: VpuStreamImpl::~VpuStreamImpl() */
int _ZN13VpuStreamImplD2Ev(void);

/* Symbol: ion_alloc_camera_pool */
/* Demangled: ion_alloc_camera_pool */
int ion_alloc_camera_pool(void);

/* Symbol: _ZN13VpuStreamImpl7runPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEEb */
/* Demangled: VpuStreamImpl::runPack(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&, bool) */
int _ZN13VpuStreamImpl7runPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEEb(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhjjjxPNS0_9EventFlagE */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::writeBlocking(unsigned char const*, unsigned int, unsigned int, unsigned int, long long, android::hardware::EventFlag*) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhjjjxPNS0_9EventFlagE(void);

/* Symbol: _ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >::__push_back_slow_path<VpuStatus const&>(VpuStatus const&) */
int _ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: DEBUG_LOG */
/* Demangled: DEBUG_LOG */
extern void* DEBUG_LOG;

/* Symbol: pMemControl */
/* Demangled: pMemControl */
extern void* pMemControl;

/* Symbol: _ZN11VpuAlgoImplC2Ei */
/* Demangled: VpuAlgoImpl::VpuAlgoImpl(int) */
int _ZN11VpuAlgoImplC2Ei(void);

/* Symbol: _ZN13HidlVpuClient5enqueEij */
/* Demangled: HidlVpuClient::enque(int, unsigned int) */
int _ZN13HidlVpuClient5enqueEij(void);

/* Symbol: _ZN13HidlVpuClient5dequeEv */
/* Demangled: HidlVpuClient::deque() */
int _ZN13HidlVpuClient5dequeEv(void);

/* Symbol: _ZN11VpuAlgoImplD2Ev */
/* Demangled: VpuAlgoImpl::~VpuAlgoImpl() */
int _ZN11VpuAlgoImplD2Ev(void);

/* Symbol: _ZTV14VpuRequestImpl */
/* Demangled: vtable for VpuRequestImpl */
extern void* _ZTV14VpuRequestImpl;

/* Symbol: _ZN19AndroidMemoryHandle15mem_cache_cleanEiPvi */
/* Demangled: AndroidMemoryHandle::mem_cache_clean(int, void*, int) */
int _ZN19AndroidMemoryHandle15mem_cache_cleanEiPvi(void);

/* Symbol: _ZN12MemoryHandleD0Ev */
/* Demangled: MemoryHandle::~MemoryHandle() */
int _ZN12MemoryHandleD0Ev(void);

/* Symbol: _ZGVZ16apuwareMemDeInitE2fn */
/* Demangled: guard variable for apuwareMemDeInit::fn */
extern void* _ZGVZ16apuwareMemDeInitE2fn;

/* Symbol: _ZN19AndroidMemoryHandle14mem_cache_syncEiPvi */
/* Demangled: AndroidMemoryHandle::mem_cache_sync(int, void*, int) */
int _ZN19AndroidMemoryHandle14mem_cache_syncEiPvi(void);

/* Symbol: _ZN13HidlVpuClient11setPropertyEiPKcRK11VpuProperty */
/* Demangled: HidlVpuClient::setProperty(int, char const*, VpuProperty const&) */
int _ZN13HidlVpuClient11setPropertyEiPKcRK11VpuProperty(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN9VpuStream14createInstanceEv */
/* Demangled: VpuStream::createInstance() */
int _ZN9VpuStream14createInstanceEv(void);

/* Symbol: _ZN13MemoryControl8mem_freeEPv */
/* Demangled: MemoryControl::mem_free(void*) */
int _ZN13MemoryControl8mem_freeEPv(void);

/* Symbol: _ZN13MemoryControlD0Ev */
/* Demangled: MemoryControl::~MemoryControl() */
int _ZN13MemoryControlD0Ev(void);

/* Symbol: _ZN19AndroidMemoryHandleD2Ev */
/* Demangled: AndroidMemoryHandle::~AndroidMemoryHandle() */
int _ZN19AndroidMemoryHandleD2Ev(void);

/* Symbol: _ZTV11VpuAlgoImpl */
/* Demangled: vtable for VpuAlgoImpl */
extern void* _ZTV11VpuAlgoImpl;

/* Symbol: _ZN14VpuRequestImpl11setPropertyEPvi */
/* Demangled: VpuRequestImpl::setProperty(void*, int) */
int _ZN14VpuRequestImpl11setPropertyEPvi(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: ion_alloc_mm */
/* Demangled: ion_alloc_mm */
int ion_alloc_mm(void);

/* Symbol: _ZN13VpuStreamImpl7acquireEP7VpuAlgo13VpuModuleType */
/* Demangled: VpuStreamImpl::acquire(VpuAlgo*, VpuModuleType) */
int _ZN13VpuStreamImpl7acquireEP7VpuAlgo13VpuModuleType(void);

/* Symbol: _ZN13VpuStreamImpl7releaseEP10VpuRequest */
/* Demangled: VpuStreamImpl::release(VpuRequest*) */
int _ZN13VpuStreamImpl7releaseEP10VpuRequest(void);

/* Symbol: _ZN13VpuStreamImpl8setPowerER8VpuPowerj */
/* Demangled: VpuStreamImpl::setPower(VpuPower&, unsigned int) */
int _ZN13VpuStreamImpl8setPowerER8VpuPowerj(void);

/* Symbol: _ZN13MemoryControl8mem_initEv */
/* Demangled: MemoryControl::mem_init() */
int _ZN13MemoryControl8mem_initEv(void);

/* Symbol: apuwareMemDeInitInternal */
/* Demangled: apuwareMemDeInitInternal */
int apuwareMemDeInitInternal(void);

/* Symbol: ion_alloc_syscontig */
/* Demangled: ion_alloc_syscontig */
int ion_alloc_syscontig(void);

/* Symbol: _ZN13MemoryControl15getMemoryHandleEv */
/* Demangled: MemoryControl::getMemoryHandle() */
int _ZN13MemoryControl15getMemoryHandleEv(void);

/* Symbol: _ZTV19AndroidMemoryHandle */
/* Demangled: vtable for AndroidMemoryHandle */
extern void* _ZTV19AndroidMemoryHandle;

/* Symbol: _ZN12MemoryHandle24find_mem_buffer_fd_by_fdEi */
/* Demangled: MemoryHandle::find_mem_buffer_fd_by_fd(int) */
int _ZN12MemoryHandle24find_mem_buffer_fd_by_fdEi(void);

/* Symbol: _ZGVZ15apuwareMemAllocE2fn */
/* Demangled: guard variable for apuwareMemAlloc::fn */
extern void* _ZGVZ15apuwareMemAllocE2fn;

/* Symbol: _ZN13HidlVpuClient7acquireEi13VpuModuleType */
/* Demangled: HidlVpuClient::acquire(int, VpuModuleType) */
int _ZN13HidlVpuClient7acquireEi13VpuModuleType(void);

/* Symbol: _ZN13HidlVpuClient8setPowerER8VpuPowerj */
/* Demangled: HidlVpuClient::setPower(VpuPower&, unsigned int) */
int _ZN13HidlVpuClient8setPowerER8VpuPowerj(void);

/* Symbol: _ZN13HidlVpuClient9getResultEiRj */
/* Demangled: HidlVpuClient::getResult(int, unsigned int&) */
int _ZN13HidlVpuClient9getResultEiRj(void);

/* Symbol: _ZN13VpuStreamImplC2Ev */
/* Demangled: VpuStreamImpl::VpuStreamImpl() */
int _ZN13VpuStreamImplC2Ev(void);

/* Symbol: _ZN13VpuStreamImplD1Ev */
/* Demangled: VpuStreamImpl::~VpuStreamImpl() */
int _ZN13VpuStreamImplD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP10VpuRequestEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, VpuRequest*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, VpuRequest*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, VpuRequest*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, VpuRequest*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiP10VpuRequestEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: ion_mmap */
/* Demangled: ion_mmap */
int ion_mmap(void);

/* Symbol: _ZN13HidlVpuClient11getPropertyEiPKcR11VpuProperty */
/* Demangled: HidlVpuClient::getProperty(int, char const*, VpuProperty&) */
int _ZN13HidlVpuClient11getPropertyEiPKcR11VpuProperty(void);

/* Symbol: _ZN13VpuStreamImpl7getAlgoEPKc */
/* Demangled: VpuStreamImpl::getAlgo(char const*) */
int _ZN13VpuStreamImpl7getAlgoEPKc(void);

/* Symbol: _ZTV13MemoryControl */
/* Demangled: vtable for MemoryControl */
extern void* _ZTV13MemoryControl;

/* Symbol: _ZN13HidlVpuClient13unpackRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE */
/* Demangled: HidlVpuClient::unpackRequest(std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN13HidlVpuClient13unpackRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void);

/* Symbol: _ZN11VpuAlgoImpl12setVpuClientEP9VpuClient */
/* Demangled: VpuAlgoImpl::setVpuClient(VpuClient*) */
int _ZN11VpuAlgoImpl12setVpuClientEP9VpuClient(void);

/* Symbol: _ZN14VpuRequestImpl9addBufferEP7VpuPortR9VpuBuffer */
/* Demangled: VpuRequestImpl::addBuffer(VpuPort*, VpuBuffer&) */
int _ZN14VpuRequestImpl9addBufferEP7VpuPortR9VpuBuffer(void);

/* Symbol: _ZN13VpuStreamImpl5flushEv */
/* Demangled: VpuStreamImpl::flush() */
int _ZN13VpuStreamImpl5flushEv(void);

/* Symbol: _ZN19AndroidMemoryHandle9mem_allocEjj */
/* Demangled: AndroidMemoryHandle::mem_alloc(unsigned int, unsigned int) */
int _ZN19AndroidMemoryHandle9mem_allocEjj(void);

/* Symbol: ion_custom_ioctl */
/* Demangled: ion_custom_ioctl */
int ion_custom_ioctl(void);

/* Symbol: ion_cache_sync_flush_range */
/* Demangled: ion_cache_sync_flush_range */
int ion_cache_sync_flush_range(void);

/* Symbol: _ZN13HidlVpuClient12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE */
/* Demangled: HidlVpuClient::getVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
int _ZN13HidlVpuClient12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZN13HidlVpuClient13VS_deInstanceEv */
/* Demangled: HidlVpuClient::VS_deInstance() */
int _ZN13HidlVpuClient13VS_deInstanceEv(void);

/* Symbol: _ZN11VpuAlgoImplC1Ei */
/* Demangled: VpuAlgoImpl::VpuAlgoImpl(int) */
int _ZN11VpuAlgoImplC1Ei(void);

/* Symbol: _ZN14VpuRequestImpl9addBufferER9VpuBuffer */
/* Demangled: VpuRequestImpl::addBuffer(VpuBuffer&) */
int _ZN14VpuRequestImpl9addBufferER9VpuBuffer(void);

/* Symbol: _ZN14VpuRequestImpl9getResultERj */
/* Demangled: VpuRequestImpl::getResult(unsigned int&) */
int _ZN14VpuRequestImpl9getResultERj(void);

/* Symbol: _ZN13VpuStreamImpl7acquireEP7VpuAlgo */
/* Demangled: VpuStreamImpl::acquire(VpuAlgo*) */
int _ZN13VpuStreamImpl7acquireEP7VpuAlgo(void);

/* Symbol: _ZN11VpuAlgoImpl7getPortEPKc */
/* Demangled: VpuAlgoImpl::getPort(char const*) */
int _ZN11VpuAlgoImpl7getPortEPKc(void);

/* Symbol: _ZN13MemoryControl9mem_allocEjj */
/* Demangled: MemoryControl::mem_alloc(unsigned int, unsigned int) */
int _ZN13MemoryControl9mem_allocEjj(void);

/* Symbol: memoryControl_mutex */
/* Demangled: memoryControl_mutex */
extern void* memoryControl_mutex;

/* Symbol: apuwareMemCacheInvalidInternal */
/* Demangled: apuwareMemCacheInvalidInternal */
int apuwareMemCacheInvalidInternal(void);

/* Symbol: ion_cache_sync_flush_range_va */
/* Demangled: ion_cache_sync_flush_range_va */
int ion_cache_sync_flush_range_va(void);

/* Symbol: _ZN13HidlVpuClient16getInferenceInfoEiR16VpuInferenceInfo */
/* Demangled: HidlVpuClient::getInferenceInfo(int, VpuInferenceInfo&) */
int _ZN13HidlVpuClient16getInferenceInfoEiR16VpuInferenceInfo(void);

/* Symbol: _ZN13HidlVpuClient8tryEnqueEi */
/* Demangled: HidlVpuClient::tryEnque(int) */
int _ZN13HidlVpuClient8tryEnqueEi(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIhLS2_1EEEb(void);

/* Symbol: _ZN11VpuAlgoImplD1Ev */
/* Demangled: VpuAlgoImpl::~VpuAlgoImpl() */
int _ZN11VpuAlgoImplD1Ev(void);

/* Symbol: _ZN14VpuRequestImplC2Ei */
/* Demangled: VpuRequestImpl::VpuRequestImpl(int) */
int _ZN14VpuRequestImplC2Ei(void);

/* Symbol: _ZN19AndroidMemoryHandle11getHandleIdEv */
/* Demangled: AndroidMemoryHandle::getHandleId() */
int _ZN19AndroidMemoryHandle11getHandleIdEv(void);

/* Symbol: ion_share_close */
/* Demangled: ion_share_close */
int ion_share_close(void);

/* Symbol: _ZN13HidlVpuClient14va_getPropertyEiPKcR11VpuProperty */
/* Demangled: HidlVpuClient::va_getProperty(int, char const*, VpuProperty&) */
int _ZN13HidlVpuClient14va_getPropertyEiPKcR11VpuProperty(void);

/* Symbol: _ZN13HidlVpuClientC2Ev */
/* Demangled: HidlVpuClient::HidlVpuClient() */
int _ZN13HidlVpuClientC2Ev(void);

/* Symbol: _ZN13HidlVpuClient18setPropertyImproveEiPvi */
/* Demangled: HidlVpuClient::setPropertyImprove(int, void*, int) */
int _ZN13HidlVpuClient18setPropertyImproveEiPvi(void);

/* Symbol: _ZN13HidlVpuClient8waitPackERNSt3__16vectorIiNS0_9allocatorIiEEEE */
/* Demangled: HidlVpuClient::waitPack(std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN13HidlVpuClient8waitPackERNSt3__16vectorIiNS0_9allocatorIiEEEE(void);

/* Symbol: _ZZ15apuwareMemAllocE2fn */
/* Demangled: apuwareMemAlloc::fn */
extern void* _ZZ15apuwareMemAllocE2fn;

/* Symbol: _ZN14VpuRequestImplD2Ev */
/* Demangled: VpuRequestImpl::~VpuRequestImpl() */
int _ZN14VpuRequestImplD2Ev(void);

/* Symbol: _ZN13VpuStreamImpl11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE */
/* Demangled: VpuStreamImpl::packRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
int _ZN13VpuStreamImpl11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void);

/* Symbol: _ZN13VpuStreamImpl5enqueEP10VpuRequestj */
/* Demangled: VpuStreamImpl::enque(VpuRequest*, unsigned int) */
int _ZN13VpuStreamImpl5enqueEP10VpuRequestj(void);

/* Symbol: _ZN13VpuStreamImpl6runReqEP10VpuRequestb */
/* Demangled: VpuStreamImpl::runReq(VpuRequest*, bool) */
int _ZN13VpuStreamImpl6runReqEP10VpuRequestb(void);

/* Symbol: _ZN19AndroidMemoryHandleC2Ev */
/* Demangled: AndroidMemoryHandle::AndroidMemoryHandle() */
int _ZN19AndroidMemoryHandleC2Ev(void);

/* Symbol: _ZN19AndroidMemoryHandleD1Ev */
/* Demangled: AndroidMemoryHandle::~AndroidMemoryHandle() */
int _ZN19AndroidMemoryHandleD1Ev(void);

/* Symbol: _ZN11VpuAlgoImpl11get_algo_idEv */
/* Demangled: VpuAlgoImpl::get_algo_id() */
int _ZN11VpuAlgoImpl11get_algo_idEv(void);

/* Symbol: _ZN14VpuRequestImpl11getPropertyEPKcR11VpuProperty */
/* Demangled: VpuRequestImpl::getProperty(char const*, VpuProperty&) */
int _ZN14VpuRequestImpl11getPropertyEPKcR11VpuProperty(void);

/* Symbol: _ZN13VpuStreamImpl13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE */
/* Demangled: VpuStreamImpl::unpackRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
int _ZN13VpuStreamImpl13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void);

/* Symbol: _ZN13MemoryControl10mem_deinitEv */
/* Demangled: MemoryControl::mem_deinit() */
int _ZN13MemoryControl10mem_deinitEv(void);

/* Symbol: apuwareMemCacheCleanInternal */
/* Demangled: apuwareMemCacheCleanInternal */
int apuwareMemCacheCleanInternal(void);

/* Symbol: _ZN13HidlVpuClient7acquireEi */
/* Demangled: HidlVpuClient::acquire(int) */
int _ZN13HidlVpuClient7acquireEi(void);

/* Symbol: _ZN13VpuStreamImpl8waitPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE */
/* Demangled: VpuStreamImpl::waitPack(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
int _ZN13VpuStreamImpl8waitPackERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void);

/* Symbol: ion_dma_unmap_area_va */
/* Demangled: ion_dma_unmap_area_va */
int ion_dma_unmap_area_va(void);

/* Symbol: _ZGVZ19apuwareMemCacheSyncE2fn */
/* Demangled: guard variable for apuwareMemCacheSync::fn */
extern void* _ZGVZ19apuwareMemCacheSyncE2fn;

/* Symbol: _ZN14VpuRequestImpl14get_request_idEv */
/* Demangled: VpuRequestImpl::get_request_id() */
int _ZN14VpuRequestImpl14get_request_idEv(void);

/* Symbol: _ZN13HidlVpuClient10va_getPortEiPKcR7VpuPort */
/* Demangled: HidlVpuClient::va_getPort(int, char const*, VpuPort&) */
int _ZN13HidlVpuClient10va_getPortEiPKcR7VpuPort(void);

/* Symbol: _ZN14VpuRequestImpl11setPropertyEPKcRK11VpuProperty */
/* Demangled: VpuRequestImpl::setProperty(char const*, VpuProperty const&) */
int _ZN14VpuRequestImpl11setPropertyEPKcRK11VpuProperty(void);

/* Symbol: _ZN13VpuStreamImplC1Ev */
/* Demangled: VpuStreamImpl::VpuStreamImpl() */
int _ZN13VpuStreamImplC1Ev(void);

/* Symbol: _ZN13VpuStreamImplD0Ev */
/* Demangled: VpuStreamImpl::~VpuStreamImpl() */
int _ZN13VpuStreamImplD0Ev(void);

/* Symbol: _ZTV12MemoryHandle */
/* Demangled: vtable for MemoryHandle */
extern void* _ZTV12MemoryHandle;

/* Symbol: _ZN13HidlVpuClient9addBufferEiR9VpuBuffer */
/* Demangled: HidlVpuClient::addBuffer(int, VpuBuffer&) */
int _ZN13HidlVpuClient9addBufferEiR9VpuBuffer(void);

/* Symbol: _ZN14VpuRequestImpl13setExtraParamE13VpuExtraParam */
/* Demangled: VpuRequestImpl::setExtraParam(VpuExtraParam) */
int _ZN14VpuRequestImpl13setExtraParamE13VpuExtraParam(void);

/* Symbol: _ZN19AndroidMemoryHandle8mem_initEv */
/* Demangled: AndroidMemoryHandle::mem_init() */
int _ZN19AndroidMemoryHandle8mem_initEv(void);

/* Symbol: ion_dma_map_area */
/* Demangled: ion_dma_map_area */
int ion_dma_map_area(void);

/* Symbol: _ZN13HidlVpuClient11packRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE */
/* Demangled: HidlVpuClient::packRequest(std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN13HidlVpuClient11packRequestERNSt3__16vectorIiNS0_9allocatorIiEEEE(void);

/* Symbol: _ZN13HidlVpuClient13setExtraParamEi13VpuExtraParam */
/* Demangled: HidlVpuClient::setExtraParam(int, VpuExtraParam) */
int _ZN13HidlVpuClient13setExtraParamEi13VpuExtraParam(void);

/* Symbol: _ZN14VpuRequestImpl11getPropertyEPvi */
/* Demangled: VpuRequestImpl::getProperty(void*, int) */
int _ZN14VpuRequestImpl11getPropertyEPvi(void);

/* Symbol: _ZN19AndroidMemoryHandle8mem_freeEPv */
/* Demangled: AndroidMemoryHandle::mem_free(void*) */
int _ZN19AndroidMemoryHandle8mem_freeEPv(void);

/* Symbol: ion_cache_sync_flush_all */
/* Demangled: ion_cache_sync_flush_all */
int ion_cache_sync_flush_all(void);

/* Symbol: _ZZ14apuwareMemInitE2fn */
/* Demangled: apuwareMemInit::fn */
extern void* _ZZ14apuwareMemInitE2fn;

/* Symbol: _ZN11VpuAlgoImpl11getPropertyEPKcR11VpuProperty */
/* Demangled: VpuAlgoImpl::getProperty(char const*, VpuProperty&) */
int _ZN11VpuAlgoImpl11getPropertyEPKcR11VpuProperty(void);

/* Symbol: _ZN13VpuStreamImpl8freeAlgoEy */
/* Demangled: VpuStreamImpl::freeAlgo(unsigned long long) */
int _ZN13VpuStreamImpl8freeAlgoEy(void);

/* Symbol: _ZN13HidlVpuClient5flushEv */
/* Demangled: HidlVpuClient::flush() */
int _ZN13HidlVpuClient5flushEv(void);

/* Symbol: _ZN11VpuAlgoImplD0Ev */
/* Demangled: VpuAlgoImpl::~VpuAlgoImpl() */
int _ZN11VpuAlgoImplD0Ev(void);

/* Symbol: _ZN14VpuRequestImplC1Ei */
/* Demangled: VpuRequestImpl::VpuRequestImpl(int) */
int _ZN14VpuRequestImplC1Ei(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiP7VpuAlgoEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, VpuAlgo*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, VpuAlgo*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, VpuAlgo*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, VpuAlgo*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiP7VpuAlgoEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN13MemoryControl11pMemControlE */
/* Demangled: MemoryControl::pMemControl */
extern void* _ZN13MemoryControl11pMemControlE;

/* Symbol: _ZN12MemoryHandle28find_mem_buffer_fd_by_bufferEPv */
/* Demangled: MemoryHandle::find_mem_buffer_fd_by_buffer(void*) */
int _ZN12MemoryHandle28find_mem_buffer_fd_by_bufferEPv(void);

/* Symbol: _ZN12MemoryHandleD2Ev */
/* Demangled: MemoryHandle::~MemoryHandle() */
int _ZN12MemoryHandleD2Ev(void);

/* Symbol: _ZNSt3__16vectorI16MemBufferSharefdNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<MemBufferSharefd, std::__1::allocator<MemBufferSharefd> >::__push_back_slow_path<MemBufferSharefd const&>(MemBufferSharefd const&) */
int _ZNSt3__16vectorI16MemBufferSharefdNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN13HidlVpuClientC1Ev */
/* Demangled: HidlVpuClient::HidlVpuClient() */
int _ZN13HidlVpuClientC1Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhj(void);

/* Symbol: _ZTV13HidlVpuClient */
/* Demangled: vtable for HidlVpuClient */
extern void* _ZTV13HidlVpuClient;

/* Symbol: _ZZ16apuwareMemDeInitE2fn */
/* Demangled: apuwareMemDeInit::fn */
extern void* _ZZ16apuwareMemDeInitE2fn;

/* Symbol: _ZN14VpuRequestImplD1Ev */
/* Demangled: VpuRequestImpl::~VpuRequestImpl() */
int _ZN14VpuRequestImplD1Ev(void);

/* Symbol: _ZN13VpuStreamImpl7waitReqEP10VpuRequest */
/* Demangled: VpuStreamImpl::waitReq(VpuRequest*) */
int _ZN13VpuStreamImpl7waitReqEP10VpuRequest(void);

/* Symbol: _ZN13MemoryControlD2Ev */
/* Demangled: MemoryControl::~MemoryControl() */
int _ZN13MemoryControlD2Ev(void);

/* Symbol: _ZN19AndroidMemoryHandleC1Ev */
/* Demangled: AndroidMemoryHandle::AndroidMemoryHandle() */
int _ZN19AndroidMemoryHandleC1Ev(void);

/* Symbol: _ZN19AndroidMemoryHandleD0Ev */
/* Demangled: AndroidMemoryHandle::~AndroidMemoryHandle() */
int _ZN19AndroidMemoryHandleD0Ev(void);

/* Symbol: _ZN13HidlVpuClient10createAlgoEPKcPcjj */
/* Demangled: HidlVpuClient::createAlgo(char const*, char*, unsigned int, unsigned int) */
int _ZN13HidlVpuClient10createAlgoEPKcPcjj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN13HidlVpuClient6runReqEib */
/* Demangled: HidlVpuClient::runReq(int, bool) */
int _ZN13HidlVpuClient6runReqEib(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_ */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void);

/* Symbol: _ZZ14apuwareMemFreeE2fn */
/* Demangled: apuwareMemFree::fn */
extern void* _ZZ14apuwareMemFreeE2fn;

/* Symbol: _ZN19AndroidMemoryHandle10mem_deinitEv */
/* Demangled: AndroidMemoryHandle::mem_deinit() */
int _ZN19AndroidMemoryHandle10mem_deinitEv(void);

/* Symbol: apuwareMemCacheSyncInternal */
/* Demangled: apuwareMemCacheSyncInternal */
int apuwareMemCacheSyncInternal(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVPUAPI_MTK_H */
