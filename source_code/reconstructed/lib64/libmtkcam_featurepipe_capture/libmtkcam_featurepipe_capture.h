/*
 * Reverse-Engineered ABI Specification for: libmtkcam.featurepipe.capture.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam.featurepipe.capture.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_CAPTURE_H
#define BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_CAPTURE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addNodeIOEhRN7android6VectorIhEES7_S7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addNodeIO(unsigned char, android::Vector<unsigned char>&, android::Vector<unsigned char>&, android::Vector<unsigned char>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addNodeIOEhRN7android6VectorIhEES7_S7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode16setFovCalculatorERKN7android2spINS2_13FovCalculatorEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setFovCalculator(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode16setFovCalculatorERKN7android2spINS2_13FovCalculatorEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::onTimeout() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::resume() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEEE;

/* Symbol: _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_ */
/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >(std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>>&&) */
int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~sb() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*> >::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onP2FailedCallback(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedCacher() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::syncCache(NSCam::eCacheCtrl) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE12do_constructEPvm(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh16EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)16>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh16EEEivE9isDumpImg;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator7FovInfoEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator7FovInfoEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::CaptureFeatureInferenceData() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::registerSyncCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE4sizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::size() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE4sizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStatusCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>, int) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isCancelledEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isCancelled() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isCancelledEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::wait() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::EnquePackage::~EnquePackage() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE10IInterfaceEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE10IInterfaceEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toImageFormat(android_pixel_format_t) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_compareEPKvSE_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_compareEPKvSE_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper13destroyhandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::destroyhandle(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper13destroyhandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEEaSEPS5_ */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle*) */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEEaSEPS5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_RawInterfaceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_RawInterface() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_RawInterfaceEv(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh13EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)13>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh13EEEivE9isDumpImg;

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onFlush() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PathID2NameEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PathID2Name(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PathID2NameEh(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest17getImageTransformEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::getImageTransform(unsigned char) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest17getImageTransformEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE4moveEv */
/* Demangled: std::__1::__assoc_state<int>::move() */
int _ZNSt3__113__assoc_stateIiE4moveEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE0_NS1_12BufferHandleINS1_19GraphicBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE0_NS1_12BufferHandleINS1_19GraphicBufferHandleEEE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::getImageBuffer() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isSingleFrameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isSingleFrame() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isSingleFrameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::RootNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC1EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishNode_LockedEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::finishNode_Locked(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishNode_LockedEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter13addReqMappingEiRNSt3__13setIiNS4_4lessIiEENS4_9allocatorIiEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::addReqMapping(int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> >&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter13addReqMappingEiRNSt3__13setIiNS4_4lessIiEENS4_9allocatorIiEEEE(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void);

/* Symbol: _ZTVNSt3__117bad_function_callE */
/* Demangled: vtable for std::__1::bad_function_call */
extern void* _ZTVNSt3__117bad_function_callE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference17syncRequestStatusEN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::syncRequestStatus(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference17syncRequestStatusEN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::~PluginBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::~PluginMetadataHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE19registerInputDataIDEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::registerInputDataID(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE19registerInputDataIDEh(void);

/* Symbol: _ZNSt3__110shared_ptrIcED2Ev */
/* Demangled: std::__1::shared_ptr<char>::~shared_ptr() */
int _ZNSt3__110shared_ptrIcED2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEEEEERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::createPluginRequestPtr(unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEEEEERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor9onExecuteEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::onExecute(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor9onExecuteEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher22getIsFeatureIdExistingEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getIsFeatureIdExisting(unsigned char) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher22getIsFeatureIdExistingEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE;

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE21__push_back_slow_pathIS9_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> > > >::__push_back_slow_path<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> > >(std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> >&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE21__push_back_slow_pathIS9_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::wait() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11enableBoostEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::enableBoost() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11enableBoostEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter8sendDataEiii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::sendData(int, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter8sendDataEiii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC2EPKcRKN7android2spINS1_8IIBufferEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::PluginSmartBufferHandle(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC2EPKcRKN7android2spINS1_8IIBufferEEE(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::uninit() */
int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode22collectPostBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEERNS5_IiEER15BSS_OUTPUT_DATA */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::collectPostBSSExifData(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, android::Vector<int>&, BSS_OUTPUT_DATA&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode22collectPostBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEERNS5_IiEER15BSS_OUTPUT_DATA(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::__on_zero_shared() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*>&>::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack* const&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_(void);

/* Symbol: _ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
int _ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::PluginBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS3_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS3_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator4initERKNSt3__16vectorIiNS4_9allocatorIiEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::init(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator4initERKNSt3__16vectorIiNS4_9allocatorIiEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14setSensorIndexEii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::setSensorIndex(int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14setSensorIndexEii(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE10IInterfaceEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE10IInterfaceEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::FDNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC2EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture38_CreatePluginInterface_FusionInterfaceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_FusionInterface() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture38_CreatePluginInterface_FusionInterfaceEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc(void);

/* Symbol: _ZNSt3__16__treeIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_4lessIS6_EENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, void*>*) */
int _ZNSt3__16__treeIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_4lessIS6_EENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD2Ev(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh6EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)6>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh6EEEivE9isDumpImg;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitHub */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubE;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_HWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_HWE;

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__push_back_slow_path<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14setSensorIndexEii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::setSensorIndex(int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14setSensorIndexEii(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS4_9NSCapture25CaptureFeatureDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS4_9NSCapture25CaptureFeatureDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC1EhPKciii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::YUVNode(unsigned char, char const*, int, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC1EhPKciii(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC1Ejjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::CropCalculator(unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC1Ejjj(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestEED2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEEE;

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE6onDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_PS4_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::onData<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE6onDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_PS4_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::~PerfClientVendor() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD1Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::CaptureFeatureRequest() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11hasMetadataEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::hasMetadata(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11hasMetadataEh(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::~IBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev(void);

/* Symbol: _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::push_back(std::__1::function<void ()>&&) */
int _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20getIsForceByPassFlowEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::getIsForceByPassFlow() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20getIsForceByPassFlowEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint::Compare, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27innerGetIsFeatureIdExistingEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::innerGetIsFeatureIdExisting(unsigned char) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27innerGetIsFeatureIdExistingEh(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::stopThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE0_NS1_10BufferPoolINS2_18TuningBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE0_NS1_10BufferPoolINS2_18TuningBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue9addThreadEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::addThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue9addThreadEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8USAGE_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8USAGE_SWE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7releaseEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::release() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7releaseEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::getTuningBuffer(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEj(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueueSync(unsigned int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17IspProfileManager3getERKNS2_14IspProfileHintE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileManager::get(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17IspProfileManager3getERKNS2_14IspProfileHintE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4stopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::stop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4stopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe21prepareNodeConnectionEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::prepareNodeConnection() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe21prepareNodeConnectionEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11addMetadataEhN7android2spINS2_14MetadataHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addMetadata(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11addMetadataEhN7android2spINS2_14MetadataHandleEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10dumpPluginERN7android7PrinterE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::dumpPlugin(android::Printer&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10dumpPluginERN7android7PrinterE(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12hasParameterEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::hasParameter(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12hasParameterEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginHelper::CreateBuffer(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::RequestCallback */
extern void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper22tryGetTheSameBufferFmtERKNS_16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9SelectionERiSB_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::tryGetTheSameBufferFmt(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection const&, int&, int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper22tryGetTheSameBufferFmtERKNS_16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9SelectionERiSB_(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11getInstanceEvE9singleton */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::getInstance()::singleton */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11getInstanceEvE9singleton;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getIsDumpImageEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::getIsDumpImage(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getIsDumpImageEh(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_PNS3_25CaptureFeatureDataHandlerENS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::connectData(unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_PNS3_25CaptureFeatureDataHandlerENS1_14ConnectionTypeE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE8getIDSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::getIDSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE8getIDSetEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv(void);

/* Symbol: _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueEmpty() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void);

/* Symbol: _ZNSt3__16__treeIhNS_4lessIhEENS_9allocatorIhEEE7destroyEPNS_11__tree_nodeIhPvEE */
/* Demangled: std::__1::__tree<unsigned char, std::__1::less<unsigned char>, std::__1::allocator<unsigned char> >::destroy(std::__1::__tree_node<unsigned char, void*>*) */
int _ZNSt3__16__treeIhNS_4lessIhEENS_9allocatorIhEEE7destroyEPNS_11__tree_nodeIhPvEE(void);

/* Symbol: _ZNSt3__19__sift_upIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeE */
/* Demangled: void std::__1::__sift_up<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >(std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::iterator_traits<std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::difference_type) */
int _ZNSt3__19__sift_upIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getSignalENS3_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::getSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getSignalENS3_6SignalE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::getTuningBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE10setWaitHubEPNS1_7WaitHubE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE10setWaitHubEPNS1_7WaitHubE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void);

/* Symbol: _ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE7disposeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::dispose() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE7disposeEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh10EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)10>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh10EEEivE9isDumpImg;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::EmptyBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::~PluginSmartBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapper8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapper8onNotifyEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::changeOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int, unsigned int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10hasFeatureEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::hasFeature(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10hasFeatureEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKcz */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dumpData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, NSCam::IImageBuffer*, char const*, ...) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKcz(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZN7android2spIN5NSCam12IFDContainerEED2Ev */
/* Demangled: android::sp<NSCam::IFDContainer>::~sp() */
int _ZN7android2spIN5NSCam12IFDContainerEED2Ev(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh16EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)16>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh16EEEivE9isDumpImg;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper16USAGE_HW_TEXTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_TEXTURE */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper16USAGE_HW_TEXTUREE;

/* Symbol: _ZNK7android6VectorIhE12do_constructEPvm */
/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIhE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getBufferEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getBuffer(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getBufferEh(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::getFPS() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool14getImageBufferERKNS_5MSizeEjS4_i */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::getImageBuffer(NSCam::MSize const&, unsigned int, NSCam::MSize, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool14getImageBufferERKNS_5MSizeEjS4_i(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::registerStatusCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::StatusCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEEE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onInit() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEEE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture5alignEjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::align(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture5alignEjj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper15USAGE_HW_RENDERE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_RENDER */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper15USAGE_HW_RENDERE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIhEE */
/* Demangled: vtable for android::Vector<unsigned char> */
extern void* _ZTVN7android6VectorIhEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onFlush() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle22setOnReleasingCallbackENSt3__18functionIFvPNS_12IImageBufferEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::setOnReleasingCallback(std::__1::function<void (NSCam::IImageBuffer*)>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle22setOnReleasingCallbackENSt3__18functionIFvPNS_12IImageBufferEEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setSignalENS3_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::setSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setSignalENS3_6SignalE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IDebuggee>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataEE11make_sharedIJEEES7_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData>::make_shared<>() */
int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataEE11make_sharedIJEEES7_DpOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE9push_backEOS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE9push_backEOS9_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5clearEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::clear() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5clearEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack> >::clear() */
int _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool8allocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPNS_12IImageBufferEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::loadData(NSCam::IImageBuffer*, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPNS_12IImageBufferEPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(NSCam::IImageBuffer*, char const*, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15getCrossRequestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getCrossRequest() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15getCrossRequestEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::decExtThreadDependency() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh9EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)9>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh9EEEivE9isDumpImg;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*> >::__push_back_slow_path<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&>(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&) */
int _ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::~CaptureFeatureRequest() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD1Ev(void);

/* Symbol: _ZNK7android6VectorIhE8do_splatEPvPKvm */
/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIhE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::dumpWaitQueueInfo(android::Printer&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZTISt8bad_cast */
/* Demangled: typeinfo for std::bad_cast */
extern void* _ZTISt8bad_cast;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19updateFovCropRegionERN7android2spINS2_21CaptureFeatureRequestEEEihh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::updateFovCropRegion(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int, unsigned char, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19updateFovCropRegionERN7android2spINS2_21CaptureFeatureRequestEEEihh(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11initPerfLibEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::initPerfLib() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11initPerfLibEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint::Compare, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo> > >::__find_equal<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint>(std::__1::__tree_const_iterator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint const&) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getFormattedPropertyValue(char const*, ...) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::~CaptureFeatureDataHandler() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE */
/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11mapBufferIDEhNS2_9DirectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::mapBufferID(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11mapBufferIDEhNS2_9DirectionE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE15RequestCallbackEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::RequestCallback>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE15RequestCallbackEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginHelper::CreateBuffer(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor7executeEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::execute(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor7executeEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toGrallocExtraColor(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7disableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::disable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7disableEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle19getSmartImageBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::getSmartImageBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle19getSmartImageBufferEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEElEEEEvT_SH_ */
/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEElEEEEvT_SH_(void);

/* Symbol: _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE11getIndexSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::getIndexSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE11getIndexSetEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void);

/* Symbol: _ZNSt3__15asyncIRNS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS2_12IImageBufferEPNS2_9IMetadataEN7android2spINS5_17CaptureBufferPoolEEEEJPS6_RS8_RSA_RSE_EEEJEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_ */
/* Demangled: std::__1::future<std::__1::__invoke_of<std::__1::decay<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>&>::type>::type> std::__1::async<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>&>(std::__1::launch, std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>&) */
int _ZNSt3__15asyncIRNS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS2_12IImageBufferEPNS2_9IMetadataEN7android2spINS5_17CaptureBufferPoolEEEEJPS6_RS8_RSA_RSE_EEEJEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor4dumpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor::dump() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor4dumpEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::getStatus() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9SelectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface::offer(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9SelectionE(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestRepeatERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onRequestRepeat(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestRepeatERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17isFinished_LockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isFinished_Locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17isFinished_LockedEv(void);

/* Symbol: _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN7android2spIN5NSCam13IBssContainerEED2Ev */
/* Demangled: android::sp<NSCam::IBssContainer>::~sp() */
int _ZN7android2spIN5NSCam13IBssContainerEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12incBufferRefEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::incBufferRef(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12incBufferRefEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcl */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(NSCam::IImageBuffer*, char const*, long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcl(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE10disconnectEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::disconnect() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE10disconnectEv(void);

/* Symbol: _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE */
/* Demangled: std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::destroy(std::__1::__tree_node<int, void*>*) */
int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::CaptureBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC1EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2ANode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC2EhPKcii(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10BufResizerE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufResizer */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10BufResizerE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onFlush() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility23createImageTransformPtrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::createImageTransformPtr() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility23createImageTransformPtrEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::erase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14startInferenceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::startInference() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14startInferenceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::~CamPipe() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED2Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestEED2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countDown() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9stopTimerEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::stopTimer(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9stopTimerEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandler7ID2NameEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::ID2Name(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandler7ID2NameEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::PerfClientVendor() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference7addNodeEhPNS2_18CaptureFeatureNodeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::addNode(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference7addNodeEhPNS2_18CaptureFeatureNodeE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE7isReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::isReady() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE7isReadyEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE10push_frontEOS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE10push_frontEOS9_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::SwnrProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::~IHolder() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::~SequentialHandler() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED2Ev(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvm */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIiE12do_constructEPvm(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::RequestCallback */
extern void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5clearEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::clear() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5clearEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE10IInterfaceEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE10IInterfaceEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::FusionNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC1EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7acquireEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::acquire(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7acquireEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7releaseEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::release() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7releaseEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::PerfBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15SEPARATE_BUFFERE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::SEPARATE_BUFFER */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15SEPARATE_BUFFERE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addTargetEhh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addTarget(unsigned char, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addTargetEhh(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEED2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE10push_frontEOS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE10push_frontEOS9_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_destroyEPvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE0_NS1_8NotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle6nativeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::native() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle6nativeEv(void);

/* Symbol: _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEE */
/* Demangled: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> > */
extern void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper12getImageSizeERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::getImageSize(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> const&, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper12getImageSizeERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16getPreviousNodesEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getPreviousNodes(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16getPreviousNodesEh(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16futureIiED2Ev */
/* Demangled: std::__1::future<int>::~future() */
int _ZNSt3__16futureIiED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearStatusENS3_6StatusE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::clearStatus(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Status) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearStatusENS3_6StatusE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::releaseRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEEE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::PowerHalWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper17createInstancePtrERKN7android2spINS2_21CaptureFeatureRequestEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::createInstancePtr(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper17createInstancePtrERKN7android2spINS2_21CaptureFeatureRequestEEEi(void);

/* Symbol: _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE15__emplace_multiIJS5_EEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*, long> std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::__emplace_multi<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index>(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index&&) */
int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE15__emplace_multiIJS5_EEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEDpOT_(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::NodeSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::MultiFrameNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC1EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13toPixelFormatENS_12EImageFormatE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::toPixelFormat(NSCam::EImageFormat) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13toPixelFormatENS_12EImageFormatE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::startThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev(void);

/* Symbol: _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv */
/* Demangled: std::__1::__deferred_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::__execute() */
int _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedCacher() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::getGraphicBufferAddr() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBufferPtr(AHardwareBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointES6_RS4_S7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::transform(int, NSCam::MPoint const&, NSCam::MPoint const&, NSCam::MPoint&, NSCam::MPoint&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointES6_RS4_S7_(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh6EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)6>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh6EEEivE9isDumpImg;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::setCallback(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::CPUBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggee5mNameE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee::mName */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggee5mNameE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::~CPUBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6FactorE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6FactorE;

/* Symbol: _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv */
/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReadySync(unsigned int*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE;

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe14createInstanceEiRKNS3_9UsageHintEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::createInstance(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe14createInstanceEiRKNS3_9UsageHintEi(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::EnquePackage::~EnquePackage() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE11getSeqQueueIN7android2spINS3_21CaptureFeatureRequestEEENS5_19HandlerSeqConverterEEEPNS1_15SequentialQueueIT_T0_EEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>* NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::getSeqQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE11getSeqQueueIN7android2spINS3_21CaptureFeatureRequestEEENS5_19HandlerSeqConverterEEEPNS1_15SequentialQueueIT_T0_EEh(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC2Ejjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::CropCalculator(unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC2Ejjj(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::shiftSignal(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::flush(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1ENS3_10eUsageModeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::eUsageMode) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1ENS3_10eUsageModeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpERN7android2spINS2_21CaptureFeatureRequestEEEhhNS2_9DirectionEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpERN7android2spINS2_21CaptureFeatureRequestEEEhhNS2_9DirectionEPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC2EhPKciii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::YUVNode(unsigned char, char const*, int, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC2EhPKciii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::tryGetFeatureWarning(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEEC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::BufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEEC2EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool10doAllocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS3_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS3_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE4initEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::~PluginBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD1Ev(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack> >::__add_back_capacity() */
int _ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setUsageHintERKNS2_19ICaptureFeaturePipe9UsageHintE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setUsageHint(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setUsageHintERKNS2_19ICaptureFeaturePipe9UsageHintE(void);

/* Symbol: _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE8getIDSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::getIDSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE8getIDSetEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEED2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEED2Ev */
/* Demangled: android::sp<NSCam::IImageBuffer>::~sp() */
int _ZN7android2spIN5NSCam12IImageBufferEED2Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12isFirstFrameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isFirstFrame() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12isFirstFrameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC1Eh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::CaptureTaskQueue(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC1Eh(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter25makeExifFromCollectedDataEN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::makeExifFromCollectedData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter25makeExifFromCollectedDataEN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator11getIsEnableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::getIsEnable() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator11getIsEnableEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16decNodeReferenceEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::decNodeReference(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16decNodeReferenceEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::PluginBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>&&) */
int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::DepthNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC1EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8FindPathEhh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FindPath(unsigned char, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8FindPathEhh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhRS4_S6_NS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::connectData(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhRS4_S6_NS1_14ConnectionTypeE(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeEED2Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::__push_back_slow_path<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
int _ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_back(std::__1::function<void ()>*&&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper14updateFaceDataERKN7android2spINS2_21CaptureFeatureRequestEEENSt3__18functionIFvRKNS_6MPointERSD_EEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::updateFaceData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, std::__1::function<void (NSCam::MPoint const&, NSCam::MPoint&)>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper14updateFaceDataERKN7android2spINS2_21CaptureFeatureRequestEEENSt3__18functionIFvRKNS_6MPointERSD_EEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*> >::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE0_NS1_8IIBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC2ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovCalculator(std::__1::vector<int, std::__1::allocator<int> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC2ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10handleDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::handleData<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10handleDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14refineBoundaryERKNS_5MSizeERNS_5MRectE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::refineBoundary(NSCam::MSize const&, NSCam::MRect&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14refineBoundaryERKNS_5MSizeERNS_5MRectE(void);

/* Symbol: _ZTSNSt3__117bad_function_callE */
/* Demangled: typeinfo name for std::__1::bad_function_call */
extern void* _ZTSNSt3__117bad_function_callE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::TuningBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC1EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getRequestNoEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getRequestNo() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getRequestNoEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13waitInferenceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::waitInference() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13waitInferenceEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3RawEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::findRequest(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3RawEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RAWNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC2EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE16updatePropValuesEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::updatePropValues() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE16updatePropValuesEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode14setSensorIndexEii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setSensorIndex(int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode14setSensorIndexEii(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::dumpCamThreadInfo(android::Printer&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>, int) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter12doExifUpdateEN7android2spINS2_21CaptureFeatureRequestEEERNSt3__13mapIjjNS8_4lessIjEENS8_9allocatorINS8_4pairIKjjEEEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::doExifUpdate(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > >&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter12doExifUpdateEN7android2spINS2_21CaptureFeatureRequestEEERNSt3__13mapIjjNS8_4lessIjEENS8_9allocatorINS8_4pairIKjjEEEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initAllocatorParam() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setStatusENS3_6StatusE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::setStatus(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Status) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setStatusENS3_6StatusE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::~EmptyBoost() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEE */
/* Demangled: vtable for std::__1::__deferred_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> > */
extern void* _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::diff(timespec const&, timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenEED2Ev(void);

/* Symbol: _ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_ */
/* Demangled: std::__1::future<int> std::__1::__make_deferred_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >(std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>>&&) */
int _ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh15EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)15>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh15EEEivE9isDumpImg;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE10push_frontERKS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::~PerfClientVendor() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher*, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE19freeFromPool_lockedEN7android2spIS4_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::freeFromPool_locked(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE19freeFromPool_lockedEN7android2spIS4_EE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getNow() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::CaptureFeatureRequest() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC2Ev(void);

/* Symbol: _ZNSt3__16vectorI18MTKFDContainerInfoNS_9allocatorIS1_EEE8__appendEm */
/* Demangled: std::__1::vector<MTKFDContainerInfo, std::__1::allocator<MTKFDContainerInfo> >::__append(unsigned long) */
int _ZNSt3__16vectorI18MTKFDContainerInfoNS_9allocatorIS1_EEE8__appendEm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE10push_frontERKS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor10enablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::enablePerf(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor10enablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE4sizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::size() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE4sizeEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE9waitFlushEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::waitFlush(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE9waitFlushEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::BokehNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC1EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishPath_LockedEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::finishPath_Locked(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishPath_LockedEh(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSQ_IJEEEEEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSQ_IJEEEEEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8enqueISPERN7android2spINS2_21CaptureFeatureRequestEEERNSt3__110shared_ptrINS3_11P2EnqueDataEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::enqueISP(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8enqueISPERN7android2spINS2_21CaptureFeatureRequestEEERNSt3__110shared_ptrINS3_11P2EnqueDataEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::signalEnque() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7reorderERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEESA_m */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::reorder(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, unsigned long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7reorderERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEESA_m(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12createHandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::createHandle(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12createHandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13acquireBufferEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::acquireBuffer(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13acquireBufferEh(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZNSt3__110shared_ptrIKcED2Ev */
/* Demangled: std::__1::shared_ptr<char const>::~shared_ptr() */
int _ZNSt3__110shared_ptrIKcED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onNextCaptureERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onNextCaptureERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onFlush() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher3addEhRKNSt3__16vectorIiNS5_9allocatorIiEEEESB_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::add(unsigned char, std::__1::vector<int, std::__1::allocator<int> > const&, std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher3addEhRKNSt3__16vectorIiNS5_9allocatorIiEEEESB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5enqueIN7android2spINS3_21CaptureFeatureRequestEEEEEihRT_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::enque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5enqueIN7android2spINS3_21CaptureFeatureRequestEEEEEihRT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool16USAGE_HW_TEXTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_TEXTURE */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool16USAGE_HW_TEXTUREE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::threadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getTimestamp() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv(void);

/* Symbol: _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_DepthInterfaceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_DepthInterface() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_DepthInterfaceEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getTimeSpec() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::~PowerHalWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE88_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE88_NS1_8NotifyCBE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev(void);

/* Symbol: _ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorE;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::~SwnrProcessor() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper10uninitLockEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::uninitLock() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper10uninitLockEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh8EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)8>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh8EEEivE9isDumpImg;

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS3_9NSCapture18TuningBufferHandleEEEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> >::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS3_9NSCapture18TuningBufferHandleEEEED2Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE11connectDataEhhPS4_NS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::connectData(unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE11connectDataEhhPS4_NS1_14ConnectionTypeE(void);

/* Symbol: _ZTSSt8bad_cast */
/* Demangled: typeinfo name for std::bad_cast */
extern void* _ZTSSt8bad_cast;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_YuvInterfaceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_YuvInterface() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_YuvInterfaceEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14queryEisRegionEPKNS_9IMetadataERNS3_10eis_regionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::queryEisRegion(NSCam::IMetadata const*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::eis_region&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14queryEisRegionEPKNS_9IMetadataERNS3_10eis_regionE(void);

/* Symbol: _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE10IInterfaceEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE10IInterfaceEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getGraphicBufferAddr() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv(void);

/* Symbol: _ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAnyQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getParameterEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getParameter(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getParameterEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18prepareNodeSettingEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::prepareNodeSetting() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18prepareNodeSettingEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::incExtThreadDependency() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh9EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)9>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh9EEEivE9isDumpImg;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getNextNodesEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getNextNodes(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getNextNodesEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest5clearEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::clear() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15onRequestFinishERKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15onRequestFinishERKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*) */
int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE8getIDSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::getIDSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE8getIDSetEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::~PluginSmartBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::unlockNativeBuffer(AHardwareBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::stop(bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb(void);

/* Symbol: _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9IProviderEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9IProviderEED2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy() */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE7isReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::isReady() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE7isReadyEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17setDelayInferenceERNSt3__18functionIFvvEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setDelayInference(std::__1::function<void ()>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17setDelayInferenceERNSt3__18functionIFvvEEE(void);

/* Symbol: _ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEEE;

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::unlock() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20getIsForceByPassFlowEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::getIsForceByPassFlow() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20getIsForceByPassFlowEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_front(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE10setWaitHubEPNS1_7WaitHubE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE10setWaitHubEPNS1_7WaitHubE(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE15RequestCallbackEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::RequestCallback>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE15RequestCallbackEED2Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13setNodeSignalERKN7android2spINS2_10NodeSignalEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setNodeSignal(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13setNodeSignalERKN7android2spINS2_10NodeSignalEEE(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvm */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev(void);

/* Symbol: _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EElEERPNS_15__tree_end_nodeISA_EESB_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::__find_equal<int>(std::__1::__tree_const_iterator<int, std::__1::__tree_node<int, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EElEERPNS_15__tree_end_nodeISA_EESB_RKT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11enableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::enableBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11enableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataEPKcjS5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dumpData(char const*, unsigned int, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataEPKcjS5_(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11NodeID2NameEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeID2Name(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11NodeID2NameEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::start() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::triggerSignal(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7acquireEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::acquire() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7acquireEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::registerTimeoutCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::~PerfBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::CaptureBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC2EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21collectPreBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_G */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::collectPreBSSExifData(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, BSS_PARAM_STRUCT&, BSS_INPUT_DATA_G&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21collectPreBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_G(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::processNextCapture(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::waitIdle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv(void);

/* Symbol: _ZTINSt3__117bad_function_callE */
/* Demangled: typeinfo for std::__1::bad_function_call */
extern void* _ZTINSt3__117bad_function_callE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEEED2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17updateBssProcInfoEPNS_12IImageBufferER16BSS_PARAM_STRUCTi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::updateBssProcInfo(NSCam::IImageBuffer*, BSS_PARAM_STRUCT&, int) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17updateBssProcInfoEPNS_12IImageBufferER16BSS_PARAM_STRUCTi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::~CaptureFeatureRequest() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15unpackRawBufferEPNS_12IImageBufferES5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::unpackRawBuffer(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15unpackRawBufferEPNS_12IImageBufferES5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher28getIsSupportedInputBufferFmtEhi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getIsSupportedInputBufferFmt(unsigned char, int) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher28getIsSupportedInputBufferFmtEhi(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::~CamGraph() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC2ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::FDContainerWraper(NSCamHW::simplifiedMatrix const&, android::sp<NSCam::IFDContainer>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC2ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::~CaptureFeatureDataHandler() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv(void);

/* Symbol: _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher*, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6createEPKcj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::create(char const*, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6createEPKcj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE15RequestCallbackEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::RequestCallback>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE15RequestCallbackEED2Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10setBoosterENSt3__110unique_ptrINS2_8IBoosterENS4_8functionIFvPS6_EEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setBooster(std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster, std::__1::function<void (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster*)> >) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10setBoosterENSt3__110unique_ptrINS2_8IBoosterENS4_8functionIFvPS6_EEEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_ */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack> >::__add_back_capacity() */
int _ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointERS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::transform(int, NSCam::MPoint const&, NSCam::MPoint&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointERS4_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*> >::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6uninitEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getElapsed() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTv0_n64_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::setCallback(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback>) */
int _ZTv0_n64_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper15formatConverterEPNS_12IImageBufferES5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::formatConverter(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper15formatConverterEPNS_12IImageBufferES5_(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE;

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB9getStatusEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::getStatus() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB9getStatusEv(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhNS_6futureIvEEEENS_19__map_value_compareIhS4_NS_4lessIhEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, std::__1::future<void> >, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, std::__1::future<void> >, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, std::__1::future<void> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, std::__1::future<void> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhNS_6futureIvEEEENS_19__map_value_compareIhS4_NS_4lessIhEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15USAGE_HW_RENDERE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_RENDER */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15USAGE_HW_RENDERE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::acquireRequest() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE7isReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::isReady() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE7isReadyEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEEE;

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12disableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::disableBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12disableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImgSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::findRequest(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode11setLogLevelEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setLogLevel(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode11setLogLevelEj(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onAbort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15calMotionVectorEPNS_9IMetadataEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::calMotionVector(NSCam::IMetadata*, int) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15calMotionVectorEPNS_9IMetadataEi(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12disableBoostEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::disableBoost() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12disableBoostEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5startEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::start() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5startEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11dumpRequestERN7android7PrinterE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::dumpRequest(android::Printer&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11dumpRequestERN7android7PrinterE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue7addTaskERNSt3__18functionIFvvEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::addTask(std::__1::function<void ()>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue7addTaskERNSt3__18functionIFvvEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14isTargetBufferEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isTargetBuffer(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14isTargetBufferEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::FDNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC1EhPKcii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam9IMetadataEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IMetadata>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam9IMetadataEED2Ev(void);

/* Symbol: _ZTv0_n88_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::acquireRequest() */
int _ZTv0_n88_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE9push_backEOS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE9push_backEOS9_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onAbort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::getName() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7getNameEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE11getIndexSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::getIndexSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE11getIndexSetEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::MDPNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC2EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::RequestCallback */
extern void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameIndexEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getFrameIndex() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameIndexEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC1ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::FDContainerWraper(NSCamHW::simplifiedMatrix const&, android::sp<NSCam::IFDContainer>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC1ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::~FDContainerWraper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE15RequestCallbackEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::RequestCallback>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE15RequestCallbackEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::PowerHalWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE;

/* Symbol: _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_back(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::NodeSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2ENS3_10eUsageModeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::eUsageMode) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2ENS3_10eUsageModeE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8waitSyncEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::waitSync(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8waitSyncEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::flush() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19onP2SuccessCallbackERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onP2SuccessCallback(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19onP2SuccessCallbackERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::TuningBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC2EPKc(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15USAGE_HW_AND_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW_AND_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15USAGE_HW_AND_SWE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::~CPUBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionEED2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE0_NS1_12BufferHandleINS1_17ImageBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE0_NS1_12BufferHandleINS1_17ImageBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isBoostEnableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isBoostEnable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isBoostEnableEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void);

/* Symbol: _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAnyQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub>(std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEE11make_sharedIJPS5_EEES7_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee>::make_shared<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe*>(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe*&&) */
int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEE11make_sharedIJPS5_EEES7_DpOT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7requestEv(void);

/* Symbol: _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__deque_base<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::~__deque_base() */
int _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11FeatID2NameEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FeatID2Name(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11FeatID2NameEh(void);

/* Symbol: _ZTv0_n72_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::flush() */
int _ZTv0_n72_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest19detachResourceItemsEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::detachResourceItems() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest19detachResourceItemsEv(void);

/* Symbol: _ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__list_imp<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::~__list_imp() */
int _ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE15RequestCallbackEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::RequestCallback>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE15RequestCallbackEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor15waitExecuteDoneEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::waitExecuteDone() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor15waitExecuteDoneEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC1ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovCalculator(std::__1::vector<int, std::__1::allocator<int> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC1ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15acquireMetadataEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::acquireMetadata(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15acquireMetadataEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13dumpNamedDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dumpNamedData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, NSCam::IImageBuffer*, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13dumpNamedDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest7addPathEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addPath(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest7addPathEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::~PluginBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEEE;

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC1EiRKNS2_19ICaptureFeaturePipe9UsageHintEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::CaptureFeaturePipe(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC1EiRKNS2_19ICaptureFeaturePipe9UsageHintEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7disableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::disable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7disableEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5dequeERS5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::deque(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5dequeERS5_(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh15EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)15>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh15EEEivE9isDumpImg;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool9doReleaseEPNS2_18TuningBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool9doReleaseEPNS2_18TuningBufferHandleE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC2Eh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::CaptureTaskQueue(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC2Eh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEEEEERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::createPluginRequestPtr(unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEEEEERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toNativeFormat(android_pixel_format_t) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setTaskQueueERKN7android2spINS2_16CaptureTaskQueueEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setTaskQueue(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setTaskQueueERKN7android2spINS2_16CaptureTaskQueueEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addNodeIOEhRN7android6VectorINS3_7SrcDataEEERNS5_INS3_7DstDataEEERNS5_IhEESD_i */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addNodeIO(unsigned char, android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>&, android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>&, android::Vector<unsigned char>&, android::Vector<unsigned char>&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addNodeIOEhRN7android6VectorINS3_7SrcDataEEERNS5_INS3_7DstDataEEERNS5_IhEESD_i(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5clearEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::clear() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3YuvEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::findRequest(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3YuvEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addBufferEhN7android2spINS2_12BufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addBuffer(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addBufferEhN7android2spINS2_12BufferHandleEEE(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNSA_12IImageBufferEPNSA_9IMetadataEN7android2spINSD_17CaptureBufferPoolEEEEJPSE_RSG_RSI_RSM_EEEJEEEEEFvvEPSV_EEEEEPvS10_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNSA_12IImageBufferEPNSA_9IMetadataEN7android2spINSD_17CaptureBufferPoolEEEEJPSE_RSG_RSI_RSM_EEEJEEEEEFvvEPSV_EEEEEPvS10_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::operator()() */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7disableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::disable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7disableEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::~PluginMetadataHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAllQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeC2EhPKcjii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::CaptureFeatureNode(unsigned char, char const*, unsigned int, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeC2EhPKcjii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperC1EPS5_RKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::FlushWrapper(NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperC1EPS5_RKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEEED2Ev(void);

/* Symbol: _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onUninit() */
int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvm */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEEaSERKS5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEEaSERKS5_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13RequestHolderE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestHolder */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13RequestHolderE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher29getIsSupportedOutputBufferFmtEhi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getIsSupportedOutputBufferFmt(unsigned char, int) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher29getIsSupportedOutputBufferFmtEhi(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor12closePerfLibEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::closePerfLib() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor12closePerfLibEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator10getFovInfoEiRNS3_7FovInfoE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::getFovInfo(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator10getFovInfoEiRNS3_7FovInfoE(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEEaSEPS5_ */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle*) */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEEaSEPS5_(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_back(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpERN7android7PrinterE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump(android::Printer&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpERN7android7PrinterE(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh8EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)8>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh8EEEivE9isDumpImg;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::~EmptyBoost() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE4sizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::size() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE4sizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueE;

/* Symbol: _ZTSSt12out_of_range */
/* Demangled: typeinfo name for std::out_of_range */
extern void* _ZTSSt12out_of_range;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest6unlockEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::unlock() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest6unlockEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE0_NS1_8IIBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeout() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*, unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev */
/* Demangled: android::wp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>::~wp() */
int _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter15gvCollectedDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::gvCollectedData */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter15gvCollectedDataE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10addFeatureEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addFeature(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10addFeatureEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10startTimerEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::startTimer(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10startTimerEh(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED0Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE10IInterfaceEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE10IInterfaceEED2Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE0_NS2_12BufferHandleE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE0_NS2_12BufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7releaseEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::release() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7releaseEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIhJNS_4pairIhS8_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo>&&) */
int _ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIhJNS_4pairIhS8_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEEED2Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_compareEPKvSE_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_compareEPKvSE_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int>(std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8dumpLockEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::dumpLock() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8dumpLockEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isLastFrameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isLastFrame() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isLastFrameEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility7imgCopyEPNS_12IImageBufferES5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::imgCopy(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility7imgCopyEPNS_12IImageBufferES5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessIdleCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster6enableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::enable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster6enableEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE;

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEED2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::flushQueues() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::EmptyBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter12gvReqMappingE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::gvReqMapping */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter12gvReqMappingE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7GetPathEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::GetPath(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7GetPathEh(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void);

/* Symbol: _ZNSt3__113packaged_taskIFvvEEclEv */
/* Demangled: std::__1::packaged_task<void ()>::operator()() */
int _ZNSt3__113packaged_taskIFvvEEclEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::~IBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17hasDelayInferenceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::hasDelayInference() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17hasDelayInferenceEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13getNvramChunkEPm */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::getNvramChunk(unsigned long*) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13getNvramChunkEPm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::~PowerHalWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::ExifWriter(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC1EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onRequestProcess(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getStatusENS3_6StatusE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::getStatus(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Status) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getStatusENS3_6StatusE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::PluginMetadataHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility23createImageTransformPtrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::createImageTransformPtr() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility23createImageTransformPtrEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::~SwnrProcessor() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE0_NS1_19SequentialQueueBaseE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase-in-NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter> */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE0_NS1_19SequentialQueueBaseE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::makePath(char const*, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::triggerDryRun() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getImageFormatEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getImageFormat(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getImageFormatEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15setCrossRequestEN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setCrossRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15setCrossRequestEN7android2spIS3_EE(void);

/* Symbol: _ZNK7android6VectorIhE10do_destroyEPvm */
/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIhE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh11EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)11>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh11EEEivE9isDumpImg;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster6enableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::enable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster6enableEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::RootNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC2EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAnyQueueReady() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11loadPerfAPIEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::loadPerfAPI() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11loadPerfAPIEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15deleteParameterEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::deleteParameter(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15deleteParameterEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addSourceEhhjNS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addSource(unsigned char, unsigned char, unsigned int, NSCam::MSize) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addSourceEhhjNS_5MSizeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5dequeERS5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::deque(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5dequeERS5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleE0_NS1_12BufferHandleINS2_18TuningBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleE0_NS1_12BufferHandleINS2_18TuningBufferHandleEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE12do_constructEPvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE;

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh17EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)17>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh17EEEivE9isDumpImg;

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameCountEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getFrameCount() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameCountEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14updateMetadataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEEmh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::updateMetadata(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, unsigned long, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14updateMetadataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEEmh(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*>&>::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack* const&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::CaptureFeatureInference() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool4initEN7android6VectorINS2_12BufferConfigEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::init(android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool4initEN7android6VectorINS2_12BufferConfigEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setExtParam(NSCam::MSize const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::onStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onStartEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateEN7android2spINS3_6FactorEEERKNS_5MSizeERNS_5MRectEii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::evaluate(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor>, NSCam::MSize const&, NSCam::MRect&, int, int) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateEN7android2spINS3_6FactorEEERKNS_5MSizeERNS_5MRectEii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2ANode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC1EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onRequestFinish(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE;

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::P2Operator>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorEED2Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::~__list_imp() */
int _ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZTSNSt3__112future_errorE */
/* Demangled: typeinfo name for std::__1::future_error */
extern void* _ZTSNSt3__112future_errorE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7releaseEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::release() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7releaseEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less::operator()(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE */
/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onRequestProcess(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11TypeID2NameEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TypeID2Name(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11TypeID2NameEh(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15retrieveGmvInfoEPNS_9IMetadataERiS6_RNS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::retrieveGmvInfo(NSCam::IMetadata*, int&, int&, NSCam::MSize&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15retrieveGmvInfoEPNS_9IMetadataERiS6_RNS_5MSizeE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::__move_to(std::__1::__packaged_task_base<void ()>*) */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9determineEN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::determine(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9determineEN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::~PerfBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::abort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEEEEERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::createPluginRequestPtr(unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEEEEERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_10BufferPoolINS1_17ImageBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_10BufferPoolINS1_17ImageBufferHandleEEE;

/* Symbol: _ZNK7android6VectorIhE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIhE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC1EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::PipeBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue>, unsigned int, NSCam::MSize&, NSCam::MSize&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC1EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD2Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump(char const*, unsigned char, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchPNS_12IImageBufferE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18getTuningFromNvramEjRjiii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getTuningFromNvram(unsigned int, unsigned int&, int, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18getTuningFromNvramEjRjiii(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4initEv(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS3_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS3_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBEED2Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::~ExifWriter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD1Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev(void);

/* Symbol: _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageFormat() const */
int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4lockEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::lock() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4lockEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::__emplace_unique_key_args<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>, std::__1::tuple<> >(std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::add(android::sp<NSCam::IImageBuffer> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::processNextCapture(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::~CaptureFeatureDataHandler() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD2Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9IProviderEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9IProviderEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::registerEnqueCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10dumpToFileEPNS_12IImageBufferEPKcz */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::dumpToFile(NSCam::IImageBuffer*, char const*, ...) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10dumpToFileEPNS_12IImageBufferEPKcz(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode5doBssERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::doBss(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode5doBssERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE9push_backEOS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE9push_backEOS9_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData4dumpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::dump() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData4dumpEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14addDebugBufferERNSt3__110shared_ptrINS3_13RequestHolderEEERNS5_INS3_11P2EnqueDataEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::addDebugBuffer(std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestHolder>&, std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14addDebugBufferERNSt3__110shared_ptrINS3_13RequestHolderEEERNS5_INS3_11P2EnqueDataEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9IProviderEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9IProviderEED2Ev(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11getInstanceEvE9singleton */
/* Demangled: guard variable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::getInstance()::singleton */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11getInstanceEvE9singleton;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::PluginMetadataHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>&&) */
int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11getMetadataEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getMetadata(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11getMetadataEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference8evaluateEN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::evaluate(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference8evaluateEN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter9tagToNameEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::tagToName(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter9tagToNameEi(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10getFrameNoEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getFrameNo() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10getFrameNoEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11copyBuffersEPNS3_12EnquePackageE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::copyBuffers(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::EnquePackage*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11copyBuffersEPNS3_12EnquePackageE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getImageFormatERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::getImageFormat(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> const&, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getImageFormatERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE12do_constructEPvm(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC2EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::PipeBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue>, unsigned int, NSCam::MSize&, NSCam::MSize&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC2EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE15RequestCallbackEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::RequestCallback>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE15RequestCallbackEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode17setCropCalculatorERKN7android2spINS2_14CropCalculatorEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setCropCalculator(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode17setCropCalculatorERKN7android2spINS2_14CropCalculatorEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::SwnrProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::tryGetFeatureWarning(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertIdleCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev */
/* Demangled: android::wp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>::~wp() */
int _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE10do_destroyEPvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::readyToRun() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8Watchdog8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8Watchdog8onNotifyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20getIsForceByPassFlowEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::getIsForceByPassFlow() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20getIsForceByPassFlowEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7acquireEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::acquire(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7acquireEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack> >::clear() */
int _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::CPUBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15releaseMetadataEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::releaseMetadata(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15releaseMetadataEh(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE */
/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::~CamPipe() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RAWNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC1EhPKcii(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::processNextCapture(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE8do_splatEPvPKvm(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh11EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)11>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh11EEEivE9isDumpImg;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::init() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZNK7android6VectorIhE7do_copyEPvPKvm */
/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIhE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::~FDContainerWraper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStop(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*> >::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15getSensorRawFmtEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getSensorRawFmt(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15getSensorRawFmtEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::~IHolder() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::~SequentialHandler() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_front(std::__1::function<void ()>*&&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZTv0_n56_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::abort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZTv0_n56_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper14CreateMetadataEN7android2spINS2_25CaptureFeatureNodeRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginHelper::CreateMetadata(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper14CreateMetadataEN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE0_NS1_8NotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1Ev(void);

/* Symbol: _ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::clear() */
int _ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE576_NS2_19ICaptureFeaturePipeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE576_NS2_19ICaptureFeaturePipeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5dequeERS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::deque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5dequeERS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE9addToPoolERKN7android2spIS4_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE9addToPoolERKN7android2spIS4_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12decBufferRefEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::decBufferRef(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12decBufferRefEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED2Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor7isEqualEN7android2spIS4_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor::isEqual(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor>) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor7isEqualEN7android2spIS4_EE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*>&>::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture42_CreatePluginInterface_MultiFrameInterfaceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_MultiFrameInterface() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture42_CreatePluginInterface_MultiFrameInterfaceEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27getSupportedOutputBufferFmtEhRi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getSupportedOutputBufferFmt(unsigned char, int&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27getSupportedOutputBufferFmtEhRi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setTimestamp(long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11SizeID2NameEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SizeID2Name(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11SizeID2NameEh(void);

/* Symbol: _ZTISt12out_of_range */
/* Demangled: typeinfo for std::out_of_range */
extern void* _ZTISt12out_of_range;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImageBufferPtr() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE8do_splatEPvPKvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEEE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9IProviderEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9IProviderEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::~CPUBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEED2Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrINS_13packaged_taskIFvvEEEED2Ev */
/* Demangled: std::__1::shared_ptr<std::__1::packaged_task<void ()> >::~shared_ptr() */
int _ZNSt3__110shared_ptrINS_13packaged_taskIFvvEEEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE */
/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev(void);

/* Symbol: _ZTVNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EE */
/* Demangled: vtable for std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()> */
extern void* _ZTVNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>&&) */
int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_SWE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeoutNs() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearSignalENS3_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::clearSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearSignalENS3_6SignalE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9IProviderEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9IProviderEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getNodeRequestEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getNodeRequest(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getNodeRequestEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4stopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::stop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4stopEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::CaptureFeatureInferenceData() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_BokehInterfaceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_BokehInterface() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_BokehInterfaceEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE0_NS1_8NotifyCBE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10disconnectEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::disconnect() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10disconnectEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::PerfBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15copyImageBufferEPNS_12IImageBufferES4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::copyImageBuffer(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15copyImageBufferEPNS_12IImageBufferES4_(void);

/* Symbol: _ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv */
/* Demangled: std::__1::__list_imp<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::clear() */
int _ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void);

/* Symbol: _ZN7android2spIN5NSCam17IMetadataProviderEED2Ev */
/* Demangled: android::sp<NSCam::IMetadataProvider>::~sp() */
int _ZN7android2spIN5NSCam17IMetadataProviderEED2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9SelectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface::offer(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9SelectionE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7acquireEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::acquire(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7acquireEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(NSCam::IImageBuffer*, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, android_pixel_format_t, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateERKNS_5MSizeES6_RNS_5MRectE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::evaluate(NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateERKNS_5MSizeES6_RNS_5MRectE(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15RequestCallbackEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15RequestCallbackEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD2Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBC1EPKcRKN7android2spINS1_14CountDownLatchEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::SyncCounterCB(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBC1EPKcRKN7android2spINS1_14CountDownLatchEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::~PluginMetadataHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6onStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::onStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6onStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onUpdateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::onUpdate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onUpdateEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::ExifWriter(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC2EPKc(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBuffer(AHardwareBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14appendBSSInputERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_INPUT_DATA_GRNSt3__16vectorI18MTKFDContainerInfoNSD_9allocatorISF_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::appendBSSInput(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, BSS_INPUT_DATA_G&, std::__1::vector<MTKFDContainerInfo, std::__1::allocator<MTKFDContainerInfo> >&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14appendBSSInputERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_INPUT_DATA_GRNSt3__16vectorI18MTKFDContainerInfoNSD_9allocatorISF_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv(void);

/* Symbol: _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::thread, std::__1::allocator<std::__1::thread> >::__push_back_slow_path<std::__1::thread>(std::__1::thread&&) */
int _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE0_N7android6ThreadE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::~EmptyBoost() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11getInstanceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::getInstance() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11getInstanceEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS8_12basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEENSD_ISF_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS8_12basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEENSD_ISF_EEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBooster14createInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::createInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBooster14createInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchhNS2_9DirectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump(char const*, unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchhNS2_9DirectionE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5startEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::start() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5startEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode11getForceBssEPvm */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::getForceBss(void*, unsigned long) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode11getForceBssEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode10preprocessERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::preprocess(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode10preprocessERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::FusionNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC2EhPKcii(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::getName() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11setFeaturesEm */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setFeatures(unsigned long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11setFeaturesEm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE11getIndexSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::getIndexSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE11getIndexSetEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher*, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool7destroyERN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool7destroyERN7android2spIS3_EE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE0_NS1_8IIBufferE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvm */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIiE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void);

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh17EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)17>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh17EEEivE9isDumpImg;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE5enqueERKS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE5enqueERKS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::getName() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7getNameEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::addWaitQueue(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9SelectionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface::offer(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9SelectionE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter5gLockE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::gLock */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter5gLockE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData11addDataItemEhhhN7android8BitSet64E */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addDataItem(unsigned char, unsigned char, unsigned char, android::BitSet64) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData11addDataItemEhhhN7android8BitSet64E(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::MultiFrameNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC2EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE10setWaitHubEPNS1_7WaitHubE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE10setWaitHubEPNS1_7WaitHubE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::~IBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadLoop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12addParameterEhi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addParameter(unsigned char, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12addParameterEhi(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev(void);

/* Symbol: _ZTINSt3__112future_errorE */
/* Demangled: typeinfo for std::__1::future_error */
extern void* _ZTINSt3__112future_errorE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21dumpBssInputData2FileERN7android2spINS2_21CaptureFeatureRequestEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_GR15BSS_OUTPUT_DATA */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::dumpBssInputData2File(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, BSS_PARAM_STRUCT&, BSS_INPUT_DATA_G&, BSS_OUTPUT_DATA&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21dumpBssInputData2FileERN7android2spINS2_21CaptureFeatureRequestEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_GR15BSS_OUTPUT_DATA(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEEE;

/* Symbol: _ZNSt3__18functionIFvPN5NSCam12IImageBufferEEED2Ev */
/* Demangled: std::__1::function<void (NSCam::IImageBuffer*)>::~function() */
int _ZNSt3__18functionIFvPN5NSCam12IImageBufferEEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReady() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<timespec, std::__1::allocator<timespec> >::__add_back_capacity() */
int _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStart() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEEE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11disablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::disablePerf(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11disablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::lockNativeBuffer(AHardwareBuffer*, unsigned long, void**) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onRequestFinish(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE0_NS1_8StatusCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE0_NS1_8StatusCBE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::setGrallocExtraParam(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE(void);

/* Symbol: _ZNK7android6VectorIhE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIhE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::CaptureFeatureInference() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv(void);

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer_SPTR() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::createImageBuffer(android::sp<NSCam::IImageBufferHeap> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13releaseBufferEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::releaseBuffer(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13releaseBufferEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7getSizeEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::getSize(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7getSizeEh(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_back(std::__1::function<void ()>*&&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::DepthNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC2EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC1EPKcRKN7android2spINS1_8IIBufferEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::PluginSmartBufferHandle(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC1EPKcRKN7android2spINS1_8IIBufferEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::~PluginSmartBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE9push_backEOS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE9push_backEOS9_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost6enableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::enable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost6enableEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_10BufferPoolINS1_19GraphicBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_10BufferPoolINS1_19GraphicBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void);

/* Symbol: _ZTv0_n80_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::getStatus() */
int _ZTv0_n80_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::~PerfBooster() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD2Ev(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, int>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, int>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC1EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::MDPNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC1EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter> */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_S6_NS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::connectData(unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_S6_NS1_14ConnectionTypeE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEEE;

/* Symbol: _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh13EEEivE9isDumpImg */
/* Demangled: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)13>()::isDumpImg */
extern void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh13EEEivE9isDumpImg;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE0_NS2_18CaptureFeatureNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE0_NS2_18CaptureFeatureNodeE;

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*>&>::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::~ExifWriter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter44makeExifFromCollectedData_multiframe_mappingEN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::makeExifFromCollectedData_multiframe_mapping(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter44makeExifFromCollectedData_multiframe_mappingEN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7recycleEPS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7recycleEPS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onInit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED0Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEEE;

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::__execute() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility7imgCopyEPNS_12IImageBufferES5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::imgCopy(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility7imgCopyEPNS_12IImageBufferES5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC2EhPKcii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::BokehNode(unsigned char, char const*, int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC2EhPKcii(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc(void);

/* Symbol: _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh10EEEivE9isDumpImg */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)10>()::isDumpImg */
extern void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh10EEEivE9isDumpImg;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::update(timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor15isPerfLibEnableEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::isPerfLibEnable() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor15isPerfLibEnableEv(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void);

/* Symbol: _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::onNotify() */
int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::clear() */
int _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorEED2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE0_NS1_8NotifyCBE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool4initEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::init(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool4initEj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6FactorEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6FactorEED2Ev(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy_deallocate() */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD2Ev(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::lock(unsigned long, void**) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::allocate(unsigned int, unsigned int, android_pixel_format_t, unsigned long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm(void);

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::~CaptureFeatureRequest() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onUninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher26getSupportedInputBufferFmtEhRi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getSupportedInputBufferFmt(unsigned char, int&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher26getSupportedInputBufferFmtEhRi(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::StatusCB>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_front(std::__1::function<void ()>* const&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13addBufferItemEhhRNS_5MSizeEjS5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addBufferItem(unsigned char, unsigned char, NSCam::MSize&, unsigned int, NSCam::MSize&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13addBufferItemEhhRNS_5MSizeEjS5_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13RequestHolderEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestHolder>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13RequestHolderEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPcmPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::loadData(char*, unsigned long, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPcmPKc(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE;

/* Symbol: _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIhhEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhhEEEE;

/* Symbol: _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>, int) */
int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10isReadyForEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isReadyFor(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10isReadyForEh(void);

/* Symbol: _ZNSt3__111__sift_downIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeESK_ */
/* Demangled: void std::__1::__sift_down<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >(std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::iterator_traits<std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::difference_type, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>) */
int _ZNSt3__111__sift_downIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeESK_(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEEE */
/* Demangled: vtable for android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> */
extern void* _ZTVN7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n96_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::releaseRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
int _ZTv0_n96_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE0_NS2_25CaptureFeatureDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE0_NS2_25CaptureFeatureDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle12getTransformEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::getTransform() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle12getTransformEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEED2Ev(void);

/* Symbol: _ZThn304_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::getName() const */
int _ZThn304_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15updateBssIOInfoEPNS_12IImageBufferER16BSS_INPUT_DATA_G */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::updateBssIOInfo(NSCam::IImageBuffer*, BSS_INPUT_DATA_G&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15updateBssIOInfoEPNS_12IImageBufferER16BSS_INPUT_DATA_G(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEEC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::CamNode(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEEC2EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::getExtThreadDependency() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::onFlush() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countBackUp() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv(void);

/* Symbol: _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toStr(NSCam::EImageFormat) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14decMetadataRefEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::decMetadataRef(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14decMetadataRefEh(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev(void);

/* Symbol: _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStop() */
int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC2EiRKNS2_19ICaptureFeaturePipe9UsageHintEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::CaptureFeaturePipe(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC2EiRKNS2_19ICaptureFeaturePipe9UsageHintEi(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE0_NS1_8NotifyCBE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9IProviderEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9IProviderEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolder21createResizerInstanceEPNS_12IImageBufferERKNS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::createResizerInstance(NSCam::IImageBuffer*, NSCam::MSize const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolder21createResizerInstanceEPNS_12IImageBufferERKNS_5MSizeE(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator9getFactorEPKNS_9IMetadataES6_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::getFactor(NSCam::IMetadata const*, NSCam::IMetadata const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator9getFactorEPKNS_9IMetadataES6_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8initLockEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::initLock() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8initLockEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::PerfClientVendor() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toPixelFormat(NSCam::EImageFormat) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::~IHolder() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getImageSizeEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getImageSize(unsigned char) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getImageSizeEh(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4initEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18releaseNodeSettingEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::releaseNodeSetting() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18releaseNodeSettingEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair> */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEEE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEED2Ev */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle>::~sp() */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal10waitSignalENS3_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::waitSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal10waitSignalENS3_6SignalE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8evaluateEhRNS2_27CaptureFeatureInferenceDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::tryGetFeatureWarning(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_ */
/* Demangled: void std::__1::__assoc_state<int>::set_value<int>(int&&) */
int _ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_front(timespec* const&) */
int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_CAPTURE_H */
