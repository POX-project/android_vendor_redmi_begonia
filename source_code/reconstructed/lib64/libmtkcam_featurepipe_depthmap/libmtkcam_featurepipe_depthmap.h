/*
 * Reverse-Engineered ABI Specification for: libmtkcam.featurepipe.depthmap.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam.featurepipe.depthmap.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_DEPTHMAP_H
#define BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_DEPTHMAP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize::NodeDPEBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18DepthMapFlowOptionE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18DepthMapFlowOptionE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::uninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED2Ev(void);

/* Symbol: _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_N3D_TO_DPE_MVSV_MASKE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_N3D_TO_DPE_MVSV_MASK */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_N3D_TO_DPE_MVSV_MASKE;

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2Eb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::checkToDump() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<decltype(nullptr)>(decltype(nullptr)&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJDnEEEvDpOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest11isSkipDepthEN7android2spINS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::isSkipDepth(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest11isSkipDepthEN7android2spINS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE10do_destroyEPvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv(void);

/* Symbol: _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC1Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15SEPARATE_BUFFERE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::SEPARATE_BUFFER */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15SEPARATE_BUFFERE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC2Ej(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::stop(bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4stopEb(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8USAGE_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8USAGE_SWE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::update(timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6updateERK8timespec(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_P2A_TO_N3D_NOFEFM_RECT2E */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_N3D_NOFEFM_RECT2 */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_P2A_TO_N3D_NOFEFM_RECT2E;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler7ID2NameENS1_14DepthMapDataIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::ID2Name(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler7ID2NameENS1_14DepthMapDataIDE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider39prepareQParamsTemplate_BAYER_STANDALONEEiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_BAYER_STANDALONE(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider39prepareQParamsTemplate_BAYER_STANDALONEEiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode18prepareEnqueParamsERN7android2spINS1_21DepthMapEffectRequestEEERNS_8NSIoPipe5NSEgn9EGNParamsINS8_9OCCConfigEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::prepareEnqueParams(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode18prepareEnqueParamsERN7android2spINS1_21DepthMapEffectRequestEEERNS_8NSIoPipe5NSEgn9EGNParamsINS8_9OCCConfigEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_FatImageBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize::NodeOCCBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParams_BAYER_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_BAYER_NORMAL_NOFEFM(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParams_BAYER_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void);

/* Symbol: _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17dumpSensorMappingERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::dumpSensorMapping(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17dumpSensorMappingERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setDataFlowEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::setDataFlow(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setDataFlowEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::getImageBuffer() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBuffer14getImageBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_HWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_HWE;

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvm */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIiE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14checkConnectedENS1_14DepthMapDataIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::checkConnected(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14checkConnectedENS1_14DepthMapDataIDE(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_SharedBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE;

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE0_NS1_8IIBufferE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_GF_OUT_DEPTH_WRAPPERE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_DEPTH_WRAPPER */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_GF_OUT_DEPTH_WRAPPERE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onInitEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6uninitEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedWorkingBuffer(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC1ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::NodeBufferPoolMgr_VSDOF(std::__1::bitset<9ul>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC1ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::FatImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7recycleEPS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7recycleEPS3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider27prepareTemplateParams_BayerEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareTemplateParams_Bayer() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider27prepareTemplateParams_BayerEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC1Ej(void);

/* Symbol: _ZTVN8nlohmann6detail11parse_errorE */
/* Demangled: vtable for nlohmann::detail::parse_error */
extern void* _ZTVN8nlohmann6detail11parse_errorE;

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getBufferEv(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_TO_DUMP_IMG3OE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_TO_DUMP_IMG3O */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_TO_DUMP_IMG3OE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBuffer(AHardwareBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15getNativeBufferEP15AHardwareBuffer(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::~NodeBufferSizeMgr() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6createEPKcjNS2_10BufProtectE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::create(char const*, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::BufProtect) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6createEPKcjNS2_10BufProtectE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::dumpCamThreadInfo(android::Printer&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9CamThread17dumpCamThreadInfoERN7android7PrinterE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedWorkingBuffer(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_SharedBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode15mDataIDToBIDMapE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::mDataIDToBIDMap */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode15mDataIDToBIDMapE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::init() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF4initEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5enqueERKS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5enqueERKS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEIODataENS2_12DPEInputDataENS2_13DPEOutputDataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::debugDPEIOData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEInputData, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEOutputData) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEIODataENS2_12DPEInputDataENS2_13DPEOutputDataE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::DVEConfig const&>(NSCam::NSIoPipe::DVEConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9DVEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24bufIDs_DPE_OUT_DISPARITYE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_DPE_OUT_DISPARITY */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24bufIDs_DPE_OUT_DISPARITYE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv(void);

/* Symbol: _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestIIBuffer() */
int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_front(unsigned int* const&) */
int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::sync() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC2EN7android2spINS1_17BaseBufferPoolMgrEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::NodeBufferHandler(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC2EN7android2spINS1_17BaseBufferPoolMgrEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15outputExtraDataEPcRN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::outputExtraData(char*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15outputExtraDataEPcRN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread8sEncoderE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::sEncoder */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread8sEncoderE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::~JpegEncodeThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE11connectDataENS3_14DepthMapDataIDES6_PS4_NS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE11connectDataENS3_14DepthMapDataIDES6_PS4_NS1_14ConnectionTypeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::erase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer5eraseEv(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestE */
/* Demangled: vtable for NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest */
extern void* _ZTVN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequest14createInstanceEjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest::createInstance(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequest14createInstanceEjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::perform3AIspTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode14onWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onWMFEnqueDone(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode14onWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv(void);

/* Symbol: _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17get3DNRVIPIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::get3DNRVIPIBuffer() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17get3DNRVIPIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setSignalENS2_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::setSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setSignalENS2_6SignalE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_NORMAL_NOFEFM_frame0(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::threadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10threadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler14getEnqueBufferENS1_19eDepthMapPipeNodeIDEiRPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnqueBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::IImageBuffer*&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler14getEnqueBufferENS1_19eDepthMapPipeNodeIDEiRPNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setExpectedEndTimeEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setExpectedEndTime(unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setExpectedEndTimeEj(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode16prepareOCCParamsERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14OCC_HAL_PARAMSERNS8_14OCC_HAL_OUTPUTE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::prepareOCCParams(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::OCC_HAL_PARAMS&, StereoHAL::OCC_HAL_OUTPUT&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode16prepareOCCParamsERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14OCC_HAL_PARAMSERNS8_14OCC_HAL_OUTPUTE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode18handleWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEEPNS1_20EnqueCookieContainerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::handleWMFEnqueDone(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode18handleWMFEnqueDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEEPNS1_20EnqueCookieContainerE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23createBufferPoolHandlerEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::createBufferPoolHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23createBufferPoolHandlerEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15requestMetadataENS1_19eDepthMapPipeNodeIDEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestMetadata(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15requestMetadataENS1_19eDepthMapPipeNodeIDEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::__push_back_slow_path<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>&&) */
int _ZNSt3__16vectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5enqueERKS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5enqueERKS7_(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10doAllocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode26requireAlgoDataFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAERNS7_15GF_HAL_OUT_DATAEb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::requireAlgoDataFromRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, StereoHAL::GF_HAL_IN_DATA&, StereoHAL::GF_HAL_OUT_DATA&, bool) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode26requireAlgoDataFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAERNS7_15GF_HAL_OUT_DATAEb(void);

/* Symbol: _ZTVN9StereoHAL18StereoDistanceUtil20DistanceCalculatorGFE */
/* Demangled: vtable for StereoHAL::StereoDistanceUtil::DistanceCalculatorGF */
extern void* _ZTVN9StereoHAL18StereoDistanceUtil20DistanceCalculatorGFE;

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe22onRequestDepthNotReadyEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onRequestDepthNotReady(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe22onRequestDepthNotReadyEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe15destroyInstanceEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapPipe::destroyInstance() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::~FatHeap() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode25prepareDPEEnqueConfig_CAPEN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::prepareDPEEnqueConfig_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode25prepareDPEEnqueConfig_CAPEN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_ */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::IDualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5clearEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::clear() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5clearEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_ */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::IDualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spIS2_EEES3_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE0_NS1_8NotifyCBE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7recycleEPS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7recycleEPS3_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_FD_OUT_EXTRADATAE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_FD_OUT_EXTRADATA */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_FD_OUT_EXTRADATAE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool10doAllocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23requestWorkingTuningBufEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestWorkingTuningBuf(int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23requestWorkingTuningBufEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18queryBufferPoolMgrERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_18DepthMapFlowOptionEEERNS3_INS1_17BaseBufferPoolMgrEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::queryBufferPoolMgr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18queryBufferPoolMgrERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_18DepthMapFlowOptionEEERNS3_INS1_17BaseBufferPoolMgrEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame1_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame1_capture(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame1_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest13getBufferTypeEiRNS1_10BufferTypeE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getBufferType(int, NSCam::NSCamFeature::NSDualFeature::BufferType&) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest13getBufferTypeEiRNS1_10BufferTypeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame3ERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame3(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame3ERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5enqueIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::enque<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5enqueIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::wait() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB4waitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toNativeFormat(android_pixel_format_t) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14toNativeFormatE22android_pixel_format_t(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::stopThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread10stopThreadEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode16setupDPEConfigIOENS2_12DPEInputDataENS2_13DPEOutputDataERNS_8NSIoPipe9DVEConfigE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::setupDPEConfigIO(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEInputData, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPEOutputData, NSCam::NSIoPipe::DVEConfig&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode16setupDPEConfigIOENS2_12DPEInputDataENS2_13DPEOutputDataERNS_8NSIoPipe9DVEConfigE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE11getIndexSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::getIndexSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE11getIndexSetEv(void);

/* Symbol: _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_ */
/* Demangled: void nlohmann::detail::dtoa_impl::grisu2<double>(char*, int&, int&, double) */
int _ZN8nlohmann6detail9dtoa_impl6grisu2IdEEvPcRiS4_T_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv(void);

/* Symbol: _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageFormat() const */
int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub>(std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)()>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__18__mem_fnIMS2_FivEEES2_EEiT_PT0_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25getGraphicImageBufferPoolEiNS1_19eBufferPoolScenarioE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::getGraphicImageBufferPool(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25getGraphicImageBufferPoolEiNS1_19eBufferPoolScenarioE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE;

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14prepareEISDataERPNS_9IMetadataES5_RN9StereoHAL8EIS_DATAE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareEISData(NSCam::IMetadata*&, NSCam::IMetadata*&, StereoHAL::EIS_DATA&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14prepareEISDataERPNS_9IMetadataES5_RN9StereoHAL8EIS_DATAE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest19checkAllOutputReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::checkAllOutputReady() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest19checkAllOutputReadyEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE */
/* Demangled: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEEC2IPKNS1_6detail8json_refISB_EEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISK_EE5valuesr16is_constructibleISB_NS_15iterator_traitsISK_E9referenceEEE5valueESK_E4typeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize::NodeGFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC1EN7android2spINS1_17BaseBufferPoolMgrEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::NodeBufferHandler(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerC1EN7android2spINS1_17BaseBufferPoolMgrEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::WMFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_destroyEPvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode27onHandleOnGoingReqDataReadyEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onHandleOnGoingReqDataReady(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode27onHandleOnGoingReqDataReadyEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE13__erase_multiIjEEmRKT_ */
/* Demangled: unsigned long std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__erase_multi<unsigned int>(unsigned int const&) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE13__erase_multiIjEEmRKT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv(void);

/* Symbol: _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageFormat() const */
int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame0EiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_NORMAL_NOFEFM_frame0(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame0EiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::registerTimeoutCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch17registerTimeoutCBERKN7android2spINS1_9TimeoutCBEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::DepthMapFlowOption_BMVSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::queryReqAttrs(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22_copyBufferIntoRequestEPNS_12IImageBufferEN7android2spINS1_21DepthMapEffectRequestEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::_copyBufferIntoRequest(NSCam::IImageBuffer*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22_copyBufferIntoRequestEPNS_12IImageBufferEN7android2spINS1_21DepthMapEffectRequestEEEi(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv(void);

/* Symbol: _ZTVN9StereoHAL18StereoDistanceUtil21DistanceCalculatorOCCE */
/* Demangled: vtable for StereoHAL::StereoDistanceUtil::DistanceCalculatorOCC */
extern void* _ZTVN9StereoHAL18StereoDistanceUtil21DistanceCalculatorOCCE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool4initEjjNS_12EImageFormatEji(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAnyQueueReady() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAnyQueueReadyEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitHub */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::P2ABayerNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15copyImageBufferEN7android2spINS_12IImageBufferEEES6_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::copyImageBuffer(android::sp<NSCam::IImageBuffer>, android::sp<NSCam::IImageBuffer>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15copyImageBufferEN7android2spINS_12IImageBufferEEES6_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC1EPNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13debugGFParamsERKN9StereoHAL14GF_HAL_IN_DATAERKNS3_15GF_HAL_OUT_DATAE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::debugGFParams(StereoHAL::GF_HAL_IN_DATA const&, StereoHAL::GF_HAL_OUT_DATA const&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13debugGFParamsERKN9StereoHAL14GF_HAL_IN_DATAERKNS3_15GF_HAL_OUT_DATAE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthPipeLoggingSetup10mbDebugLogE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthPipeLoggingSetup::mbDebugLog */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthPipeLoggingSetup10mbDebugLogE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25buildBufScenarioToTypeMapEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::buildBufScenarioToTypeMap() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF25buildBufScenarioToTypeMapEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ejj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE11getIndexSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::getIndexSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE11getIndexSetEv(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize::NodeDPEBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addExtraParam(NSCam::NSIoPipe::EPostProcCmdIndex, void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DParam_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS8_22N3D_HAL_OUTPUT_CAPTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DParam_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DParam_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS8_22N3D_HAL_OUTPUT_CAPTUREE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onDataSuccessERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onDataSuccess(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onDataSuccessERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7recycleEPNS1_18SharedBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::recycle(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7recycleEPNS1_18SharedBufferHandleE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::~DepthQTemplateProvider() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DInputMetaERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAME */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DInputMeta(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19prepareN3DInputMetaERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAME(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv(void);

/* Symbol: _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::sync() */
int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4syncEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE8allocateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE;

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE;

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE12do_constructEPvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::registerEnqueCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15registerEnqueCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC2EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool8addQuotaEjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::addQuota(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool8addQuotaEjj(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initOCCBufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initOCCBufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initOCCBufferPoolEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::config3ATuningMeta_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NS3Av3::MetaSet_T&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool8USAGE_SWE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool16USAGE_HW_TEXTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_TEXTURE */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool16USAGE_HW_TEXTUREE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::config3ATuningMeta(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path, NS3Av3::MetaSet_T&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE(void);

/* Symbol: _ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::DataLess, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::destroy(std::__1::__tree_node<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, void*>*) */
int _ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::config3ATuningMeta(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path, NS3Av3::MetaSet_T&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF18config3ATuningMetaEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathERN6NS3Av39MetaSet_TE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18performN3DALGO_CAPERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::performN3DALGO_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18performN3DALGO_CAPERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED0Ev(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize::NodeOCCBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame4ERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame4(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame4ERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configExternalOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13handleOWEDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEEPNS1_20EnqueCookieContainerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::handleOWEDone(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13handleOWEDoneERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEEPNS1_20EnqueCookieContainerE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestIIBuffer(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE16updatePropValuesEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::updatePropValues() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE16updatePropValuesEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14onDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onDPEEnqueDone(NSCam::NSIoPipe::NSDpe::DVEParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14onDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18SharedBufferHandleEEaSERKS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18SharedBufferHandleEEaSERKS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThread10threadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread::threadLoop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThread10threadLoopEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addExtraParamEjNS_8NSIoPipe17EPostProcCmdIndexEPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::addExtraParam(unsigned int, NSCam::NSIoPipe::EPostProcCmdIndex, void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addExtraParamEjNS_8NSIoPipe17EPostProcCmdIndexEPv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addInput(NSCam::NSIoPipe::PortID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler, void>::~SequentialHandler() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setCrop(unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void);

/* Symbol: _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode19performWMFOperationERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::performWMFOperation(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode19performWMFOperationERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool9doReleaseEPNS1_19GraphicBufferHandleE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPENode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onErrorNotifyERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onErrorNotify(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe13onErrorNotifyERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD2Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEj(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setCropResize(unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup, NSCam::MSize) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15prepareFEFMDataERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL11HWFEFM_DATAE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareFEFMData(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>&, StereoHAL::HWFEFM_DATA&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15prepareFEFMDataERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL11HWFEFM_DATAE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode27requireInputMetaFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::requireInputMetaFromRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, StereoHAL::GF_HAL_IN_DATA&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode27requireInputMetaFromRequestEN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL14GF_HAL_IN_DATAE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::ImageBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolC1EPKc(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >::__on_zero_shared() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_GF_OUT_INTERNAL_DMBGE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_INTERNAL_DMBG */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_GF_OUT_INTERNAL_DMBGE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_S7_NS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_S7_NS1_14ConnectionTypeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC2EPKcjji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::FatHeap(char const*, unsigned int, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC2EPKcjji(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE8allocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21addDataIDToBIDMapItemERN7android11KeyedVectorINS1_14DepthMapDataIDENS2_6VectorIiEEEES4_Pi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::addDataIDToBIDMapItem(android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> >&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21addDataIDToBIDMapItemERN7android11KeyedVectorINS1_14DepthMapDataIDENS2_6VectorIiEEEES4_Pi(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29buildQParams_BAYER_STANDALONEERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_BAYER_STANDALONE(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29buildQParams_BAYER_STANDALONEERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadLoopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_SharedBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe27IIBuffer_SharedBufferHandleE0_NS1_8IIBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::dumpWaitQueueInfo(android::Printer&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7WaitHub17dumpWaitQueueInfoERN7android7PrinterE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8getIDSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::getIDSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8getIDSetEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14makeExifHeaderEjjPhPm */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::makeExifHeader(unsigned int, unsigned int, unsigned char*, unsigned long*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14makeExifHeaderEjjPhPm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode15onDumpBIDToNameEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::onDumpBIDToName(int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode15onDumpBIDToNameEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_P2A_OUT_YUV_DONEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_YUV_DONE */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_P2A_OUT_YUV_DONEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getStatusENS2_6StatusE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::getStatus(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Status) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getStatusENS2_6StatusE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode26prepareN3DOutputBuffer_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DOutputBuffer_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode26prepareN3DOutputBuffer_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREE(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD2Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestE */
/* Demangled: vtable for NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest */
extern void* _ZTVN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7cleanUpEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_OCC_TO_WMF_OMYSNE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_OCC_TO_WMF_OMYSN */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_OCC_TO_WMF_OMYSNE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7cleanUpEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addOutputBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE7destroyEPNS_11__tree_nodeISE_PvEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler, void> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvEE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_FatImageBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE0_NS1_8IIBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE8allocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize::NodeP2ABufferSize(StereoHAL::ENUM_STEREO_SCENARIO, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15mapToDpColorFmtEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::mapToDpColorFmt(int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15mapToDpColorFmtEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::init() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF4initEv(void);

/* Symbol: _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::handleP2Done(NSCam::NSIoPipe::QParams&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onP2FailedCallback(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DInputMeta_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DInputMeta_CAP(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM_CAPTURE&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DInputMeta_CAPERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL21N3D_HAL_PARAM_CAPTUREE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_destroyEPvm(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE0_NS1_17BaseBufferHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE0_NS1_17BaseBufferHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getNativeBufferPtr(AHardwareBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18getNativeBufferPtrEP15AHardwareBuffer(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19performN3DALGO_VRPVERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::performN3DALGO_VRPV(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode19performN3DALGO_VRPVERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame1(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap11reqNoGetterERKN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::reqNoGetter(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap11reqNoGetterERKN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode15setupDPEBufInfoENS_8NSIoPipe10DPEDMAPortEPNS_12IImageBufferERNS3_10DPEBufInfoE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::setupDPEBufInfo(NSCam::NSIoPipe::DPEDMAPort, NSCam::IImageBuffer*, NSCam::NSIoPipe::DPEBufInfo&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode15setupDPEBufInfoENS_8NSIoPipe10DPEDMAPortEPNS_12IImageBufferERNS3_10DPEBufInfoE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBC2Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap8is3DNROnEPNS_9IMetadataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::is3DNROn(NSCam::IMetadata*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap8is3DNROnEPNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5clearEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::clear() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::FatImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest::DualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC2EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame4ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame4(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame4ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15isRequestBufferEi */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::isRequestBuffer(int) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15isRequestBufferEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5clearEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::clear() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5clearEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE0_NS1_8NotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::TimeoutCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBC2Ej(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame0EiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_CAPTURE_frame0(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame0EiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub10waitSignalEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7requestEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE12do_constructEPvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::setGrallocExtraParam(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper20setGrallocExtraParamENS2_10ColorSpaceE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::pushRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil5c_strEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::c_str() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil5c_strEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13debugWMFParamERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::debugWMFParam(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13debugWMFParamERNS_8NSIoPipe5NSEgn9EGNParamsINS3_11OWMFEConfigEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest::IDepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14setupSRZ4LCENREN7android2spINS1_21DepthMapEffectRequestEEER15_SRZ_SIZE_INFO_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::setupSRZ4LCENR(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, _SRZ_SIZE_INFO_&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14setupSRZ4LCENREN7android2spINS1_21DepthMapEffectRequestEEER15_SRZ_SIZE_INFO_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler16requestTuningBufENS1_19eDepthMapPipeNodeIDEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestTuningBuf(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler16requestTuningBufENS1_19eDepthMapPipeNodeIDEi(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7cleanUpEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread11getInstanceERKNS_6MSizeFEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::getInstance(NSCam::MSizeF const&, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread11getInstanceERKNS_6MSizeFEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::~JpegEncodeThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_DPE_TO_OCC_MVSV_DMP_CFME */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_DPE_TO_OCC_MVSV_DMP_CFM */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_DPE_TO_OCC_MVSV_DMP_CFME;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18configureDpPQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjR9DpPqParami */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::configureDpPQParam(int, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, unsigned int, DpPqParam&, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18configureDpPQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjR9DpPqParami(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode16_handleDequeDoneEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::_handleDequeDone(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode16_handleDequeDoneEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider11mapToPortIDEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::mapToPortID(int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider11mapToPortIDEi(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE4sizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::size() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE4sizeEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathIRKSB_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> const&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathIRKSB_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<bool&>(bool&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRbEEEvDpOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7cleanUpEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8waitSyncEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::waitSync(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8waitSyncEj(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleE0_NS1_12BufferHandleINS1_18TuningBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleE0_NS1_12BufferHandleINS1_18TuningBufferHandleEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap8getCountEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::getCount() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap8getCountEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE10handleDataIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::handleData<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE10handleDataIN7android2spINS3_21DepthMapEffectRequestEEEEEiNS3_14DepthMapDataIDERT_(void);

/* Symbol: _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::flush() */
int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE4moveEv */
/* Demangled: std::__1::__assoc_state<int>::move() */
int _ZNSt3__113__assoc_stateIiE4moveEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon4initEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon::init(unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon4initEj(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE0_NS1_12BufferHandleINS1_20FatImageBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE0_NS1_12BufferHandleINS1_20FatImageBufferHandleEEE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE0_NS1_12BufferHandleINS1_19GraphicBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE0_NS1_12BufferHandleINS1_19GraphicBufferHandleEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getElapsed() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer10getElapsedEv(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEj(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_P2A_OUT_MV_F_CAPE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_MV_F_CAP */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_P2A_OUT_MV_F_CAPE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::DepthMapPipe(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE0_NS1_8NotifyCBE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::N3DNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::uninit() */
int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6uninitEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsEjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&, unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsEjj(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool6createEPKcRKN7android2spINS1_11IBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::create(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool6createEPKcRKN7android2spINS1_11IBufferPoolEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE4sizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::size() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE4sizeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::~FatHeap() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::lock(unsigned long, void**) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper4lockEmPPv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC2ERKNS_6MSizeFEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::JpegEncodeThread(NSCam::MSizeF const&, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC2ERKNS_6MSizeFEPKc(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__16vectorI16FD_DATA_STEREO_TNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<FD_DATA_STEREO_T, std::__1::allocator<FD_DATA_STEREO_T> >::__push_back_slow_path<FD_DATA_STEREO_T const&>(FD_DATA_STEREO_T const&) */
int _ZNSt3__16vectorI16FD_DATA_STEREO_TNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest14getElapsedTimeEv */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getElapsedTime() */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest14getElapsedTimeEv(void);

/* Symbol: _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageSize() const */
int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15USAGE_HW_AND_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::USAGE_HW_AND_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15USAGE_HW_AND_SWE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferC2Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider25remapTransformForPostviewE13ENUM_ROTATIONS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::remapTransformForPostview(ENUM_ROTATION, ENUM_ROTATION) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider25remapTransformForPostviewE13ENUM_ROTATIONS3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::decExtThreadDependency() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22decExtThreadDependencyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::NodeSignal() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15DepthBufferInfoENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >::clear() */
int _ZNSt3__112__deque_baseIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15DepthBufferInfoENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD2Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getNow() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe5Timer6getNowEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode19calcRotatedFDResultE13MtkCameraFacejR16FD_DATA_STEREO_T */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::calcRotatedFDResult(MtkCameraFace, unsigned int, FD_DATA_STEREO_T&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode19calcRotatedFDResultE13MtkCameraFacejR16FD_DATA_STEREO_T(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE8allocateEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10PHASE2NameENS1_16N3D_PVPHASE_ENUME */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PHASE2Name(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3D_PVPHASE_ENUM) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10PHASE2NameENS1_16N3D_PVPHASE_ENUME(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame2ERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame2(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame2ERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode13onThreadStartEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE0_NS1_8IIBufferE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5dequeERS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::deque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE5dequeERS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKc(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::allocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD2Ev(void);

/* Symbol: _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Em */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil(unsigned long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Em(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE4findIS7_EENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEERKT_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcjjNS_12EImageFormatEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcjjNS_12EImageFormatEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addCrop(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::~PriorityWaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::~TimeThreshold() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD1Ev(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10initConfigEjjNS_12EImageFormatEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool10initConfigEjjNS_12EImageFormatEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::handleDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::DumpConfig*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::input_buffer_adapter, std::__1::allocator<nlohmann::detail::input_buffer_adapter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail20input_buffer_adapterENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::signalEnque() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11signalEnqueEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7requestEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEji(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC1Ev(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setStatusENS2_6StatusE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::setStatus(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Status) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9setStatusENS2_6StatusE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::DepthMapDataHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::wait() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch4waitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14onHandleP2DoneENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::onHandleP2Done(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider14onHandleP2DoneENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DOutputYUVMaskERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL14N3D_HAL_OUTPUTE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DOutputYUVMask(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>&, StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23prepareN3DOutputYUVMaskERN7android2spINS1_17BaseBufferHandlerEEERN9StereoHAL14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::allocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE8allocateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10setWaitHubEPNS1_7WaitHubE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10setWaitHubEPNS1_7WaitHubE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler5flushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::flush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler5flushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5startEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::start() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5startEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__push_back_slow_path<NSCam::IImageBuffer* const&>(NSCam::IImageBuffer* const&) */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKc(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_front(timespec* const&) */
int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE10push_frontERKS2_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller8validateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::validate() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller8validateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12getImageSizeEv(void);

/* Symbol: _Z20calculateLCENRConfig15LCENR_IN_PARAMSR16LCENR_OUT_PARAMS */
/* Demangled: calculateLCENRConfig(LCENR_IN_PARAMS, LCENR_OUT_PARAMS&) */
int _Z20calculateLCENRConfig15LCENR_IN_PARAMSR16LCENR_OUT_PARAMS(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCB8onNotifyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest11showContentEv */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::showContent() */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest11showContentEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13N3DBufferSize5debugEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::N3DBufferSize::debug() const */
int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13N3DBufferSize5debugEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF15queryBufferTypeEiNS1_19eBufferPoolScenarioERNS1_16eDepthBufferTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::queryBufferType(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF15queryBufferTypeEiNS1_19eBufferPoolScenarioERNS1_16eDepthBufferTypeE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9doReleaseEPNS1_18SharedBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9doReleaseEPNS1_18SharedBufferHandleE(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvm */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIiE10do_destroyEPvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPSensorTuning>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe15SFPSensorTuningEEENS_19__map_value_compareIjS6_NS_4lessIjEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::~DepthQTemplateProvider() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12debugQParamsERKNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::debugQParams(NSCam::NSIoPipe::QParams const&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12debugQParamsERKNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleFramesEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::handleFrames(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12handleFramesEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode18handleDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsEPNS1_20EnqueCookieContainerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::handleDPEEnqueDone(NSCam::NSIoPipe::NSDpe::DVEParams&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode18handleDPEEnqueDoneERNS_8NSIoPipe5NSDpe9DVEParamsEPNS1_20EnqueCookieContainerE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC2EPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode21prepareN3DInputBufferERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL20N3D_HAL_PARAM_COMMONE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DInputBuffer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM_COMMON&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode21prepareN3DInputBufferERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL20N3D_HAL_PARAM_COMMONE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE0_NS1_8StatusCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE0_NS1_8StatusCBE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueEmpty() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueEmptyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnquedSmartBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16configurePQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjRNS_8NSIoPipe7PQParamEii */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::configurePQParam(int, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, unsigned int, NSCam::NSIoPipe::PQParam&, int, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16configurePQParamEiN7android2spINS1_21DepthMapEffectRequestEEEjRNS_8NSIoPipe7PQParamEii(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEEE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE11getIndexSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::getIndexSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE11getIndexSetEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap11DataStorageINS1_15DepthBufferInfoEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap11DataStorageINS1_15DepthBufferInfoEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initN3DBufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initN3DBufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initN3DBufferPoolEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::toGrallocExtraColor(NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper19toGrallocExtraColorENS2_10ColorSpaceE(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode15prepareWMFECtrlEPNS_12IImageBufferES4_S4_S4_RNS_8NSIoPipe9OWMFECtrlE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::prepareWMFECtrl(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::NSIoPipe::OWMFECtrl&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode15prepareWMFECtrlEPNS_12IImageBufferES4_S4_S4_RNS_8NSIoPipe9OWMFECtrlE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessIdleCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16tryProcessIdleCBEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize::NodeN3DBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest>&) */
int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19setupPQParamSettingEP9DpPqParamj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::setupPQParamSetting(DpPqParam*, unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19setupPQParamSettingEP9DpPqParamj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReady() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub15isAllQueueReadyEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::N3DNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestGBEiNS1_19eBufferPoolScenarioE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::requestGB(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestGBEiNS1_19eBufferPoolScenarioE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize::NodeWMFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame1ENS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame1(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeOpState, int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame1ENS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__push_back_slow_path<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::addWaitQueue(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12addWaitQueueEPNS1_10IWaitQueueE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode14checkDumpIndexEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::checkDumpIndex(unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode14checkDumpIndexEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::makePath(char const*, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8makePathEPKcj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::allocate(unsigned int, unsigned int, android_pixel_format_t, unsigned long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper8allocateEjj22android_pixel_format_tm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18getRequestMetadataERKNS1_17NodeBufferSettingERPNS_9IMetadataE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getRequestMetadata(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IMetadata*&) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18getRequestMetadataERKNS1_17NodeBufferSettingERPNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18initFEFMBufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initFEFMBufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18initFEFMBufferPoolEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommonE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommonE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::WaitHub(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubC1EPKc(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe15onHandleYUVDoneEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onHandleYUVDone(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe15onHandleYUVDoneEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread12compressJpegERKN7android2spINS1_8IIBufferEEEb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::compressJpeg(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&, bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread12compressJpegERKN7android2spINS1_8IIBufferEEEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20buildQParams_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_CAPTURE(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20buildQParams_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::DepthMapFlowOption_VSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void);

/* Symbol: _ZTV11ProfileUtil */
/* Demangled: vtable for ProfileUtil */
extern void* _ZTV11ProfileUtil;

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14prepareBuffersEjjNS_12EImageFormatE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::prepareBuffers(unsigned int, unsigned int, NSCam::EImageFormat) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14prepareBuffersEjjNS_12EImageFormatE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::syncCache(NSCam::eCacheCtrl) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer9syncCacheENS_10eCacheCtrlE(void);

/* Symbol: _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEaSEOS5_ */
/* Demangled: android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool>::operator=(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool>&&) */
int _ZN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEaSEOS5_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onP2CallbackERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onP2Callback(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onP2CallbackERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider30prepareQParamsTemplate_CAPTUREEiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_CAPTURE(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider30prepareQParamsTemplate_CAPTUREEiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode8onUninitEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE0_NS1_10BufferPoolINS1_20FatImageBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE0_NS1_10BufferPoolINS1_20FatImageBufferHandleEEE;

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::P2ANode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getOwnerIDEPKNS1_16SharedBufferPoolERj(void);

/* Symbol: _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageSize() const */
int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_QUEUED_FLOW_DONEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_QUEUED_FLOW_DONE */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_QUEUED_FLOW_DONEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::DepthQTemplateProvider(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::getTimeSpec() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer11getTimeSpecEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode7onFlushEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*>&>::push_back(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecRNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize::NodeP2ABufferSize(StereoHAL::ENUM_STEREO_SCENARIO, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOEN7android2spINS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20isQueuedDepthRequestEN7android2spINS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::isQueuedDepthRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20isQueuedDepthRequestEN7android2spINS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC1EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC1ERKNS_6MSizeFEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::JpegEncodeThread(NSCam::MSizeF const&, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadC1ERKNS_6MSizeFEPKc(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(unsigned int, unsigned int, android_pixel_format_t, unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2Ejj22android_pixel_format_tmRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::flushQueues() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11flushQueuesEv(void);

/* Symbol: _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZThn968_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE10do_destroyEPvm(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE9addToPoolERKN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE9addToPoolERKN7android2spIS3_EE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void);

/* Symbol: _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
int _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20setOutputBufferReadyERKi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::setOutputBufferReady(int const&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest20setOutputBufferReadyERKi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE10do_destroyEPvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_10BufferPoolINS1_17ImageBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE0_NS1_10BufferPoolINS1_17ImageBufferHandleEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18bufIDs_GF_OUT_DMBGE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_DMBG */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap18bufIDs_GF_OUT_DMBGE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17get3DNRVIPIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::get3DNRVIPIBuffer() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17get3DNRVIPIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::init() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toStr(NSCam::EImageFormat) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool5toStrENS_12EImageFormatE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5enqueERKj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::enque(unsigned int const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE5enqueERKj(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::enque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5enqueERN7android2spINS1_22IDepthMapEffectRequestEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_ */
/* Demangled: void std::__1::vector<char, std::__1::allocator<char> >::__push_back_slow_path<char>(char&&) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE21__push_back_slow_pathIcEEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22queryRemappedEISRegionEN7android2spINS1_21DepthMapEffectRequestEEENS_5MSizeES7_RNS1_10eis_regionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::queryRemappedEISRegion(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::MSize, NSCam::MSize, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eis_region&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22queryRemappedEISRegionEN7android2spINS1_21DepthMapEffectRequestEEENS_5MSizeES7_RNS1_10eis_regionE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14checkConnectedENS1_14DepthMapDataIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::checkConnected(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14checkConnectedENS1_14DepthMapDataIDE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10initConfigEjjNS_12EImageFormatEji(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_P2A_OUT_DMBGE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_DMBG */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_P2A_OUT_DMBGE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::triggerSignal(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13triggerSignalEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE12do_constructEPvm(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv(void);

/* Symbol: _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEEE */
/* Demangled: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> > */
extern void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEED2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpENS1_14DepthMapDataIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::checkToDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode11checkToDumpENS1_14DepthMapDataIDE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::ImageBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::applyISPTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13WMFBufferSize5debugEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::WMFBufferSize::debug() const */
int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13WMFBufferSize5debugEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::startThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread11startThreadEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode14runCapturePassEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::runCapturePass(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode14runCapturePassEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest17handleProcessDoneENS1_19eDepthMapPipeNodeIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::handleProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest17handleProcessDoneENS1_19eDepthMapPipeNodeIDE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImageBufferPtr() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer17getImageBufferPtrEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initP2ABufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initP2ABufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initP2ABufferPoolEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_HWOCC_TO_WMF_NOCE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_HWOCC_TO_WMF_NOC */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23bufIDs_HWOCC_TO_WMF_NOCE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setOutputTransformEjNS_8NSIoPipe6PortIDEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::setOutputTransform(unsigned int, NSCam::NSIoPipe::PortID, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller18setOutputTransformEjNS_8NSIoPipe6PortIDEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OCCConfig, std::__1::allocator<NSCam::NSIoPipe::OCCConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OCCConfig const&>(NSCam::NSIoPipe::OCCConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OCCConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::readyToRun() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandle10readyToRunEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread4initEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::flush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe5flushEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD1Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addOutputBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearStatusENS2_6StatusE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::clearStatus(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Status) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearStatusENS2_6StatusE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame1EiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_CAPTURE_frame1(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider34prepareQParam_Bayer_CAPTURE_frame1EiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler17mapQueuedBufferIDEN7android2spINS1_21DepthMapEffectRequestEEENS4_INS1_18DepthMapPipeOptionEEEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::mapQueuedBufferID(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandler17mapQueuedBufferIDEN7android2spINS1_21DepthMapEffectRequestEEENS4_INS1_18DepthMapPipeOptionEEEi(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, NSCam::NSCamFeature::NSFeaturePipe::SFPIOMap> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN5NSCam12NSCamFeature13NSFeaturePipe8SFPIOMapEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC2EN7android2spINS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeBufferSizeMgr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC2EN7android2spINS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool4initEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15getBufferIOTypeEiRNS1_12BufferIOTypeE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getBufferIOType(int, NSCam::NSCamFeature::NSDualFeature::BufferIOType&) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest15getBufferIOTypeEiRNS1_12BufferIOTypeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23buildImageBufferPoolMapEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::buildImageBufferPoolMap() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF23buildImageBufferPoolMapEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::~DepthMapEffectRequest() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::DepthMapPipe(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC2EiPKcz */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::TimeThreshold(int, char const*, ...) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC2EiPKcz(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::onTimeout() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB9onTimeoutEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13P2ABufferSize5debugEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::P2ABufferSize::debug() const */
int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13P2ABufferSize5debugEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnquedSmartBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1ERK8timespec(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEEE;

/* Symbol: _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageFormat() const */
int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool14getImageFormatEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::GraphicBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::peakQuota(unsigned int) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEj(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onP2FailedCallback(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode18onP2FailedCallbackERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE9addToPoolERKN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE9addToPoolERKN7android2spIS3_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::~CountDownLatch() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchD2Ev(void);

/* Symbol: _ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::multiset<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS_8multisetIjNS_4lessIjEENS_9allocatorIjEEEENS4_IS6_EEE8__appendEm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::createImageBuffer(android::sp<NSCam::IImageBufferHeap> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool10doAllocateEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_18TuningBufferHandleEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEEE;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18popRequestMetadataERKNS1_17NodeBufferSettingE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::popRequestMetadata(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest18popRequestMetadataERKNS1_17NodeBufferSettingE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator10checkValidEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::checkValid() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator10checkValidEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::NodeSignal() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::~CamPipe() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12tryProcessCBEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::SharedBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_17ImageBufferHandleEEaSERKS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::lockNativeBuffer(AHardwareBuffer*, unsigned long, void**) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16lockNativeBufferEP15AHardwareBuffermPPv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::P2ABayerNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEEE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_blmdS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEEixERSF_ */
/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::less<void>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonIS0_NS_6vectorES6_blmdS4_NS7_14adl_serializerEEENS_4lessIvEENS4_INS_4pairIKS6_SB_EEEEEixERSF_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20requestWorkingBufferEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestWorkingBuffer(int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20requestWorkingBufferEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getFormattedPropertyValue(char const*, ...) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe25getFormattedPropertyValueEPKcz(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::peakQuota() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool9peakQuotaEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6printfEPKcz */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::printf(char const*, ...) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6printfEPKcz(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE7do_copyEPvPKvm(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Em */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil(unsigned long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Em(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21handleFlowTypeOnEnqueEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::handleFlowTypeOnEnque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21handleFlowTypeOnEnqueEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRlEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<long&>(long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRlEEEvDpOT_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStatusCB(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread18tryProcessStatusCBEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE9addToPoolERKN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE9addToPoolERKN7android2spIS3_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPSC_EEEEEFvvEPSH_EEEEEPvSM_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPSC_EEEEEFvvEPSH_EEEEEPvSM_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19buildQParams_NORMALERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_NORMAL(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19buildQParams_NORMALERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::~TimeThreshold() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdD2Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::start() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer5startEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode7onFlushEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::changeOwnerID(NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool const*, unsigned int, unsigned int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer13changeOwnerIDEPKNS1_16SharedBufferPoolEjRj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::GFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler18initEnqueBufferMapEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::initEnqueBufferMap() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler18initEnqueBufferMapEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode7onFlushEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_SN_EElEERPNS_15__tree_end_nodeISP_EESQ_RKT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::StringUtil() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilC2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::DepthMapDataHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::delInputPort(unsigned int, NSCam::NSIoPipe::PortID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::waitIdle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8waitIdleEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::getExtThreadDependency() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22getExtThreadDependencyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13runNormalPassEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::runNormalPass(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13runNormalPassEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTVN5NSCam13EffectRequestE */
/* Demangled: vtable for NSCam::EffectRequest */
extern void* _ZTVN5NSCam13EffectRequestE;

/* Symbol: _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::init() */
int _ZThn160_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe4initEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEEENS_6futureIT_EEOT0_ */
/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >(std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*>&&) */
int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEEENS_6futureIT_EEOT0_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame3_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame3_capture(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame3_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest4initEN7android2spINS1_17BaseBufferHandlerEEERKNS1_18EffectRequestAttrsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::init(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs const&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequest4initEN7android2spINS1_17BaseBufferHandlerEEERKNS1_18EffectRequestAttrsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::tryProcessStop(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread14tryProcessStopEj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize::NodeN3DBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapper8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapper8onNotifyEv(void);

/* Symbol: _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
int _ZTv0_n112_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEConfigERNS_8NSIoPipe9DVEConfigE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::debugDPEConfig(NSCam::NSIoPipe::DVEConfig&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode14debugDPEConfigERNS_8NSIoPipe9DVEConfigE(void);

/* Symbol: _ZTVN9StereoHAL18StereoDistanceUtilE */
/* Demangled: vtable for StereoHAL::StereoDistanceUtil */
extern void* _ZTVN9StereoHAL18StereoDistanceUtilE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingEPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::pushRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest22pushRequestImageBufferERKNS1_17NodeBufferSettingEPNS_12IImageBufferE(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_front(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE0_NS1_8NotifyCBE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17bufIDs_P2A_OUT_FDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_FD */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17bufIDs_P2A_OUT_FDE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10doAllocateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29prepareQParamsTemplate_NORMALEiiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_NORMAL(int, int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider29prepareQParamsTemplate_NORMALEiiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
int _ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::getFPS() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10FPSCounter6getFPSEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize::NodeWMFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeC2EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::uninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF6uninitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7isEISOnEPNS_9IMetadataE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::isEISOn(NSCam::IMetadata*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7isEISOnEPNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6onStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::onStop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6onStopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE0_NS1_12BufferHandleINS1_17ImageBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE0_NS1_12BufferHandleINS1_17ImageBufferHandleEEE;

/* Symbol: _ZTVN7android19VirtualLightRefBaseE */
/* Demangled: vtable for android::VirtualLightRefBase */
extern void* _ZTVN7android19VirtualLightRefBaseE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onOWECallbackERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onOWECallback(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OCCConfig>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onOWECallbackERNS_8NSIoPipe5NSEgn9EGNParamsINS3_9OCCConfigEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequest14createInstanceEjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest::createInstance(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequest14createInstanceEjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvm */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17handleDataAndDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::handleDataAndDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode17handleDataAndDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configExternalOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler23configExternalOutBufferENS1_19eDepthMapPipeNodeIDEiS3_NS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
int _ZTv0_n24_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::~DepthQTemplateProvider() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderD2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void);

/* Symbol: _ZTV10FastLogger */
/* Demangled: vtable for FastLogger */
extern void* _ZTV10FastLogger;

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE152_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeE152_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getGraphicBufferAddr() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer20getGraphicBufferAddrEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<timespec, std::__1::allocator<timespec> >::__add_back_capacity() */
int _ZNSt3__15dequeI8timespecNS_9allocatorIS1_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26bufIDs_N3D_OUT_JPS_WARPMTXE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_N3D_OUT_JPS_WARPMTX */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26bufIDs_N3D_OUT_JPS_WARPMTXE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less::operator()(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&) const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5Index4LessclERKS3_S6_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_CAPTURE_frame0(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr12GFBufferSize5debugEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::GFBufferSize::debug() const */
int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr12GFBufferSize5debugEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_CAPTURE_frame1(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider32buildQParam_Bayer_CAPTURE_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE;

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::add(android::sp<NSCam::IImageBuffer> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool3addERKN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::FPSCounter */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE9__executeEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::*)(), NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF*> >::__execute() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIMN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFEFivEJPS5_EEEE9__executeEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE7isReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::isReady() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE7isReadyEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_SD_EEEEENS_15__tree_iteratorISE_PNS_11__tree_nodeISE_PvEElEENS_21__tree_const_iteratorISE_SV_lEERKT_DpOT0_(void);

/* Symbol: _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_callback_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail28json_sax_dom_callback_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC1EPKcRKN7android2spINS1_11IBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::SharedBufferPool(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC1EPKcRKN7android2spINS1_11IBufferPoolEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode7onFlushEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::requestIIBuffer() */
int _ZTv0_n120_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeERS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::deque(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeERS7_(void);

/* Symbol: _ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE15__emplace_multiIJRKS7_EEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::__tree_node<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, void*>*, long> std::__1::__tree<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::DataLess, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::__emplace_multi<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&>(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> const&) */
int _ZNSt3__16__treeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS4_13NSFeaturePipe17PriorityWaitQueueIS7_NS5_26DepthRequestIndexConverterEE8DataLessENS_9allocatorIS7_EEE15__emplace_multiIJRKS7_EEENS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEElEEDpOT_(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE */
/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_compareEPKvS6_(void);

/* Symbol: _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d */
/* Demangled: nlohmann::detail::serializer<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >::decode(unsigned char&, unsigned int&, unsigned char)::utf8d */
extern void* _ZZN8nlohmann6detail10serializerINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEE6decodeERhRjhE5utf8d;

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::~WaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjED2Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::onFlush() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED0Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::flush(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5flushERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FEInfo> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FEInfoEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::configureToNext(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC1EPKci */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::TuningBufferPool(char const*, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC1EPKci(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE0_NS1_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool-in-NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE0_NS1_11IBufferPoolE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialHandler<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler, void>::~SequentialHandler() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17SequentialHandlerINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEvED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC2EPKci */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::TuningBufferPool(char const*, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolC2EPKci(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23dequePrioritizedRequestERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::dequePrioritizedRequest(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode23dequePrioritizedRequestERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::DepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode13onThreadStartEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC1EPKcjji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::FatHeap(char const*, unsigned int, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapC1EPKcjji(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle::TuningBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleC1ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::~DepthMapDataHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onP2CallbackERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onP2Callback(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onP2CallbackERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: vtable for nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern void* _ZTVN8nlohmann6detail21output_string_adapterIcNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool6uninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setExtParam(NSCam::MSize const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer11setExtParamERKNS_5MSizeE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE10setWaitHubEPNS1_7WaitHubE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE10setWaitHubEPNS1_7WaitHubE(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool14getImageFormatEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7requestEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_TO_DUMP_BUFFERSE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_TO_DUMP_BUFFERS */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_TO_DUMP_BUFFERSE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_NORMAL_NOFEFM(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_NORMAL_NOFEFMERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14queryEisRegionEPNS_9IMetadataERNS1_10eis_regionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::queryEisRegion(NSCam::IMetadata*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eis_region&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14queryEisRegionEPNS_9IMetadataERNS1_10eis_regionE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::IIBuffer_IImageBuffer(NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferC2EPNS_12IImageBufferE(void);

/* Symbol: _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEEE */
/* Demangled: vtable for nlohmann::detail::json_sax_dom_parser<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > */
extern void* _ZTVN8nlohmann6detail19json_sax_dom_parserINS_10basic_jsonINSt3__13mapENS3_6vectorENS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEblmdS9_NS_14adl_serializerEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn272_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::getName() const */
int _ZThn272_NK5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFECtrl const&>(NSCam::NSIoPipe::OWMFECtrl const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countBackUp() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch11countBackUpEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::~CamGraph() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7isReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::isReady() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE7isReadyEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ejj(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame0EiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame0(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame0EiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21prepareTemplateParamsEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareTemplateParams() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21prepareTemplateParamsEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD2Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE10setWaitHubEPNS1_7WaitHubE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::setWaitHub(NSCam::NSCamFeature::NSFeaturePipe::WaitHub*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE10setWaitHubEPNS1_7WaitHubE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::shiftSignal(unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11shiftSignalEjj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18getImageBufferPoolEiNS1_19eBufferPoolScenarioE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::getImageBufferPool(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF18getImageBufferPoolEiNS1_19eBufferPoolScenarioE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15getPoolContentsEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getPoolContents() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15getPoolContentsEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider4initEPNS1_17BaseBufferSizeMgrE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::init(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider4initEPNS1_17BaseBufferSizeMgrE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool18initAllocatorParamEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::initAllocatorParam() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool18initAllocatorParamEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::HW_OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame1EiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_Bayer_NORMAL_NOFEFM_frame1(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider40prepareQParam_Bayer_NORMAL_NOFEFM_frame1EiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv(void);

/* Symbol: _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
int _ZThn152_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7requestEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFEConfig, std::__1::allocator<NSCam::NSIoPipe::OWMFEConfig> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFEConfig const&>(NSCam::NSIoPipe::OWMFEConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11OWMFEConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvm */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider16getEISCropRegionENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEERNS_6MPointERNS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::getEISCropRegion(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::MPoint&, NSCam::MSize&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider16getEISCropRegionENS1_19eDepthMapPipeNodeIDEN7android2spINS1_21DepthMapEffectRequestEEERNS_6MPointERNS_5MSizeE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::triggerDryRun() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread13triggerDryRunEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC2EPKcRKN7android2spINS1_11IBufferPoolEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::SharedBufferPool(char const*, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IBufferPool> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolC2EPKcRKN7android2spINS1_11IBufferPoolEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18TuningBufferHandleEEaSERKS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_18TuningBufferHandleEEaSERKS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::DepthQTemplateProvider(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProviderC1EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEEPNS1_18DepthMapFlowOptionE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon11perform3dnrERN7android2spINS1_21DepthMapEffectRequestEEEPN6NS3Av36IHal3AENS4_INS1_18DepthMapFlowOptionEEERNS1_17Stereo3ATuningResE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon::perform3dnr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NS3Av3::IHal3A*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon11perform3dnrERN7android2spINS1_21DepthMapEffectRequestEEEPN6NS3Av36IHal3AENS4_INS1_18DepthMapFlowOptionEEERNS1_17Stereo3ATuningResE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode23onHandleOnGoingReqReadyEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onHandleOnGoingReqReady(unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode23onHandleOnGoingReqReadyEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_WMF_TO_GF_ONDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_WMF_TO_GF_OND */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_WMF_TO_GF_ONDE;

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool4initEjjNS_12EImageFormatEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::init(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool4initEjjNS_12EImageFormatEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addModuleInfoEjPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addModuleInfo(unsigned int, void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator13addModuleInfoEjPv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsEjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&, unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsEjj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool21requestSharedIIBufferEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::requestSharedIIBuffer(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool21requestSharedIIBufferEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE0_N7android6ThreadE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getTimestamp() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12getTimestampEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15configOutBufferENS1_19eDepthMapPipeNodeIDEiS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15configOutBufferENS1_19eDepthMapPipeNodeIDEiS3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::request() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7requestEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS5_16eDepthBufferTypeEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4stopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::stop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4stopEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_19GraphicBufferHandleEEaSERKS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame0(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame0ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::queryPipeNodeBitSet(std::__1::bitset<9ul>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD0Ev(void);

/* Symbol: _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::onNotify() */
int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onNotifyEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::convertFrameIdToPass2Round(unsigned int, StereoHAL::ENUM_PASS2_ROUND&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool9doReleaseEPNS1_17ImageBufferHandleE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::delOutputPort(unsigned int, NSCam::NSIoPipe::PortID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eCropGroup) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::~WaitNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame3ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame3(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame3ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>* const&>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>* const&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathIRKSC_EEvOT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool11changeOwnerEjRKN7android2spINS1_8IIBufferEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::changeOwner(unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool11changeOwnerEjRKN7android2spINS1_8IIBufferEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::~NodeBufferSizeMgr() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB9getStatusEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::getStatus() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB9getStatusEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::create(char const*, unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool6createEPKcjjNS_12EImageFormatEji(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::unlockNativeBuffer(AHardwareBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18unlockNativeBufferEP15AHardwareBuffer(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_18TuningBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedWorkingBuffer(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler22addEnquedWorkingBufferENS0_13NSFeaturePipe2sbINS3_18TuningBufferHandleEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper9getHandleEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC1EiPKcz */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::TimeThreshold::TimeThreshold(int, char const*, ...) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13TimeThresholdC1EiPKcz(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initDPEBufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initDPEBufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initDPEBufferPoolEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode26prepareDPEEnqueConfig_PVVREN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::prepareDPEEnqueConfig_PVVR(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::vector<NSCam::NSIoPipe::DVEConfig, std::__1::allocator<NSCam::NSIoPipe::DVEConfig> >&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode26prepareDPEEnqueConfig_PVVREN7android2spINS1_21DepthMapEffectRequestEEERNSt3__16vectorINS_8NSIoPipe9DVEConfigENS7_9allocatorISA_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_P2A_TO_N3D_FEFM_CCinE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_N3D_FEFM_CCin */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap27bufIDs_P2A_TO_N3D_FEFM_CCinE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*>&>::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEERNS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int>, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::~DepthMapEffectRequest() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE6uninitEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeap15createDummyHeapEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::createDummyHeap() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeap15createDummyHeapEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest19pushRequestMetadataERKNS1_17NodeBufferSettingEPNS_9IMetadataE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::pushRequestMetadata(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IMetadata*) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest19pushRequestMetadataERKNS1_17NodeBufferSettingEPNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addOutputBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addOutputBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::StereoFDNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool12getImageSizeEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13configRequestEPNS1_21DepthMapEffectRequestE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configRequest(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13configRequestEPNS1_21DepthMapEffectRequestE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF7requestEiNS1_19eBufferPoolScenarioE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::request(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF7requestEiNS1_19eBufferPoolScenarioE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::handleP2Done(NSCam::NSIoPipe::QParams&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EnqueCookieContainer*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12handleP2DoneERNS_8NSIoPipe7QParamsEPNS1_20EnqueCookieContainerE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toImageFormat(android_pixel_format_t) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toImageFormatE22android_pixel_format_t(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14remapTransformE13ENUM_ROTATION */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::remapTransform(ENUM_ROTATION) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14remapTransformE13ENUM_ROTATION(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::applyISPTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode14applyISPTuningERN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::queryPipeNodeBitSet(std::__1::bitset<9ul>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF19queryPipeNodeBitSetERNSt3__16bitsetILm9EEE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::~DepthMapPipe() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipeD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::DepthMapFlowOption_BMVSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::SharedBufferHandle(android::sp<NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleC2ERKN7android2spINS1_10BufferPoolIS2_EEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv(void);

/* Symbol: _ZTVN9StereoHAL18StereoDistanceUtil24StereoDistanceCalculatorE */
/* Demangled: vtable for StereoHAL::StereoDistanceUtil::StereoDistanceCalculator */
extern void* _ZTVN9StereoHAL18StereoDistanceUtil24StereoDistanceCalculatorE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertIdleCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread12insertIdleCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::addEnquedBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler15addEnquedBufferENS1_19eDepthMapPipeNodeIDEiNS0_13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17setupFMTuningInfoERNS_8NSIoPipe6FMInfoEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::setupFMTuningInfo(NSCam::NSIoPipe::FMInfo&, unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17setupFMTuningInfoERNS_8NSIoPipe6FMInfoEj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEEE;

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool8USAGE_HWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::USAGE_HW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool8USAGE_HWE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF20initializeBufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initializeBufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF20initializeBufferPoolEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24bufIDs_HWOCC_OUT_3RD_NOCE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_HWOCC_OUT_3RD_NOC */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24bufIDs_HWOCC_OUT_3RD_NOCE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode8onUninitEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE9addToPoolERKN7android2spIS3_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4stopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::stop() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4stopEv(void);

/* Symbol: _ZTVN8nlohmann6detail9exceptionE */
/* Demangled: vtable for nlohmann::detail::exception */
extern void* _ZTVN8nlohmann6detail9exceptionE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider42prepareQParamsTemplate_BAYER_NORMAL_NOFEFMEiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_BAYER_NORMAL_NOFEFM(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider42prepareQParamsTemplate_BAYER_NORMAL_NOFEFMEiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD0Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE0_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogE0_NS1_8NotifyCBE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getSignalENS2_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::getSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal9getSignalENS2_6SignalE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE0_NS1_10BufferPoolINS1_18TuningBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolE0_NS1_10BufferPoolINS1_18TuningBufferHandleEEE;

/* Symbol: _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__push_back_slow_path<NSCam::IImageBuffer*>(NSCam::IImageBuffer*&&) */
int _ZNSt3__16vectorIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE12do_constructEPvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::FatHeap */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapE;

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE7isReadyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::isReady() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE7isReadyEv(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe14createInstanceEN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapPipe::createInstance(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipe14createInstanceEN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest6copyToEPS2_PFiiE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::copyTo(NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest*, int (*)(int)) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest6copyToEPS2_PFiiE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21buildQParam_frame6to9ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame6to9(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider21buildQParam_frame6to9ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeE;

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest9stopTimerEv */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::stopTimer() */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest9stopTimerEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThread */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertTuningBufEjPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertTuningBuf(unsigned int, void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller15insertTuningBufEjPv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15onP2ProcessDoneEPNS1_7P2ANodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7onFlushEv(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC2EPKc(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::~PriorityWaitQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE0_NS1_16DepthMapPipeNodeE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE0_NS1_16DepthMapPipeNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB8insertCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC2EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::FatImageBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC2EPKc(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::Vector<int> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_6VectorIiEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::getPropertyValue(char const*, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16getPropertyValueEPKci(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon13setup3DNRMetaENS1_19eDepthMapPipeNodeIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NR3DCommon::setup3DNRMeta(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NR3DCommon13setup3DNRMetaENS1_19eDepthMapPipeNodeIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15USAGE_HW_AND_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::USAGE_HW_AND_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15USAGE_HW_AND_SWE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::countDown() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatch9countDownEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15USAGE_HW_RENDERE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::USAGE_HW_RENDER */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool15USAGE_HW_RENDERE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEED2Ev(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_ImageBufferHandle */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe26IIBuffer_ImageBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17getDataIDToBIDMapEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::getDataIDToBIDMap() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17getDataIDToBIDMapEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAllQueueEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE9waitFlushEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::waitFlush(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE9waitFlushEj(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_GF_OUT_DEPTHMAPE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_GF_OUT_DEPTHMAP */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_GF_OUT_DEPTHMAPE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode24writeN3DResultToMeta_CAPERKN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::writeN3DResultToMeta_CAP(StereoHAL::N3D_HAL_OUTPUT_CAPTURE const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode24writeN3DResultToMeta_CAPERKN9StereoHAL22N3D_HAL_OUTPUT_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_BAYER_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParams_BAYER_CAPTURE(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParams_BAYER_CAPTUREERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD2Ev(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadStopEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest20launchFinishCallbackENS1_11ResultStateE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::launchFinishCallback(NSCam::NSCamFeature::NSDualFeature::ResultState) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest20launchFinishCallbackENS1_11ResultStateE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::addToPool(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE9addToPoolERKN7android2spIS3_EE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::diff(timespec const&, timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer4diffERK8timespecS5_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRS9_EEEvDpOT_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapPipe */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap13IDepthMapPipeE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadStopEv(void);

/* Symbol: _ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
int _ZThn272_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers */
/* Demangled: nlohmann::detail::dtoa_impl::get_cached_power_for_binary_exponent(int)::kCachedPowers */
extern void* _ZZN8nlohmann6detail9dtoa_impl36get_cached_power_for_binary_exponentEiE13kCachedPowers;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::GraphicBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolC1EPKc(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE12getImageSizeEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::push_front(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE8getIDSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitQueue<unsigned int>::getIDSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe9WaitQueueIjE8getIDSetEv(void);

/* Symbol: _ZNSt3__16__treeIPN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*, void*>*) */
int _ZNSt3__16__treeIPN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeENS_4lessIS5_EENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC1EPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::FatImageBufferPool(char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolC1EPKc(void);

/* Symbol: _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*) */
int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::getInputRawType(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eStereoP2Path) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF15getInputRawTypeEN7android2spINS1_21DepthMapEffectRequestEEENS1_13eStereoP2PathE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::~IIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferD2Ev(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD0Ev(void);

/* Symbol: _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadEED2Ev */
/* Demangled: android::wp<NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread>::~wp() */
int _ZN7android2wpIN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::convertFrameIdToPass2Round(unsigned int, StereoHAL::ENUM_PASS2_ROUND&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26convertFrameIdToPass2RoundEjRN9StereoHAL16ENUM_PASS2_ROUNDE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD1Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_FatImageBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe29IIBuffer_FatImageBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::initAllocatorParam() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool18initAllocatorParamEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14debugN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS3_14N3D_HAL_OUTPUTE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::debugN3DParams(StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode14debugN3DParamsERN9StereoHAL13N3D_HAL_PARAMERNS3_14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::setTimestamp(long) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer12setTimestampEl(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeout() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB10getTimeoutEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC1EPS2_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterC2Ev(void);

/* Symbol: _Z18lcenr_srz_settingsiiiiiiiiiiRjS_RmS0_S_S_S_S_S_S_ */
/* Demangled: lcenr_srz_settings(int, int, int, int, int, int, int, int, int, int, unsigned int&, unsigned int&, unsigned long&, unsigned long&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&) */
int _Z18lcenr_srz_settingsiiiiiiiiiiRjS_RmS0_S_S_S_S_S_S_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::P2ANode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal10waitSignalENS2_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::waitSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal10waitSignalENS2_6SignalE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::CamThreadHandle(NSCam::NSCamFeature::NSFeaturePipe::CamThread*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleC2EPS2_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15setupOWEBufInfoENS_8NSIoPipe10OWEDMAPortEPNS_12IImageBufferERNS2_10EGNBufInfoEh */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::setupOWEBufInfo(NSCam::NSIoPipe::OWEDMAPort, NSCam::IImageBuffer*, NSCam::NSIoPipe::EGNBufInfo&, unsigned char) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap15setupOWEBufInfoENS_8NSIoPipe10OWEDMAPortEPNS_12IImageBufferERNS2_10EGNBufInfoEh(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode16packDepthWrapperEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::packDepthWrapper(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode16packDepthWrapperEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool9doReleaseEPNS1_18TuningBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool9doReleaseEPNS1_18TuningBufferHandleE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::FMInfo> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe6FMInfoEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::~HW_OCCNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21getRequestImageBufferERKNS1_17NodeBufferSettingERPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::getRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&, NSCam::IImageBuffer*&) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21getRequestImageBufferERKNS1_17NodeBufferSettingERPNS_12IImageBufferE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::KeyedVector<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_11KeyedVectorIiNS3_13NSDualFeature12BufferIOTypeEEEEEEE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::registerStatusCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::StatusCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread16registerStatusCBERKN7android2spINS1_8StatusCBEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle::~CamThreadHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThread(char const*, unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadC2EPKcjj(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN8nlohmann6detail20input_buffer_adapterE */
/* Demangled: vtable for nlohmann::detail::input_buffer_adapter */
extern void* _ZTVN8nlohmann6detail20input_buffer_adapterE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::StereoFDNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::~TuningBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPoolD2Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread6encodeERKN7android2spINS1_8IIBufferEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::encode(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread6encodeERKN7android2spINS1_8IIBufferEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::NotifyCB::~NotifyCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBD1Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_10BufferPoolINS1_19GraphicBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE0_NS1_10BufferPoolINS1_19GraphicBufferHandleEEE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::WMFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool15requestIIBufferEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool7destroyERN7android2spIS2_EE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::destroy(android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool7destroyERN7android2spIS2_EE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::peakAvailableSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE17peakAvailableSizeEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCBE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::peakPoolSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE12peakPoolSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::~StringUtil() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::~DepthMapDataHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7recycleEPS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE7recycleEPS3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle::~SharedBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::~NodeBufferHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::config3ATuningMeta_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NS3Av3::MetaSet_T&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF24config3ATuningMeta_BayerEN7android2spINS1_21DepthMapEffectRequestEEERN6NS3Av39MetaSet_TE(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE21__push_back_slow_pathISB_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::resetSignal() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub11resetSignalEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::unlock() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper6unlockEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::DepthMapPipeNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthPipeLoggingSetup12mbProfileLogE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthPipeLoggingSetup::mbProfileLog */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthPipeLoggingSetup12mbProfileLogE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode21prepareWMFEnqueConfigEN7android2spINS1_17BaseBufferHandlerEEERNS_8NSIoPipe5NSEgn9EGNParamsINS7_11OWMFEConfigEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::prepareWMFEnqueConfig(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler>, NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::OWMFEConfig>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode21prepareWMFEnqueConfigEN7android2spINS1_17BaseBufferHandlerEEERNS_8NSIoPipe5NSEgn9EGNParamsINS7_11OWMFEConfigEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onFlush() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD0Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC1EN7android2spINS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeBufferSizeMgr(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrC1EN7android2spINS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::reMapBufferID(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs const&, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper16USAGE_HW_TEXTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_TEXTURE */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper16USAGE_HW_TEXTUREE;

/* Symbol: _ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue*> >::__push_back_slow_path<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&>(NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue* const&) */
int _ZNSt3__16vectorIPN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueueENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::getEnquedSmartBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler20getEnquedSmartBufferENS1_19eDepthMapPipeNodeIDEiRNS0_13NSFeaturePipe2sbINS4_18TuningBufferHandleEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_20FatImageBufferHandleEEaSERKS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::operator=(NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe2sbINS1_20FatImageBufferHandleEEaSERKS4_(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStart() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode13onThreadStartEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode14debugOCCParamsENS2_13DebugBufParamE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::debugOCCParams(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::DebugBufParam) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode14debugOCCParamsENS2_13DebugBufParamE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::getGraphicBufferAddr() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandle20getGraphicBufferAddrEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE0_NS1_8IIBufferE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer-in-NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE0_NS1_8IIBufferE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17get3DNRVIPIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::get3DNRVIPIBuffer() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider17get3DNRVIPIBufferEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::registerSyncCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE14registerSyncCBERKN7android2spINS1_14CountDownLatchEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle::~ImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17ImageBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::NativeBufferWrapper(AHardwareBuffer*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperC2EP15AHardwareBufferRKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::StatusCB */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_TO_DUMP_RAWSE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_TO_DUMP_RAWS */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_TO_DUMP_RAWSE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC1Eb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDEPNS4_16DepthMapPipeNodeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode20writeN3DResultToMetaERKN9StereoHAL14N3D_HAL_OUTPUTERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::writeN3DResultToMeta(StereoHAL::N3D_HAL_OUTPUT const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode20writeN3DResultToMetaERKN9StereoHAL14N3D_HAL_OUTPUTERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE11__find_leafENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEERPNS_15__tree_end_nodeIPNS_16__tree_node_baseISC_EEEERKS5_ */
/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Less, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index> >::__find_leaf(std::__1::__tree_const_iterator<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index const&) */
int _ZNSt3__16__treeIN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexENS5_4LessENS_9allocatorIS5_EEE11__find_leafENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEElEERPNS_15__tree_end_nodeIPNS_16__tree_node_baseISC_EEEERKS5_(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*> >::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS8_EEE10push_frontEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22onHandleFlowTypeP2DoneEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onHandleFlowTypeP2Done(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode22onHandleFlowTypeP2DoneEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch::CountDownLatch(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchC1Ej(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode14debugOCCParamsENS2_13DebugBufParamE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::debugOCCParams(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::DebugBufParam) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode14debugOCCParamsENS2_13DebugBufParamE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame2ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame2(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame2ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::String8> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_7String8EEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::resume() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5Timer6resumeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::~NodeBufferPoolMgr_VSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FPSCounter::~FPSCounter() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10FPSCounterD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame5ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame5(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider18buildQParam_frame5ERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
int _ZThn32_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadStopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_19GraphicBufferHandleEED1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferHandlerE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferHandler */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::reMapBufferID(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs const&, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF13reMapBufferIDERKNS1_18EffectRequestAttrsEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::~CamThreadNode() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11preAllocateEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::preAllocate(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11preAllocateEj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initWMFBufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initWMFBufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF17initWMFBufferPoolEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEED0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitNotifyCB::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12WaitNotifyCB8onNotifyEv(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam_Bayer(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF17buildQParam_BayerEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::insertCB(android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread8insertCBERKN7android2spINS1_8NotifyCBEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::~TimeoutCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCBD0Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDataENS1_14DepthMapDataIDEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::handleData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode10handleDataENS1_14DepthMapDataIDEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::configureToNext(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode15configureToNextEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode14mergeExtraDataERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::mergeExtraData(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode14mergeExtraDataERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRmEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<unsigned long&>(unsigned long&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRmEEEvDpOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest10startTimerEv */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::startTimer() */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest10startTimerEv(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18TuningBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::doAllocate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool10doAllocateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15getPreviewPhaseEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::getPreviewPhase(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode15getPreviewPhaseEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::DPENode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeC2EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD2Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool14getImageFormatEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::incExtThreadDependency() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThread22incExtThreadDependencyEv(void);

/* Symbol: _ZTV15AutoProfileUtil */
/* Demangled: vtable for AutoProfileUtil */
extern void* _ZTV15AutoProfileUtil;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, unsigned int, unsigned int, android_pixel_format_t, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcjj22android_pixel_format_tjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6lengthEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::length() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil6lengthEv(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void);

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool8USAGE_SWE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::USAGE_SW */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool8USAGE_SWE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe17GraphicBufferPoolEEEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::~Watchdog() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8WatchdogD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_P2A_TO_OCC_MY_SE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_OCC_MY_S */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22bufIDs_P2A_TO_OCC_MY_SE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool4initEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TuningBufferPool::init(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16TuningBufferPool4initEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BacktraceNotifyCB::~BacktraceNotifyCB() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17BacktraceNotifyCBD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode22prepareN3DParam_NORMALENS1_16N3D_PVPHASE_ENUMERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAMERNS9_14N3D_HAL_OUTPUTE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::prepareN3DParam_NORMAL(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3D_PVPHASE_ENUM, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, StereoHAL::N3D_HAL_PARAM&, StereoHAL::N3D_HAL_OUTPUT&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode22prepareN3DParam_NORMALENS1_16N3D_PVPHASE_ENUMERN7android2spINS1_21DepthMapEffectRequestEEERN9StereoHAL13N3D_HAL_PARAMERNS9_14N3D_HAL_OUTPUTE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onUpdateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB::onUpdate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCB8onUpdateEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAllQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAllQueueEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE8getIDSetEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::getIDSet() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE8getIDSetEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPool12getImageSizeEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::~NodeBufferSizeMgr() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode7cleanUpEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAnyQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12waitAnyQueueEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv(void);

/* Symbol: _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::thread, std::__1::allocator<std::__1::thread> >::__push_back_slow_path<std::__1::thread>(std::__1::thread&&) */
int _ZNSt3__16vectorINS_6threadENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IBufferPool::~IBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe11IBufferPoolD1Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStart() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode13onThreadStartEv(void);

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CounterCBWrapper */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16CounterCBWrapperE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EElEERPNS_15__tree_end_nodeISE_EESF_RKT_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEEE;

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode6onInitEv(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15setAutoAllocateEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::setAutoAllocate(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE15setAutoAllocateEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::requestIIBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15requestIIBufferEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_P2A_OUT_MV_FE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_OUT_MV_F */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19bufIDs_P2A_OUT_MV_FE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode13onThreadStartEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_18TuningBufferHandleEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN8nlohmann6detail12out_of_rangeE */
/* Demangled: vtable for nlohmann::detail::out_of_range */
extern void* _ZTVN8nlohmann6detail12out_of_rangeE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::~DepthMapEffectRequest() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeOCCBufferSize> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeOCCBufferSizeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap25bufIDs_WMF_TO_GF_DMW_MY_SE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_WMF_TO_GF_DMW_MY_S */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap25bufIDs_WMF_TO_GF_DMW_MY_SE;

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE4initEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::OWMFECtrl, std::__1::allocator<NSCam::NSIoPipe::OWMFECtrl> >::__push_back_slow_path<NSCam::NSIoPipe::OWMFECtrl>(NSCam::NSIoPipe::OWMFECtrl&&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9OWMFECtrlENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode12onThreadLoopEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::uninit() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6uninitEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>*>&>::push_front(android::sp<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18TuningBufferHandleEEERNS_9allocatorIS8_EEE10push_frontERKS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::~BufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_18SharedBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::~JpegEncodeThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThreadD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::~N3DNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool::~SharedBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolD2Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::WorkThread */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread10WorkThreadE0_N7android6ThreadE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::connectData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler*, NSCam::NSCamFeature::NSFeaturePipe::ConnectionType) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11connectDataENS3_14DepthMapDataIDES6_RS4_PNS3_19DepthMapDataHandlerENS1_14ConnectionTypeE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::~P2ABayerNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNodeD1Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::GFNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeEjRS7_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::deque(unsigned int, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE5dequeEjRS7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13requestBufferENS1_19eDepthMapPipeNodeIDEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::requestBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13requestBufferENS1_19eDepthMapPipeNodeIDEi(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE0_NS1_17BaseBufferPoolMgrE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferPoolMgr-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFE0_NS1_17BaseBufferPoolMgrE;

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23queryDepthMapFlowOptionERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_11DataStorageINS1_15DepthBufferInfoEEEEERNS3_INS1_18DepthMapFlowOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::queryDepthMapFlowOption(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption> const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> > const&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23queryDepthMapFlowOptionERKN7android2spINS1_19DepthMapPipeSettingEEERKNS3_INS1_18DepthMapPipeOptionEEERKNS3_INS1_11DataStorageINS1_15DepthBufferInfoEEEEERNS3_INS1_18DepthMapFlowOptionEEE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_GraphicBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe28IIBuffer_GraphicBufferHandleE;

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_20FatImageBufferHandleEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC2ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::NodeBufferPoolMgr_VSDOF(std::__1::bitset<9ul>&, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOFC2ERNSt3__16bitsetILm9EEEN7android2spINS1_19DepthMapPipeSettingEEENS8_INS1_18DepthMapPipeOptionEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParam_frame6_9ERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame6_9(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParam_frame6_9ERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::create(char const*, NSCam::MSize const&, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool6createEPKcRKNS_5MSizeENS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode11executeAlgoEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::executeAlgo(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode11executeAlgoEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::~CamPipe() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSFeaturePipe2sbINS4_19GraphicBufferHandleEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::~DPENode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENodeD0Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15getPoolContentsEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getPoolContents() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE15getPoolContentsEv(void);

/* Symbol: _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_ */
/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest::IDepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestC1EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<timespec*, std::__1::allocator<timespec*> >::push_back(timespec*&&) */
int _ZNSt3__114__split_bufferIP8timespecNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14sSingletonLockE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::JpegEncodeThread::sSingletonLock */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe16JpegEncodeThread14sSingletonLockE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadStopEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7onFlushEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS3_13NSFeaturePipe7CamNodeINS4_19DepthMapDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIS5_SB_NS_4lessIS5_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry>, std::__1::__map_value_compare<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry>, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::HandlerEntry>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS3_13NSFeaturePipe7CamNodeINS4_19DepthMapDataHandlerEE12HandlerEntryEEENS_19__map_value_compareIS5_SB_NS_4lessIS5_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::~DepthMapFlowOption_BMVSDOF() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOFD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::FlushWrapper::~FlushWrapper() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE12FlushWrapperD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF16initGFBufferPoolEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::initGFBufferPool() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF16initGFBufferPoolEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_P2A_TO_FD_IMGE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_FD_IMG */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20bufIDs_P2A_TO_FD_IMGE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::~FatHeap() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7FatHeapD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::initConfig(unsigned int, unsigned int, NSCam::EImageFormat, unsigned int, NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::ColorSpace) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool10initConfigEjjNS_12EImageFormatEjNS1_19NativeBufferWrapper10ColorSpaceE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::onP2ProcessDone_Bayer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode*, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF21onP2ProcessDone_BayerEPNS1_12P2ABayerNodeEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode8onUninitEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onThreadLoop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode12onThreadLoopEv(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleEEENS_9allocatorIS7_EEE5clearEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18debugN3DParams_CapERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS3_22N3D_HAL_OUTPUT_CAPTUREE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::debugN3DParams_Cap(StereoHAL::N3D_HAL_PARAM_CAPTURE&, StereoHAL::N3D_HAL_OUTPUT_CAPTURE&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode18debugN3DParams_CapERN9StereoHAL21N3D_HAL_PARAM_CAPTUREERNS3_22N3D_HAL_OUTPUT_CAPTUREE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThread::~CamThread() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9CamThreadD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE10disconnectEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::disconnect() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE10disconnectEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEEE */
/* Demangled: vtable for android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > */
extern void* _ZTVN7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_20FatImageBufferHandleEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_11KeyedVectorIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS4_13NSFeaturePipe18FatImageBufferPoolEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::~OCCNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeD1Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::SequentialQueueBase::~SequentialQueueBase() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19SequentialQueueBaseD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5startEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::start() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE5startEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode7cleanUpEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_ */
/* Demangled: int NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitCondition<std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int>(std::__1::__bind<std::__1::__mem_fn<int (NSCam::NSCamFeature::NSFeaturePipe::WaitHub::*)(unsigned int*)>, NSCam::NSCamFeature::NSFeaturePipe::WaitHub*, std::__1::placeholders::__ph<1> const&>, unsigned int*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub13waitConditionINSt3__16__bindINS4_8__mem_fnIMS2_FiPjEEEJPS2_RKNS4_12placeholders4__phILi1EEEEEEjEEiT_PT0_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11setAutoFreeEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::setAutoFree(int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE11setAutoFreeEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSIoPipe::PQParam> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam8NSIoPipe7PQParamEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::queryReqAttrs(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::EffectRequestAttrs&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF13queryReqAttrsEN7android2spINS1_21DepthMapEffectRequestEEERNS1_18EffectRequestAttrsE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE4sizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::PriorityWaitQueue<android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthRequestIndexConverter>::size() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe17PriorityWaitQueueIN7android2spINS0_22NSFeaturePipe_DepthMap21DepthMapEffectRequestEEENS5_26DepthRequestIndexConverterEE4sizeEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::N3DNode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7N3DNode6onInitEv(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::IDepthMapEffectRequest */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22IDepthMapEffectRequestE;

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEEE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode> */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEEE;

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildQParam(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSIoPipe::QParams&) */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF11buildQParamEN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<double&>(double&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJRdEEEvDpOT_(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::~BufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEED0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::onStart() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE7onStartEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper15USAGE_HW_RENDERE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::USAGE_HW_RENDER */
extern void* _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper15USAGE_HW_RENDERE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4initEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::init() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE4initEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::~GFNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeD0Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CamThread::CamThreadHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe9CamThread15CamThreadHandleE;

/* Symbol: _ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::preAllocate(unsigned int) */
int _ZTv0_n48_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool11preAllocateEj(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_17ImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::~WaitHub() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHubD0Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestTBEiNS1_19eBufferPoolScenarioE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::requestTB(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF9requestTBEiNS1_19eBufferPoolScenarioE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::NSCamFeature::NSDualFeature::BufferIOType> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam12NSCamFeature13NSDualFeature12BufferIOTypeEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::~WMFNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeD0Ev(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil4sizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::size() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10StringUtil4sizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13onProcessDoneENS1_19eDepthMapPipeNodeIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::onProcessDone(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler13onProcessDoneENS1_19eDepthMapPipeNodeIDE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19setupPQParamSettingEP9DpPqParamj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::setupPQParamSetting(DpPqParam*, unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider19setupPQParamSettingEP9DpPqParamj(void);

/* Symbol: _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::~DepthMapFlowOption_VSDOF() */
int _ZThn16_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFD0Ev(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE20__emplace_hint_multiIJRKjEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEElEENS_21__tree_const_iteratorIjSD_lEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, long> std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__emplace_hint_multi<unsigned int const&>(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, long>, unsigned int const&) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE20__emplace_hint_multiIJRKjEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEElEENS_21__tree_const_iteratorIjSD_lEEDpOT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode23onHandleOnGoingReqReadyEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onHandleOnGoingReqReady(unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode23onHandleOnGoingReqReadyEj(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::StatusCB::~StatusCB() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe8StatusCBD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addModuleInfoEjjPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::addModuleInfo(unsigned int, unsigned int, void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller13addModuleInfoEjjPv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParamsTemplateEiNS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeOpState, int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider22prepareQParamsTemplateEiNS1_20eDepthMapPipeOpStateEiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDEiEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7cleanUpEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onUninit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTVN9StereoHAL18StereoDistanceUtil21DistanceCalculatorWMFE */
/* Demangled: vtable for StereoHAL::StereoDistanceUtil::DistanceCalculatorWMF */
extern void* _ZTVN9StereoHAL18StereoDistanceUtil21DistanceCalculatorWMFE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::getBuffer_SPTR() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapper14getBuffer_SPTREv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::getImageFormat() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE14getImageFormatEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe17GraphicBufferPoolEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::~DepthMapPipeNode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNodeD0Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onUninit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode8onUninitEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::Timer::Timer(timespec const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe5TimerC2ERK8timespec(void);

/* Symbol: _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13OCCBufferSize5debugEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::OCCBufferSize::debug() const */
int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13OCCBufferSize5debugEv(void);

/* Symbol: _ZNSt3__16__treeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, std::__1::less<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID>, std::__1::allocator<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID> >::destroy(std::__1::__tree_node<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, void*>*) */
int _ZNSt3__16__treeIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap14DepthMapDataIDENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEiNS3_14EPortCapbilityE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::addOutput(NSCam::NSIoPipe::PortID, int, NSCam::NSIoPipe::EPortCapbility) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEiNS3_14EPortCapbilityE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeEEEE12do_constructEPvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD0Ev(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE0_NS1_10BufferPoolINS1_18SharedBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE0_NS1_10BufferPoolINS1_18SharedBufferHandleEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE9push_backEOS8_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*> >::push_back(android::sp<NSCam::NSCamFeature::NSFeaturePipe::IIBuffer>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8IIBufferEEENS_9allocatorIS8_EEE9push_backEOS8_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF21getAllPoolImageBufferEiNS1_19eBufferPoolScenarioERNSt3__16vectorIPNS_12IImageBufferENS4_9allocatorIS7_EEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferPoolMgr_VSDOF::getAllPoolImageBuffer(int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, std::__1::vector<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23NodeBufferPoolMgr_VSDOF21getAllPoolImageBufferEiNS1_19eBufferPoolScenarioERNSt3__16vectorIPNS_12IImageBufferENS4_9allocatorIS7_EEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7cleanUpEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::cleanUp() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7cleanUpEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest::DepthMapEffectRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap21DepthMapEffectRequestC2EjPFvPvNS0_13NSDualFeature11ResultStateERN7android2spINS4_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::EffectFrameInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam15EffectFrameInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::waitAllQueueSync(unsigned int&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub16waitAllQueueSyncERj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13DPEBufferSize5debugEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::BaseBufferSizeMgr::DPEBufferSize::debug() const */
int _ZNK5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17BaseBufferSizeMgr13DPEBufferSize5debugEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler17configInOutBufferENS1_19eDepthMapPipeNodeIDEiS3_i */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferHandler::configInOutBuffer(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferHandler17configInOutBufferENS1_19eDepthMapPipeNodeIDEiS3_i(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode12onThreadStopEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode */
extern void* _ZTTN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeE;

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::onInit() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANode6onInitEv(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer_IImageBuffer::~IIBuffer_IImageBuffer() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe21IIBuffer_IImageBufferD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_20FatImageBufferHandleEEEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateGenerator::generate(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::perform3AIspTuning(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode18perform3AIspTuningERN7android2spINS1_21DepthMapEffectRequestEEERNS1_17Stereo3ATuningResE(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB>, std::__1::allocator<android::sp<NSCam::NSCamFeature::NSFeaturePipe::NotifyCB> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam12NSCamFeature13NSFeaturePipe8NotifyCBEEENS_9allocatorIS7_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
int _ZTv0_n32_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::~GraphicBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::createImageBuffer(android::sp<NSCam::IImageBufferHeap> const&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPool17createImageBufferERKN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_P2A_TO_N3D_NOFEFM_RECT1E */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::bufIDs_P2A_TO_N3D_NOFEFM_RECT1 */
extern void* _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap30bufIDs_P2A_TO_N3D_NOFEFM_RECT1E;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::DepthMapFlowOption_VSDOF(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeSetting>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeOption>, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DataStorage<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthBufferInfo> >) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOFC2EN7android2spINS1_19DepthMapPipeSettingEEENS4_INS1_18DepthMapPipeOptionEEENS4_INS1_11DataStorageINS1_15DepthBufferInfoEEEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21onQueuedDepthFlowDoneEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::onQueuedDepthFlowDone(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe21onQueuedDepthFlowDoneEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_ */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::DualFeatureRequest::DualFeatureRequest(unsigned int, void (*)(void*, NSCam::NSCamFeature::NSDualFeature::ResultState, android::sp<NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest>&), void*) */
int _ZN5NSCam12NSCamFeature13NSDualFeature18DualFeatureRequestC1EjPFvPvNS1_11ResultStateERN7android2spINS1_19IDualFeatureRequestEEEES3_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::~NodeSignal() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignalD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame2_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_frame2_capture(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::Stereo3ATuningRes const&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider26buildQParam_frame2_captureERN7android2spINS1_21DepthMapEffectRequestEEERKNS1_17Stereo3ATuningResERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::onThreadStart() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNode13onThreadStartEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::less<void>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN8nlohmann10basic_jsonINS_3mapENS_6vectorES7_blmdS5_NS8_14adl_serializerEEEEENS_19__map_value_compareIS7_SE_NS_4lessIvEELb1EEENS5_ISE_EEE5eraseENS_21__tree_const_iteratorISE_PNS_11__tree_nodeISE_PvEElEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe::RequestData> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12DepthMapPipe11RequestDataEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle::~GraphicBufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleD0Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr */
extern void* _ZTVN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgrE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEEE;

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DPENode::onInit() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7DPENode6onInitEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeE8_NS0_13NSFeaturePipe7CamNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE0_NS1_12BufferHandleINS1_18SharedBufferHandleEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>-in-NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE0_NS1_12BufferHandleINS1_18SharedBufferHandleEEE;

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7getNameEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle>::getName() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18TuningBufferHandleEE7getNameEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_BMVSDOF::buildPipeGraph(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe*, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> const&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap26DepthMapFlowOption_BMVSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNodeE8_NS0_13NSFeaturePipe13CamThreadNodeINS1_19DepthMapDataHandlerEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21popRequestImageBufferERKNS1_17NodeBufferSettingE */
/* Demangled: NSCam::NSCamFeature::NSDualFeature::IDualFeatureRequest::popRequestImageBuffer(NSCam::NSCamFeature::NSDualFeature::NodeBufferSetting const&) */
int _ZN5NSCam12NSCamFeature13NSDualFeature19IDualFeatureRequest21popRequestImageBufferERKNS1_17NodeBufferSettingE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17DepthMapPipeTimer11showSummaryEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeTimer::showSummary(unsigned int) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17DepthMapPipeTimer11showSummaryEj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15autoFree_lockedEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle>::autoFree_locked() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_18SharedBufferHandleEE15autoFree_lockedEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_19GraphicBufferHandleEEEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::onThreadLoop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode12onThreadLoopEv(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStop() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearSignalENS2_6SignalE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::clearSignal(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeSignal::Signal) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10NodeSignal11clearSignalENS2_6SignalE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam12NSCamFeature13NSFeaturePipe2sbINS3_19GraphicBufferHandleEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8Watchdog8onNotifyEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::Watchdog::onNotify() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE8Watchdog8onNotifyEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::BufferHandle<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferHandle() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe12BufferHandleINS1_20FatImageBufferHandleEED1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_19GraphicBufferHandleEE7recycleEPS3_(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferPool */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe16SharedBufferPoolE;

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::CountDownLatch */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe14CountDownLatchE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, android::KeyedVector<int, NSCam::NSCamFeature::NSFeaturePipe::sb<NSCam::NSCamFeature::NSFeaturePipe::TuningBufferHandle> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eDepthMapPipeNodeIDENS_11KeyedVectorIiNS3_13NSFeaturePipe2sbINS7_18TuningBufferHandleEEEEEEEEE;

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onThreadStop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::~BufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEED2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::releaseAll() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE10releaseAllEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::isAllQueueReadySync(unsigned int*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub19isAllQueueReadySyncEPj(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeGFBufferSize::NodeGFBufferSize(StereoHAL::ENUM_STEREO_SCENARIO) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr16NodeGFBufferSizeC1EN9StereoHAL20ENUM_STEREO_SCENARIOE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider36prepareQParamsTemplate_BAYER_CAPTUREEiRNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParamsTemplate_BAYER_CAPTURE(int, NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider36prepareQParamsTemplate_BAYER_CAPTUREEiRNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode19handleNeedFEFMFrameEN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ABayerNode::handleNeedFEFMFrame(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12P2ABayerNode19handleNeedFEFMFrameEN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IWaitQueue::Index::Index() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10IWaitQueue5IndexC2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::P2ANode::~P2ANode() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7P2ANodeD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle>::recycle(NSCam::NSCamFeature::NSFeaturePipe::ImageBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_17ImageBufferHandleEE7recycleEPS3_(void);

/* Symbol: _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<unsigned int, std::__1::allocator<unsigned int> >::__add_back_capacity() */
int _ZNSt3__15dequeIjNS_9allocatorIjEEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5flushEj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamGraph<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::flush(unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe8CamGraphINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE5flushEj(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::IIBuffer::getImgSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe8IIBuffer10getImgSizeEv(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::SharedBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe18SharedBufferHandleE;

/* Symbol: _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*>&>::push_back(unsigned int*&&) */
int _ZNSt3__114__split_bufferIPjRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::GFNode::onThreadStop() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap6GFNode12onThreadStopEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onData(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode6onDataENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::HW_OCCNode(char const*, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::PipeNodeConfigs) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNodeC1EPKcNS1_19eDepthMapPipeNodeIDENS1_15PipeNodeConfigsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeN3DBufferSize> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeN3DBufferSizeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNode7onFlushEv(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12getImageSizeEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::BufferPool<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle>::getImageSize() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe10BufferPoolINS1_20FatImageBufferHandleEE12getImageSizeEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle::~FatImageBufferHandle() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20FatImageBufferHandleD2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::StringUtil::~StringUtil() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10StringUtilD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::WaitHub::peakAnyQueue() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7WaitHub12peakAnyQueueEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, android::sp<NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS_2spINS3_13NSFeaturePipe18FatImageBufferPoolEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<nlohmann::detail::output_string_adapter<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN8nlohmann6detail21output_string_adapterIcNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS7_ISA_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer> > >::__emplace_back_slow_path<nlohmann::detail::value_t>(nlohmann::detail::value_t&&) */
int _ZNSt3__16vectorIN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISB_EEE24__emplace_back_slow_pathIJNS1_6detail7value_tEEEEvDpOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler::~DepthMapDataHandler() */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19DepthMapDataHandlerD2Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::ImageBufferPool::~ImageBufferPool() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe15ImageBufferPoolD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeDPEBufferSize> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeDPEBufferSizeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eBufferPoolScenario, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthBufferType> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap19eBufferPoolScenarioENS4_16eDepthBufferTypeEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode6onDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::onDump(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataID, android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode::DumpConfig*) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap16DepthMapPipeNode6onDumpENS1_14DepthMapDataIDERN7android2spINS1_21DepthMapEffectRequestEEEPNS2_10DumpConfigE(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::StereoFDNode::~StereoFDNode() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap12StereoFDNodeD0Ev(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE88_NS1_8NotifyCBE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe::NotifyCB-in-NSCam::NSCamFeature::NSFeaturePipe::CamThreadNode<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler>::SyncCounterCB */
extern void* _ZTCN5NSCam12NSCamFeature13NSFeaturePipe13CamThreadNodeINS0_22NSFeaturePipe_DepthMap19DepthMapDataHandlerEE13SyncCounterCBE88_NS1_8NotifyCBE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool9doReleaseEPNS1_20FatImageBufferHandleE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::doRelease(NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferHandle*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPool9doReleaseEPNS1_20FatImageBufferHandleE(void);

/* Symbol: _ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap7isValidEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatHeap::isValid() const */
int _ZNK5NSCam12NSCamFeature13NSFeaturePipe7FatHeap7isValidEv(void);

/* Symbol: _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE0_NS1_19DepthMapDataHandlerE */
/* Demangled: construction vtable for NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapDataHandler-in-NSCam::NSCamFeature::NSFeaturePipe_DepthMap::OCCNode */
extern void* _ZTCN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7OCCNodeE0_NS1_19DepthMapDataHandlerE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::toPixelFormat(NSCam::EImageFormat) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool13toPixelFormatENS_12EImageFormatE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeWMFBufferSize> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeWMFBufferSizeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setRootNodeEPS4_ */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::CamPipe<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode>::setRootNode(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe7CamPipeINS0_22NSFeaturePipe_DepthMap16DepthMapPipeNodeEE11setRootNodeEPS4_(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapFlowOption_VSDOF::buildPipeGraph(NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipe*, android::KeyedVector<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::eDepthMapPipeNodeID, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapPipeNode*> const&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap24DepthMapFlowOption_VSDOF14buildPipeGraphEPNS1_12DepthMapPipeERKN7android11KeyedVectorINS1_19eDepthMapPipeNodeIDEPNS1_16DepthMapPipeNodeEEE(void);

/* Symbol: _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::WMFNode::onFlush() */
int _ZThn8_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap7WMFNode7onFlushEv(void);

/* Symbol: _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_ */
/* Demangled: void std::__1::vector<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*, std::__1::allocator<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*> >::__push_back_slow_path<nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*>(nlohmann::basic_json<std::__1::map, std::__1::vector, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool, long, unsigned long, double, std::__1::allocator, nlohmann::adl_serializer>*&&) */
int _ZNSt3__16vectorIPN8nlohmann10basic_jsonINS_3mapES0_NS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEblmdS7_NS1_14adl_serializerEEENS7_ISC_EEE21__push_back_slow_pathISC_EEvOT_(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::FatImageBufferPool::~FatImageBufferPool() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe18FatImageBufferPoolD1Ev(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferHandle */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe19GraphicBufferHandleE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::NativeBufferWrapper::~NativeBufferWrapper() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe19NativeBufferWrapperD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::TimeoutCB::getTimeoutNs() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe9TimeoutCB12getTimeoutNsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<StereoHAL::ENUM_STEREO_SCENARIO, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::NodeBufferSizeMgr::NodeP2ABufferSize> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN9StereoHAL20ENUM_STEREO_SCENARIOEN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap17NodeBufferSizeMgr17NodeP2ABufferSizeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame5ERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::prepareQParam_frame5(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider20prepareQParam_frame5ERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthQTemplateProvider::buildQParam_Bayer_NORMAL_NOFEFM_frame1(android::sp<NSCam::NSCamFeature::NSFeaturePipe_DepthMap::DepthMapEffectRequest>&, NSCam::NSCamFeature::NSFeaturePipe_DepthMap::QParamTemplateFiller&) */
int _ZN5NSCam12NSCamFeature22NSFeaturePipe_DepthMap22DepthQTemplateProvider38buildQParam_Bayer_NORMAL_NOFEFM_frame1ERN7android2spINS1_21DepthMapEffectRequestEEERNS1_20QParamTemplateFillerE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, _SRZ_SIZE_INFO_> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIj15_SRZ_SIZE_INFO_EEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv */
/* Demangled: non-virtual thunk to NSCam::NSCamFeature::NSFeaturePipe_DepthMap::HW_OCCNode::onThreadLoop() */
int _ZThn280_N5NSCam12NSCamFeature22NSFeaturePipe_DepthMap10HW_OCCNode12onThreadLoopEv(void);

/* Symbol: _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::GraphicBufferPool::getImageFormat() const */
int _ZTv0_n104_NK5NSCam12NSCamFeature13NSFeaturePipe17GraphicBufferPool14getImageFormatEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_DEPTHMAP_H */
