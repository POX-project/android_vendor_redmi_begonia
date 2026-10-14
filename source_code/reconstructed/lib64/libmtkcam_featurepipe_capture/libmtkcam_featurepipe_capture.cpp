/*
 * Reverse-Engineered Source for: libmtkcam.featurepipe.capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_featurepipe_capture"

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
#include "libmtkcam_featurepipe_capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addNodeIO(unsigned char, android::Vector<unsigned char>&, android::Vector<unsigned char>&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addNodeIOEhRN7android6VectorIhEES7_S7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addNodeIOEhRN7android6VectorIhEES7_S7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setFovCalculator(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode16setFovCalculatorERKN7android2spINS2_13FovCalculatorEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode16setFovCalculatorERKN7android2spINS2_13FovCalculatorEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::onTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEEE = NULL;

/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >(std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_(void) {
    ALOGD("_ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~sb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*> >::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onP2FailedCallback(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedCacher() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::syncCache(NSCam::eCacheCtrl) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)16>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh16EEEivE9isDumpImg = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator7FovInfoEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator7FovInfoEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::CaptureFeatureInferenceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::registerSyncCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE4sizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE4sizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStatusCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isCancelled() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isCancelledEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isCancelledEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::wait() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::EnquePackage::~EnquePackage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IInterface>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE10IInterfaceEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE10IInterfaceEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toImageFormat(android_pixel_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_compareEPKvSE_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_compareEPKvSE_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::destroyhandle(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper13destroyhandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper13destroyhandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEEaSEPS5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_RawInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_RawInterfaceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_RawInterfaceEv() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)13>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh13EEEivE9isDumpImg = NULL;

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PathID2Name(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PathID2NameEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PathID2NameEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::getImageTransform(unsigned char) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest17getImageTransformEh(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest17getImageTransformEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<int>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE4moveEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE0_NS1_12BufferHandleINS1_19GraphicBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::getImageBuffer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isSingleFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isSingleFrameEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isSingleFrameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::RootNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::finishNode_Locked(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishNode_LockedEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishNode_LockedEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::addReqMapping(int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter13addReqMappingEiRNSt3__13setIiNS4_4lessIiEENS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter13addReqMappingEiRNSt3__13setIiNS4_4lessIiEENS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117bad_function_callE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::syncRequestStatus(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference17syncRequestStatusEN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference17syncRequestStatusEN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::~PluginBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::~PluginMetadataHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::registerInputDataID(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE19registerInputDataIDEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE19registerInputDataIDEh() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<char>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIcED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIcED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::createPluginRequestPtr(unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEEEEERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEEEEERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::onExecute(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor9onExecuteEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor9onExecuteEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getIsFeatureIdExisting(unsigned char) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher22getIsFeatureIdExistingEh(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher22getIsFeatureIdExistingEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE = NULL;

/* Demangled: void std::__1::vector<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> > > >::__push_back_slow_path<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> > >(std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE21__push_back_slow_pathIS9_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEE21__push_back_slow_pathIS9_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::wait() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::enableBoost() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11enableBoostEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11enableBoostEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::sendData(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter8sendDataEiii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter8sendDataEiii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::PluginSmartBufferHandle(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC2EPKcRKN7android2spINS1_8IIBufferEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC2EPKcRKN7android2spINS1_8IIBufferEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::collectPostBSSExifData(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, android::Vector<int>&, BSS_OUTPUT_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode22collectPostBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEERNS5_IiEER15BSS_OUTPUT_DATA(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode22collectPostBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEERNS5_IiEER15BSS_OUTPUT_DATA() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*>&>::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev(void) {
    ALOGD("_ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::PluginBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS3_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS3_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::init(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator4initERKNSt3__16vectorIiNS4_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator4initERKNSt3__16vectorIiNS4_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::setSensorIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14setSensorIndexEii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14setSensorIndexEii() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IInterface>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE10IInterfaceEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE10IInterfaceEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::FDNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_FusionInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture38_CreatePluginInterface_FusionInterfaceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture38_CreatePluginInterface_FusionInterfaceEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc() called");
    return 0;
}

/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_4lessIS6_EENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_4lessIS6_EENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD2Ev() called");
    return 0;
}

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)6>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh6EEEivE9isDumpImg = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitHub */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubE = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_HWE = NULL;

