/*
 * Reverse-Engineered Source for: libapuwareapusys.mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libapuwareapusys_mtk"

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
#include "libapuwareapusys_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HidlNeuronClient::runCmd(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient6runCmdEii(void) {
    ALOGD("_ZN16HidlNeuronClient6runCmdEii() called");
    return 0;
}

/* Demangled: IApusysEngine::deleteInstance(IApusysEngine*) */
extern "C" __attribute__((visibility("default"))) int _ZN13IApusysEngine14deleteInstanceEPS_(void) {
    ALOGD("_ZN13IApusysEngine14deleteInstanceEPS_() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memSync(IApusysMem*) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl7memSyncEP10IApusysMem(void) {
    ALOGD("_ZN17IApusysEngineImpl7memSyncEP10IApusysMem() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::__map_value_compare<std::__1::pair<int, int>, std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, std::__1::less<std::__1::pair<int, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::pair<int, int>, IApusysMem*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_4pairIiiEEP10IApusysMemEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: ion_munmap */
extern "C" __attribute__((visibility("default"))) int ion_munmap(void) {
    ALOGD("ion_munmap() called");
    return 0;
}

/* Demangled: HidlNeuronClient::memFree(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient7memFreeEii(void) {
    ALOGD("_ZN16HidlNeuronClient7memFreeEii() called");
    return 0;
}

/* Demangled: HidlNeuronClient::memAlloc(int, unsigned int, unsigned int, unsigned int, APUSYS_USER_MEM_E) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient8memAllocEijjj17APUSYS_USER_MEM_E(void) {
    ALOGD("_ZN16HidlNeuronClient8memAllocEijjj17APUSYS_USER_MEM_E() called");
    return 0;
}

/* Demangled: HidlNeuronClient::~HidlNeuronClient() */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClientD2Ev(void) {
    ALOGD("_ZN16HidlNeuronClientD2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::apuware::apusys::V1_0::INeuronApusys>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware7apuware6apusys4V1_013INeuronApusysEED2Ev() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl14createInstanceEPKc(void) {
    ALOGD("_ZN17IApusysEngineImpl14createInstanceEPKc() called");
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

/* Demangled: MemoryHandle::munmap(unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle6munmapEyi(void) {
    ALOGD("_ZN12MemoryHandle6munmapEyi() called");
    return 0;
}

/* Exported Object: IApusysEngineImpl::apusysMem_map */
extern "C" __attribute__((visibility("default"))) void* _ZN17IApusysEngineImpl13apusysMem_mapE = NULL;

/* Demangled: IApusysEngineImpl::runCmd(IApusysMem*) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl6runCmdEP10IApusysMem(void) {
    ALOGD("_ZN17IApusysEngineImpl6runCmdEP10IApusysMem() called");
    return 0;
}

/* Demangled: mt_ion_open */
extern "C" __attribute__((visibility("default"))) int mt_ion_open(void) {
    ALOGD("mt_ion_open() called");
    return 0;
}

/* Demangled: IApusysEngine::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13IApusysEngine14createInstanceEPKc(void) {
    ALOGD("_ZN13IApusysEngine14createInstanceEPKc() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memAlloc(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl8memAllocEjjj(void) {
    ALOGD("_ZN17IApusysEngineImpl8memAllocEjjj() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memImport(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl9memImportEij(void) {
    ALOGD("_ZN17IApusysEngineImpl9memImportEij() called");
    return 0;
}

/* Demangled: ion_alloc_syscontig */
extern "C" __attribute__((visibility("default"))) int ion_alloc_syscontig(void) {
    ALOGD("ion_alloc_syscontig() called");
    return 0;
}

/* Demangled: HidlNeuronClient::memAlloc(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient8memAllocEijj(void) {
    ALOGD("_ZN16HidlNeuronClient8memAllocEijj() called");
    return 0;
}

/* Demangled: createApusysInstanceInternal */
extern "C" __attribute__((visibility("default"))) int createApusysInstanceInternal(void) {
    ALOGD("createApusysInstanceInternal() called");
    return 0;
}

/* Demangled: ion_dma_unmap_area */
extern "C" __attribute__((visibility("default"))) int ion_dma_unmap_area(void) {
    ALOGD("ion_dma_unmap_area() called");
    return 0;
}

/* Demangled: HidlNeuronClient::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient14createInstanceEv(void) {
    ALOGD("_ZN16HidlNeuronClient14createInstanceEv() called");
    return 0;
}

/* Demangled: InitApusysDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _Z21InitApusysDebugConfigv(void) {
    ALOGD("_Z21InitApusysDebugConfigv() called");
    return 0;
}

/* Demangled: MemoryHandle::MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleC1Ev(void) {
    ALOGD("_ZN12MemoryHandleC1Ev() called");
    return 0;
}

/* Exported Object: vtable for IApusysIonMemImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV17IApusysIonMemImpl = NULL;

/* Demangled: MemoryHandle::~MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleD2Ev(void) {
    ALOGD("_ZN12MemoryHandleD2Ev() called");
    return 0;
}

/* Demangled: HidlNeuronClient::memAlloc(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient8memAllocEij(void) {
    ALOGD("_ZN16HidlNeuronClient8memAllocEij() called");
    return 0;
}

/* Demangled: HidlNeuronClient::memAlloc(int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient8memAllocEijjj(void) {
    ALOGD("_ZN16HidlNeuronClient8memAllocEijjj() called");
    return 0;
}

/* Demangled: MemoryHandle::mmap(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle4mmapEii(void) {
    ALOGD("_ZN12MemoryHandle4mmapEii() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memUnImport(IApusysMem*) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl11memUnImportEP10IApusysMem(void) {
    ALOGD("_ZN17IApusysEngineImpl11memUnImportEP10IApusysMem() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::IApusysEngineImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImplC1Ei(void) {
    ALOGD("_ZN17IApusysEngineImplC1Ei() called");
    return 0;
}

/* Demangled: ion_share_close */
extern "C" __attribute__((visibility("default"))) int ion_share_close(void) {
    ALOGD("ion_share_close() called");
    return 0;
}

/* Exported Object: DEBUG_LOG_APUSYS */
extern "C" __attribute__((visibility("default"))) void* DEBUG_LOG_APUSYS = NULL;

/* Demangled: HidlNeuronClient::deleteInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient14deleteInstanceEi(void) {
    ALOGD("_ZN16HidlNeuronClient14deleteInstanceEi() called");
    return 0;
}

/* Exported Object: initProgram */
extern "C" __attribute__((visibility("default"))) void* initProgram = NULL;

/* Demangled: IApusysEngineImpl::deleteInstance(IApusysEngine*) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl14deleteInstanceEP13IApusysEngine(void) {
    ALOGD("_ZN17IApusysEngineImpl14deleteInstanceEP13IApusysEngine() called");
    return 0;
}

/* Exported Object: vtable for apusysVlmMemImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV16apusysVlmMemImpl = NULL;

/* Exported Object: IApusysEngineImpl::apusysMem_mutex */
extern "C" __attribute__((visibility("default"))) void* _ZN17IApusysEngineImpl15apusysMem_mutexE = NULL;

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

/* Demangled: HidlNeuronClient::memUnImport(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient11memUnImportEii(void) {
    ALOGD("_ZN16HidlNeuronClient11memUnImportEii() called");
    return 0;
}

/* Demangled: HidlNeuronClient::memImport(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient9memImportEiij(void) {
    ALOGD("_ZN16HidlNeuronClient9memImportEiij() called");
    return 0;
}

/* Demangled: HidlNeuronClient::~HidlNeuronClient() */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClientD1Ev(void) {
    ALOGD("_ZN16HidlNeuronClientD1Ev() called");
    return 0;
}

/* Exported Object: IApusysEngineImpl::client */
extern "C" __attribute__((visibility("default"))) void* _ZN17IApusysEngineImpl6clientE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for IApusysEngineImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV17IApusysEngineImpl = NULL;

/* Demangled: MemoryHandle::free(int, unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandle4freeEiyi(void) {
    ALOGD("_ZN12MemoryHandle4freeEiyi() called");
    return 0;
}

/* Demangled: HidlNeuronClient::getDeviceNum(int, APUSYS_DEVICE_E) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient12getDeviceNumEi15APUSYS_DEVICE_E(void) {
    ALOGD("_ZN16HidlNeuronClient12getDeviceNumEi15APUSYS_DEVICE_E() called");
    return 0;
}

/* Exported Object: HidlNeuronClient::hidlNeuronClient */
extern "C" __attribute__((visibility("default"))) void* _ZN16HidlNeuronClient16hidlNeuronClientE = NULL;

/* Demangled: IApusysEngineImpl::memAlloc(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl8memAllocEj(void) {
    ALOGD("_ZN17IApusysEngineImpl8memAllocEj() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memAlloc(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl8memAllocEjj(void) {
    ALOGD("_ZN17IApusysEngineImpl8memAllocEjj() called");
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

/* Demangled: HidlNeuronClient::memSync(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient7memSyncEii(void) {
    ALOGD("_ZN16HidlNeuronClient7memSyncEii() called");
    return 0;
}

/* Demangled: ion_alloc_camera_pool */
extern "C" __attribute__((visibility("default"))) int ion_alloc_camera_pool(void) {
    ALOGD("ion_alloc_camera_pool() called");
    return 0;
}

/* Demangled: HidlNeuronClient::memInvalidate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient13memInvalidateEii(void) {
    ALOGD("_ZN16HidlNeuronClient13memInvalidateEii() called");
    return 0;
}

/* Exported Object: IApusysEngineImpl::apuSysEngine */
extern "C" __attribute__((visibility("default"))) void* _ZN17IApusysEngineImpl12apuSysEngineE = NULL;

/* Demangled: MemoryHandle::~MemoryHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN12MemoryHandleD1Ev(void) {
    ALOGD("_ZN12MemoryHandleD1Ev() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memAlloc(unsigned int, unsigned int, unsigned int, APUSYS_USER_MEM_E) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl8memAllocEjjj17APUSYS_USER_MEM_E(void) {
    ALOGD("_ZN17IApusysEngineImpl8memAllocEjjj17APUSYS_USER_MEM_E() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
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

/* Exported Object: HidlNeuronClient::service */
extern "C" __attribute__((visibility("default"))) void* _ZN16HidlNeuronClient7serviceE = NULL;

/* Demangled: IApusysEngineImpl::IApusysEngineImpl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImplC2Ei(void) {
    ALOGD("_ZN17IApusysEngineImplC2Ei() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::getDeviceNum(APUSYS_DEVICE_E) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl12getDeviceNumE15APUSYS_DEVICE_E(void) {
    ALOGD("_ZN17IApusysEngineImpl12getDeviceNumE15APUSYS_DEVICE_E() called");
    return 0;
}

/* Demangled: ion_alloc_mm */
extern "C" __attribute__((visibility("default"))) int ion_alloc_mm(void) {
    ALOGD("ion_alloc_mm() called");
    return 0;
}

/* Demangled: HidlNeuronClient::getApusysEngineId(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16HidlNeuronClient17getApusysEngineIdEPKc(void) {
    ALOGD("_ZN16HidlNeuronClient17getApusysEngineIdEPKc() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memInvalidate(IApusysMem*) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl13memInvalidateEP10IApusysMem(void) {
    ALOGD("_ZN17IApusysEngineImpl13memInvalidateEP10IApusysMem() called");
    return 0;
}

/* Demangled: IApusysEngineImpl::memFree(IApusysMem*) */
extern "C" __attribute__((visibility("default"))) int _ZN17IApusysEngineImpl7memFreeEP10IApusysMem(void) {
    ALOGD("_ZN17IApusysEngineImpl7memFreeEP10IApusysMem() called");
    return 0;
}

/* Demangled: deleteApusysInstanceInternal */
extern "C" __attribute__((visibility("default"))) int deleteApusysInstanceInternal(void) {
    ALOGD("deleteApusysInstanceInternal() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_range_va */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_range_va(void) {
    ALOGD("ion_cache_sync_flush_range_va() called");
    return 0;
}
