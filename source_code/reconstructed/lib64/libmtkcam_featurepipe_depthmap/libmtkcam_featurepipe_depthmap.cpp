/*
 * Reverse-Engineered Source for: libmtkcam.featurepipe.depthmap.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_featurepipe_depthmap"

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
#include "libmtkcam_featurepipe_depthmap.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize::NodeDPEBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18DepthMapFlowOptionE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_N3D_TO_DPE_MVSV_MASK */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_N3D_TO_DPE_MVSV_MASKE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::checkToDump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::isSkipDepth(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest11isSkipDepthEN7android2spINS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest11isSkipDepthEN7android2spINS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev(void) {
    ALOGD("_ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::SEPARATE_BUFFER */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15SEPARATE_BUFFERE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::stop(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8USAGE_SWE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::update(timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_N3D_NOFEFM_RECT2 */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_P2A_TO_N3D_NOFEFM_RECT2E = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::ID2Name(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler7ID2NameENS1_14DepthMapDataIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler7ID2NameENS1_14DepthMapDataIDE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_BAYER_STANDALONE(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider39prepareQParamsTemplate_BAYER_STANDALONEEiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider39prepareQParamsTemplate_BAYER_STANDALONEEiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::prepareEnqueParams(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode18prepareEnqueParamsERN7android2spINS1_21DepthMapEffectRequestEEERNS_8NSIoPipe5NSEgn9EGNParamsINS8_9OCCConfigEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode18prepareEnqueParamsERN7android2spINS1_21DepthMapEffectRequestEEERNS_8NSIoPipe5NSEgn9EGNParamsINS8_9OCCConfigEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_FatImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize::NodeOCCBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_BAYER_NORMAL_NOFEFM(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParams_BAYER_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParams_BAYER_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev(void) {
    ALOGD("_ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::dumpSensorMapping(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17dumpSensorMappingERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17dumpSensorMappingERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::setDataFlow(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setDataFlowEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setDataFlowEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::getImageBuffer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_HWE = NULL;

/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::checkConnected(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14checkConnectedENS1_14DepthMapDataIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14checkConnectedENS1_14DepthMapDataIDE() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_SharedBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE0_NS1_8IIBufferE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_DEPTH_WRAPPER */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_GF_OUT_DEPTH_WRAPPERE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedWorkingBuffer(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::NodeBufferPoolMgr_VSDOF(std::__1::bitset<9ul>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC1ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC1ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::FatImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7recycleEPS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7recycleEPS3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareTemplateParams_Bayer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider27prepareTemplateParams_BayerEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider27prepareTemplateParams_BayerEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::parse_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail11parse_errorE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_TO_DUMP_IMG3O */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_TO_DUMP_IMG3OE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBuffer(AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::~NodeBufferSizeMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::create(char const*, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::BufProtect) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6createEPKcjNS2_10BufProtectE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6createEPKcjNS2_10BufProtectE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::dumpCamThreadInfo(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedWorkingBuffer(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_SharedBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::mDataIDToBIDMap */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode15mDataIDToBIDMapE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5enqueERKS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5enqueERKS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::debugDPEIOData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEInputData, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEOutputData) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEIODataENS2_12DPEInputDataENS2_13DPEOutputDataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEIODataENS2_12DPEInputDataENS2_13DPEOutputDataE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::DVEConfig const&>(NSCam::NSIoPipe::DVEConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_DPE_OUT_DISPARITY */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24bufIDs_DPE_OUT_DISPARITYE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_front(unsigned int* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::sync() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::NodeBufferHandler(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC2EN7android2spINS1_17BaseBufferPoolMgrEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC2EN7android2spINS1_17BaseBufferPoolMgrEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::outputExtraData(char*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15outputExtraDataEPcRN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15outputExtraDataEPcRN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::sEncoder */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread8sEncoderE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::~JpegEncodeThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE11connectDataENS3_14DepthMapDataIDES6_PS4_NS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE11connectDataENS3_14DepthMapDataIDES6_PS4_NS1_14ConnectionTypeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::erase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest::createInstance(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequest14createInstanceEjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequest14createInstanceEjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::perform3AIspTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onWMFEnqueDone(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode14onWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode14onWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::get3DNRVIPIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17get3DNRVIPIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17get3DNRVIPIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::setSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setSignalENS2_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setSignalENS2_6SignalE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_NORMAL_NOFEFM_frame0(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnqueBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::IImageBuffer*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler14getEnqueBufferENS1_19eDepthMapPipeNodeIDEiRPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler14getEnqueBufferENS1_19eDepthMapPipeNodeIDEiRPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setExpectedEndTime(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setExpectedEndTimeEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setExpectedEndTimeEj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::prepareOCCParams(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::OCC_HAL_PARAMS&, StereoHAL::OCC_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode16prepareOCCParamsERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14OCC_HAL_PARAMSERNS8_14OCC_HAL_OUTPUTE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode16prepareOCCParamsERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14OCC_HAL_PARAMSERNS8_14OCC_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::handleWMFEnqueDone(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode18handleWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEEPNS1_20EnqueCookieContainerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode18handleWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEEPNS1_20EnqueCookieContainerE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::createBufferPoolHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23createBufferPoolHandlerEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23createBufferPoolHandlerEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestMetadata(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15requestMetadataENS1_19eDepthMapPipeNodeIDEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15requestMetadataENS1_19eDepthMapPipeNodeIDEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::__push_back_slow_path<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5enqueERKS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5enqueERKS7_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::requireAlgoDataFromRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, StereoHAL::GF_HAL_IN_DATA&, StereoHAL::GF_HAL_OUT_DATA&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode26requireAlgoDataFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAERNS7_15GF_HAL_OUT_DATAEb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode26requireAlgoDataFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAERNS7_15GF_HAL_OUT_DATAEb() called");
    return 0;
}

/* Exported Object: vtable for StereoHAL::StereoDistanceUtil::DistanceCalculatorGF */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9StereoHAL18StereoDistanceUtil20DistanceCalculatorGFE = NULL;

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onRequestDepthNotReady(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe22onRequestDepthNotReadyEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe22onRequestDepthNotReadyEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapPipe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::~FatHeap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::prepareDPEEnqueConfig_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode25prepareDPEEnqueConfig_CAPEN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode25prepareDPEEnqueConfig_CAPEN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

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

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::IDualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5clearEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5clearEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::IDualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE0_NS1_8NotifyCBE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7recycleEPS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7recycleEPS3_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_FD_OUT_EXTRADATA */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_FD_OUT_EXTRADATAE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestWorkingTuningBuf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23requestWorkingTuningBufEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23requestWorkingTuningBufEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::queryBufferPoolMgr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18queryBufferPoolMgrERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_18DepthMapFlowOptionEEERNS3_INS1_17BaseBufferPoolMgrEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18queryBufferPoolMgrERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_18DepthMapFlowOptionEEERNS3_INS1_17BaseBufferPoolMgrEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame1_capture(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame1_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame1_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getBufferType(int, NSCam::NSCamFeature::NSDualFeature::BufferType&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest13getBufferTypeEiRNS1_10BufferTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest13getBufferTypeEiRNS1_10BufferTypeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame3(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame3ERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame3ERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::enque<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5enqueIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5enqueIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::wait() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toNativeFormat(android_pixel_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::stopThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::setupDPEConfigIO(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEInputData, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEOutputData, NSCam::NSIoPipe::DVEConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode16setupDPEConfigIOENS2_12DPEInputDataENS2_13DPEOutputDataERNS_8NSIoPipe9DVEConfigE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode16setupDPEConfigIOENS2_12DPEInputDataENS2_13DPEOutputDataERNS_8NSIoPipe9DVEConfigE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::getIndexSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE11getIndexSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE11getIndexSetEv() called");
    return 0;
}

/* Demangled: void nlohmann::detail::dtoa_impl::grisu2<double>(char*, int&, int&, double) */
extern "C" __attribute__((visibility("default"))) int _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_(void) {
    ALOGD("_ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub>(std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::getGraphicImageBufferPool(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25getGraphicImageBufferPoolEiNS1_19eBufferPoolScenarioE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25getGraphicImageBufferPoolEiNS1_19eBufferPoolScenarioE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareEISData(NSCam::IMetadata*&, NSCam::IMetadata*&, StereoHAL::EIS_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14prepareEISDataERPNS_9IMetadataES5_RN9StereoHAL8EIS_DATAE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14prepareEISDataERPNS_9IMetadataES5_RN9StereoHAL8EIS_DATAE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::checkAllOutputReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest19checkAllOutputReadyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest19checkAllOutputReadyEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize::NodeGFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::NodeBufferHandler(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC1EN7android2spINS1_17BaseBufferPoolMgrEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC1EN7android2spINS1_17BaseBufferPoolMgrEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::WMFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onHandleOnGoingReqDataReady(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode27onHandleOnGoingReqDataReadyEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode27onHandleOnGoingReqDataReadyEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: unsigned long std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__erase_multi<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE13__erase_multiIjEEmRKT_(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE13__erase_multiIjEEmRKT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_NORMAL_NOFEFM_frame0(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame0EiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame0EiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::registerTimeoutCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::DepthMapFlowOption_BMVSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::queryReqAttrs(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::_copyBufferIntoRequest(NSCam::IImageBuffer*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22_copyBufferIntoRequestEPNS_12IImageBufferEN7android2spINS1_21DepthMapEffectRequestEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22_copyBufferIntoRequestEPNS_12IImageBufferEN7android2spINS1_21DepthMapEffectRequestEEEi() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: vtable for StereoHAL::StereoDistanceUtil::DistanceCalculatorOCC */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9StereoHAL18StereoDistanceUtil21DistanceCalculatorOCCE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAnyQueueReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitHub */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::P2ABayerNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::copyImageBuffer(android::sp<NSCam::IImageBuffer>, android::sp<NSCam::IImageBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15copyImageBufferEN7android2spINS_12IImageBufferEEES6_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15copyImageBufferEN7android2spINS_12IImageBufferEEES6_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::debugGFParams(StereoHAL::GF_HAL_IN_DATA const&, StereoHAL::GF_HAL_OUT_DATA const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13debugGFParamsERKN9StereoHAL14GF_HAL_IN_DATAERKNS3_15GF_HAL_OUT_DATAE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13debugGFParamsERKN9StereoHAL14GF_HAL_IN_DATAERKNS3_15GF_HAL_OUT_DATAE() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthPipeLoggingSetup::mbDebugLog */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthPipeLoggingSetup10mbDebugLogE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::buildBufScenarioToTypeMap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25buildBufScenarioToTypeMapEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25buildBufScenarioToTypeMapEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::getIndexSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE11getIndexSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE11getIndexSetEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize::NodeDPEBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addExtraParam(NSCam::NSIoPipe::EPostProcCmdIndex, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DParam_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DParam_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS8_22N3D_HAL_OUTPUT_CAPTUREE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DParam_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS8_22N3D_HAL_OUTPUT_CAPTUREE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onDataSuccess(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onDataSuccessERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onDataSuccessERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::recycle(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7recycleEPNS1_18SharedBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7recycleEPNS1_18SharedBufferHandleE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::~DepthQTemplateProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DInputMeta(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DInputMetaERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAME(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DInputMetaERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAME() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::sync() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv(void) {
    ALOGD("_ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE = NULL;

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::registerEnqueCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::addQuota(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool8addQuotaEjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool8addQuotaEjj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initOCCBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initOCCBufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initOCCBufferPoolEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::config3ATuningMeta_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NS3Av3::MetaSet_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_SWE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_TEXTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool16USAGE_HW_TEXTUREE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::config3ATuningMeta(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path, NS3Av3::MetaSet_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE() called");
    return 0;
}

/* Demangled: std::__1::__tree<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::DataLess, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::destroy(std::__1::__tree_node<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::config3ATuningMeta(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path, NS3Av3::MetaSet_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::performN3DALGO_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18performN3DALGO_CAPERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18performN3DALGO_CAPERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize::NodeOCCBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame4(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame4ERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame4ERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configExternalOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::handleOWEDone(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13handleOWEDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEEPNS1_20EnqueCookieContainerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13handleOWEDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEEPNS1_20EnqueCookieContainerE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestIIBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::updatePropValues() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE16updatePropValuesEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE16updatePropValuesEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onDPEEnqueDone(NSCam::NSIoPipe::NSDpe::DVEParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14onDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14onDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18SharedBufferHandleEEaSERKS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18SharedBufferHandleEEaSERKS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThread10threadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThread10threadLoopEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::addExtraParam(unsigned int, NSCam::NSIoPipe::EPostProcCmdIndex, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addExtraParamEjNS_8NSIoPipe17EPostProcCmdIndexEPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addExtraParamEjNS_8NSIoPipe17EPostProcCmdIndexEPv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addInput(NSCam::NSIoPipe::PortID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler, void>::~SequentialHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setCrop(unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void) {
    ALOGD("_ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::performWMFOperation(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode19performWMFOperationERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode19performWMFOperationERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPENode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onErrorNotify(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onErrorNotifyERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onErrorNotifyERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setCropResize(unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareFEFMData(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>&, StereoHAL::HWFEFM_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15prepareFEFMDataERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL11HWFEFM_DATAE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15prepareFEFMDataERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL11HWFEFM_DATAE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::requireInputMetaFromRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, StereoHAL::GF_HAL_IN_DATA&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode27requireInputMetaFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode27requireInputMetaFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_INTERNAL_DMBG */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_GF_OUT_INTERNAL_DMBGE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_S7_NS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_S7_NS1_14ConnectionTypeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::FatHeap(char const*, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC2EPKcjji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC2EPKcjji() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::addDataIDToBIDMapItem(android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> >&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21addDataIDToBIDMapItemERN7android11KeyedVectorINS1_14DepthMapDataIDENS2_6VectorIiEEEES4_Pi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21addDataIDToBIDMapItemERN7android11KeyedVectorINS1_14DepthMapDataIDENS2_6VectorIiEEEES4_Pi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_BAYER_STANDALONE(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29buildQParams_BAYER_STANDALONEERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29buildQParams_BAYER_STANDALONEERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev(void) {
    ALOGD("_ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_SharedBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE0_NS1_8IIBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::dumpWaitQueueInfo(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::getIDSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8getIDSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8getIDSetEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::makeExifHeader(unsigned int, unsigned int, unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14makeExifHeaderEjjPhPm(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14makeExifHeaderEjjPhPm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::onDumpBIDToName(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode15onDumpBIDToNameEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode15onDumpBIDToNameEi() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_YUV_DONE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_P2A_OUT_YUV_DONEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::getStatus(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getStatusENS2_6StatusE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getStatusENS2_6StatusE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DOutputBuffer_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode26prepareN3DOutputBuffer_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode26prepareN3DOutputBuffer_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7cleanUpEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_OCC_TO_WMF_OMYSN */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_OCC_TO_WMF_OMYSNE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7cleanUpEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addOutputBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler, void> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_FatImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE0_NS1_8IIBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize::NodeP2ABufferSize(StereoHAL::ENUM_STEREO_SCENARIO, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::mapToDpColorFmt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15mapToDpColorFmtEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15mapToDpColorFmtEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF4initEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void) {
    ALOGD("_ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::handleP2Done(NSCam::NSIoPipe::QParams&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onP2FailedCallback(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DInputMeta_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM_CAPTURE&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DInputMeta_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DInputMeta_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE0_NS1_17BaseBufferHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBufferPtr(AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::performN3DALGO_VRPV(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19performN3DALGO_VRPVERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19performN3DALGO_VRPVERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame1(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::reqNoGetter(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap11reqNoGetterERKN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap11reqNoGetterERKN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::setupDPEBufInfo(NSCam::NSIoPipe::DPEDMAPort, NSCam::IImageBuffer*, NSCam::NSIoPipe::DPEBufInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode15setupDPEBufInfoENS_8NSIoPipe10DPEDMAPortEPNS_12IImageBufferERNS3_10DPEBufInfoE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode15setupDPEBufInfoENS_8NSIoPipe10DPEDMAPortEPNS_12IImageBufferERNS3_10DPEBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::is3DNROn(NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap8is3DNROnEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap8is3DNROnEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5clearEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::FatImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest::DualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame4(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame4ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame4ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::isRequestBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15isRequestBufferEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15isRequestBufferEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5clearEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5clearEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE0_NS1_8NotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_CAPTURE_frame0(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame0EiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame0EiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7requestEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::setGrallocExtraParam(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::pushRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::c_str() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil5c_strEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil5c_strEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::debugWMFParam(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13debugWMFParamERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13debugWMFParamERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest::IDepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::setupSRZ4LCENR(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, _SRZ_SIZE_INFO_&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14setupSRZ4LCENREN7android2spINS1_21DepthMapEffectRequestEEER15_SRZ_SIZE_INFO_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14setupSRZ4LCENREN7android2spINS1_21DepthMapEffectRequestEEER15_SRZ_SIZE_INFO_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestTuningBuf(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler16requestTuningBufENS1_19eDepthMapPipeNodeIDEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler16requestTuningBufENS1_19eDepthMapPipeNodeIDEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7cleanUpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::getInstance(NSCam::MSizeF const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread11getInstanceERKNS_6MSizeFEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread11getInstanceERKNS_6MSizeFEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::~JpegEncodeThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_DPE_TO_OCC_MVSV_DMP_CFM */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_DPE_TO_OCC_MVSV_DMP_CFME = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::configureDpPQParam(int, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, unsigned int, DpPqParam&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18configureDpPQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjR9DpPqParami(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18configureDpPQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjR9DpPqParami() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::_handleDequeDone(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode16_handleDequeDoneEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode16_handleDequeDoneEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::mapToPortID(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider11mapToPortIDEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider11mapToPortIDEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE4sizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE4sizeEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathIRKSB_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathIRKSB_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7cleanUpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::waitSync(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8waitSyncEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8waitSyncEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleE0_NS1_12BufferHandleINS1_18TuningBufferHandleEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::getCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap8getCountEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap8getCountEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::handleData<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE10handleDataIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE10handleDataIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::flush() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv(void) {
    ALOGD("_ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<int>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE4moveEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon4initEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon4initEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE0_NS1_12BufferHandleINS1_20FatImageBufferHandleEEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE0_NS1_12BufferHandleINS1_19GraphicBufferHandleEEE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev(void) {
    ALOGD("_ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getElapsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEEE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_MV_F_CAP */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_P2A_OUT_MV_F_CAPE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::DepthMapPipe(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE0_NS1_8NotifyCBE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::N3DNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv(void) {
    ALOGD("_ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsEjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsEjj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::create(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool6createEPKcRKN7android2spINS1_11IBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool6createEPKcRKN7android2spINS1_11IBufferPoolEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE4sizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE4sizeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::~FatHeap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::lock(unsigned long, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::JpegEncodeThread(NSCam::MSizeF const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC2ERKNS_6MSizeFEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC2ERKNS_6MSizeFEPKc() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<FD_DATA_STEREO_T, std::__1::allocator<FD_DATA_STEREO_T> >::__push_back_slow_path<FD_DATA_STEREO_T const&>(FD_DATA_STEREO_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI16FD_DATA_STEREO_TNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI16FD_DATA_STEREO_TNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getElapsedTime() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest14getElapsedTimeEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest14getElapsedTimeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::USAGE_HW_AND_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15USAGE_HW_AND_SWE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::remapTransformForPostview(ENUM_ROTATION, ENUM_ROTATION) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider25remapTransformForPostviewE13ENUM_ROTATIONS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider25remapTransformForPostviewE13ENUM_ROTATIONS3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::decExtThreadDependency() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15DepthBufferInfoENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15DepthBufferInfoENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getNow() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::calcRotatedFDResult(MtkCameraFace, unsigned int, FD_DATA_STEREO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode19calcRotatedFDResultE13MtkCameraFacejR16FD_DATA_STEREO_T(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode19calcRotatedFDResultE13MtkCameraFacejR16FD_DATA_STEREO_T() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PHASE2Name(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3D_PVPHASE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10PHASE2NameENS1_16N3D_PVPHASE_ENUME(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10PHASE2NameENS1_16N3D_PVPHASE_ENUME() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame2(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame2ERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame2ERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE0_NS1_8IIBufferE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::deque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5dequeERS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5dequeERS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::allocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Em(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Em() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcjjNS_12EImageFormatEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcjjNS_12EImageFormatEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addCrop(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::~PriorityWaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::~TimeThreshold() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10initConfigEjjNS_12EImageFormatEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10initConfigEjjNS_12EImageFormatEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::handleDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::DumpConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::signalEnque() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::setStatus(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setStatusENS2_6StatusE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setStatusENS2_6StatusE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::DepthMapDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::wait() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::onHandleP2Done(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14onHandleP2DoneENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14onHandleP2DoneENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DOutputYUVMask(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>&, StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DOutputYUVMaskERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DOutputYUVMaskERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::allocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10setWaitHubEPNS1_7WaitHubE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10setWaitHubEPNS1_7WaitHubE() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler5flushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler5flushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5startEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5startEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__push_back_slow_path<NSCam::IImageBuffer* const&>(NSCam::IImageBuffer* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_front(timespec* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller8validateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller8validateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Demangled: calculateLCENRConfig(LCENR_IN_PARAMS, LCENR_OUT_PARAMS&) */
extern "C" __attribute__((visibility("default"))) int _Z20calculateLCENRConfig15LCENR_IN_PARAMSR16LCENR_OUT_PARAMS(void) {
    ALOGD("_Z20calculateLCENRConfig15LCENR_IN_PARAMSR16LCENR_OUT_PARAMS() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::showContent() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest11showContentEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest11showContentEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::N3DBufferSize::debug() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13N3DBufferSize5debugEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13N3DBufferSize5debugEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::queryBufferType(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF15queryBufferTypeEiNS1_19eBufferPoolScenarioERNS1_16eDepthBufferTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF15queryBufferTypeEiNS1_19eBufferPoolScenarioERNS1_16eDepthBufferTypeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9doReleaseEPNS1_18SharedBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9doReleaseEPNS1_18SharedBufferHandleE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEEE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::~DepthQTemplateProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::debugQParams(NSCam::NSIoPipe::QParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12debugQParamsERKNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12debugQParamsERKNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::handleFrames(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleFramesEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleFramesEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::handleDPEEnqueDone(NSCam::NSIoPipe::NSDpe::DVEParams&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode18handleDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsEPNS1_20EnqueCookieContainerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode18handleDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsEPNS1_20EnqueCookieContainerE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DInputBuffer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM_COMMON&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode21prepareN3DInputBufferERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL20N3D_HAL_PARAM_COMMONE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode21prepareN3DInputBufferERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL20N3D_HAL_PARAM_COMMONE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE0_NS1_8StatusCBE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnquedSmartBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::configurePQParam(int, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, unsigned int, NSCam::NSIoPipe::PQParam&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16configurePQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjRNS_8NSIoPipe7PQParamEii(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16configurePQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjRNS_8NSIoPipe7PQParamEii() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::getIndexSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE11getIndexSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE11getIndexSetEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap11DataStorageINS1_15DepthBufferInfoEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initN3DBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initN3DBufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initN3DBufferPoolEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toGrallocExtraColor(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::prepareWMFECtrl(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::NSIoPipe::OWMFECtrl&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode15prepareWMFECtrlEPNS_12IImageBufferES4_S4_S4_RNS_8NSIoPipe9OWMFECtrlE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode15prepareWMFECtrlEPNS_12IImageBufferES4_S4_S4_RNS_8NSIoPipe9OWMFECtrlE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessIdleCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize::NodeN3DBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE(void) {
    ALOGD("_ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::setupPQParamSetting(DpPqParam*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19setupPQParamSettingEP9DpPqParamj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19setupPQParamSettingEP9DpPqParamj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::N3DNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::requestGB(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestGBEiNS1_19eBufferPoolScenarioE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestGBEiNS1_19eBufferPoolScenarioE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize::NodeWMFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame1(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeOpState, int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame1ENS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame1ENS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__push_back_slow_path<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::addWaitQueue(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::checkDumpIndex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode14checkDumpIndexEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode14checkDumpIndexEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::makePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::allocate(unsigned int, unsigned int, android_pixel_format_t, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void) {
    ALOGD("_ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getRequestMetadata(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IMetadata*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18getRequestMetadataERKNS1_17NodeBufferSettingERPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18getRequestMetadataERKNS1_17NodeBufferSettingERPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initFEFMBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18initFEFMBufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18initFEFMBufferPoolEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommonE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onHandleYUVDone(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe15onHandleYUVDoneEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe15onHandleYUVDoneEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::compressJpeg(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread12compressJpegERKN7android2spINS1_8IIBufferEEEb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread12compressJpegERKN7android2spINS1_8IIBufferEEEb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_CAPTURE(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20buildQParams_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20buildQParams_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::DepthMapFlowOption_VSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE() called");
    return 0;
}

/* Exported Object: vtable for ProfileUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV11ProfileUtil = NULL;

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::prepareBuffers(unsigned int, unsigned int, NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14prepareBuffersEjjNS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14prepareBuffersEjjNS_12EImageFormatE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::syncCache(NSCam::eCacheCtrl) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool>::operator=(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEaSEOS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEaSEOS5_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onP2Callback(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onP2CallbackERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onP2CallbackERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_CAPTURE(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider30prepareQParamsTemplate_CAPTUREEiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider30prepareQParamsTemplate_CAPTUREEiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE0_NS1_10BufferPoolINS1_20FatImageBufferHandleEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::P2ANode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_QUEUED_FLOW_DONE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_QUEUED_FLOW_DONEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::DepthQTemplateProvider(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getTimeSpec() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_back(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize::NodeP2ABufferSize(StereoHAL::ENUM_STEREO_SCENARIO, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::isQueuedDepthRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20isQueuedDepthRequestEN7android2spINS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20isQueuedDepthRequestEN7android2spINS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::JpegEncodeThread(NSCam::MSizeF const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC1ERKNS_6MSizeFEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC1ERKNS_6MSizeFEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::flushQueues() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void) {
    ALOGD("_ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE9addToPoolERKN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE9addToPoolERKN7android2spIS3_EE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
extern "C" __attribute__((visibility("default"))) int _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev(void) {
    ALOGD("_ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::setOutputBufferReady(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20setOutputBufferReadyERKi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20setOutputBufferReadyERKi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_10BufferPoolINS1_17ImageBufferHandleEEE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_DMBG */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18bufIDs_GF_OUT_DMBGE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::get3DNRVIPIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17get3DNRVIPIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17get3DNRVIPIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toStr(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::enque(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5enqueERKj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5enqueERKj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::queryRemappedEISRegion(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::MSize, NSCam::MSize, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eis_region&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22queryRemappedEISRegionEN7android2spINS1_21DepthMapEffectRequestEEENS_5MSizeES7_RNS1_10eis_regionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22queryRemappedEISRegionEN7android2spINS1_21DepthMapEffectRequestEEENS_5MSizeES7_RNS1_10eis_regionE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::checkConnected(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14checkConnectedENS1_14DepthMapDataIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14checkConnectedENS1_14DepthMapDataIDE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_DMBG */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_P2A_OUT_DMBGE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::triggerSignal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::checkToDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpENS1_14DepthMapDataIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpENS1_14DepthMapDataIDE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::applyISPTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::WMFBufferSize::debug() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13WMFBufferSize5debugEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13WMFBufferSize5debugEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::startThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::runCapturePass(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode14runCapturePassEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode14runCapturePassEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::handleProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest17handleProcessDoneENS1_19eDepthMapPipeNodeIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest17handleProcessDoneENS1_19eDepthMapPipeNodeIDE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImageBufferPtr() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initP2ABufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initP2ABufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initP2ABufferPoolEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_HWOCC_TO_WMF_NOC */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_HWOCC_TO_WMF_NOCE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setOutputTransform(unsigned int, NSCam::NSIoPipe::PortID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setOutputTransformEjNS_8NSIoPipe6PortIDEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setOutputTransformEjNS_8NSIoPipe6PortIDEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OCCConfig const&>(NSCam::NSIoPipe::OCCConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread4initEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addOutputBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::clearStatus(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Status) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearStatusENS2_6StatusE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearStatusENS2_6StatusE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_CAPTURE_frame1(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame1EiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame1EiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::mapQueuedBufferID(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler17mapQueuedBufferIDEN7android2spINS1_21DepthMapEffectRequestEEENS4_INS1_18DepthMapPipeOptionEEEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler17mapQueuedBufferIDEN7android2spINS1_21DepthMapEffectRequestEEENS4_INS1_18DepthMapPipeOptionEEEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeBufferSizeMgr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC2EN7android2spINS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC2EN7android2spINS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev(void) {
    ALOGD("_ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getBufferIOType(int, NSCam::NSCamFeature::NSDualFeature::BufferIOType&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15getBufferIOTypeEiRNS1_12BufferIOTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15getBufferIOTypeEiRNS1_12BufferIOTypeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::buildImageBufferPoolMap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23buildImageBufferPoolMapEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23buildImageBufferPoolMapEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::~DepthMapEffectRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::DepthMapPipe(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::TimeThreshold(int, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC2EiPKcz(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC2EiPKcz() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::onTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::P2ABufferSize::debug() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13P2ABufferSize5debugEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13P2ABufferSize5debugEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnquedSmartBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::peakQuota(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEj(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onP2FailedCallback(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE9addToPoolERKN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE9addToPoolERKN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::createImageBuffer(android::sp<NSCam::IImageBufferHeap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::popRequestMetadata(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18popRequestMetadataERKNS1_17NodeBufferSettingE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18popRequestMetadataERKNS1_17NodeBufferSettingE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::checkValid() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator10checkValidEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator10checkValidEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::~CamPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::SharedBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::lockNativeBuffer(AHardwareBuffer*, unsigned long, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::P2ABayerNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEEE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::less<void>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_blmdS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEEixERSF_(void) {
    ALOGD("_ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_blmdS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEEixERSF_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestWorkingBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20requestWorkingBufferEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20requestWorkingBufferEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getFormattedPropertyValue(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::peakQuota() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::printf(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6printfEPKcz(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6printfEPKcz() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Em(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Em() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::handleFlowTypeOnEnque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21handleFlowTypeOnEnqueEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21handleFlowTypeOnEnqueEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long&>(long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRlEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRlEEEvDpOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStatusCB(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE9addToPoolERKN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE9addToPoolERKN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPSC_EEEEEFvvEPSH_EEEEEPvSM_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPSC_EEEEEFvvEPSH_EEEEEPvSM_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_NORMAL(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19buildQParams_NORMALERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19buildQParams_NORMALERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::~TimeThreshold() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::changeOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::GFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::initEnqueBufferMap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler18initEnqueBufferMapEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler18initEnqueBufferMapEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::DepthMapDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::delInputPort(unsigned int, NSCam::NSIoPipe::PortID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::waitIdle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::getExtThreadDependency() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::runNormalPass(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13runNormalPassEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13runNormalPassEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::EffectRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13EffectRequestE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv(void) {
    ALOGD("_ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >(std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEEENS_6futureIT_EEOT0_(void) {
    ALOGD("_ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEEENS_6futureIT_EEOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame3_capture(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame3_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame3_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::init(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest4initEN7android2spINS1_17BaseBufferHandlerEEERKNS1_18EffectRequestAttrsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest4initEN7android2spINS1_17BaseBufferHandlerEEERKNS1_18EffectRequestAttrsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStop(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize::NodeN3DBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapper8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapper8onNotifyEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::debugDPEConfig(NSCam::NSIoPipe::DVEConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEConfigERNS_8NSIoPipe9DVEConfigE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEConfigERNS_8NSIoPipe9DVEConfigE() called");
    return 0;
}

/* Exported Object: vtable for StereoHAL::StereoDistanceUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9StereoHAL18StereoDistanceUtilE = NULL;

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::pushRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_front(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE0_NS1_8NotifyCBE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17bufIDs_P2A_OUT_FDE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_NORMAL(int, int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29prepareQParamsTemplate_NORMALEiiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29prepareQParamsTemplate_NORMALEiiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev(void) {
    ALOGD("_ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::getFPS() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize::NodeWMFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF6uninitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::isEISOn(NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7isEISOnEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7isEISOnEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::onStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6onStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6onStopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE0_NS1_12BufferHandleINS1_17ImageBufferHandleEEE = NULL;

/* Exported Object: vtable for android::VirtualLightRefBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android19VirtualLightRefBaseE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onOWECallback(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onOWECallbackERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onOWECallbackERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest::createInstance(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequest14createInstanceEjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequest14createInstanceEjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::handleDataAndDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17handleDataAndDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17handleDataAndDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configExternalOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::~DepthQTemplateProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for FastLogger */
extern "C" __attribute__((visibility("default"))) void* _ZTV10FastLogger = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE152_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getGraphicBufferAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: std::__1::deque<timespec, std::__1::allocator<timespec> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_N3D_OUT_JPS_WARPMTX */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26bufIDs_N3D_OUT_JPS_WARPMTXE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less::operator()(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_CAPTURE_frame0(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::GFBufferSize::debug() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr12GFBufferSize5debugEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr12GFBufferSize5debugEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_CAPTURE_frame1(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::add(android::sp<NSCam::IImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE9__executeEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE9__executeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::isReady() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE7isReadyEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE7isReadyEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::SharedBufferPool(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC1EPKcRKN7android2spINS1_11IBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC1EPKcRKN7android2spINS1_11IBufferPoolEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::deque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeERS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeERS7_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::__tree_node<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, void*>*, long> std::__1::__tree<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::DataLess, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::__emplace_multi<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE15__emplace_multiIJRKS7_EEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE15__emplace_multiIJRKS7_EEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_() called");
    return 0;
}

/* Exported Object: nlohmann::detail::serializer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >::decode(unsigned char&, unsigned int&, unsigned char)::utf8d */
extern "C" __attribute__((visibility("default"))) void* _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::~WaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::flush(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::configureToNext(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::TuningBufferPool(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC1EPKci(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC1EPKci() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE0_NS1_11IBufferPoolE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler, void>::~SequentialHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::TuningBufferPool(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC2EPKci(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC2EPKci() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::dequePrioritizedRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23dequePrioritizedRequestERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23dequePrioritizedRequestERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::DepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::FatHeap(char const*, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC1EPKcjji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC1EPKcjji() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::~DepthMapDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onP2Callback(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onP2CallbackERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onP2CallbackERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setExtParam(NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE10setWaitHubEPNS1_7WaitHubE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE10setWaitHubEPNS1_7WaitHubE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7requestEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_TO_DUMP_BUFFERS */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_TO_DUMP_BUFFERSE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_NORMAL_NOFEFM(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::queryEisRegion(NSCam::IMetadata*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eis_region&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14queryEisRegionEPNS_9IMetadataERNS1_10eis_regionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14queryEisRegionEPNS_9IMetadataERNS1_10eis_regionE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZThn272_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv(void) {
    ALOGD("_ZThn272_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFECtrl const&>(NSCam::NSIoPipe::OWMFECtrl const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countBackUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::~CamGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::isReady() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7isReadyEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7isReadyEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame0(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame0EiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame0EiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareTemplateParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21prepareTemplateParamsEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21prepareTemplateParamsEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE10setWaitHubEPNS1_7WaitHubE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE10setWaitHubEPNS1_7WaitHubE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::shiftSignal(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::getImageBufferPool(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18getImageBufferPoolEiNS1_19eBufferPoolScenarioE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18getImageBufferPoolEiNS1_19eBufferPoolScenarioE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getPoolContents() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15getPoolContentsEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15getPoolContentsEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::init(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider4initEPNS1_17BaseBufferSizeMgrE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider4initEPNS1_17BaseBufferSizeMgrE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::initAllocatorParam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool18initAllocatorParamEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool18initAllocatorParamEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::HW_OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_NORMAL_NOFEFM_frame1(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame1EiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame1EiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
extern "C" __attribute__((visibility("default"))) int _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev(void) {
    ALOGD("_ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7requestEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFEConfig const&>(NSCam::NSIoPipe::OWMFEConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::getEISCropRegion(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::MPoint&, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider16getEISCropRegionENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEERNS_6MPointERNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider16getEISCropRegionENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEERNS_6MPointERNS_5MSizeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::triggerDryRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::SharedBufferPool(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC2EPKcRKN7android2spINS1_11IBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC2EPKcRKN7android2spINS1_11IBufferPoolEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18TuningBufferHandleEEaSERKS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18TuningBufferHandleEEaSERKS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::DepthQTemplateProvider(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon::perform3dnr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NS3Av3::IHal3A*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon11perform3dnrERN7android2spINS1_21DepthMapEffectRequestEEEPN6NS3Av36IHal3AENS4_INS1_18DepthMapFlowOptionEEERNS1_17Stereo3ATuningResE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon11perform3dnrERN7android2spINS1_21DepthMapEffectRequestEEEPN6NS3Av36IHal3AENS4_INS1_18DepthMapFlowOptionEEERNS1_17Stereo3ATuningResE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onHandleOnGoingReqReady(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode23onHandleOnGoingReqReadyEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode23onHandleOnGoingReqReadyEj() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_WMF_TO_GF_OND */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_WMF_TO_GF_ONDE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool4initEjjNS_12EImageFormatEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool4initEjjNS_12EImageFormatEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addModuleInfo(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addModuleInfoEjPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addModuleInfoEjPv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsEjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsEjj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestSharedIIBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool21requestSharedIIBufferEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool21requestSharedIIBufferEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE0_N7android6ThreadE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getTimestamp() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15configOutBufferENS1_19eDepthMapPipeNodeIDEiS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15configOutBufferENS1_19eDepthMapPipeNodeIDEiS3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::request() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4stopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4stopEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame0(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::queryPipeNodeBitSet(std::__1::bitset<9ul>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::convertFrameIdToPass2Round(unsigned int, StereoHAL::ENUM_PASS2_ROUND&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::delOutputPort(unsigned int, NSCam::NSIoPipe::PortID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame3(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame3ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame3ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::changeOwner(unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool11changeOwnerEjRKN7android2spINS1_8IIBufferEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool11changeOwnerEjRKN7android2spINS1_8IIBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::~NodeBufferSizeMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::getStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB9getStatusEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB9getStatusEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::unlockNativeBuffer(AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedWorkingBuffer(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_18TuningBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_18TuningBufferHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::TimeThreshold(int, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC1EiPKcz(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC1EiPKcz() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initDPEBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initDPEBufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initDPEBufferPoolEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::prepareDPEEnqueConfig_PVVR(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode26prepareDPEEnqueConfig_PVVREN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode26prepareDPEEnqueConfig_PVVREN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_N3D_FEFM_CCin */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_P2A_TO_N3D_FEFM_CCinE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int>, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::~DepthMapEffectRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6uninitEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::createDummyHeap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeap15createDummyHeapEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeap15createDummyHeapEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::pushRequestMetadata(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest19pushRequestMetadataERKNS1_17NodeBufferSettingEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest19pushRequestMetadataERKNS1_17NodeBufferSettingEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addOutputBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::StereoFDNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configRequest(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13configRequestEPNS1_21DepthMapEffectRequestE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13configRequestEPNS1_21DepthMapEffectRequestE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::request(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF7requestEiNS1_19eBufferPoolScenarioE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF7requestEiNS1_19eBufferPoolScenarioE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::handleP2Done(NSCam::NSIoPipe::QParams&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toImageFormat(android_pixel_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::remapTransform(ENUM_ROTATION) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14remapTransformE13ENUM_ROTATION(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14remapTransformE13ENUM_ROTATION() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::applyISPTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::queryPipeNodeBitSet(std::__1::bitset<9ul>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::DepthMapFlowOption_BMVSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::SharedBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: vtable for StereoHAL::StereoDistanceUtil::StereoDistanceCalculator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9StereoHAL18StereoDistanceUtil24StereoDistanceCalculatorE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertIdleCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::setupFMTuningInfo(NSCam::NSIoPipe::FMInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17setupFMTuningInfoERNS_8NSIoPipe6FMInfoEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17setupFMTuningInfoERNS_8NSIoPipe6FMInfoEj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::USAGE_HW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool8USAGE_HWE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initializeBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF20initializeBufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF20initializeBufferPoolEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_HWOCC_OUT_3RD_NOC */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24bufIDs_HWOCC_OUT_3RD_NOCE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4stopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4stopEv() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail9exceptionE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_BAYER_NORMAL_NOFEFM(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider42prepareQParamsTemplate_BAYER_NORMAL_NOFEFMEiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider42prepareQParamsTemplate_BAYER_NORMAL_NOFEFMEiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE0_NS1_8NotifyCBE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::getSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getSignalENS2_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getSignalENS2_6SignalE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE0_NS1_10BufferPoolINS1_18TuningBufferHandleEEE = NULL;

/* Demangled: void std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__push_back_slow_path<NSCam::IImageBuffer*>(NSCam::IImageBuffer*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::FatHeap */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::isReady() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE7isReadyEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE7isReadyEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapPipe::createInstance(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe14createInstanceEN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe14createInstanceEN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::copyTo(NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest*, int (*)(int)) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest6copyToEPS2_PFiiE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest6copyToEPS2_PFiiE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame6to9(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21buildQParam_frame6to9ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21buildQParam_frame6to9ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::stopTimer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest9stopTimerEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest9stopTimerEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertTuningBuf(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertTuningBufEjPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertTuningBufEjPv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::~PriorityWaitQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE0_NS1_16DepthMapPipeNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::FatImageBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC2EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC2EPKc() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon::setup3DNRMeta(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon13setup3DNRMetaENS1_19eDepthMapPipeNodeIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon13setup3DNRMetaENS1_19eDepthMapPipeNodeIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW_AND_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15USAGE_HW_AND_SWE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countDown() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_RENDER */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15USAGE_HW_RENDERE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::getDataIDToBIDMap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17getDataIDToBIDMapEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17getDataIDToBIDMapEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::waitFlush(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE9waitFlushEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE9waitFlushEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_DEPTHMAP */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_GF_OUT_DEPTHMAPE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::writeN3DResultToMeta_CAP(StereoHAL::N3D_HAL_OUTPUT_CAPTURE const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode24writeN3DResultToMeta_CAPERKN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode24writeN3DResultToMeta_CAPERKN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_BAYER_CAPTURE(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_BAYER_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_BAYER_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::launchFinishCallback(NSCam::NSCamFeature::NSDualFeature::ResultState) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest20launchFinishCallbackENS1_11ResultStateE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest20launchFinishCallbackENS1_11ResultStateE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::diff(timespec const&, timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipeE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev(void) {
    ALOGD("_ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: nlohmann::detail::dtoa_impl::get_cached_power_for_binary_exponent(int)::kCachedPowers */
extern "C" __attribute__((visibility("default"))) void* _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::getIDSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE8getIDSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE8getIDSetEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::FatImageBufferPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC1EPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC1EPKc() called");
    return 0;
}

/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: android::wp<NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread>::~wp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadEED2Ev(void) {
    ALOGD("_ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::convertFrameIdToPass2Round(unsigned int, StereoHAL::ENUM_PASS2_ROUND&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_FatImageBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initAllocatorParam() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::debugN3DParams(StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14debugN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS3_14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14debugN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS3_14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setTimestamp(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeout() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev() called");
    return 0;
}

/* Demangled: lcenr_srz_settings(int, int, int, int, int, int, int, int, int, int, unsigned int&, unsigned int&, unsigned long&, unsigned long&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _Z18lcenr_srz_settingsiiiiiiiiiiRjS_RmS0_S_S_S_S_S_S_(void) {
    ALOGD("_Z18lcenr_srz_settingsiiiiiiiiiiRjS_RmS0_S_S_S_S_S_S_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::P2ANode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::waitSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal10waitSignalENS2_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal10waitSignalENS2_6SignalE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::setupOWEBufInfo(NSCam::NSIoPipe::OWEDMAPort, NSCam::IImageBuffer*, NSCam::NSIoPipe::EGNBufInfo&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15setupOWEBufInfoENS_8NSIoPipe10OWEDMAPortEPNS_12IImageBufferERNS2_10EGNBufInfoEh(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15setupOWEBufInfoENS_8NSIoPipe10OWEDMAPortEPNS_12IImageBufferERNS2_10EGNBufInfoEh() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::packDepthWrapper(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode16packDepthWrapperEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode16packDepthWrapperEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool9doReleaseEPNS1_18TuningBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool9doReleaseEPNS1_18TuningBufferHandleE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IImageBuffer*&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21getRequestImageBufferERKNS1_17NodeBufferSettingERPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21getRequestImageBufferERKNS1_17NodeBufferSettingERPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::registerStatusCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::StatusCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::input_buffer_adapter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail20input_buffer_adapterE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::StereoFDNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD2Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::encode(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread6encodeERKN7android2spINS1_8IIBufferEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread6encodeERKN7android2spINS1_8IIBufferEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_10BufferPoolINS1_19GraphicBufferHandleEEE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::WMFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool7destroyERN7android2spIS2_EE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool7destroyERN7android2spIS2_EE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakAvailableSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::~StringUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::~DepthMapDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7recycleEPS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7recycleEPS3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::config3ATuningMeta_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NS3Av3::MetaSet_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::DepthMapPipeNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthPipeLoggingSetup::mbProfileLog */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthPipeLoggingSetup12mbProfileLogE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::prepareWMFEnqueConfig(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>, NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode21prepareWMFEnqueConfigEN7android2spINS1_17BaseBufferHandlerEEERNS_8NSIoPipe5NSEgn9EGNParamsINS7_11OWMFEConfigEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode21prepareWMFEnqueConfigEN7android2spINS1_17BaseBufferHandlerEEERNS_8NSIoPipe5NSEgn9EGNParamsINS7_11OWMFEConfigEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeBufferSizeMgr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC1EN7android2spINS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC1EN7android2spINS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::reMapBufferID(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_TEXTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper16USAGE_HW_TEXTUREE = NULL;

/* Demangled: void std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*> >::__push_back_slow_path<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&>(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnquedSmartBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_20FatImageBufferHandleEEaSERKS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_20FatImageBufferHandleEEaSERKS4_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::debugOCCParams(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::DebugBufParam) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode14debugOCCParamsENS2_13DebugBufParamE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode14debugOCCParamsENS2_13DebugBufParamE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::getGraphicBufferAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE0_NS1_8IIBufferE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::get3DNRVIPIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17get3DNRVIPIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17get3DNRVIPIBufferEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::registerSyncCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEEE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_TO_DUMP_RAWS */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_TO_DUMP_RAWSE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEEE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::writeN3DResultToMeta(StereoHAL::N3D_HAL_OUTPUT const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode20writeN3DResultToMetaERKN9StereoHAL14N3D_HAL_OUTPUTERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode20writeN3DResultToMetaERKN9StereoHAL14N3D_HAL_OUTPUTERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::__find_leaf(std::__1::__tree_const_iterator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE11__find_leafENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEERPNS_15__tree_end_nodeIPNS_16__tree_node_baseISC_EEEERKS5_(void) {
    ALOGD("_ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE11__find_leafENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEERPNS_15__tree_end_nodeIPNS_16__tree_node_baseISC_EEEERKS5_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onHandleFlowTypeP2Done(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22onHandleFlowTypeP2DoneEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22onHandleFlowTypeP2DoneEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::debugOCCParams(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::DebugBufParam) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode14debugOCCParamsENS2_13DebugBufParamE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode14debugOCCParamsENS2_13DebugBufParamE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame2(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame2ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame2ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame5(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame5ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame5ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev(void) {
    ALOGD("_ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::reMapBufferID(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11preAllocateEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11preAllocateEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initWMFBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initWMFBufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initWMFBufferPoolEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::handleData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDataENS1_14DepthMapDataIDEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDataENS1_14DepthMapDataIDEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::configureToNext(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::mergeExtraData(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode14mergeExtraDataERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode14mergeExtraDataERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long&>(unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRmEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRmEEEvDpOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::startTimer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest10startTimerEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest10startTimerEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doAllocate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::getPreviewPhase(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15getPreviewPhaseEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15getPreviewPhaseEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPENode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::incExtThreadDependency() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv() called");
    return 0;
}

/* Exported Object: vtable for AutoProfileUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV15AutoProfileUtil = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, android_pixel_format_t, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::length() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6lengthEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6lengthEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::USAGE_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool8USAGE_SWE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE = NULL;

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_OCC_MY_S */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_P2A_TO_OCC_MY_SE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool4initEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool4initEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DParam_NORMAL(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3D_PVPHASE_ENUM, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode22prepareN3DParam_NORMALENS1_16N3D_PVPHASE_ENUMERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAMERNS9_14N3D_HAL_OUTPUTE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode22prepareN3DParam_NORMALENS1_16N3D_PVPHASE_ENUMERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAMERNS9_14N3D_HAL_OUTPUTE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::onUpdate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onUpdateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onUpdateEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAllQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::getIDSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE8getIDSetEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE8getIDSetEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::~NodeBufferSizeMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7cleanUpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAnyQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::thread, std::__1::allocator<std::__1::thread> >::__push_back_slow_path<std::__1::thread>(std::__1::thread&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEEE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::setAutoAllocate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15setAutoAllocateEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15setAutoAllocateEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::requestIIBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_MV_F */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_P2A_OUT_MV_FE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for nlohmann::detail::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8nlohmann6detail12out_of_rangeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::~DepthMapEffectRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_WMF_TO_GF_DMW_MY_S */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap25bufIDs_WMF_TO_GF_DMW_MY_SE = NULL;

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFECtrl>(NSCam::NSIoPipe::OWMFECtrl&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::~JpegEncodeThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE0_N7android6ThreadE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::GFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::deque(unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeEjRS7_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeEjRS7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13requestBufferENS1_19eDepthMapPipeNodeIDEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13requestBufferENS1_19eDepthMapPipeNodeIDEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE0_NS1_17BaseBufferPoolMgrE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::queryDepthMapFlowOption(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> > const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23queryDepthMapFlowOptionERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_11DataStorageINS1_15DepthBufferInfoEEEEERNS3_INS1_18DepthMapFlowOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23queryDepthMapFlowOptionERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_11DataStorageINS1_15DepthBufferInfoEEEEERNS3_INS1_18DepthMapFlowOptionEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE = NULL;

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::NodeBufferPoolMgr_VSDOF(std::__1::bitset<9ul>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC2ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC2ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame6_9(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParam_frame6_9ERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParam_frame6_9ERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::executeAlgo(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode11executeAlgoEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode11executeAlgoEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::~CamPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getPoolContents() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15getPoolContentsEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15getPoolContentsEv() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest::IDepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_back(timespec*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::sSingletonLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14sSingletonLockE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry>, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS3_13NSFeaturePipe7CamNodeINS4_19DepthMapDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIS5_SB_NS_4lessIS5_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS3_13NSFeaturePipe7CamNodeINS4_19DepthMapDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIS5_SB_NS_4lessIS5_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initGFBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF16initGFBufferPoolEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF16initGFBufferPoolEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_FD_IMG */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_P2A_TO_FD_IMGE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::~FatHeap() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::debugN3DParams_Cap(StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18debugN3DParams_CapERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS3_22N3D_HAL_OUTPUT_CAPTUREE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18debugN3DParams_CapERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS3_22N3D_HAL_OUTPUT_CAPTUREE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::disconnect() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE10disconnectEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE10disconnectEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5startEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5startEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7cleanUpEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int>(std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::setAutoFree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11setAutoFreeEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11setAutoFreeEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::queryReqAttrs(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE4sizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE4sizeEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::onStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onStartEv() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_RENDER */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper15USAGE_HW_RENDERE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4initEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::preAllocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj(void) {
    ALOGD("_ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::requestTB(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestTBEiNS1_19eBufferPoolScenarioE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestTBEiNS1_19eBufferPoolScenarioE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil4sizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil4sizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::onProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13onProcessDoneENS1_19eDepthMapPipeNodeIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13onProcessDoneENS1_19eDepthMapPipeNodeIDE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::setupPQParamSetting(DpPqParam*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19setupPQParamSettingEP9DpPqParamj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19setupPQParamSettingEP9DpPqParamj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev(void) {
    ALOGD("_ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, long> std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__emplace_hint_multi<unsigned int const&>(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, long>, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE20__emplace_hint_multiIJRKjEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEElEENS_21__tree_const_iteratorIjSD_lEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE20__emplace_hint_multiIJRKjEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEElEENS_21__tree_const_iteratorIjSD_lEEDpOT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onHandleOnGoingReqReady(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode23onHandleOnGoingReqReadyEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode23onHandleOnGoingReqReadyEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::addModuleInfo(unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addModuleInfoEjjPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addModuleInfoEjjPv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeOpState, int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParamsTemplateEiNS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParamsTemplateEiNS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7cleanUpEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Exported Object: vtable for StereoHAL::StereoDistanceUtil::DistanceCalculatorWMF */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9StereoHAL18StereoDistanceUtil21DistanceCalculatorWMFE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer_SPTR() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onUninit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::OCCBufferSize::debug() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13OCCBufferSize5debugEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13OCCBufferSize5debugEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addOutput(NSCam::NSIoPipe::PortID, int, NSCam::NSIoPipe::EPortCapbility) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEiNS3_14EPortCapbilityE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEiNS3_14EPortCapbilityE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE0_NS1_10BufferPoolINS1_18SharedBufferHandleEEE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE9push_backEOS8_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE9push_backEOS8_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::getAllPoolImageBuffer(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF21getAllPoolImageBufferEiNS1_19eBufferPoolScenarioERNSt3__16vectorIPNS_12IImageBufferENS4_9allocatorIS7_EEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF21getAllPoolImageBufferEiNS1_19eBufferPoolScenarioERNSt3__16vectorIPNS_12IImageBufferENS4_9allocatorIS7_EEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::cleanUp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7cleanUpEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7cleanUpEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::DepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueueSync(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::DPEBufferSize::debug() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13DPEBufferSize5debugEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13DPEBufferSize5debugEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configInOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler17configInOutBufferENS1_19eDepthMapPipeNodeIDEiS3_i(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler17configInOutBufferENS1_19eDepthMapPipeNodeIDEiS3_i() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::generate(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::perform3AIspTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::createImageBuffer(android::sp<NSCam::IImageBufferHeap> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Exported Object: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_N3D_NOFEFM_RECT1 */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_P2A_TO_N3D_NOFEFM_RECT1E = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::DepthMapFlowOption_VSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onQueuedDepthFlowDone(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21onQueuedDepthFlowDoneEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21onQueuedDepthFlowDoneEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest::DualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame2_capture(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame2_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame2_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onInit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE0_NS1_12BufferHandleINS1_18SharedBufferHandleEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7getNameEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildPipeGraph(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe*, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::popRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21popRequestImageBufferERKNS1_17NodeBufferSettingE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21popRequestImageBufferERKNS1_17NodeBufferSettingE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeTimer::showSummary(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17DepthMapPipeTimer11showSummaryEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17DepthMapPipeTimer11showSummaryEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::autoFree_locked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15autoFree_lockedEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15autoFree_lockedEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::clearSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearSignalENS2_6SignalE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearSignalENS2_6SignalE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::onNotify() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8Watchdog8onNotifyEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8Watchdog8onNotifyEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE = NULL;

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::releaseAll() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReadySync(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize::NodeGFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_BAYER_CAPTURE(int, NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider36prepareQParamsTemplate_BAYER_CAPTUREEiRNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider36prepareQParamsTemplate_BAYER_CAPTUREEiRNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::handleNeedFEFMFrame(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode19handleNeedFEFMFrameEN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode19handleNeedFEFMFrameEN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_() called");
    return 0;
}

/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::flush(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5flushEj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5flushEj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImgSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE = NULL;

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::HW_OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getImageSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12getImageSizeEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12getImageSizeEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::~StringUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAnyQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::~DepthMapDataHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::onDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::DumpConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode6onDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode6onDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE88_NS1_8NotifyCBE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool9doReleaseEPNS1_20FatImageBufferHandleE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool9doReleaseEPNS1_20FatImageBufferHandleE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::isValid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap7isValidEv(void) {
    ALOGD("_ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap7isValidEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE0_NS1_19DepthMapDataHandlerE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toPixelFormat(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::setRootNode(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setRootNodeEPS4_(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setRootNodeEPS4_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildPipeGraph(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe*, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv(void) {
    ALOGD("_ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeoutNs() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame5(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame5ERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame5ERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_NORMAL_NOFEFM_frame1(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv(void) {
    ALOGD("_ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv() called");
    return 0;
}
