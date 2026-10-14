/*
 * Reverse-Engineered ABI Specification for: libapuwareapusys.mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libapuwareapusys.mtk.so
 */

#ifndef BEGONIA_RE_LIBAPUWAREAPUSYS_MTK_H
#define BEGONIA_RE_LIBAPUWAREAPUSYS_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN17IApusysEngineImpl14deleteInstanceEP13IApusysEngine */
/* Demangled: IApusysEngineImpl::deleteInstance(IApusysEngine*) */
int _ZN17IApusysEngineImpl14deleteInstanceEP13IApusysEngine(void);

/* Symbol: _ZN17IApusysEngineImplC2Ei */
/* Demangled: IApusysEngineImpl::IApusysEngineImpl(int) */
int _ZN17IApusysEngineImplC2Ei(void);

/* Symbol: deleteApusysInstanceInternal */
/* Demangled: deleteApusysInstanceInternal */
int deleteApusysInstanceInternal(void);

/* Symbol: ion_mmap */
/* Demangled: ion_mmap */
int ion_mmap(void);

/* Symbol: _Z21InitApusysDebugConfigv */
/* Demangled: InitApusysDebugConfig() */
int _Z21InitApusysDebugConfigv(void);

/* Symbol: ion_dma_map_area */
/* Demangled: ion_dma_map_area */
int ion_dma_map_area(void);

/* Symbol: ion_dma_unmap_area_va */
/* Demangled: ion_dma_unmap_area_va */
int ion_dma_unmap_area_va(void);