/* Demangled: void std::__1::vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__push_back_slow_path<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::setSensorIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14setSensorIndexEii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14setSensorIndexEii() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::HandlerEntry>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS4_9NSCapture25CaptureFeatureDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS4_9NSCapture25CaptureFeatureDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::YUVNode(unsigned char, char const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC1EhPKciii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC1EhPKciii() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::CropCalculator(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC1Ejjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC1Ejjj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE7RequestEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEEE = NULL;

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::onData<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE6onDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_PS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE6onDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_PS4_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::~PerfClientVendor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::CaptureFeatureRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::hasMetadata(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11hasMetadataEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11hasMetadataEh() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::~IBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::push_back(std::__1::function<void ()>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::getIsForceByPassFlow() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20getIsForceByPassFlowEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20getIsForceByPassFlowEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint::Compare, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::innerGetIsFeatureIdExisting(unsigned char) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27innerGetIsFeatureIdExistingEh(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27innerGetIsFeatureIdExistingEh() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::stopThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE0_NS1_10BufferPoolINS2_18TuningBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::addThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue9addThreadEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue9addThreadEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8USAGE_SWE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7releaseEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7releaseEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::getTuningBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueueSync(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileManager::get(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17IspProfileManager3getERKNS2_14IspProfileHintE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17IspProfileManager3getERKNS2_14IspProfileHintE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4stopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4stopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::prepareNodeConnection() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe21prepareNodeConnectionEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe21prepareNodeConnectionEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addMetadata(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11addMetadataEhN7android2spINS2_14MetadataHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11addMetadataEhN7android2spINS2_14MetadataHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::dumpPlugin(android::Printer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10dumpPluginERN7android7PrinterE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10dumpPluginERN7android7PrinterE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::hasParameter(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12hasParameterEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12hasParameterEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginHelper::CreateBuffer(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEh() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::RequestCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5DepthEE15RequestCallbackE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::tryGetTheSameBufferFmt(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection const&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper22tryGetTheSameBufferFmtERKNS_16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9SelectionERiSB_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper22tryGetTheSameBufferFmtERKNS_16NSPipelinePlugin14PipelinePluginINS4_3YuvEE9SelectionERiSB_() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11getInstanceEvE9singleton = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::getIsDumpImage(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getIsDumpImageEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getIsDumpImageEh() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::connectData(unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_PNS3_25CaptureFeatureDataHandlerENS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_PNS3_25CaptureFeatureDataHandlerENS1_14ConnectionTypeE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::getIDSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE8getIDSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE8getIDSetEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onFlushEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned char, std::__1::less<unsigned char>, std::__1::allocator<unsigned char> >::destroy(std::__1::__tree_node<unsigned char, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIhNS_4lessIhEENS_9allocatorIhEEE7destroyEPNS_11__tree_nodeIhPvEE(void) {
    ALOGD("_ZNSt3__16__treeIhNS_4lessIhEENS_9allocatorIhEEE7destroyEPNS_11__tree_nodeIhPvEE() called");
    return 0;
}

/* Demangled: void std::__1::__sift_up<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >(std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::iterator_traits<std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::difference_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__19__sift_upIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeE(void) {
    ALOGD("_ZNSt3__19__sift_upIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::getSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getSignalENS3_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getSignalENS3_6SignalE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::getTuningBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool15getTuningBufferEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE10setWaitHubEPNS1_7WaitHubE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE10setWaitHubEPNS1_7WaitHubE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void) {
    ALOGD("_ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::dispose() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE7disposeEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE7disposeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv() called");
    return 0;
}

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)10>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh10EEEivE9isDumpImg = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::EmptyBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::~PluginSmartBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8onUninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapper8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapper8onNotifyEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::changeOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::hasFeature(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10hasFeatureEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10hasFeatureEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dumpData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, NSCam::IImageBuffer*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKcz(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKcz() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IFDContainer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IFDContainerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12IFDContainerEED2Ev() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)16>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh16EEEivE9isDumpImg = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_TEXTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper16USAGE_HW_TEXTUREE = NULL;

/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIhE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getBuffer(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getBufferEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getBufferEh() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::getFPS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::getImageBuffer(NSCam::MSize const&, unsigned int, NSCam::MSize, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool14getImageBufferERKNS_5MSizeEjS4_i(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool14getImageBufferERKNS_5MSizeEjS4_i() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::registerStatusCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::StatusCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::align(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture5alignEjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture5alignEjj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_RENDER */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper15USAGE_HW_RENDERE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIhEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::setOnReleasingCallback(std::__1::function<void (NSCam::IImageBuffer*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle22setOnReleasingCallbackENSt3__18functionIFvPNS_12IImageBufferEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle22setOnReleasingCallbackENSt3__18functionIFvPNS_12IImageBufferEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEEE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onInitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::setSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setSignalENS3_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setSignalENS3_6SignalE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IDebuggee>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData>::make_shared<>() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataEE11make_sharedIJEEES7_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataEE11make_sharedIJEEES7_DpOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5clearEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5clearEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool8allocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::loadData(NSCam::IImageBuffer*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPNS_12IImageBufferEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPNS_12IImageBufferEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(NSCam::IImageBuffer*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getCrossRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15getCrossRequestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15getCrossRequestEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::decExtThreadDependency() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)9>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh9EEEivE9isDumpImg = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*> >::__push_back_slow_path<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&>(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::~CaptureFeatureRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIhE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::dumpWaitQueueInfo(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::updateFovCropRegion(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19updateFovCropRegionERN7android2spINS2_21CaptureFeatureRequestEEEihh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19updateFovCropRegionERN7android2spINS2_21CaptureFeatureRequestEEEihh() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::initPerfLib() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11initPerfLibEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11initPerfLibEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint::Compare, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo> > >::__find_equal<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint>(std::__1::__tree_const_iterator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileInfo>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IspProfileHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14IspProfileHintENS5_14IspProfileInfoEEENS_19__map_value_compareIS6_S8_NS6_7CompareELb1EEENS_9allocatorIS8_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getFormattedPropertyValue(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::~CaptureFeatureDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::mapBufferID(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11mapBufferIDEhNS2_9DirectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest11mapBufferIDEhNS2_9DirectionE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::RequestCallback>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE15RequestCallbackEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE15RequestCallbackEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginHelper::CreateBuffer(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper12CreateBufferEN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::execute(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor7executeEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor7executeEPNS_12IImageBufferEPNS_9IMetadataEN7android2spINS2_17CaptureBufferPoolEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toGrallocExtraColor(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7disableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7disableEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::getSmartImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle19getSmartImageBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle19getSmartImageBufferEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__assign_multi<std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long> >(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>, std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEElEEEEvT_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE14__assign_multiINS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEElEEEEvT_SH_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::getIndexSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE11getIndexSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE11getIndexSetEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: std::__1::future<std::__1::__invoke_of<std::__1::decay<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>&>::type>::type> std::__1::async<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>&>(std::__1::launch, std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15asyncIRNS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS2_12IImageBufferEPNS2_9IMetadataEN7android2spINS5_17CaptureBufferPoolEEEEJPS6_RS8_RSA_RSE_EEEJEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_(void) {
    ALOGD("_ZNSt3__15asyncIRNS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS2_12IImageBufferEPNS2_9IMetadataEN7android2spINS5_17CaptureBufferPoolEEEEJPS6_RS8_RSA_RSE_EEEJEEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSP_IT0_E4typeEEE4typeEEENS_6launchEOSQ_DpOST_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor4dumpEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor4dumpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface::offer(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9SelectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_6FusionEE9SelectionE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onRequestRepeat(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestRepeatERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestRepeatERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isFinished_Locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17isFinished_LockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17isFinished_LockedEv() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IBssContainer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13IBssContainerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam13IBssContainerEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::incBufferRef(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12incBufferRefEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12incBufferRefEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(NSCam::IImageBuffer*, char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcl(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcl() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9SelectionEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::disconnect() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE10disconnectEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE10disconnectEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::destroy(std::__1::__tree_node<int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE(void) {
    ALOGD("_ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::CaptureBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2ANode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC2EhPKcii() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufResizer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10BufResizerE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7onFlushEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::createImageTransformPtr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility23createImageTransformPtrEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility23createImageTransformPtrEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::erase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::startInference() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14startInferenceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14startInferenceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::~CamPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE7RequestEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countDown() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::stopTimer(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9stopTimerEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9stopTimerEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::ID2Name(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandler7ID2NameEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandler7ID2NameEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::PerfClientVendor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::addNode(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference7addNodeEhPNS2_18CaptureFeatureNodeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference7addNodeEhPNS2_18CaptureFeatureNodeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::isReady() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE7isReadyEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE7isReadyEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::SwnrProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::~IHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::~SequentialHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::RequestCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_5BokehEE15RequestCallbackE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5clearEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5clearEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IInterface>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE10IInterfaceEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE10IInterfaceEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::FusionNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::acquire(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7acquireEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle7acquireEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7releaseEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7releaseEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::PerfBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::SEPARATE_BUFFER */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15SEPARATE_BUFFERE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addTarget(unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addTargetEhh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addTargetEhh() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE0_NS1_8NotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::native() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle6nativeEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle6nativeEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::getImageSize(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> const&, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper12getImageSizeERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper12getImageSizeERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getPreviousNodes(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16getPreviousNodesEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16getPreviousNodesEh() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::future<int>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16futureIiED2Ev(void) {
    ALOGD("_ZNSt3__16futureIiED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::clearStatus(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearStatusENS3_6StatusE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearStatusENS3_6StatusE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::releaseRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::PowerHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::createInstancePtr(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper17createInstancePtrERKN7android2spINS2_21CaptureFeatureRequestEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper17createInstancePtrERKN7android2spINS2_21CaptureFeatureRequestEEEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*, long> std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::__emplace_multi<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index>(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE15__emplace_multiIJS5_EEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE15__emplace_multiIJS5_EEENS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEEDpOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::MultiFrameNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::toPixelFormat(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13toPixelFormatENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13toPixelFormatENS_12EImageFormatE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::startThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__deferred_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv(void) {
    ALOGD("_ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedCacher() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::getGraphicBufferAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBufferPtr(AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::transform(int, NSCam::MPoint const&, NSCam::MPoint const&, NSCam::MPoint&, NSCam::MPoint&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointES6_RS4_S7_(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointES6_RS4_S7_() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)6>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh6EEEivE9isDumpImg = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::setCallback(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::CPUBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee::mName */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggee5mNameE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::~CPUBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6FactorE = NULL;

/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReadySync(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::createInstance(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe14createInstanceEiRKNS3_9UsageHintEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe14createInstanceEiRKNS3_9UsageHintEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::EnquePackage::~EnquePackage() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12EnquePackageD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>* NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::getSeqQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE11getSeqQueueIN7android2spINS3_21CaptureFeatureRequestEEENS5_19HandlerSeqConverterEEEPNS1_15SequentialQueueIT_T0_EEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvE11getSeqQueueIN7android2spINS3_21CaptureFeatureRequestEEENS5_19HandlerSeqConverterEEEPNS1_15SequentialQueueIT_T0_EEh() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::CropCalculator(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC2Ejjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorC2Ejjj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::shiftSignal(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::flush(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::eUsageMode) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1ENS3_10eUsageModeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1ENS3_10eUsageModeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpERN7android2spINS2_21CaptureFeatureRequestEEEhhNS2_9DirectionEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpERN7android2spINS2_21CaptureFeatureRequestEEEhhNS2_9DirectionEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::YUVNode(unsigned char, char const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC2EhPKciii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeC2EhPKciii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::tryGetFeatureWarning(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::BufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEEC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEEC2EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS3_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS3_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::~PluginBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setUsageHint(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setUsageHintERKNS2_19ICaptureFeaturePipe9UsageHintE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setUsageHintERKNS2_19ICaptureFeaturePipe9UsageHintE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::getIDSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE8getIDSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE8getIDSetEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isFirstFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12isFirstFrameEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12isFirstFrameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::CaptureTaskQueue(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC1Eh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC1Eh() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::makeExifFromCollectedData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter25makeExifFromCollectedDataEN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter25makeExifFromCollectedDataEN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::getIsEnable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator11getIsEnableEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator11getIsEnableEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::decNodeReference(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16decNodeReferenceEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest16decNodeReferenceEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::PluginBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::DepthNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FindPath(unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8FindPathEhh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8FindPathEhh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::connectData(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhRS4_S6_NS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhRS4_S6_NS1_14ConnectionTypeE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9SelectionEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: void std::__1::vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::__push_back_slow_path<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev(void) {
    ALOGD("_ZThn304_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_back(std::__1::function<void ()>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::updateFaceData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, std::__1::function<void (NSCam::MPoint const&, NSCam::MPoint&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper14updateFaceDataERKN7android2spINS2_21CaptureFeatureRequestEEENSt3__18functionIFvRKNS_6MPointERSD_EEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraper14updateFaceDataERKN7android2spINS2_21CaptureFeatureRequestEEENSt3__18functionIFvRKNS_6MPointERSD_EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*> >::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE10push_frontEOS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE0_NS1_8IIBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovCalculator(std::__1::vector<int, std::__1::allocator<int> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC2ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC2ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::handleData<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10handleDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10handleDataIN7android2spINS3_21CaptureFeatureRequestEEEEEihRKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::refineBoundary(NSCam::MSize const&, NSCam::MRect&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14refineBoundaryERKNS_5MSizeERNS_5MRectE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14refineBoundaryERKNS_5MSizeERNS_5MRectE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__117bad_function_callE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::TuningBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getRequestNo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getRequestNoEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getRequestNoEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::waitInference() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13waitInferenceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13waitInferenceEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::findRequest(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3RawEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3RawEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RAWNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::updatePropValues() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE16updatePropValuesEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE16updatePropValuesEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setSensorIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode14setSensorIndexEii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode14setSensorIndexEii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::dumpCamThreadInfo(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::doExifUpdate(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter12doExifUpdateEN7android2spINS2_21CaptureFeatureRequestEEERNSt3__13mapIjjNS8_4lessIjEENS8_9allocatorINS8_4pairIKjjEEEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter12doExifUpdateEN7android2spINS2_21CaptureFeatureRequestEEERNSt3__13mapIjjNS8_4lessIjEENS8_9allocatorINS8_4pairIKjjEEEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initAllocatorParam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::setStatus(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setStatusENS3_6StatusE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9setStatusENS3_6StatusE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::~EmptyBoost() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__deferred_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::diff(timespec const&, timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection::Token>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9Selection5TokenEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::future<int> std::__1::__make_deferred_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >(std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_(void) {
    ALOGD("_ZNSt3__127__make_deferred_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEEENS_6futureIT_EEOT0_() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)15>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh15EEEivE9isDumpImg = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::~PerfClientVendor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher*, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::freeFromPool_locked(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE19freeFromPool_lockedEN7android2spIS4_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE19freeFromPool_lockedEN7android2spIS4_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getNow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::CaptureFeatureRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<MTKFDContainerInfo, std::__1::allocator<MTKFDContainerInfo> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI18MTKFDContainerInfoNS_9allocatorIS1_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorI18MTKFDContainerInfoNS_9allocatorIS1_EEE8__appendEm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::enablePerf(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor10enablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor10enablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE4sizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE4sizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::waitFlush(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE9waitFlushEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE9waitFlushEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::BokehNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::finishPath_Locked(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishPath_LockedEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17finishPath_LockedEh() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSQ_IJEEEEEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSQ_IJEEEEEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::enqueISP(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8enqueISPERN7android2spINS2_21CaptureFeatureRequestEEERNSt3__110shared_ptrINS3_11P2EnqueDataEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8enqueISPERN7android2spINS2_21CaptureFeatureRequestEEERNSt3__110shared_ptrINS3_11P2EnqueDataEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::signalEnque() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::reorder(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7reorderERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEESA_m(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7reorderERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEESA_m() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::createHandle(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12createHandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12createHandleERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::acquireBuffer(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13acquireBufferEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13acquireBufferEh() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: std::__1::shared_ptr<char const>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIKcED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIKcED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onNextCaptureERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onNextCaptureERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::add(unsigned char, std::__1::vector<int, std::__1::allocator<int> > const&, std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher3addEhRKNSt3__16vectorIiNS5_9allocatorIiEEEESB_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher3addEhRKNSt3__16vectorIiNS5_9allocatorIiEEEESB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::enque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5enqueIN7android2spINS3_21CaptureFeatureRequestEEEEEihRT_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5enqueIN7android2spINS3_21CaptureFeatureRequestEEEEEihRT_() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_TEXTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool16USAGE_HW_TEXTUREE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getTimestamp() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_DepthInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_DepthInterfaceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_DepthInterfaceEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getTimeSpec() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::~PowerHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE88_NS1_8NotifyCBE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::~SwnrProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::uninitLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper10uninitLockEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper10uninitLockEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)8>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh8EEEivE9isDumpImg = NULL;

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> >::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS3_9NSCapture18TuningBufferHandleEEEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS3_9NSCapture18TuningBufferHandleEEEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::connectData(unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE11connectDataEhhPS4_NS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE11connectDataEhhPS4_NS1_14ConnectionTypeE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_YuvInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_YuvInterfaceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture35_CreatePluginInterface_YuvInterfaceEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::queryEisRegion(NSCam::IMetadata const*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::eis_region&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14queryEisRegionEPKNS_9IMetadataERNS3_10eis_regionE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator14queryEisRegionEPKNS_9IMetadataERNS3_10eis_regionE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IInterface>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE10IInterfaceEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE10IInterfaceEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getGraphicBufferAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void) {
    ALOGD("_ZTv0_n104_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAnyQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getParameter(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getParameterEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getParameterEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::prepareNodeSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18prepareNodeSettingEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18prepareNodeSettingEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::incExtThreadDependency() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)9>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh9EEEivE9isDumpImg = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getNextNodes(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getNextNodesEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getNextNodesEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest5clearEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15onRequestFinishERKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15onRequestFinishERKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::getIDSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE8getIDSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE8getIDSetEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::~PluginSmartBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::unlockNativeBuffer(AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::stop(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE7RequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9IProviderEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9IProviderEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::isReady() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE7isReadyEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE7isReadyEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setDelayInference(std::__1::function<void ()>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17setDelayInferenceERNSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17setDelayInferenceERNSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEEE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::getIsForceByPassFlow() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20getIsForceByPassFlowEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20getIsForceByPassFlowEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_front(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE10setWaitHubEPNS1_7WaitHubE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE10setWaitHubEPNS1_7WaitHubE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::RequestCallback>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE15RequestCallbackEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE15RequestCallbackEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setNodeSignal(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13setNodeSignalERKN7android2spINS2_10NodeSignalEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13setNodeSignalERKN7android2spINS2_10NodeSignalEEE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::__find_equal<int>(std::__1::__tree_const_iterator<int, std::__1::__tree_node<int, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EElEERPNS_15__tree_end_nodeISA_EESB_RKT_(void) {
    ALOGD("_ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EElEERPNS_15__tree_end_nodeISA_EESB_RKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::enableBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11enableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11enableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dumpData(char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataEPKcjS5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dumpDataEPKcjS5_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeID2Name(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11NodeID2NameEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11NodeID2NameEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::triggerSignal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::acquire() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7acquireEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle7acquireEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::registerTimeoutCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::~PerfBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::CaptureBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolC2EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5enqueEN7android2spINS2_22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::collectPreBSSExifData(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, BSS_PARAM_STRUCT&, BSS_INPUT_DATA_G&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21collectPreBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_G(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21collectPreBSSExifDataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_G() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::processNextCapture(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::waitIdle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__117bad_function_callE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEEEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::updateBssProcInfo(NSCam::IImageBuffer*, BSS_PARAM_STRUCT&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17updateBssProcInfoEPNS_12IImageBufferER16BSS_PARAM_STRUCTi(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17updateBssProcInfoEPNS_12IImageBufferER16BSS_PARAM_STRUCTi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::getStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode9getStatusERNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::~CaptureFeatureRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::unpackRawBuffer(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15unpackRawBufferEPNS_12IImageBufferES5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15unpackRawBufferEPNS_12IImageBufferES5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getIsSupportedInputBufferFmt(unsigned char, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher28getIsSupportedInputBufferFmtEhi(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher28getIsSupportedInputBufferFmtEhi() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection::Token>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9Selection5TokenEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::~CamGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::FDContainerWraper(NSCamHW::simplifiedMatrix const&, android::sp<NSCam::IFDContainer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC2ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC2ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::~CaptureFeatureDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher*, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::create(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6createEPKcj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6createEPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::RequestCallback>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE15RequestCallbackEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE15RequestCallbackEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setBooster(std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster, std::__1::function<void (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster*)> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10setBoosterENSt3__110unique_ptrINS2_8IBoosterENS4_8functionIFvPS6_EEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10setBoosterENSt3__110unique_ptrINS2_8IBoosterENS4_8functionIFvPS6_EEEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS6_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::transform(int, NSCam::MPoint const&, NSCam::MPoint&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointERS4_(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator9transformEiRKNS_6MPointERS4_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*> >::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getElapsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::setCallback(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE(void) {
    ALOGD("_ZTv0_n64_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11setCallbackEN7android2spINS2_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::formatConverter(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper15formatConverterEPNS_12IImageBufferES5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper15formatConverterEPNS_12IImageBufferES5_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE = NULL;

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB9getStatusEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB9getStatusEv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, std::__1::future<void> >, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, std::__1::future<void> >, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, std::__1::future<void> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, std::__1::future<void> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhNS_6futureIvEEEENS_19__map_value_compareIhS4_NS_4lessIhEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhNS_6futureIvEEEENS_19__map_value_compareIhS4_NS_4lessIhEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_RENDER */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15USAGE_HW_RENDERE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::acquireRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::isReady() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE7isReadyEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE7isReadyEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEEE = NULL;

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::disableBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12disableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper12disableBoostERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImgSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::findRequest(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_10MultiFrameEE7RequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setLogLevel(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode11setLogLevelEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode11setLogLevelEj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onAbort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::calMotionVector(NSCam::IMetadata*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15calMotionVectorEPNS_9IMetadataEi(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15calMotionVectorEPNS_9IMetadataEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::disableBoost() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12disableBoostEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12disableBoostEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5startEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE5startEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::dumpRequest(android::Printer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11dumpRequestERN7android7PrinterE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe11dumpRequestERN7android7PrinterE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::addTask(std::__1::function<void ()>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue7addTaskERNSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueue7addTaskERNSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isTargetBuffer(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14isTargetBufferEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14isTargetBufferEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::FDNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IMetadata>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam9IMetadataEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam9IMetadataEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::acquireRequest() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv(void) {
    ALOGD("_ZTv0_n88_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14acquireRequestEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onAbort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode7onAbortERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::getName() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7getNameEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::getIndexSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE11getIndexSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE11getIndexSetEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::MDPNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::RequestCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin14PipelinePluginINS0_6FusionEE15RequestCallbackE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getFrameIndex() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameIndexEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameIndexEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::FDContainerWraper(NSCamHW::simplifiedMatrix const&, android::sp<NSCam::IFDContainer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC1ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperC1ERKN7NSCamHW16simplifiedMatrixERN7android2spINS_12IFDContainerEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::~FDContainerWraper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::RequestCallback>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE15RequestCallbackEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE15RequestCallbackEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::PowerHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE = NULL;

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_back(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::eUsageMode) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2ENS3_10eUsageModeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2ENS3_10eUsageModeE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::waitSync(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8waitSyncEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8waitSyncEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onP2SuccessCallback(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19onP2SuccessCallbackERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode19onP2SuccessCallbackERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::TuningBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolC2EPKc() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleENS_9allocatorIS5_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW_AND_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15USAGE_HW_AND_SWE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::~CPUBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9SelectionEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE0_NS1_12BufferHandleINS1_17ImageBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isBoostEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isBoostEnableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13isBoostEnableEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAnyQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub>(std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee>::make_shared<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe*>(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEE11make_sharedIJPS5_EEES7_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeEE11make_sharedIJPS5_EEES7_DpOT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7requestEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FeatID2Name(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11FeatID2NameEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11FeatID2NameEh() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::flush() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv(void) {
    ALOGD("_ZTv0_n72_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5flushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::detachResourceItems() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest19detachResourceItemsEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest19detachResourceItemsEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::RequestCallback>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE15RequestCallbackEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE15RequestCallbackEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::waitExecuteDone() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor15waitExecuteDoneEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessor15waitExecuteDoneEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovCalculator(std::__1::vector<int, std::__1::allocator<int> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC1ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorC1ERKNSt3__16vectorIiNS4_9allocatorIiEEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::acquireMetadata(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15acquireMetadataEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15acquireMetadataEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dumpNamedData(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, NSCam::IImageBuffer*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13dumpNamedDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode13dumpNamedDataERN7android2spINS2_21CaptureFeatureRequestEEEPNS_12IImageBufferEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addPath(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest7addPathEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest7addPathEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::~PluginBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::CaptureFeaturePipe(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC1EiRKNS2_19ICaptureFeaturePipe9UsageHintEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC1EiRKNS2_19ICaptureFeaturePipe9UsageHintEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7disableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7disableEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::deque(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5dequeERS5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5dequeERS5_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)15>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh15EEEivE9isDumpImg = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool9doReleaseEPNS2_18TuningBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool9doReleaseEPNS2_18TuningBufferHandleE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::CaptureTaskQueue(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC2Eh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueC2Eh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::createPluginRequestPtr(unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEEEEERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEEEEERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toNativeFormat(android_pixel_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setTaskQueue(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setTaskQueueERKN7android2spINS2_16CaptureTaskQueueEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode12setTaskQueueERKN7android2spINS2_16CaptureTaskQueueEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addNodeIO(unsigned char, android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>&, android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>&, android::Vector<unsigned char>&, android::Vector<unsigned char>&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addNodeIOEhRN7android6VectorINS3_7SrcDataEEERNS5_INS3_7DstDataEEERNS5_IhEESD_i(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addNodeIOEhRN7android6VectorINS3_7SrcDataEEERNS5_INS3_7DstDataEEERNS5_IhEESD_i() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5clearEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::findRequest(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3YuvEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11findRequestERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_3YuvEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addBuffer(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addBufferEhN7android2spINS2_12BufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest9addBufferEhN7android2spINS2_12BufferHandleEEE() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNSA_12IImageBufferEPNSA_9IMetadataEN7android2spINSD_17CaptureBufferPoolEEEEJPSE_RSG_RSI_RSM_EEEJEEEEEFvvEPSV_EEEEEPvS10_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNSA_12IImageBufferEPNSA_9IMetadataEN7android2spINSD_17CaptureBufferPoolEEEEJPSE_RSG_RSI_RSM_EEEJEEEEEFvvEPSV_EEEEEPvS10_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawCallback> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11RawCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7disableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7disableEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::~PluginMetadataHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAllQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::CaptureFeatureNode(unsigned char, char const*, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeC2EhPKcjii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeC2EhPKcjii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::FlushWrapper(NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperC1EPS5_RKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperC1EPS5_RKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEEEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe8onUninitEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEEaSERKS5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_9NSCapture18TuningBufferHandleEEaSERKS5_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestHolder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13RequestHolderE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getIsSupportedOutputBufferFmt(unsigned char, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher29getIsSupportedOutputBufferFmtEhi(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher29getIsSupportedOutputBufferFmtEhi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::closePerfLib() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor12closePerfLibEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor12closePerfLibEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::getFovInfo(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator::FovInfo&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator10getFovInfoEiRNS3_7FovInfoE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculator10getFovInfoEiRNS3_7FovInfoE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEEaSEPS5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_back(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump(android::Printer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpERN7android7PrinterE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpERN7android7PrinterE() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)8>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh8EEEivE9isDumpImg = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::~EmptyBoost() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE4sizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE4sizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueE = NULL;

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest6unlockEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest6unlockEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE0_NS1_8IIBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::wp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>::~wp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev(void) {
    ALOGD("_ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::gvCollectedData */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter15gvCollectedDataE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addFeature(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10addFeatureEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10addFeatureEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::startTimer(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10startTimerEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10startTimerEh() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IInterface>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE10IInterfaceEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE10IInterfaceEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterfaceE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE0_NS2_12BufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7releaseEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7releaseEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo const> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::NegotiatedInfo>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIhJNS_4pairIhS8_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhKN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher14NegotiatedInfoEEENS_19__map_value_compareIhSA_NS_4lessIhEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIhJNS_4pairIhS8_EEEEENSJ_INS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_compareEPKvSE_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_compareEPKvSE_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int>(std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::dumpLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8dumpLockEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8dumpLockEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isLastFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isLastFrameEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11isLastFrameEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEEE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::imgCopy(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility7imgCopyEPNS_12IImageBufferES5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility7imgCopyEPNS_12IImageBufferES5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessIdleCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster6enableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBooster6enableEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE = NULL;

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture22ICaptureFeatureRequestEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::flushQueues() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::EmptyBoost(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::gvReqMapping */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter12gvReqMappingE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::GetPath(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7GetPathEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7GetPathEh() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev() called");
    return 0;
}

/* Demangled: std::__1::packaged_task<void ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113packaged_taskIFvvEEclEv(void) {
    ALOGD("_ZNSt3__113packaged_taskIFvvEEclEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::~IBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::hasDelayInference() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17hasDelayInferenceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest17hasDelayInferenceEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::getNvramChunk(unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13getNvramChunkEPm(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13getNvramChunkEPm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::~PowerHalWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapperD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::ExifWriter(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onRequestProcess(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::getStatus(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getStatusENS3_6StatusE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal9getStatusENS3_6StatusE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::PluginMetadataHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC2EN7android2spINS2_25CaptureFeatureNodeRequestEEEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::createImageTransformPtr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility23createImageTransformPtrEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility23createImageTransformPtrEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::~SwnrProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase-in-NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE0_NS1_19SequentialQueueBaseE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::makePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::triggerDryRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getImageFormat(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getImageFormatEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getImageFormatEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setCrossRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15setCrossRequestEN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15setCrossRequestEN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIhE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)11>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh11EEEivE9isDumpImg = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster6enableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster6enableEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::RootNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAnyQueueReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::loadPerfAPI() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11loadPerfAPIEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11loadPerfAPIEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::deleteParameter(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15deleteParameterEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest15deleteParameterEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addSource(unsigned char, unsigned char, unsigned int, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addSourceEhhjNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9addSourceEhhjNS_5MSizeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::deque(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5dequeERS5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE5dequeERS5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleE0_NS1_12BufferHandleINS2_18TuningBufferHandleEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE = NULL;

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)17>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh17EEEivE9isDumpImg = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getFrameCount() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameCountEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13getFrameCountEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::updateMetadata(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, unsigned long, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14updateMetadataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEEmh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14updateMetadataERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEEmh() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*>&>::push_front(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE10push_frontERKS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::CaptureFeatureInference() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::init(android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool4initEN7android6VectorINS2_12BufferConfigEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool4initEN7android6VectorINS2_12BufferConfigEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setExtParam(NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::onStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onStartEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandleENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::evaluate(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor>, NSCam::MSize const&, NSCam::MRect&, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateEN7android2spINS3_6FactorEEERKNS_5MSizeERNS_5MRectEii(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateEN7android2spINS3_6FactorEEERKNS_5MSizeERNS_5MRectEii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2ANode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeC1EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onRequestFinish(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE = NULL;

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::P2Operator>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__112future_errorE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7releaseEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7releaseEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less::operator()(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEEE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onRequestProcess(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode16onRequestProcessEhRN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TypeID2Name(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11TypeID2NameEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11TypeID2NameEh() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::retrieveGmvInfo(NSCam::IMetadata*, int&, int&, NSCam::MSize&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15retrieveGmvInfoEPNS_9IMetadataERiS6_RNS_5MSizeE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15retrieveGmvInfoEPNS_9IMetadataERiS6_RNS_5MSizeE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::__move_to(std::__1::__packaged_task_base<void ()>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::~CaptureBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::determine(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9determineEN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData9determineEN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onData(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode6onDataEhRKN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::~PerfBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::abort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::createPluginRequestPtr(unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEEEEERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility22createPluginRequestPtrEhRNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEEEEERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_10BufferPoolINS1_17ImageBufferHandleEEE = NULL;

/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIhE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::PipeBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue>, unsigned int, NSCam::MSize&, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC1EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC1EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD2Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump(char const*, unsigned char, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchPNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11YuvCallbackE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getTuningFromNvram(unsigned int, unsigned int&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18getTuningFromNvramEjRjiii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18getTuningFromNvramEjRjiii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4initEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS3_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS3_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::~ExifWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::lock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4lockEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4lockEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::__emplace_unique_key_args<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>, std::__1::tuple<> >(std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::add(android::sp<NSCam::IImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::processNextCapture(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler::~CaptureFeatureDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureDataHandlerE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9IProviderEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9IProviderEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::registerEnqueCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::dumpToFile(NSCam::IImageBuffer*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10dumpToFileEPNS_12IImageBufferEPKcz(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10dumpToFileEPNS_12IImageBufferEPKcz() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::doBss(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode5doBssERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode5doBssERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData4dumpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData4dumpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::addDebugBuffer(std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestHolder>&, std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14addDebugBufferERNSt3__110shared_ptrINS3_13RequestHolderEEERNS5_INS3_11P2EnqueDataEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode14addDebugBufferERNSt3__110shared_ptrINS3_13RequestHolderEEERNS5_INS3_11P2EnqueDataEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9IProviderEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEE9IProviderEED2Ev() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::getInstance()::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper11getInstanceEvE9singleton = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::PluginMetadataHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleC1EN7android2spINS2_25CaptureFeatureNodeRequestEEEh() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getMetadata(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11getMetadataEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11getMetadataEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::evaluate(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference8evaluateEN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInference8evaluateEN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::tagToName(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter9tagToNameEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter9tagToNameEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getFrameNo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10getFrameNoEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10getFrameNoEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::copyBuffers(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::EnquePackage*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11copyBuffersEPNS3_12EnquePackageE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11copyBuffersEPNS3_12EnquePackageE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvNodeHelper::getImageFormat(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> const&, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getImageFormatERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13YuvNodeHelper14getImageFormatERKN7android2spINS2_25CaptureFeatureNodeRequestEEEhNS2_9DirectionE() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18TuningBufferHandleEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3YuvEEEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPoolE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::MetadataItem> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12MetadataItemEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::PipeBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue>, unsigned int, NSCam::MSize&, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC2EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleC2EN7android2spINS2_17CaptureBufferPoolEEENS5_INS2_16CaptureTaskQueueEEEjRNS_5MSizeESB_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::RequestCallback>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE15RequestCallbackEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE15RequestCallbackEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::setCropCalculator(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode17setCropCalculatorERKN7android2spINS2_14CropCalculatorEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode17setCropCalculatorERKN7android2spINS2_14CropCalculatorEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::RequestPair>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::RequestPair> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode11RequestPairEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::SwnrProcessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::tryGetFeatureWarning(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::ProviderInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertIdleCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: android::wp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>::~wp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev(void) {
    ALOGD("_ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YuvInterface> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12YuvInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8Watchdog8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8Watchdog8onNotifyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::getIsForceByPassFlow() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20getIsForceByPassFlowEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility20getIsForceByPassFlowEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::acquire(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7acquireEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandle7acquireEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::CPUBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::releaseMetadata(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15releaseMetadataEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest15releaseMetadataEh() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::~CamPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS1_9NSCapture18CaptureFeatureNodeEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RAWNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::~MultiFrameNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::processNextCapture(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility18processNextCaptureERKN7android2spINS2_21CaptureFeatureRequestEEEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)11>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh11EEEivE9isDumpImg = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::set<int, std::__1::less<int>, std::__1::allocator<int> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__13setIiNS2_4lessIiEENS2_9allocatorIiEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe4initEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIhE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::FDContainerWraper::~FDContainerWraper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode17FDContainerWraperD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::ProviderInfo>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStop(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::DstData> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7DstDataEEE = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*> >::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackENS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getSensorRawFmt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15getSensorRawFmtEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15getSensorRawFmtEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::~IHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::~SequentialHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS1_9NSCapture25CaptureFeatureDataHandlerEvED0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_front(std::__1::function<void ()>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::abort(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZTv0_n56_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe5abortEN7android2spINS2_22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginHelper::CreateMetadata(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper14CreateMetadataEN7android2spINS2_25CaptureFeatureNodeRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12PluginHelper14CreateMetadataEN7android2spINS2_25CaptureFeatureNodeRequestEEEh() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperE0_NS1_8NotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17CaptureBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE576_NS2_19ICaptureFeaturePipeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::deque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5dequeERS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEE5dequeERS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE9addToPoolERKN7android2spIS4_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE9addToPoolERKN7android2spIS4_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::decBufferRef(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12decBufferRefEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12decBufferRefEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor::isEqual(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor7isEqualEN7android2spIS4_EE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6Factor7isEqualEN7android2spIS4_EE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*>&>::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_MultiFrameInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture42_CreatePluginInterface_MultiFrameInterfaceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture42_CreatePluginInterface_MultiFrameInterfaceEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getSupportedOutputBufferFmt(unsigned char, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27getSupportedOutputBufferFmtEhRi(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher27getSupportedOutputBufferFmtEhRi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setTimestamp(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SizeID2Name(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11SizeID2NameEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11SizeID2NameEh() called");
    return 0;
}

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImageBufferPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9IProviderEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9IProviderEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CPUBooster::~CPUBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10CPUBoosterD2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<std::__1::packaged_task<void ()> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrINS_13packaged_taskIFvvEEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrINS_13packaged_taskIFvvEEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::RequestPair>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE7destroyEPNS_11__tree_nodeIS9_S2_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::__tree_node<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo> > >::__emplace_unique_key_args<unsigned char, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo> >(unsigned char const&, std::__1::pair<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::ProviderInfo>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode12ProviderInfoEEENS_19__map_value_compareIhS8_NS_4lessIhEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIhJNS_4pairIhS7_EEEEENSH_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onAborted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode9onAbortedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_SWE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeoutNs() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEERNS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::clearSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearSignalENS3_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal11clearSignalENS3_6SignalE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9IProviderEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5DepthEE9IProviderEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getNodeRequest(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getNodeRequestEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14getNodeRequestEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4stopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE4stopEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::CaptureFeatureInferenceData() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceDataC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::_CreatePluginInterface_BokehInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_BokehInterfaceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture37_CreatePluginInterface_BokehInterfaceEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE0_NS1_8NotifyCBE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculatorE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE7RequestEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::disconnect() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10disconnectEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE10disconnectEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::PerfBooster(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::copyImageBuffer(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15copyImageBufferEPNS_12IImageBufferES4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15copyImageBufferEPNS_12IImageBufferES4_() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataProvider>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17IMetadataProviderEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam17IMetadataProviderEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE6uninitEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthInterface::offer(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9SelectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14DepthInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5DepthEE9SelectionE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginBufferHandle::acquire(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7acquireEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18PluginBufferHandle7acquireEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNodeUtility::dump(NSCam::IImageBuffer*, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16DepthNodeUtility4dumpEPNS_12IImageBufferEPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, android_pixel_format_t, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::evaluate(NSCam::MSize const&, NSCam::MSize const&, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateERKNS_5MSizeES6_RNS_5MRectE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator8evaluateERKNS_5MSizeES6_RNS_5MRectE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RequestCallback>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15RequestCallbackEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15RequestCallbackEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::SyncCounterCB(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBC1EPKcRKN7android2spINS1_14CountDownLatchEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBC1EPKcRKN7android2spINS1_14CountDownLatchEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::dump(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle4dumpERNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle::~PluginMetadataHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::onStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6onStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE6onStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::onUpdate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onUpdateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onUpdateEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::ExifWriter(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterC2EPKc() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBuffer(AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::appendBSSInput(android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >&, BSS_INPUT_DATA_G&, std::__1::vector<MTKFDContainerInfo, std::__1::allocator<MTKFDContainerInfo> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14appendBSSInputERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_INPUT_DATA_GRNSt3__16vectorI18MTKFDContainerInfoNSD_9allocatorISF_EEEE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode14appendBSSInputERN7android6VectorINS4_2spINS2_21CaptureFeatureRequestEEEEER16BSS_INPUT_DATA_GRNSt3__16vectorI18MTKFDContainerInfoNSD_9allocatorISF_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::thread, std::__1::allocator<std::__1::thread> >::__push_back_slow_path<std::__1::thread>(std::__1::thread&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE0_N7android6ThreadE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::~EmptyBoost() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoostD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11getInstanceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11getInstanceEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS8_12basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEENSD_ISF_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS8_12basic_stringIcNS8_11char_traitsIcEENS8_9allocatorIcEEEENSD_ISF_EEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::createInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBooster14createInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBooster14createInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::~CaptureFeaturePipe() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::dump(char const*, unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::Direction) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchhNS2_9DirectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest4dumpEPKchhNS2_9DirectionE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5startEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE5startEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::getForceBss(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode11getForceBssEPvm(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode11getForceBssEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::preprocess(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode10preprocessERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode10preprocessERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onRequestFinish(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode15onRequestFinishERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode8onUninitEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureTaskQueue::~CaptureTaskQueue() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16CaptureTaskQueueD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::FusionNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::getName() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7getNameEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBooster7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode6onInitEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::setFeatures(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11setFeaturesEm(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest11setFeaturesEm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestPack>::getIndexSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE11getIndexSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7P2ANode11RequestPackEE11getIndexSetEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher*, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacherENS_14default_deleteIS6_EENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool7destroyERN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool7destroyERN7android2spIS3_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE0_NS1_8IIBufferE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)17>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh17EEEivE9isDumpImg = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE5enqueERKS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE5enqueERKS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode7processERNSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5DepthEE9IProviderEEERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode6onInitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::getName() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7getNameEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost7getNameEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::addWaitQueue(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehInterface::offer(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9SelectionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14BokehInterface5offerERNS_16NSPipelinePlugin14PipelinePluginINS4_5BokehEE9SelectionE() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::gLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter5gLockE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::addDataItem(unsigned char, unsigned char, unsigned char, android::BitSet64) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData11addDataItemEhhhN7android8BitSet64E(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData11addDataItemEhhhN7android8BitSet64E() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::~FDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::MultiFrameNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE10setWaitHubEPNS1_7WaitHubE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueINS1_9NSCapture7MDPNode11RequestPackEE10setWaitHubEPNS1_7WaitHubE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IBooster::~IBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8IBoosterD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addParameter(unsigned char, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12addParameterEhi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12addParameterEhi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::~YUVNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__112future_errorE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::dumpBssInputData2File(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, BSS_PARAM_STRUCT&, BSS_INPUT_DATA_G&, BSS_OUTPUT_DATA&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21dumpBssInputData2FileERN7android2spINS2_21CaptureFeatureRequestEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_GR15BSS_OUTPUT_DATA(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode21dumpBssInputData2FileERN7android2spINS2_21CaptureFeatureRequestEEER16BSS_PARAM_STRUCTR16BSS_INPUT_DATA_GR15BSS_OUTPUT_DATA() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS5_10MultiFrameEE9IProviderEEEEEEE = NULL;

/* Demangled: std::__1::function<void (NSCam::IImageBuffer*)>::~function() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18functionIFvPN5NSCam12IImageBufferEEED2Ev(void) {
    ALOGD("_ZNSt3__18functionIFvPN5NSCam12IImageBufferEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::ProviderPair>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12ProviderPairEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Demangled: std::__1::deque<timespec, std::__1::allocator<timespec> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEEE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::disablePerf(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11disablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor11disablePerfERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::lockNativeBuffer(AHardwareBuffer*, unsigned long, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::onRequestFinish(unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode15onRequestFinishEhRN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCBE0_NS1_8StatusCBE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhhEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::setGrallocExtraParam(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIhE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInference::CaptureFeatureInference() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23CaptureFeatureInferenceC2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8onUninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onNextCapture(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode13onNextCaptureENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_5BokehEE7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer_SPTR() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::createImageBuffer(android::sp<NSCam::IImageBufferHeap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest::releaseBuffer(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13releaseBufferEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequest13releaseBufferEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::getSize(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7getSizeEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7getSizeEh() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_back(std::__1::function<void ()>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE8WatchdogD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::DepthNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::PluginSmartBufferHandle(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC1EPKcRKN7android2spINS1_8IIBufferEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleC1EPKcRKN7android2spINS1_8IIBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginSmartBufferHandle::~PluginSmartBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture23PluginSmartBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE12FlushWrapperD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::EmptyBoost::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost6enableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10EmptyBoost6enableEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::RequestPair>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode11RequestPairEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::P2EnqueData> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode11P2EnqueDataENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_10BufferPoolINS1_19GraphicBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv(void) {
    ALOGD("_ZTv0_n80_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe9getStatusEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::~SequentialQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfBooster::~PerfBooster() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture11PerfBoosterD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, int>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, int>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::MDPNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC1EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeC1EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEENS1_17SequentialHandlerINS5_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode>::connectData(unsigned char, unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode&, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_S6_NS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS1_9NSCapture18CaptureFeatureNodeEE11connectDataEhhRS4_S6_NS1_14ConnectionTypeE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::SharedData> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode10SharedDataENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: guard variable for int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)13>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh13EEEivE9isDumpImg = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Selection>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_6FusionEE9SelectionEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE0_NS2_18CaptureFeatureNodeE = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*>&>::push_back(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::RequestPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode11RequestPackERNS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::~ExifWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriterD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ExifWriter::makeExifFromCollectedData_multiframe_mapping(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter44makeExifFromCollectedData_multiframe_mappingEN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10ExifWriter44makeExifFromCollectedData_multiframe_mappingEN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7recycleEPS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE7recycleEPS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS1_9NSCapture21CaptureFeatureRequestEEEED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameInterface> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19MultiFrameInterfaceENS_9allocatorIS5_EEEE = NULL;

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<std::__1::__bind<int (NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor::*)(NSCam::IImageBuffer*, NSCam::IMetadata*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>), NSCam::NSCamFeature::NSFeaturePipe::NSCapture::SwnrProcessor*, NSCam::IImageBuffer*&, NSCam::IMetadata*&, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool>&>> >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcINS_6__bindIMN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13SwnrProcessorEFiPNS3_12IImageBufferEPNS3_9IMetadataEN7android2spINS6_17CaptureBufferPoolEEEEJPS7_RS9_RSB_RSF_EEEJEEEE9__executeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNodeUtility::imgCopy(NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility7imgCopyEPNS_12IImageBufferES5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16BokehNodeUtility7imgCopyEPNS_12IImageBufferES5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::BokehNode(unsigned char, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC2EhPKcii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeC2EhPKcii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc() called");
    return 0;
}

/* Exported Object: int NSCam::NSCamFeature::NSFeaturePipe::NSCapture::getIsDumpImage<(unsigned char)10>()::isDumpImg */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14getIsDumpImageILh10EEEivE9isDumpImg = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::update(timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::isPerfLibEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor15isPerfLibEnableEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendor15isPerfLibEnableEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferHandle>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9SelectionEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::MyDebuggee> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe10MyDebuggeeENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::SyncCounterCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE13SyncCounterCB8onNotifyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FovCalculator>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture13FovCalculatorEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE0_NS1_8NotifyCBE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool4initEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPool4initEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::Factor>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6FactorEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator6FactorEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PluginMetadataHandle> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture20PluginMetadataHandleENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::~BokehNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_9NSCapture18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNodeRequest> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture25CaptureFeatureNodeRequestEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RawInterface> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12RawInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEEE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::lock(unsigned long, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::allocate(unsigned int, unsigned int, android_pixel_format_t, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm() called");
    return 0;
}

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::~CaptureFeatureRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::NegotiatedCacher::getSupportedInputBufferFmt(unsigned char, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher26getSupportedInputBufferFmtEhRi(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode16NegotiatedCacher26getSupportedInputBufferFmtEhRi() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::~MDPNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNodeD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::StatusCB>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_front(std::__1::function<void ()>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::addBufferItem(unsigned char, unsigned char, NSCam::MSize&, unsigned int, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13addBufferItemEhhRNS_5MSizeEjS5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest13addBufferItemEhhRNS_5MSizeEjS5_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData::SrcData>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture27CaptureFeatureInferenceData7SrcDataEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::~RootNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::~RAWNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::RequestHolder>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13RequestHolderEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13RequestHolderEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::~CamNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::loadData(char*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPcmPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8loadDataEPcmPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::~PipeBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEENS_9allocatorIS8_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNodeE = NULL;

/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::~DepthNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNodeD0Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned char, unsigned char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIhhEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onCompleted(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::Request>, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi(void) {
    ALOGD("_ZThn856_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11onCompletedENSt3__110shared_ptrINS_16NSPipelinePlugin14PipelinePluginINS6_6FusionEE7RequestEEEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::RequestPair>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode11RequestPairEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MDPNode::BufferItem>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7MDPNode10BufferItemEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection::Token>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_3RawEE9Selection5TokenEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::isReadyFor(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10isReadyForEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10isReadyForEh() called");
    return 0;
}

/* Demangled: void std::__1::__sift_down<NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >(std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>, NSCam::NSCamFeature::NSFeaturePipe::SequentialQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>, NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler, void>::HandlerSeqConverter>::DataGreater&, std::__1::iterator_traits<std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*> >::difference_type, std::__1::__wrap_iter<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111__sift_downIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeESK_(void) {
    ALOGD("_ZNSt3__111__sift_downIRN5NSCam12NSCamFeature13NSFeaturePipe15SequentialQueueIN7android2spINS3_9NSCapture21CaptureFeatureRequestEEENS3_17SequentialHandlerINS7_25CaptureFeatureDataHandlerEvE19HandlerSeqConverterEE11DataGreaterENS_11__wrap_iterIPS9_EEEEvT0_SK_T_NS_15iterator_traitsISK_E15difference_typeESK_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_10MultiFrameEE9SelectionEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::dispatch(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNode8dispatchERKN7android2spINS2_21CaptureFeatureRequestEEEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_9NSCapture18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BufferConfig>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture12BufferConfigEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::releaseRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeatureRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE(void) {
    ALOGD("_ZTv0_n96_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe14releaseRequestEN7android2spINS2_22ICaptureFeatureRequestEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE0_NS2_25CaptureFeatureDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PipeBufferHandle::getTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle12getTransformEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PipeBufferHandle12getTransformEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNode6onInitEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder, std::__1::default_delete<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderENS_14default_deleteIS6_EEEENS_9allocatorIS9_EEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZThn304_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv(void) {
    ALOGD("_ZThn304_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::updateBssIOInfo(NSCam::IImageBuffer*, BSS_INPUT_DATA_G&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15updateBssIOInfoEPNS_12IImageBufferER16BSS_INPUT_DATA_G(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode15updateBssIOInfoEPNS_12IImageBufferER16BSS_INPUT_DATA_G() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::CamNode(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEEC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEEC2EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::getExtThreadDependency() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countBackUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toStr(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::decMetadataRef(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14decMetadataRefEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest14decMetadataRefEh() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignalD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RootNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv(void) {
    ALOGD("_ZThn312_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture8RootNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionInterface> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15FusionInterfaceENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::BufferItem> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest10BufferItemEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::~FusionNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNodeD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode*> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIhPN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::CaptureFeaturePipe(int, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC2EiRKNS2_19ICaptureFeaturePipe9UsageHintEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipeC2EiRKNS2_19ICaptureFeaturePipe9UsageHintEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANodeE8_NS1_13CamThreadNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe::NSCapture::YUVNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7YUVNodeE8_NS1_7CamNodeINS2_25CaptureFeatureDataHandlerEEE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS1_9NSCapture25CaptureFeatureDataHandlerEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FDNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture6FDNode13onThreadStartEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE0_NS1_8NotifyCBE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MultiFrameNodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::DepthNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9DepthNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::onRequestProcess(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode16onRequestProcessERN7android2spINS2_21CaptureFeatureRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9IProviderEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS2_5BokehEE9IProviderEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::createResizerInstance(NSCam::IImageBuffer*, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolder21createResizerInstanceEPNS_12IImageBufferERKNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolder21createResizerInstanceEPNS_12IImageBufferERKNS_5MSizeE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CropCalculator::getFactor(NSCam::IMetadata const*, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator9getFactorEPKNS_9IMetadataES6_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14CropCalculator9getFactorEPKNS_9IMetadataES6_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PowerHalWrapper::initLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8initLockEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture15PowerHalWrapper8initLockEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::PerfClientVendor::PerfClientVendor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16PerfClientVendorC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toPixelFormat(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::IHolder::~IHolder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7IHolderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest::getImageSize(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getImageSizeEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequest12getImageSizeEh() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::BokehNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture9BokehNodeE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NSCapture::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9NSCapture16TuningBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureDataHandler>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS1_9NSCapture25CaptureFeatureDataHandlerEE4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeaturePipe::releaseNodeSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18releaseNodeSettingEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeaturePipe18releaseNodeSettingEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::setBufferPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode13setBufferPoolERKN7android2spINS2_17CaptureBufferPoolEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::RAWNode::ProviderPair> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7RAWNode12ProviderPairEEE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture21CaptureFeatureRequestEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::ICaptureFeaturePipe::UsageHint::UsageHint() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture19ICaptureFeaturePipe9UsageHintC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MetadataHandle>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture14MetadataHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::waitSignal(NSCam::NSCamFeature::NSFeaturePipe::NSCapture::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal10waitSignalENS3_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10NodeSignal10waitSignalENS3_6SignalE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::P2ANode::evaluate(unsigned char, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureInferenceData&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8evaluateEhRNS2_27CaptureFeatureInferenceDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture7P2ANode8evaluateEhRNS2_27CaptureFeatureInferenceDataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NSCapture::MultiFrameCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18MultiFrameCallbackE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureNode::~CaptureFeatureNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture18CaptureFeatureNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNodeUtility::tryGetFeatureWarning(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NSCapture::CaptureFeatureRequest>&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture17FusionNodeUtility20tryGetFeatureWarningERN7android2spINS2_21CaptureFeatureRequestEEERi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::tuple<unsigned int, unsigned int, unsigned int>, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__15tupleIJjjjEEENS_2spIN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair> > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, std::__1::__tree_node<std::__1::__value_type<void*, NSCam::NSCamFeature::NSFeaturePipe::NSCapture::FusionNode::RequestPair>, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPvN5NSCam12NSCamFeature13NSFeaturePipe9NSCapture10FusionNode11RequestPairEEENS_19__map_value_compareIS2_S9_NS_4lessIS2_EELb1EEENS_9allocatorIS9_EEE5eraseENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_S2_EElEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::__assoc_state<int>::set_value<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_front(timespec* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}
