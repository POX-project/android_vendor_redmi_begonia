/*
 * Reverse-Engineered ABI Specification for: libhwc2onfbadapter.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libhwc2onfbadapter.so
 */

#ifndef BEGONIA_RE_LIBHWC2ONFBADAPTER_H
#define BEGONIA_RE_LIBHWC2ONFBADAPTER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android15HWC2OnFbAdapter11enableVsyncEb */
/* Demangled: android::HWC2OnFbAdapter::enableVsync(bool) */
int _ZN7android15HWC2OnFbAdapter11enableVsyncEb(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11VsyncThread11setCallbackEPFvPvyxES2_ */
/* Demangled: android::HWC2OnFbAdapter::VsyncThread::setCallback(void (*)(void*, unsigned long long, long long), void*) */
int _ZN7android15HWC2OnFbAdapter11VsyncThread11setCallbackEPFvPvyxES2_(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11VsyncThread5startExx */
/* Demangled: android::HWC2OnFbAdapter::VsyncThread::start(long long, long long) */
int _ZN7android15HWC2OnFbAdapter11VsyncThread5startExx(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter16setVsyncCallbackEPFvPvyxES1_ */
/* Demangled: android::HWC2OnFbAdapter::setVsyncCallback(void (*)(void*, unsigned long long, long long), void*) */
int _ZN7android15HWC2OnFbAdapter16setVsyncCallbackEPFvPvyxES1_(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter5closeEv */
/* Demangled: android::HWC2OnFbAdapter::close() */
int _ZN7android15HWC2OnFbAdapter5closeEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter10postBufferEv */
/* Demangled: android::HWC2OnFbAdapter::postBuffer() */
int _ZN7android15HWC2OnFbAdapter10postBufferEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapterC2EP20framebuffer_device_t */
/* Demangled: android::HWC2OnFbAdapter::HWC2OnFbAdapter(framebuffer_device_t*) */
int _ZN7android15HWC2OnFbAdapterC2EP20framebuffer_device_t(void);

/* Symbol: _ZNK7android15HWC2OnFbAdapter8getStateEv */
/* Demangled: android::HWC2OnFbAdapter::getState() const */
int _ZNK7android15HWC2OnFbAdapter8getStateEv(void);

/* Symbol: _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<HWC2::Capability, void*>*>, bool> std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::__emplace_unique_key_args<HWC2::Capability, HWC2::Capability>(HWC2::Capability const&, HWC2::Capability&&) */
int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11VsyncThread3nowEv */
/* Demangled: android::HWC2OnFbAdapter::VsyncThread::now() */
int _ZN7android15HWC2OnFbAdapter11VsyncThread3nowEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11VsyncThread4stopEv */
/* Demangled: android::HWC2OnFbAdapter::VsyncThread::stop() */
int _ZN7android15HWC2OnFbAdapter11VsyncThread4stopEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11VsyncThread9vsyncLoopEv */
/* Demangled: android::HWC2OnFbAdapter::VsyncThread::vsyncLoop() */
int _ZN7android15HWC2OnFbAdapter11VsyncThread9vsyncLoopEv(void);

/* Symbol: _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6rehashEj */
/* Demangled: std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6rehashEj(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter17updateDebugStringEv */
/* Demangled: android::HWC2OnFbAdapter::updateDebugString() */
int _ZN7android15HWC2OnFbAdapter17updateDebugStringEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter4castEP11hwc2_device */
/* Demangled: android::HWC2OnFbAdapter::cast(hwc2_device*) */
int _ZN7android15HWC2OnFbAdapter4castEP11hwc2_device(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter8addLayerEv */
/* Demangled: android::HWC2OnFbAdapter::addLayer() */
int _ZN7android15HWC2OnFbAdapter8addLayerEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter8setStateENS0_5StateE */
/* Demangled: android::HWC2OnFbAdapter::setState(android::HWC2OnFbAdapter::State) */
int _ZN7android15HWC2OnFbAdapter8setStateENS0_5StateE(void);

/* Symbol: _ZNK7android15HWC2OnFbAdapter14getDebugStringEv */
/* Demangled: android::HWC2OnFbAdapter::getDebugString() const */
int _ZNK7android15HWC2OnFbAdapter14getDebugStringEv(void);

/* Symbol: _ZNK7android15HWC2OnFbAdapter8hasLayerEy */
/* Demangled: android::HWC2OnFbAdapter::hasLayer(unsigned long long) const */
int _ZNK7android15HWC2OnFbAdapter8hasLayerEy(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter15getCapabilitiesEPjPi */
/* Demangled: android::HWC2OnFbAdapter::getCapabilities(unsigned int*, int*) */
int _ZN7android15HWC2OnFbAdapter15getCapabilitiesEPjPi(void);

/* Symbol: _ZNK7android15HWC2OnFbAdapter7getInfoEv */
/* Demangled: android::HWC2OnFbAdapter::getInfo() const */
int _ZNK7android15HWC2OnFbAdapter7getInfoEv(void);

/* Symbol: _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIyPvEEEE */
/* Demangled: std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<unsigned long long, void*>*>) */
int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIyPvEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE8__rehashEj */
/* Demangled: std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE8__rehashEj(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11getConfigIdEv */
/* Demangled: android::HWC2OnFbAdapter::getConfigId() */
int _ZN7android15HWC2OnFbAdapter11getConfigIdEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11removeLayerEy */
/* Demangled: android::HWC2OnFbAdapter::removeLayer(unsigned long long) */
int _ZN7android15HWC2OnFbAdapter11removeLayerEy(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter14markLayerDirtyEyb */
/* Demangled: android::HWC2OnFbAdapter::markLayerDirty(unsigned long long, bool) */
int _ZN7android15HWC2OnFbAdapter14markLayerDirtyEyb(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter16clearDirtyLayersEv */
/* Demangled: android::HWC2OnFbAdapter::clearDirtyLayers() */
int _ZN7android15HWC2OnFbAdapter16clearDirtyLayersEv(void);

/* Symbol: _ZNK7android15HWC2OnFbAdapter14getDirtyLayersEv */
/* Demangled: android::HWC2OnFbAdapter::getDirtyLayers() const */
int _ZNK7android15HWC2OnFbAdapter14getDirtyLayersEv(void);

/* Symbol: _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE25__emplace_unique_key_argsIyJRKyEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIyPvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<unsigned long long, void*>*>, bool> std::__1::__hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> >::__emplace_unique_key_args<unsigned long long, unsigned long long const&>(unsigned long long const&, unsigned long long const&) */
int _ZNSt3__112__hash_tableIyNS_4hashIyEENS_8equal_toIyEENS_9allocatorIyEEE25__emplace_unique_key_argsIyJRKyEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIyPvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN7android15HWC2OnFbAdapter11VsyncThreadEFvvEPS9_EEEEEPvSE_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (android::HWC2OnFbAdapter::VsyncThread::*)(), android::HWC2OnFbAdapter::VsyncThread*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN7android15HWC2OnFbAdapter11VsyncThreadEFvvEPS9_EEEEEPvSE_(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11VsyncThread10sleepUntilEx */
/* Demangled: android::HWC2OnFbAdapter::VsyncThread::sleepUntil(long long) */
int _ZN7android15HWC2OnFbAdapter11VsyncThread10sleepUntilEx(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter11VsyncThread14enableCallbackEb */
/* Demangled: android::HWC2OnFbAdapter::VsyncThread::enableCallback(bool) */
int _ZN7android15HWC2OnFbAdapter11VsyncThread14enableCallbackEb(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter12getDisplayIdEv */
/* Demangled: android::HWC2OnFbAdapter::getDisplayId() */
int _ZN7android15HWC2OnFbAdapter12getDisplayIdEv(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter4castEP11hw_device_t */
/* Demangled: android::HWC2OnFbAdapter::cast(hw_device_t*) */
int _ZN7android15HWC2OnFbAdapter4castEP11hw_device_t(void);

/* Symbol: _ZN7android15HWC2OnFbAdapter9setBufferEPK13native_handle */
/* Demangled: android::HWC2OnFbAdapter::setBuffer(native_handle const*) */
int _ZN7android15HWC2OnFbAdapter9setBufferEPK13native_handle(void);

/* Symbol: _ZN7android15HWC2OnFbAdapterC1EP20framebuffer_device_t */
/* Demangled: android::HWC2OnFbAdapter::HWC2OnFbAdapter(framebuffer_device_t*) */
int _ZN7android15HWC2OnFbAdapterC1EP20framebuffer_device_t(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBHWC2ONFBADAPTER_H */