/* Symbol: _ZN16HidlNeuronClient8memAllocEimjj17APUSYS_USER_MEM_E */
/* Demangled: HidlNeuronClient::memAlloc(int, unsigned long, unsigned int, unsigned int, APUSYS_USER_MEM_E) */
int _ZN16HidlNeuronClient8memAllocEimjj17APUSYS_USER_MEM_E(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTV17IApusysIonMemImpl */
/* Demangled: vtable for IApusysIonMemImpl */
extern void* _ZTV17IApusysIonMemImpl;

/* Symbol: ion_alloc_camera_pool */
/* Demangled: ion_alloc_camera_pool */
int ion_alloc_camera_pool(void);

/* Symbol: ion_custom_ioctl */
/* Demangled: ion_custom_ioctl */
int ion_custom_ioctl(void);

/* Symbol: mt_ion_open */
/* Demangled: mt_ion_open */
int mt_ion_open(void);

/* Symbol: DEBUG_LOG_APUSYS */
/* Demangled: DEBUG_LOG_APUSYS */
extern void* DEBUG_LOG_APUSYS;

/* Symbol: _ZN16HidlNeuronClient13memInvalidateEii */
/* Demangled: HidlNeuronClient::memInvalidate(int, int) */
int _ZN16HidlNeuronClient13memInvalidateEii(void);

/* Symbol: _ZN12MemoryHandleC1Ev */
/* Demangled: MemoryHandle::MemoryHandle() */
int _ZN12MemoryHandleC1Ev(void);

/* Symbol: _ZN17IApusysEngineImpl15apusysMem_mutexE */
/* Demangled: IApusysEngineImpl::apusysMem_mutex */
extern void* _ZN17IApusysEngineImpl15apusysMem_mutexE;

/* Symbol: ion_alloc_syscontig */
/* Demangled: ion_alloc_syscontig */
int ion_alloc_syscontig(void);

/* Symbol: ion_cache_sync_flush_range_va */
/* Demangled: ion_cache_sync_flush_range_va */
int ion_cache_sync_flush_range_va(void);

/* Symbol: _ZN12MemoryHandle6munmapEmi */
/* Demangled: MemoryHandle::munmap(unsigned long, int) */
int _ZN12MemoryHandle6munmapEmi(void);

/* Symbol: _ZN16HidlNeuronClient14createInstanceEv */
/* Demangled: HidlNeuronClient::createInstance() */
int _ZN16HidlNeuronClient14createInstanceEv(void);

/* Symbol: _ZN16HidlNeuronClient8memAllocEimjj */
/* Demangled: HidlNeuronClient::memAlloc(int, unsigned long, unsigned int, unsigned int) */
int _ZN16HidlNeuronClient8memAllocEimjj(void);

/* Symbol: _ZN16HidlNeuronClient9memImportEiij */
/* Demangled: HidlNeuronClient::memImport(int, int, unsigned int) */
int _ZN16HidlNeuronClient9memImportEiij(void);

/* Symbol: _ZN17IApusysEngineImpl6runCmdEP10IApusysMem */
/* Demangled: IApusysEngineImpl::runCmd(IApusysMem*) */
int _ZN17IApusysEngineImpl6runCmdEP10IApusysMem(void);

/* Symbol: _ZN17IApusysEngineImpl9memImportEij */
/* Demangled: IApusysEngineImpl::memImport(int, unsigned int) */
int _ZN17IApusysEngineImpl9memImportEij(void);

/* Symbol: ion_alloc_mm */
/* Demangled: ion_alloc_mm */
int ion_alloc_mm(void);

/* Symbol: _ZN16HidlNeuronClient11memUnImportEii */
/* Demangled: HidlNeuronClient::memUnImport(int, int) */
int _ZN16HidlNeuronClient11memUnImportEii(void);

/* Symbol: _ZN16HidlNeuronClient6runCmdEii */
/* Demangled: HidlNeuronClient::runCmd(int, int) */
int _ZN16HidlNeuronClient6runCmdEii(void);

/* Symbol: _ZN13IApusysEngine14createInstanceEPKc */
/* Demangled: IApusysEngine::createInstance(char const*) */
int _ZN13IApusysEngine14createInstanceEPKc(void);

/* Symbol: _ZN17IApusysEngineImpl6clientE */
/* Demangled: IApusysEngineImpl::client */
extern void* _ZN17IApusysEngineImpl6clientE;

/* Symbol: _ZTV16apusysVlmMemImpl */
/* Demangled: vtable for apusysVlmMemImpl */
extern void* _ZTV16apusysVlmMemImpl;

/* Symbol: _ZN16HidlNeuronClient14deleteInstanceEi */
/* Demangled: HidlNeuronClient::deleteInstance(int) */
int _ZN16HidlNeuronClient14deleteInstanceEi(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysEED2Ev(void);

/* Symbol: _ZN17IApusysEngineImpl11memUnImportEP10IApusysMem */
/* Demangled: IApusysEngineImpl::memUnImport(IApusysMem*) */
int _ZN17IApusysEngineImpl11memUnImportEP10IApusysMem(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JNS2_IS3_S5_EEEEENS2_INS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*> > >::__emplace_unique_key_args<std::__1::pair<int, int>, std::__1::pair<std::__1::pair<int, int>, IApusysMem*> >(std::__1::pair<int, int> const&, std::__1::pair<std::__1::pair<int, int>, IApusysMem*>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JNS2_IS3_S5_EEEEENS2_INS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN16HidlNeuronClient12getDeviceNumEi15APUSYS_DEVICE_E */
/* Demangled: HidlNeuronClient::getDeviceNum(int, APUSYS_DEVICE_E) */
int _ZN16HidlNeuronClient12getDeviceNumEi15APUSYS_DEVICE_E(void);

/* Symbol: _ZN17IApusysEngineImpl13apusysMem_mapE */
/* Demangled: IApusysEngineImpl::apusysMem_map */
extern void* _ZN17IApusysEngineImpl13apusysMem_mapE;

/* Symbol: ion_cache_sync_flush_range */
/* Demangled: ion_cache_sync_flush_range */
int ion_cache_sync_flush_range(void);

/* Symbol: _ZN16HidlNeuronClient8memAllocEimj */
/* Demangled: HidlNeuronClient::memAlloc(int, unsigned long, unsigned int) */
int _ZN16HidlNeuronClient8memAllocEimj(void);

/* Symbol: _ZN12MemoryHandle4mmapEii */
/* Demangled: MemoryHandle::mmap(int, int) */
int _ZN12MemoryHandle4mmapEii(void);

/* Symbol: _ZTV17IApusysEngineImpl */
/* Demangled: vtable for IApusysEngineImpl */
extern void* _ZTV17IApusysEngineImpl;

/* Symbol: _ZN16HidlNeuronClient7memFreeEii */
/* Demangled: HidlNeuronClient::memFree(int, int) */
int _ZN16HidlNeuronClient7memFreeEii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JNS2_IS3_P17IApusysIonMemImplEEEEENS2_INS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*> > >::__emplace_unique_key_args<std::__1::pair<int, int>, std::__1::pair<std::__1::pair<int, int>, IApusysIonMemImpl*> >(std::__1::pair<int, int> const&, std::__1::pair<std::__1::pair<int, int>, IApusysIonMemImpl*>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS3_JNS2_IS3_P17IApusysIonMemImplEEEEENS2_INS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN12MemoryHandleC2Ev */
/* Demangled: MemoryHandle::MemoryHandle() */
int _ZN12MemoryHandleC2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN16HidlNeuronClientD1Ev */
/* Demangled: HidlNeuronClient::~HidlNeuronClient() */
int _ZN16HidlNeuronClientD1Ev(void);

/* Symbol: _ZN12MemoryHandleD1Ev */
/* Demangled: MemoryHandle::~MemoryHandle() */
int _ZN12MemoryHandleD1Ev(void);

/* Symbol: ion_dma_unmap_area */
/* Demangled: ion_dma_unmap_area */
int ion_dma_unmap_area(void);

/* Symbol: _ZN16HidlNeuronClient17getApusysEngineIdEPKc */
/* Demangled: HidlNeuronClient::getApusysEngineId(char const*) */
int _ZN16HidlNeuronClient17getApusysEngineIdEPKc(void);

/* Symbol: _ZN16HidlNeuronClient16hidlNeuronClientE */
/* Demangled: HidlNeuronClient::hidlNeuronClient */
extern void* _ZN16HidlNeuronClient16hidlNeuronClientE;

/* Symbol: _ZN17IApusysEngineImplC1Ei */
/* Demangled: IApusysEngineImpl::IApusysEngineImpl(int) */
int _ZN17IApusysEngineImplC1Ei(void);

/* Symbol: createApusysInstanceInternal */
/* Demangled: createApusysInstanceInternal */
int createApusysInstanceInternal(void);

/* Symbol: _ZN12MemoryHandle4freeEimi */
/* Demangled: MemoryHandle::free(int, unsigned long, int) */
int _ZN12MemoryHandle4freeEimi(void);

/* Symbol: _ZN17IApusysEngineImpl13memInvalidateEP10IApusysMem */
/* Demangled: IApusysEngineImpl::memInvalidate(IApusysMem*) */
int _ZN17IApusysEngineImpl13memInvalidateEP10IApusysMem(void);

/* Symbol: _ZN17IApusysEngineImpl8memAllocEmjj */
/* Demangled: IApusysEngineImpl::memAlloc(unsigned long, unsigned int, unsigned int) */
int _ZN17IApusysEngineImpl8memAllocEmjj(void);

/* Symbol: _ZN17IApusysEngineImpl8memAllocEmjj17APUSYS_USER_MEM_E */
/* Demangled: IApusysEngineImpl::memAlloc(unsigned long, unsigned int, unsigned int, APUSYS_USER_MEM_E) */
int _ZN17IApusysEngineImpl8memAllocEmjj17APUSYS_USER_MEM_E(void);

/* Symbol: initProgram */
/* Demangled: initProgram */
extern void* initProgram;

/* Symbol: ion_dma_map_area_va */
/* Demangled: ion_dma_map_area_va */
int ion_dma_map_area_va(void);

/* Symbol: ion_share_close */
/* Demangled: ion_share_close */
int ion_share_close(void);

/* Symbol: _ZN13IApusysEngine14deleteInstanceEPS_ */
/* Demangled: IApusysEngine::deleteInstance(IApusysEngine*) */
int _ZN13IApusysEngine14deleteInstanceEPS_(void);

/* Symbol: _ZN17IApusysEngineImpl14createInstanceEPKc */
/* Demangled: IApusysEngineImpl::createInstance(char const*) */
int _ZN17IApusysEngineImpl14createInstanceEPKc(void);

/* Symbol: ion_alloc_camera */
/* Demangled: ion_alloc_camera */
int ion_alloc_camera(void);

/* Symbol: ion_cache_sync_flush_all */
/* Demangled: ion_cache_sync_flush_all */
int ion_cache_sync_flush_all(void);

/* Symbol: _ZN16HidlNeuronClient7serviceE */
/* Demangled: HidlNeuronClient::service */
extern void* _ZN16HidlNeuronClient7serviceE;

/* Symbol: _ZN16HidlNeuronClient8memAllocEim */
/* Demangled: HidlNeuronClient::memAlloc(int, unsigned long) */
int _ZN16HidlNeuronClient8memAllocEim(void);

/* Symbol: _ZN17IApusysEngineImpl12getDeviceNumE15APUSYS_DEVICE_E */
/* Demangled: IApusysEngineImpl::getDeviceNum(APUSYS_DEVICE_E) */
int _ZN17IApusysEngineImpl12getDeviceNumE15APUSYS_DEVICE_E(void);

/* Symbol: ion_munmap */
/* Demangled: ion_munmap */
int ion_munmap(void);

/* Symbol: _ZN16HidlNeuronClient7memSyncEii */
/* Demangled: HidlNeuronClient::memSync(int, int) */
int _ZN16HidlNeuronClient7memSyncEii(void);

/* Symbol: _ZN16HidlNeuronClientD2Ev */
/* Demangled: HidlNeuronClient::~HidlNeuronClient() */
int _ZN16HidlNeuronClientD2Ev(void);

/* Symbol: _ZN17IApusysEngineImpl12apuSysEngineE */
/* Demangled: IApusysEngineImpl::apuSysEngine */
extern void* _ZN17IApusysEngineImpl12apuSysEngineE;

/* Symbol: _ZN17IApusysEngineImpl7memSyncEP10IApusysMem */
/* Demangled: IApusysEngineImpl::memSync(IApusysMem*) */
int _ZN17IApusysEngineImpl7memSyncEP10IApusysMem(void);

/* Symbol: _ZN17IApusysEngineImpl8memAllocEm */
/* Demangled: IApusysEngineImpl::memAlloc(unsigned long) */
int _ZN17IApusysEngineImpl8memAllocEm(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN12MemoryHandleD2Ev */
/* Demangled: MemoryHandle::~MemoryHandle() */
int _ZN12MemoryHandleD2Ev(void);

/* Symbol: _ZN17IApusysEngineImpl7memFreeEP10IApusysMem */
/* Demangled: IApusysEngineImpl::memFree(IApusysMem*) */
int _ZN17IApusysEngineImpl7memFreeEP10IApusysMem(void);

/* Symbol: _ZN17IApusysEngineImpl8memAllocEmj */
/* Demangled: IApusysEngineImpl::memAlloc(unsigned long, unsigned int) */
int _ZN17IApusysEngineImpl8memAllocEmj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAPUWAREAPUSYS_MTK_H */
