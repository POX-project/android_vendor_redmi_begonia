/*
 * Reverse-Engineered ABI Specification for: android.hardware.graphics.composer@2.1-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.graphics.composer@2.1-impl.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_COMPOSER_2_1_IMPL_H
#define BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_COMPOSER_2_1_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__16vectorIP13native_handleNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<native_handle*, std::__1::allocator<native_handle*> >::__push_back_slow_path<native_handle* const&>(native_handle* const&) */
int _ZNSt3__16vectorIP13native_handleNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__append(unsigned int) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE8__appendEj(void);

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_111passthrough6detail10HwcHalImplINS3_3hal11ComposerHalEEE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::passthrough::detail::HwcHalImpl<android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern void* _ZTVN7android8hardware8graphics8composer4V2_111passthrough6detail10HwcHalImplINS3_3hal11ComposerHalEEE;

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEE16HalEventCallbackE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal>::HalEventCallback */
extern void* _ZTVN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEE16HalEventCallbackE;

/* Symbol: _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE5writeEPKjj */
/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::write(unsigned int const*, unsigned int) */
int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE5writeEPKjj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIjLS2_1EEEb */
/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::MessageQueue(android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1> const&, bool) */
int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2ERKNS0_12MQDescriptorIjLS2_1EEEb(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::graphics::composer::V2_1::IComposer::Capability, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposer::Capability> >::__push_back_slow_path<android::hardware::graphics::composer::V2_1::IComposer::Capability>(android::hardware::graphics::composer::V2_1::IComposer::Capability&&) */
int _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void);

/* Symbol: _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_115IComposerClient11CompositionENS_9allocatorIS7_EEE13__move_assignERSA_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<android::hardware::graphics::composer::V2_1::IComposerClient::Composition, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposerClient::Composition> >::__move_assign(std::__1::vector<android::hardware::graphics::composer::V2_1::IComposerClient::Composition, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposerClient::Composition> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_115IComposerClient11CompositionENS_9allocatorIS7_EEE13__move_assignERSA_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZTTN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE */
/* Demangled: VTT for android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern void* _ZTTN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE;

/* Symbol: _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEaSERKS3_ */
/* Demangled: android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1> const&) */
int _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEaSERKS3_(void);

/* Symbol: _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2Ejb */
/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::MessageQueue(unsigned int, bool) */
int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EEC2Ejb(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned int) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEj(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__move_assign(std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_13hal6detail12ComposerImplINS3_9IComposerENS4_11ComposerHalEEE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::hal::detail::ComposerImpl<android::hardware::graphics::composer::V2_1::IComposer, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern void* _ZTVN7android8hardware8graphics8composer4V2_13hal6detail12ComposerImplINS3_9IComposerENS4_11ComposerHalEEE;

/* Symbol: _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej */
/* Demangled: android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned int) */
int _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlej(void);

/* Symbol: _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<hwc2_capability_t, std::__1::hash<hwc2_capability_t>, std::__1::equal_to<hwc2_capability_t>, std::__1::allocator<hwc2_capability_t> >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE6rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<hwc2_capability_t, std::__1::hash<hwc2_capability_t>, std::__1::equal_to<hwc2_capability_t>, std::__1::allocator<hwc2_capability_t> >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE8__rehashEj(void);

/* Symbol: _ZTCN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern void* _ZTCN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_117CommandWriterBaseE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::CommandWriterBase */
extern void* _ZTVN7android8hardware8graphics8composer4V2_117CommandWriterBaseE;

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern void* _ZTVN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE;

/* Symbol: _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::hidl_handle, std::__1::allocator<android::hardware::hidl_handle> >::__push_back_slow_path<android::hardware::hidl_handle>(android::hardware::hidl_handle&&) */
int _ZNSt3__16vectorIN7android8hardware11hidl_handleENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__move_assign(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE13__move_assignERS3_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_13hal21ComposerCommandEngineE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerCommandEngine */
extern void* _ZTVN7android8hardware8graphics8composer4V2_13hal21ComposerCommandEngineE;

/* Symbol: HIDL_FETCH_IComposer */
/* Demangled: HIDL_FETCH_IComposer */
int HIDL_FETCH_IComposer(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2EjP13native_handlejb */
/* Demangled: android::hardware::MQDescriptor<unsigned int, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned int, native_handle*, unsigned int, bool) */
int _ZN7android8hardware12MQDescriptorIjLNS0_8MQFlavorE1EEC2EjP13native_handlejb(void);

/* Symbol: _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE4readEPjj */
/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::read(unsigned int*, unsigned int) */
int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EE4readEPjj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned int, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIjLNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE25__emplace_unique_key_argsIS1_JS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<hwc2_capability_t, void*>*>, bool> std::__1::__hash_table<hwc2_capability_t, std::__1::hash<hwc2_capability_t>, std::__1::equal_to<hwc2_capability_t>, std::__1::allocator<hwc2_capability_t> >::__emplace_unique_key_args<hwc2_capability_t, hwc2_capability_t>(hwc2_capability_t const&, hwc2_capability_t&&) */
int _ZNSt3__112__hash_tableI17hwc2_capability_tNS_4hashIS1_EENS_8equal_toIS1_EENS_9allocatorIS1_EEE25__emplace_unique_key_argsIS1_JS1_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS1_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorI8hwc_rectNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEvDpOT_ */
/* Demangled: void std::__1::vector<hwc_rect, std::__1::allocator<hwc_rect> >::__emplace_back_slow_path<hwc_rect>(hwc_rect&&) */
int _ZNSt3__16vectorI8hwc_rectNS_9allocatorIS1_EEE24__emplace_back_slow_pathIJS1_EEEvDpOT_(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::graphics::composer::V2_1::IComposer::Capability, std::__1::allocator<android::hardware::graphics::composer::V2_1::IComposer::Capability> >::__push_back_slow_path<android::hardware::graphics::composer::V2_1::IComposer::Capability const&>(android::hardware::graphics::composer::V2_1::IComposer::Capability const&) */
int _ZNSt3__16vectorIN7android8hardware8graphics8composer4V2_19IComposer10CapabilityENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZTCN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE0_NS3_15IComposerClientE */
/* Demangled: construction vtable for android::hardware::graphics::composer::V2_1::IComposerClient-in-android::hardware::graphics::composer::V2_1::hal::detail::ComposerClientImpl<android::hardware::graphics::composer::V2_1::IComposerClient, android::hardware::graphics::composer::V2_1::hal::ComposerHal> */
extern void* _ZTCN7android8hardware8graphics8composer4V2_13hal6detail18ComposerClientImplINS3_15IComposerClientENS4_11ComposerHalEEE0_NS3_15IComposerClientE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_COMPOSER_2_1_IMPL_H */
