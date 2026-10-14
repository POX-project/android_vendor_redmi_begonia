/*
 * Reverse-Engineered ABI Specification for: APUWareXrpServer.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: APUWareXrpServer.so
 */

#ifndef BEGONIA_RE_APUWAREXRPSERVER_H
#define BEGONIA_RE_APUWAREXRPSERVER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp12GetXrpBufferEilNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::GetXrpBuffer(int, long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp12GetXrpBufferEilNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp17CreateXrpInstanceEiNSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNSA_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::CreateXrpInstance(int, std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp17CreateXrpInstanceEiNSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNSA_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp22PrepareInternalCommandEijjNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::PrepareInternalCommand(int, unsigned int, unsigned int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp22PrepareInternalCommandEijjNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPN7android8hardware12MessageQueueIhLNS3_8MQFlavorE1EEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiPN7android8hardware12MessageQueueIhLNS3_8MQFlavorE1EEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _Z24InitXrpServerDebugConfigv */
/* Demangled: InitXrpServerDebugConfig() */
int _Z24InitXrpServerDebugConfigv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp13RunXrpCommandEimRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::RunXrpCommand(int, unsigned long, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_InferenceInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp13RunXrpCommandEimRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp8getXrpIdEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::getXrpId() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp8getXrpIdEv(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS0_9EventFlagE */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::writeBlocking(unsigned char const*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS0_9EventFlagE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE0_NS4_10INeuronXrpE */
/* Demangled: construction vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp-in-vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE0_NS4_10INeuronXrpE;

/* Symbol: APUWareXrpServerDeinitInternal */
/* Demangled: APUWareXrpServerDeinitInternal */
int APUWareXrpServerDeinitInternal(void);

/* Symbol: APUWareXrpServerInitInternal */
/* Demangled: APUWareXrpServerInitInternal */
int APUWareXrpServerInitInternal(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: DEBUG_LOG_XRP */
/* Demangled: DEBUG_LOG_XRP */
extern void* DEBUG_LOG_XRP;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp17DeleteXrpInstanceEi */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::DeleteXrpInstance(int) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp17DeleteXrpInstanceEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp18GetPreparedRequestEimjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::GetPreparedRequest(int, unsigned long, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_VpuRequestInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp18GetPreparedRequestEimjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp */
extern void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE;

/* Symbol: _ZNSt3__16vectorIN6vendor8mediatek8hardware7apuware3xrp4V1_017XRP_BufferInfo_HDENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD, std::__1::allocator<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD> >::__push_back_slow_path<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&>(vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&) */
int _ZNSt3__16vectorIN6vendor8mediatek8hardware7apuware3xrp4V1_017XRP_BufferInfo_HDENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp15CreateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESB_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::CreateXrpBuffer(int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp15CreateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESB_EEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp13SyncXrpBufferEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::SyncXrpBuffer(int, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp13SyncXrpBufferEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp14SetupXrpDeviceEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::SetupXrpDevice(int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp14SetupXrpDeviceEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp16CreateXrpCommandEimNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::CreateXrpCommand(int, unsigned long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp16CreateXrpCommandEimNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiPN3xrp12XrpIntrinsicEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, xrp::XrpIntrinsic*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, xrp::XrpIntrinsic*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, xrp::XrpIntrinsic*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, xrp::XrpIntrinsic*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiPN3xrp12XrpIntrinsicEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp */
extern void* _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrpE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp15GetDeviceStatusEimNSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::GetDeviceStatus(int, unsigned long, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp15GetDeviceStatusEimNSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp15UpdateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESB_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::UpdateXrpBuffer(int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp15UpdateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESB_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp17PrepareXrpCommandEimlNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::PrepareXrpCommand(int, unsigned long, long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp17PrepareXrpCommandEimlNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp18FinalizeXrpCommandEimNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::FinalizeXrpCommand(int, unsigned long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp18FinalizeXrpCommandEimNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp24GetPreparedRequestsCountEimNSt3__18functionIFvbjEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::implementation::NeuronXrp::GetPreparedRequestsCount(int, unsigned long, std::__1::function<void (bool, unsigned int)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_014implementation9NeuronXrp24GetPreparedRequestsCountEimNSt3__18functionIFvbjEEE(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_APUWAREXRPSERVER_H */
